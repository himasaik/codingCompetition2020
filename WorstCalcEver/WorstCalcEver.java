import java.util.Scanner;
import java.lang.Math;
public class main {
        public static void main(String []args){
            Scanner sc = new Scanner(System.in);
            String op = sc.next(); //user input for operator
            int num1 = sc.nextInt(); //user input for number 1
            int num2 = sc.nextInt(); //user input for number
            if(op.equals("+")){ //if user wants to add
                if(num1 > 1000000 || num1 < -1000000){ //checking constraints
                    System.out.println("Invalid");
                }else if(num1 > 1000000 || num1 < -1000000){
                    System.out.println("Invalid");
                }
                System.out.println(num1 + num2);
            }
            else if (op.equals("-")){
                if(num1 > 1000000 || num1 < -1000000){
                    System.out.println("Invalid");
                }else if(num1 > 1000000 || num1 < -1000000){
                    System.out.println("Invalid");
                }
                System.out.println(num1 - num2);
            }
            else if(op.equals("/")){
                if(num1 > 1000000 || num1 < -1000000){
                    System.out.println("Invalid");
                }else if(num1 > 1000000 || num1 < -1000000){
                    System.out.println("Invalid");
                }
                double dNum1= (double) num1;
                double dNum2= (double) num2;
                System.out.println(Math.ceil(dNum1 / dNum2));
            }
            else if(op.equals("*")){
                if(num1 > 1000000 || num1 < -1000000){
                    System.out.println("Invalid");
                }else if(num1 > 1000000 || num1 < -1000000){
                    System.out.println("Invalid");
                }
                System.out.println(num1 * num2);
            }
            else{
                System.out.println("Invalid");
            }
        }
}
