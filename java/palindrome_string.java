import java.util.*;

public class palindrome_string {
    public static void main(String[] args) {
        System.out.println("Programme to print whether a given string is palindrom or not!!");
        System.out.println("enter a integer string : ");
        
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int  originalstring = x;
        int reversed = 0;

        while (x != 0){
            int builddigit = x % 10;
            reversed = reversed * 10 + builddigit;
            x = x / 10; 

        }
        if ( reversed == originalstring ){
            System.out.println("yes the giving string is palindrome . . .");
        }
        else {
            System.out.println("no the given string is not palindrome . . .");
        }

        sc.close();

    }
}
