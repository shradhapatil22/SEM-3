import java.util.Scanner;

public class nested_try_catch {
    public static void main(String[] args) {
        int [] marks=new int[3];
        marks[0]=56;
        marks[1]=66;
        marks[2]=76;
        Scanner in=new Scanner(System.in);
        boolean flag=true;
        while (flag){
            System.out.println("Enter the array index");
            int ind=in.nextInt();
            try {
                System.out.println("nested try catch");
                try {
                    System.out.println(marks[ind]);
                    flag=false;
                }
                catch (ArrayIndexOutOfBoundsException e){
                    System.out.println("ArrayIndexOutOfBoundsException occured!");
                    System.out.println("Exception in level 2");
                }
            }
            catch (Exception e){
                System.out.println("Exception in level 1");
            }
        }
        System.out.println("End of program");

    }
}
