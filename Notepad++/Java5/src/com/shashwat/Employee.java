package com.shashwat;
import java.util.Scanner;
class EmployeeDetails {
    int salary, yoj;
    String name, address;
}
    public class Employee extends EmployeeDetails{
        public static void main(String[] args) {
            Scanner scan = new Scanner(System.in);
            EmployeeDetails emp1 = new EmployeeDetails();
            System.out.println("Enter Details of 1st Employee: ");
            System.out.println("Name: ");
            emp1.name = scan.nextLine();
            System.out.println("Address: ");
            emp1.address = scan.nextLine();
            System.out.println("Salary: ");
            emp1.salary = scan.nextInt();
            System.out.println("Year of Joining : ");
            emp1.yoj = scan.nextInt();

            EmployeeDetails emp2 = new EmployeeDetails();
            System.out.println("Enter Details of 2nd Employee: ");
            System.out.println("Name: ");
            emp2.name = scan.nextLine();
            emp2.name = scan.nextLine();
            System.out.println("Address: ");
            emp2.address = scan.nextLine();
            System.out.println("Salary: ");
            emp2.salary = scan.nextInt();
            System.out.println("Year of Joining : ");
            emp2.yoj = scan.nextInt();

            EmployeeDetails emp3 = new EmployeeDetails();
            System.out.println("Enter Details of 3rd Employee: ");
            System.out.println("Name: ");
            emp3.name = scan.nextLine();
            emp3.name = scan.nextLine();
            System.out.println("Address: ");
            emp3.address = scan.nextLine();
            System.out.println("Salary: ");
            emp3.salary = scan.nextInt();
            System.out.println("Year of Joining : ");
            emp3.yoj = scan.nextInt();

            System.out.println("1st Employee Details");
            System.out.println("Name: "+emp1.name);
            System.out.println("Address: "+emp1.address);
            System.out.println("Salary: "+emp1.salary);
            System.out.println("Year of Joining: "+emp1.yoj);

            System.out.println("2nd Employee Details");
            System.out.println("Name: "+emp2.name);
            System.out.println("Address: "+emp2.address);
            System.out.println("Salary: "+emp2.salary);
            System.out.println("Year of Joining: "+emp2.yoj);

            System.out.println("3rd Employee Details");
            System.out.println("Name: "+emp3.name);
            System.out.println("Address: "+emp3.address);
            System.out.println("Salary: "+emp3.salary);
            System.out.println("Year of Joining: "+emp3.yoj);
        }

    }

