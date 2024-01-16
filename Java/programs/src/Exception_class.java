import java.util.Scanner;

class MyException extends Exception{
    public String toString(){
        return "To String";
    }
    public String getMessage(){
        return "Get Message";
    }
}
public class Exception_class {
    public static void main(String[] args) {
        int a=8;
        Scanner in=new Scanner(System.in);
        a=in.nextInt();
        if (a<9){
            try {
                throw new MyException();
            }
            catch (Exception e){
                System.out.println(e.getMessage());
                System.out.println(e.toString());
                e.printStackTrace();
                System.out.println("End of program");
            }

        }
    }
}


