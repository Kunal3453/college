/*#include<iostream>     array implementation by stack;
using namespace std;
struct mystack{
	int *arr;
	int cap;
	int top;
	mystack(int c)
	{
		cap=c;
		arr=new int [cap];
		top=-1;
	}
	void push(int x)
	{
		if(top==cap-1)
		cout<<"my stack is overflow"<<endl;
		top++;
		arr[top]=x;
	}
	int pop()
	{
		if(top==-1)
		{
		cout<<"no element to pop"<<endl;
		return INT_MIN;}
		int res=arr[top];
		top--;
		return res;
	}
	bool isempty()
	{
		return top==-1;
	}
	int size()
	{
		return(top+1); 
	}
	int peek()
	{
	return arr[top];
	}
};
int main()
{
	mystack s(10);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout<<s.size();
	cout<<endl;
	cout<<s.peek();
	cout<<endl;
	cout<<s.pop();
	cout<<endl;
	cout<<s.size();
	cout<<endl;
	cout<<s.peek();
	return 0;
}
*/
/*#include<iostream>   //stack implementation by linked list
using namespace std;
struct node{
	int data;
	node*next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
struct mystack{
	node*head;
	int size;
	mystack()
	{
		head=NULL;
		size=0;
	}
	void push(int x)
	{
		node*temp=new node(x);
		temp->next=head;
		head=temp;
		size++;
	}
	int pop()
	{
		int res=head->data;
		node*temp=head;
		head=head->next;
		delete(temp);
		size--;
		return res;
	}
	bool isempty()
	{
		return head==NULL;
	}
	 int peek(){
        if(head==NULL){ 
		cout<<"Stack is Empty"<<endl;
		return INT_MAX;
		}
        return head->data;
    }
    
int sizestack()
{
        return size;
}
};
int main()
{
    mystack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.sizestack();
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
    return 0; 
}*/
#include<iostream>
#include<stack>
using namespace std;
bool matching(char a,char b)
{
	return((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']'));
}
bool isBalanced(string str)
{
	stack<char>s;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='('||str[i]=='{'||str[i]=='[')
		{
			s.push(str[i]);
		}
		else
		{
			if(s.empty()==true)
			return false;
			else if(matching(s.top(),str[i])==false)
			return false;
			else
			s.pop();
		}
	}
	return (s.empty()==true);
}
int main()
{
	string str = "{()}[]"; 
    
    if (isBalanced(str)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 

    return 0; 
}
