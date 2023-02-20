import java.util.Scanner;

public class password{
static void check(String password) throws InvalidPasswordException{
int i=0,j=0;
String temp1,temp2;
boolean result1=false, result2=false;
String digit[]={"0","1","2","3","4","5","6","7","8","9"};
String
special[]={"`","~","!","@","#","$","%","^","&","*","(",")","-","_","=","+","[","]",
"{","}","|",";",":","'","\"",",","<",".",">","/","?"};
if(password.length()<8) {
throw new InvalidPasswordException("Please enter 8 digit Password");
}
for (i = 0; i < digit.length; i++) {
temp1 = digit[i];
if (password.contains(temp1)) {
result1 = true;
break;
}
else {
result1 = false;
}
}
for(j=0;j< special.length;j++){
temp2 =special[j];
if(password.contains(temp2)){
result2=true;
break;
}
else{
result2=false;
}
}
if(result1==true&&result2==true){
System.out.println("Login Successful!");
}
else{
throw new InvalidPasswordException("Please enter password containing one digit and one Special Symbol");
}
}
public static void main(String[] args) {
String loginId, password;
Scanner scan= new Scanner(System.in);
System.out.println("Enter your Login ID: ");
loginId = scan.nextLine();
System.out.println("Enter your Password: ");
password =scan.nextLine();
try {
check(password);
}
catch (InvalidPasswordException ex)
{
System.out.println(ex);
}
}
}