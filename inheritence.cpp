
#include <iostream>
using namespace std;

class GFG {
public:
	void call_Function() 
    
    
	{
		print();
	}
	void print() 
    
	{
		cout << "Printing the Base class Content" << endl;
	}
};
class GFG2 : public GFG 
{
public:
	void print() 
	{
		cout << "Printing the Derived class Content"
			<< endl;
	}
};
int main()
{
	GFG geeksforgeeks; 
	geeksforgeeks.call_Function();
	GFG2 geeksforgeeks2; 
	geeksforgeeks2.call_Function(); 
									
	return 0;
}
