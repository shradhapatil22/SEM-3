public class finally_ {
    public static int greet(){
        int c;
        try {
            int a=5;
            int b=0;
            c=a/b;
            return c;
        }
        catch (Exception e){
            System.out.println(e);
        }
        finally {
            System.out.println("End of program");
        }
        return 0;
    }
    public static void main(String[] args) {
        greet();
        int a=7;
        int b=9;
        while(true){
            try {
                System.out.println(a/b);
            }
            catch (Exception e){
                System.out.println(e);
                break;
            }
            finally {
                System.out.println("Finally");
            }
            b--;
        }
    }
}
