//
//  main.cpp
//  Assignment4
#include <iostream>
#include "BST.h"
int main()
{
    BST<string> create;
    int choice;
    string name; 
    while(1)
    {
        cout<<" \n 1. Add name \n 2. Delete name \n 3. In-order traverse \n 4. Number of Nodes \n 5. Number of Leaves \n 6. Exit\n";
        
        cout<<"Please enter an option (1-6):";
        cin>>choice;
       	if(choice == 1) 
     {
    	cout<<"Enter a name : ";
		cin>>name;
		create.insert(name);
	 }
	 
     else if(choice == 2) 
     {
    	cout<<"Enter a  name : ";
		cin>>name;
		create.findAndDeleteByMerging(name);
     }
     
     else if(choice == 3) {

	 	create.inorder();
		cout<<endl;
     }
     else if(choice == 4){
     	cout<<"Number of nodes in a tree are: "<<create.getNodeCount()<<endl;
	 }
	 else if (choice== 5){
	 	 cout<<"Number of leaves in a tree are: "<<create.getLeafCount()<<endl;
	 }
     else if(choice == 6) 
     {
       cout << "Ending the Program" << endl;
     }
     else 
     {
       
       cout << "Invalid Choice" << endl;
     }
  }
  while(choice != 6);  
    return 0;
}
