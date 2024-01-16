public class account
{
    // account class attributes
    private
        int no_borrowed_books;
        int no_returned_books;
        int no_lost_books;
        int no_of_days;
        float fine_amount;


    void Calculate_fine()
    {
        // fine amt=50 for lost books fine amt=20 for a period over 20 days
        if(no_lost_books!=0 && no_of_days>20)
            fine_amount=(50*no_lost_books+20*no_lost_books);
        else if(no_lost_books!=0)
            fine_amount=50*no_lost_books;
        else if(no_of_days>20)
            fine_amount=20*no_lost_books;

    }
}
