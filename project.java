import java.util.ArrayList;
import java.util.Scanner;
import java.io.FileWriter;
import java.io.IOException;

// Main Class
public class ElectricityBillSystem {

    static ArrayList<Bill> bills = new ArrayList<>();

    // Consumer class
    static class Consumer {
        private String id;
        private String name;
        private int unitsConsumed;

        public Consumer(String id, String name, int units) {
            this.id = id;
            this.name = name;
            this.unitsConsumed = units;
        }

        public String getId() { return id; }
        public String getName() { return name; }
        public int getUnitsConsumed() { return unitsConsumed; }
    }

    // Bill class
    static class Bill {
        private Consumer consumer;
        private double totalAmount;

        public Bill(Consumer consumer) {
            this.consumer = consumer;
            this.totalAmount = calculateBill(consumer.getUnitsConsumed());
        }

        private double calculateBill(int units) {
            double amount = 0;

            if (units <= 100) {
                amount = units * 1.5;
            } else if (units <= 300) {
                amount = (100 * 1.5) + (units - 100) * 2.5;
            } else if (units <= 500) {
                amount = (100 * 1.5) + (200 * 2.5) + (units - 300) * 4.0;
            } else {
                amount = (100 * 1.5) + (200 * 2.5) + (200 * 4.0) + (units - 500) * 6.0;
            }

            return amount + 50; // Fixed meter charge
        }

        public void printBill() {
            System.out.println("\n----- Electricity Bill -----");
            System.out.println("Consumer ID   : " + consumer.getId());
            System.out.println("Consumer Name : " + consumer.getName());
            System.out.println("Units Consumed: " + consumer.getUnitsConsumed());
            System.out.println("Total Amount  : Rs. " + String.format("%.2f", totalAmount));
            System.out.println("----------------------------");
        }

        public String toFileString() {
            return consumer.getId() + "," + consumer.getName() + "," +
                   consumer.getUnitsConsumed() + "," + String.format("%.2f", totalAmount);
        }
    }

    // Thread class for calculating a bill
    static class BillCalculatorThread implements Runnable {
        private Consumer consumer;

        public BillCalculatorThread(Consumer consumer) {
            this.consumer = consumer;
        }

        @Override
        public void run() {
            Bill b = new Bill(consumer);
            synchronized (bills) {
                bills.add(b);
            }
            b.printBill();
        }
    }

    // Main method
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int choice;

        do {
            System.out.println("\n==== Electricity Billing System (with Threads) ====");
            System.out.println("1. Add New Bill (Threaded)");
            System.out.println("2. View All Bills");
            System.out.println("3. Save Bills to File");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            sc.nextLine(); // consume newline

            switch (choice) {
                case 1:
                    System.out.print("Enter Consumer ID: ");
                    String id = sc.nextLine();

                    System.out.print("Enter Consumer Name: ");
                    String name = sc.nextLine();

                    System.out.print("Enter Units Consumed: ");
                    int units = sc.nextInt();
                    sc.nextLine();

                    Consumer c = new Consumer(id, name, units);

                    // Start bill calculation in a separate thread
                    Thread t = new Thread(new BillCalculatorThread(c));
                    t.start();

                    // Optional: Wait for thread to finish (join) if you want synchronous behavior
                    try {
                        t.join();
                    } catch (InterruptedException e) {
                        System.out.println("Thread interrupted: " + e.getMessage());
                    }

                    break;

                case 2:
                    if (bills.isEmpty()) {
                        System.out.println("No bills available.");
                    } else {
                        for (Bill bill : bills) {
                            bill.printBill();
                        }
                    }
                    break;

                case 3:
                    try (FileWriter fw = new FileWriter("bills.txt", true)) {
                        for (Bill bill : bills) {
                            fw.write(bill.toFileString() + "\n");
                        }
                        System.out.println("Bills saved to bills.txt");
                    } catch (IOException e) {
                        System.out.println("Error saving file: " + e.getMessage());
                    }
                    break;

                case 4:
                    System.out.println("Exiting... Thank you!");
                    break;

                default:
                    System.out.println("Invalid choice. Try again.");
            }

        } while (choice != 4);

        sc.close();
    }
}
