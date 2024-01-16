import java.util.Scanner;
public class errors {
    public static void main(String[] args) {
        int a=5;
        //System.out.println(a+b); Syntax error

        // Logical error demo
        // program to print prime nos btw 1 to 10
        for (int i=1;i<5;i++)
        {
            System.out.println(2*i+1);
        }
        // prints composite numbers also due to the error in logic on line 10

        //Runtime error demo
        int k;
        Scanner in =new Scanner(System.in);
        k=in.nextInt();
        System.out.println("Integer part of 1000/k is "+1000/k);
        // when 0 is entered the compiler throws an exception
    }
}
