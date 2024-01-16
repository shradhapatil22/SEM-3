package trial;
import java.util.Scanner;
class account {
    Scanner in =new Scanner(System.in);
    private
        String name;
        String ID;
        int no_borrowed_books;
        int no_returned_books;
        int no_lost_books;
        float fine_amount;
    account()
    {
        System.out.println("Enter  Name");
        name=in.nextLine();
        System.out.println("Enter ID");
        ID=in.nextLine();
        System.out.println("Enter the no of borrowed books ");// assuming it's a new user
        no_borrowed_books=in.nextInt();
        System.out.println("Enter the number of returned books ");
        int no_returned_books=in.nextInt();;
        System.out.println("Enter the number of lost books ");
        no_lost_books=in.nextInt();
    }
}


class staff extends user
{
    // staff class attributes
    private
    String department;

}
