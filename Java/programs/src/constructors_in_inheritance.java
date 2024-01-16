class base1
{
   protected int x;
   base1(){
       System.out.println(" base class Constructor ");
   }
    base1(int x){
        System.out.println(" overloaded base class Constructor x= "+x);
    }
}

class derived1 extends base1{
    protected int y;
    derived1(){

        super(4);
        System.out.println(" derived class Constructor ");
    }
    derived1(int x,int y){
        super(x);
        System.out.println(" overloaded derived class Constructor  y ="+y);
    }
}
public class constructors_in_inheritance
{
    public static void main(String[] args) {
        //base1 b=new base1();
        derived1 d=new derived1();

    }
}
// the constructor of the base class will be executed first