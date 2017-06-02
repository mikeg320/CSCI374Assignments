/*created by Michael Gonzalez
 3/24/2016 */
#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLLNode
{
public:
	IntSLLNode()
	{
		next=0;
	}
	IntSLLNode(int e1, IntSLLNode *ptr=0)
	{
		info=e1;
		next=ptr;
	}
	int info;
	IntSLLNode *next;
};

class IntSLList
{
public:
	IntSLList()
	{
		head=tail=0;
	}
	~IntSLList();
	int isEmpty()
	{
		return head==0;
	}
	void addToHead(int);
	void addToTail(int);
	int deleteFromHead();
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int) const;

    void print();
    void reverse();  //reverses a SLL using only one pass through the list
    void deleteAll();  //deletes all the nodes of the list
    void appendList(IntSLList& list2);  //appends List2 to List1 
    void multiply(int value);  //takes any integer value and multiplies all the nodes (info) by the value of it
    int frequency(int value);  //returns the frequency of a given integer in the Link List
    int listcount();  //function returns the number of nodes in the list
	void removeNodes(int n, int k);  //removes all nodes from the nth node through the kth node
	void display ();  //displays the contents of all the nodes
	
private:
	IntSLLNode *head, *tail;

};

#endif
