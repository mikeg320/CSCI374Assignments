/* 

*/

#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

bool evaluate(string xpr)
{
    stringstream ss(xpr);    
    stack<int> st;

    string oper;
    while(ss >> oper)
    {
        if (oper=="+" || oper=="-" || oper=="*" || oper=="/"|| oper=="%")
        {
            if (st.size()<2)
            {
                cout << "Error (expression invalid)!" << endl;
                return false;
            }

            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            if (oper=="+")
                st.push(op1+op2);
            else if (oper=="-")
                st.push(op2-op1);
            else if (oper=="*")
                st.push(op1*op2);
            else if (oper=="/") 
            {
                if (op1==0) 
                {
                    cout << "Error (division by zero) !" << endl;
                    return false;
                }
                else
                    st.push(op2/op1);
            }
            else if (oper=="%")
            {
                if (op1==0) 
                {
                    cout << "Error (division by zero) !" << endl;
                    return false;
                }
                else
                    st.push(op2%op1);
            }                
        }
        else
        {
            int num;
            stringstream n(oper);
            if (n >> num) 
            {
                if (num>=0 && num<=9)                 
                    st.push(num);
                else
                    cout << "Error (too many digits)!" << endl;
            }
            else
            {
                cout << "Error (ivalid postfix expression)!" << endl;
                return false;
            }
        }   
    }
    if (st.size()==1) {
        cout << xpr << " = " << st.top() << endl;
        return true;
    }
    else {
        cout << "Error (ivalid postfix expression)!" << endl;
        return false;
    }
}

int main(void)
{
    int valid = 0;
    int invalid = 0;

    string xpr;

    do
    {
       	cout << endl;
		cout << "Please enter a valid postfix expression or '#' to exit: " << endl;
        getline(cin, xpr);
        if (xpr!="#")
        {            
            cout << endl;
            cout << "Evaluating expression..." << endl;
            if (evaluate(xpr))
                valid++;
            else
                invalid++;
        }
    }while(xpr!="#");
    
    cout << endl;
    cout << "Total of valid expressions computed: " << valid << endl;
    cout << "Total of invalid expressions computed: " << invalid << endl;
    cout << "Grand total number of expressions computed: " << (valid + invalid) << endl;
	
	system("PAUSE");
    return 0;
}
