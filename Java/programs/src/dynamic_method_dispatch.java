class class1{
    public void greet1(){
        System.out.println("Greet1");
    }
    public void name(){
        System.out.println("name in class 1");
    }
}

class class2 extends class1{
    public void greet2(){
        System.out.println("Greet2");
    }
    public void name(){
        System.out.println("name in class 2");
}

public static class dynamic_method_dispatch {
    public static void main(String[] args) {
        class1 obj=new class1();
        obj.name();
        class1 obj2=new class2();
        obj2.name();
        obj2.greet1();
    }
}}


