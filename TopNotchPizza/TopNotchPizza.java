
import java.util.Scanner;

class Order{
    int top1;
    int top2;
    int top3;

    Order(int a, int b, int c){
        this.top1 = a;
        this.top2 = b;
        this.top3 = c;
    }
}


public class main {
    public static void main(String args[]) {

        int count = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("How many orders are you placing?");
        int numOrders = sc.nextInt();
        if(numOrders >= 3){
            System.out.println("Wow thats alot of Pizza. Are you hungry or are you just bored?");
        }
        Order[] OrderArr = new Order[numOrders];
        System.out.println("Due to time constraints, we have limited the functionality to each Order having strictly 3 toppings");
        System.out.println("Create your order here by specifying how many units of each topping your order will need");
        for(int i = 0; i < numOrders; i++){
            System.out.println("Input the # of units and press enter");
            OrderArr[i] = new Order(sc.nextInt(), sc.nextInt(), sc.nextInt());
            System.out.println("Order # "+(i+1)+" created!");
        }

        System.out.println("Quantity of Topping 1");
        int top1 = sc.nextInt();
        System.out.println("Quantity of Topping 2");
        int top2 = sc.nextInt();
        System.out.println("Quantity of Topping 3");
        int top3 = sc.nextInt();



        for(int i = 0; i < OrderArr.length; i++){

            if(OrderArr[i].top1 <= top1){
                top1 -= OrderArr[i].top1;
                OrderArr[i].top1 = 0;

            if (OrderArr[i].top2 <= top2) {
                top2 -= OrderArr[i].top2;
                OrderArr[i].top2 = 0;

                if (OrderArr[i].top3 <= top3) {
                    top3 -= OrderArr[i].top3;
                    OrderArr[i].top3 = 0;
                    System.out.println("Order # " + (i+1)+ "done");
                    count++;

                    System.out.println("Topping status");
                    System.out.println("Topping 1= "+top1);
                    System.out.println("Topping 2= "+top2);
                    System.out.println("Topping 3= "+top3);
                }
                else {
                    System.out.println("not enough topping 3 for Order # "+ i+1);
                    System.out.println("Max orders: "+i);
                }

            }
            else {
                System.out.println("not enough topping 3 for Order # "+ i+1);
                System.out.println("Max orders: "+i);
            }
        }
        else{
            System.out.println("not enough topping 1 for Order # "+ (i+1));
                System.out.println("Max orders: "+i);
        }
        }


    }

}
