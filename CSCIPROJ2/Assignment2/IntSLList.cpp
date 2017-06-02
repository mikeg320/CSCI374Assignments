/*created by Michael Gonzalez
3/24/2016 */
#include <iostream>
#include "intSLList.h"
using namespace std;

IntSLList::~IntSLList()
{
	for(IntSLLNode *p;!isEmpty();)
	{
		p=head->next;
		delete head;
		head=p;
	}
}
void IntSLList::addToHead(int e1)
{
	head=new IntSLLNode(e1,head);
	if(tail==0)
		tail=head;
}
void IntSLList::addToTail(int e1)
{
	if(tail !=0)
	{
		tail->next=new IntSLLNode(e1);
		tail=tail->next;
	}
	else 
		head=tail=new IntSLLNode(e1);
}
int IntSLList::deleteFromHead()
{
	int e1=head->info;
	IntSLLNode *tmp=head;
	if (head==tail)
		head=tail=0;
	else head=head->next;
	delete tmp;
	return e1;
}
int IntSLList::deleteFromTail()
{
	int e1=tail->info;
	if (head==tail)
	{
		delete head;
		head=tail=0;
	}
	else
	{
		IntSLLNode *tmp;
		for(tmp=head;tmp->next !=tail;tmp=tmp->next);
		delete tail;
		tail=tmp;
		tail ->next=0;
	}
	return e1;
}
void IntSLList::deleteNode(int e1)
{
	if(head!=0)
		if(head==tail && e1==head->info)
		{
			delete head;
			head=tail=0;
		}
		else if(e1==head->info)
		{
			IntSLLNode *tmp=head;
			head=head->next;
			delete tmp;
		}
		else
		{
			IntSLLNode *pred, *tmp;
			for(pred=head;(tmp=head->next);tmp!=0 && !(tmp->info==e1));
			{
				pred=pred->next, tmp=tmp->next;
			}
			if(tmp!=0)
			{
				pred->next = tmp->next;
				if(tmp==tail)
					tail=pred;
				delete tmp;
			}
		}
}
bool IntSLList::isInList(int e1) const 
{
	IntSLLNode *tmp;
	for(tmp=head;tmp!=0 && !(tmp->info==e1);tmp=tmp->next);
	return tmp!=0;
}
void IntSLList::print()
{    
    IntSLLNode* node = head;
    if (node)
    {
        cout << node->info;
        node = node->next;
        while (node) 
        {
            cout << ", " << node->info;
            node = node->next;
        }
    }
    else
    {
        cout << "This is an empty list...";
    }
    cout << endl;
}
void IntSLList::reverse()
{
    if (!isEmpty())
	{
		IntSLLNode* newHead = 0;
        IntSLLNode* node = head;
		while (node) 
		{
			IntSLLNode* next = node->next;
			node->next = newHead;
			newHead = node;
			node = next;
	    }
        head = newHead;
	} else {
		cout << "This list is empty!" << endl;
	}
}
void IntSLList::deleteAll()
{
    if (!isEmpty())
	{		
        IntSLLNode* node = head;
        while (node) 
        {			
            IntSLLNode* deleted = node;
	        node = node->next;
            delete deleted;
        }
        head = NULL;
        tail = NULL;
	} else {
		cout << "Sorry! This list is empty!" << endl;
	}
}
void IntSLList::appendList(IntSLList& list2)
{
    if (!isEmpty() || !list2.isEmpty())
	{
        IntSLLNode* node = list2.head;
        while (node) 
        {
            addToTail(node->info);
            node = node->next;
        }
        node = list2.head;
        while (node)
        {
            IntSLLNode* deleted = node;
	        node = node->next;
            delete deleted;
        }
        list2.head = NULL;
        list2.tail = NULL;

    } else {
		cout << "Sorry...both lists are empty!" << endl;
	}
}
void IntSLList::multiply(int value)
{
    if (!isEmpty())
	{		
        IntSLLNode* node = head;
        while (node) 
        {			
            node->info = node->info * value;
	        node = node->next;            
        }        
	} else {
		cout << "Sorry! This list is empty!" << endl;
	}
}
int IntSLList::frequency(int value)
{
    if (!isEmpty())
	{		
        int f = 0;;
        IntSLLNode* node = head;
        while (node) 
        {			
            if (node->info==value)
                f++;

	        node = node->next;            
        }        
        return f;
	} else {
		cout << "Sorry! This list is empty!" << endl;
        return -1;
	}
}
int IntSLList::listcount()
{
    int f = 0;;
    IntSLLNode* node = head;
    while (node) 
    {			        
        f++;
        node = node->next;            
    }        
    return f;
}

void IntSLList::removeNodes(int n, int k)
{
    int c = listcount();
	if (n<=c && k<=c)
	{				
		if (n>1)
		{
            int d = k-n+1;
            IntSLLNode *node = head;
			while(node && n>2)
			{
                node = node->next;
                n--;
            }

            while(d>0)
            {
                IntSLLNode *deleted = node->next;
				node->next = node->next->next;	
				delete deleted;

                if (!node->next->next)
                    tail = node->next;
                d--;
            }
		} else {
			for(int i=0;i<=k-n;i++)
				deleteFromHead();
		}
	} else {
		cout << "Error - cannot compute because parameters are invalid!" << endl;
	}
}

void IntSLList::display()
{    
    IntSLLNode* node = head;
    if (node)
    {
        cout << node->info;
        node = node->next;
        while (node) 
        {
            cout << ", " << node->info;
            node = node->next;
        }
    }
    else
    {
        cout << "Error - no nodes in this list.";
    }
    cout << endl;
}
