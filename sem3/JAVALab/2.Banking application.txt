package com.shashwat;

import java.util.Scanner;
import java.util.UUID;

class Bank {
    static String Name;
    static String PAN_CardNo;
    static String Account_Number;
    static double Initial_Balance;
    static double deposit;
    static double withdraw;
    static double Balance;
    static double Interest;


    static void createAccount() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your name: ");
        Name = sc.nextLine();
        System.out.println("Enter you PAN Card Number: ");
        PAN_CardNo = sc.nextLine();
        System.out.println("Your account has been created.");
        Initial_Balance = 0.00;
        Account_Number = ("SBI" + UUID.randomUUID());
        System.out.println("Your Account Number is: " + Account_Number);
        System.out.println("Initial Balance is: Rs." + Initial_Balance);

    }

    static void deposit() {
        Scanner scan1 = new Scanner(System.in);
        System.out.println("Enter the amount to be deposited: ");
        deposit = scan1.nextDouble();
        System.out.println("Rs." + deposit + " has been credited to your account");
    }

    static void withdraw() {
            Scanner scan2 = new Scanner(System.in);
            System.out.println("Enter the amount to be withdrawn: ");
            withdraw = scan2.nextDouble();
         if(withdraw<= Balance){
            System.out.println("Rs." + withdraw + " has been debited from your account");
             System.out.println("Balance: "+Balance);}
         else {
            System.out.println("Not Enough Balance in your Account");
        }
    }

    static void computeInterest() {
        System.out.println("The interest at 6% per year is: ");
        Interest = Balance * 0.06;
    }

    static void displayBalance() {
        System.out.println("Your Balance is: " + Balance);
    }
}

public class Application extends Bank {

    public static void main(String[] args) {

        int i;
        Scanner scan = new Scanner(System.in);
        do {
            System.out.println("##################################################################");
            System.out.println("Enter your choice:");
            System.out.println("1.Create Account" + "\n" + "2.Deposit" + "\n" + "3.Withdraw" + "\n" +
                    "4.Compute Interest" + "\n" + "5.Display Balance" + "\n" + "6.Exit");
            i = scan.nextInt();

            switch (i) {
                case 1:
                    createAccount();
                {
                    Balance = Initial_Balance;
                    System.out.println("Balance: " + Balance);
                }
                break;

                case 2:
                    deposit();
                {
                    Balance = Balance + deposit;
                    System.out.println("Balance: " + Balance);
                }
                break;

                case 3:
                    withdraw();
                    Balance = Balance - withdraw;

                    break;

                case 4:
                    computeInterest();
                {
                    System.out.println("Interest: " + Interest);
                    System.out.println("Balance: " + Balance);
                }
                break;

                case 5:
                    displayBalance();
                    break;

                case 6:
                    break;
                default:
            }
        } while (i != 6);

    }
}
