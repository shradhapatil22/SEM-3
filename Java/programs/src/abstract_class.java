abstract class a{
    a(){
        System.out.println("Constructor of  class a");
    }
    public void hello(){
        System.out.println("Hello");
    }
    abstract public void greet();
}
class b extends a{
    public void hello(){
        System.out.println("Hello in b");
    }
    public void greet(){
        System.out.println("Hello in b");
    }
}



public class abstract_class {
    public static void main(String[] args) {
        a A=new b();
        A.hello();
        A.greet();

    }
}
