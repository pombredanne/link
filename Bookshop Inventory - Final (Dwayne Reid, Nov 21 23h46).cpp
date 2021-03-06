//(c) Dwayne Reid && Carey Riley

#include <iostream>	/*Header Files*/
#include <string>	/*Header Files*/
#include <iomanip>	/*Header Files*/
using namespace std;

/*------------------------------------------------------------------*/

// Prints stock shortage to screen
namespace {  // unnamed namespace make it true OOP
void NotInStock(void)
 {
  cout << "Required copies not in stock" << endl;

 };  //End of function
 
/*------------------------------------------------------------------*/

//Basic Layout for table (Header).
// setw(40) works better than \t

 void TableLayout()
 {
    cout << "|==========================================================================|" << '\n';
    cout << '|' << setw(40) << "Bookshop Inventory" << setw(35) << '|' << '\n';  // use endl to push to screen
	cout << "|==========================================================================|" << endl;
	cout << "| Author's Name|";
    cout << "| Book Title   |";
    cout << "| Unit Price   |";
    cout << "| Publisher    |";
    cout << "| Stock Count  |" << endl;
 }; //End of basic Layout for table (Header).

/*------------------------------------------------------------------*/

 void search_data() //Start of Search function (input from user)
  {
    string author_name;
    string book_title;

    cout <<"Enter Author's Name: " << endl;
    getline(cin,author_name);
    cout <<"Enter Book Title: " << endl;
    getline(cin,book_title);

//Need to make a relational comparison between user's input and variables in database
};
}

/*------------------------------------------------------------------*/

class test
{
	public:
    string get_author(void)    { return author_;    }
    string get_title(void)     { return title_;     }
    double get_unitprice(void) { return unitprice_; }
    string get_publisher(void) { return publisher_; }
    int get_quantity(void)     { return quantity_;  }

   test() : author_("Deitel & Deitel"),
           title_("C++...Program"),
           unitprice_(2500.00),
           publisher_("Pearson"),
           quantity_(15)
           {}

	private:
    string author_;
    string title_;
    double unitprice_;  // double larger than float
    string publisher_;
    int quantity_;
}; //End of test class

/*------------------------------------------------------------------*/

class book: public test
{
		
};

//Start of main function
int main()
{

  TableLayout(); //Runs Table Layout function (Header)

  test test_obj; //Object for test function
  
  search_data(); //Runs Search function (input from user)
  cout << test_obj.get_author() << '\n';

    //system("pause");
	// to test variables
	//cout << book_title << "by" << author_name;

  return 0;
}
//End of program
