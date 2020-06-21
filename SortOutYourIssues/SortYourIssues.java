import java.util.Scanner;
import java.lang.String;


public class main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String[] inputArr = new String[100];

        for(int i = 0; i < 100; i++){
            System.out.println("Input 'Done' after entering the last string");
            String s = sc.next();
            if(s.equals("Done")){
                i = 99;
            }else{
                inputArr[i] = s;
            }
        }

        String[] noSpaces = new String[100];
        for(int i = 0; i < 100; i++){
            noSpaces[i] = inputArr[i];
        }

        for(int i = 0; i < 99; i++){
            for(int  j = i + 1; j < 100; j++){
                if(noSpaces[i].compareTo(noSpaces[j]) > 0){
                    String temp = noSpaces[i];
                    noSpaces[i] = noSpaces[j];
                    noSpaces[j] = temp;
                }
            }

        }

      for(int i = 0; i < 4; i++){
          System.out.println(noSpaces[i]);
      }



    }
}
