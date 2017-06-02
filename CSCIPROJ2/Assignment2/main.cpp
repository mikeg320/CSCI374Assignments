/*created by Michael Gonzalez
 3/24/2016 */

#include <iostream>
using namespace std;

#include "IntSLList.h"

int main()
{
    IntSLList l1, l2;
  	cout << endl;
	cout << "Deleting all nodes of the list: " << endl;
	cout << endl;
    l1.print();
	l1.deleteAll();
	l1.print();
	cout << endl;
    system ("PAUSE");

    cout << endl;
	
    l1.addToTail(1);
    l1.addToTail(9);
    l1.addToTail(6);
    l1.addToTail(2);
    l1.addToTail(7);
         
    l2.addToTail(3);
    l2.addToTail(5);
    l2.addToTail(9);
    l2.addToTail(2);
    
    cout << "To the following List1: " << endl;
	l1.print();
	cout << "List2 nodes are appended: " << endl;
    l2.print();
    cout << endl;
    l1.appendList(l2);
    l1.print();
	l2.deleteAll(); 
	cout << endl;
    cout << "After merging and deleting, List1 is now: " << endl;
	l1.print();
    cout << endl;
    system ("PAUSE");
	
	cout << endl;
    cout << "Multiplying the nodes by the value of an integer (10): " << endl;
    l1.print();
    l1.multiply(10);
    cout << "Upon multiplication, the result is: " << endl;
    l1.print();
    cout << endl;
    system ("PAUSE");

    cout << endl;
	cout << "Returning the frequency of an integer: " << endl;
    
	int f1 = l1.frequency(10);
    cout << "Frequency of 10 is " << f1 << endl;
    int f2 = l1.frequency(20);
    cout << "Frequency of 20 is " << f2 << endl;
    int f3 = l1.frequency(30);
    cout << "Frequency of 30 is " << f3 << endl;
    int f6 = l1.frequency(50);
    cout << "Frequency of 50 is " << f6 << endl;
    int f7 = l1.frequency(60);
    cout << "Frequency of 60 is " << f7 << endl;
    int f8 = l1.frequency(70);
    cout << "Frequency of 70 is " << f8 << endl;
    int f9 = l1.frequency(90);
    cout << "Frequency of 90 is " << f9 << endl;
    cout << endl;
    system ("PAUSE");

    cout << endl;
    l1.addToHead(18);
    l1.addToHead(11);
    l1.addToHead(93);
    l1.addToHead(31);
    l1.addToHead(26);
    l1.addToHead(37);
    
    cout << "Total number of existing nodes in the List1: " << l1.listcount() << endl;
    l1.print();
    cout << "List2 is still: " << l2.listcount() <<" " << endl;
    cout << endl;
    system ("PAUSE");

    cout << endl;
	cout << "Removing all nodes from the 3rd through the 9th node: " << endl;
    l1.print();
    l1.removeNodes(3,7);
    cout << endl;
    system ("PAUSE");
    
    cout << endl;
	cout << "Displaying contents of List1: " << endl;
    l1.display();
    cout << endl;
      
	system ("PAUSE");
    return 0;
}

