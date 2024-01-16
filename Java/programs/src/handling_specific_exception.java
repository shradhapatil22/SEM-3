import java.util.Scanner;
public class handling_specific_exception {
    public static void main(String[] args) {
        int [] marks=new int[3];
        marks[0]=56;
        marks[1]=66;
        marks[2]=76;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter the array index");
        int ind=in.nextInt();

        System.out.println("Enter the number you want to divide with");
        int number=in.nextInt();

        try {
            System.out.println("The value at array index is: "+marks[ind]);
            System.out.println("The va;ue of marks/number is: "+ marks[ind]/number);
        }

        catch (ArithmeticException e){
            System.out.println("ArithmeticException  occured!");
        }

        catch (ArrayIndexOutOfBoundsException e){
            System.out.println("ArrayIndexOutOfBoundsException occured!");
        }

        catch (Exception e){
            System.out.println("Some other Exception occured!");
        }
    }
}
