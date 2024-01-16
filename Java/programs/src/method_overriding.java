class A{
    public int a;
    public int s(){
        return 4;
    }
    public void method2(){
        System.out.println("Method 2 of class A");
    }

}

class B extends A{
    public void method2(){
        System.out.println("Method 2 of class B");
    }
    public void method3(){
        System.out.println("method 3 of class B");
    }
}

public class method_overriding {
    public static void main(String[] args) {
        A a=new A();
        a.method2();
        B b=new B();
        b.method2();
        A a1=new B();
        //a.methhod3();
    }
}
