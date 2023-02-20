package com.shashwat;
import java.lang.*;
import java.util.Scanner;


class UniversityStudent{
        String Name;
        int Age;
        String Programme;
        String temp;

        UniversityStudent(String N, String P, int A){
        Name = N;
        Age = A;
        Programme = P;
        }

        UniversityStudent(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter Student's Name:");
        Name = scan.nextLine();
        System.out.println("Enter Student's Programme:");
        Programme = scan.nextLine();
        System.out.println("Enter Student's Age:");
        Age = scan.nextInt();
        temp = scan.nextLine();


        }

        void DisplayInfo(){
        System.out.println("Name: "+Name);
        System.out.println("Age: " +Age);
        System.out.println("Programme: "+Programme);
        }

}


class GradStu extends UniversityStudent{
        float Marks;
        String Stream;

        GradStu(float M, String S){
        super();
        Marks = M;
        Stream= S;
        }

        GradStu(){
                super();
                Scanner scan1 = new Scanner(System.in);
                System.out.println("Enter Student's Stream:");
                Stream = scan1.nextLine();
                System.out.println("Enter Student's Marks(in %):");
                Marks = scan1.nextFloat();

        }

        void DisplayInfo() {
        super.DisplayInfo();
        System.out.println("Marks: " + Marks);
        System.out.println("Stream: "+ Stream);
        }
}


class ResearchStu extends UniversityStudent{
        int ExpYears;
        String Specialization;

        ResearchStu(){
        super();
        Scanner scan2 = new Scanner(System.in);
        System.out.println("Enter Student's specialization:");
        Specialization = scan2.nextLine();
        System.out.println("Enter Student's Experience (In years):");
        ExpYears = scan2.nextInt();
        }

        ResearchStu(int E , String S){
        super();
        ExpYears = E;
        Specialization= S;
        }


        void DisplayInfo() {
        super.DisplayInfo();
        System.out.println("Specialization: " + Specialization);
        System.out.println("Experience (In years): "+ ExpYears);
        }
}



public class Test2{
    public static void main(String[] args) {
        GradStu a = new GradStu();
        ResearchStu b = new ResearchStu();
        System.out.println("Student 1 Details: ");
        a.DisplayInfo();
        System.out.println();
        System.out.println("Student 2 Details: ");
        b.DisplayInfo();
    }
}
