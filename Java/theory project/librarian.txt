import java.util.Arrays;
class librarian extends book
{
    book b[]= new book[100];
    book updated_books[]= new book[100];
    updated_books[]=Arrays.copyOf(b, 101);

    
    void addBook(String bookname, String Publisher, String ID, String Author)
    {
        b[b.length+1].name=bookname;
        b[b.length+1].publisher=Publisher;
        b[b.length+1].id=ID;
        b[b.length+1].author=Author;
    }


    void displaybooks()
    {
        System.out.println("The available books are");
        for(int i=0; i<b.length+1;i++)
        {
            System.out.println(b[i].name);
        }
    }


    void RemoveBook(String bookname)
    {

    }

    boolean issueBook(String bookname)
    {
        boolean flag=false;
        for(int i=0; i<b.length+1;i++)
        {
            if(b[i].name==bookname)
            {
                flag=true;
            }
            // updated book array should contain all books other than issued books 
        }
        return flag;
    }
    // if flag is true print book issued

    
}