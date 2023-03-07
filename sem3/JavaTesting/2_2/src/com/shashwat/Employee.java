package com.shashwat;

class EmployeeDetails {
    int salary, yoj;
    String name, address;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public int getSalary() {
        return salary;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }

    public int getYOJ() {
        return yoj;
    }

    public void setYOJ(int yoj) {
        this.yoj = yoj;
    }
}

public class Employee extends EmployeeDetails{
        public static void main(String[] args) {
            EmployeeDetails emp1 = new EmployeeDetails();
            emp1.setName("Shashwat Tripathi");
            emp1.setSalary(75000);
            emp1.setYOJ(2020);
            emp1.setAddress("Mumbai");

            EmployeeDetails emp2 = new EmployeeDetails();
            emp2.setName("Piyush Tilokani");
            emp2.setSalary(70000);
            emp2.setYOJ(2019);
            emp2.setAddress("Gurgaon");

            EmployeeDetails emp3 = new EmployeeDetails();
            emp3.setName("Gaurang Raorane");
            emp3.setSalary(65000);
            emp3.setYOJ(2022);
            emp3.setAddress("Bangalore");

            System.out.println(emp1);
            System.out.println(emp2);
            System.out.println(emp3);
        }

    }

