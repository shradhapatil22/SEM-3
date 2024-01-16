interface baseInterface{
    void meth1();
    void meth2();
}

interface childInterface extends baseInterface{
    void meth3();
    void meth4();
}

class sample implements childInterface{
    @Override
    public void meth1() {
        System.out.println("method 1");
    }

    @Override
    public void meth2() {
        System.out.println("method 2");
    }

    @Override
    public void meth3() {
        System.out.println("method 3");
    }

    @Override
    public void meth4() {
        System.out.println("method 4");
    }
}
public class inheritance_in_interfaces {
    public static void main(String[] args) {
        baseInterface bi=new sample();
        bi.meth1();
        bi.meth2();
    }
}
