class base
{
    int x;
    public void print(){
        System.out.println("In base class ");
    }
}

class derived extends base
{
    int y;
    public void print(){
        System.out.println("In derived class ");
    }
}

public class inheritance
{
    public static void main(String[] args) {
        base b=new base();
        b.print();
        derived d=new derived();
        d.print();
        base b2=new derived();
        b2.print();
    }
}
