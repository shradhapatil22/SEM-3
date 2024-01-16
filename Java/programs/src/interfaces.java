interface bicycle{
    int number = 45;
    void applyBreak(int decrement);
    void speedUp(int increment);
}

interface blowhorn{
    int horn=90;
    void blowHorn();
}
class Acycle implements bicycle,blowhorn{
    public int number=47;
    // interfaces methods are public
    public void applyBreak(int decrement){
        System.out.println("Applying breaks");
    }
    public void speedUp(int increment){
        System.out.println("Speeding up");
    }
    public void blowHorn(){
        System.out.println("Blowing horn");
    }

}
public class interfaces {
    public static void main(String[] args) {
        Acycle scycle=new Acycle();
        bicycle b=new Acycle();
        scycle.blowHorn();
        System.out.println(scycle.horn);
        scycle.applyBreak(1);
        // properties can be created in interfaces
        System.out.println(scycle.number);
        // interface properties cannot be edited as they ar final
        //scycle.number=34;
        //System.out.println(number);

        //reference of class assigned to object of interface
        b.applyBreak(1);
        System.out.println(b.number);

    }
}
