/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the numbers:"<<endl;;
    cin>>n;
    int sum=0;
    int c=0;
   while(n!=0)
    {
    int rem=n%10;
sum=sum*1+rem;
n=n/10;
c=c+1;
    }
    cout<<"sum"<<" "<<sum<<" "<<"average is"<<" "<<sum/c;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
void simpleinterest(int p,int r,int t=5)
{
    int a=(p*r*t)/100;
    cout<<"SI"<<" "<<a;

}
int main()
{
    int p,r;
    cout<<"enter the principal"<<endl;
    cin>>p;
    cout<<"enter the rate"<<endl;
    cin>>r;
simpleinterest(p,r);

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b;
    cout<<"enter the length:"<<endl;
    cin>>l;
    cout<<"enter the breadth:"<<endl;
    cin>>b;
    int a=(l*b);
    cout<<"area of rectangle:"<<" "<<a;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int a=10;
int main()
{
    int a=5;
    cout<<a;
    cout<<"how to print global representation"<<endl;
    cout<<::a;
    return 0;

}*/
/*#include<bits/stdc++.h>
using namespace std;
void dispaly(int a,int b)
{
    cout<<a+b<<endl;
}
void display(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<" call by value"<<endl;
    dispaly(a,b);
    cout<<a<<" "<<b<<endl;
    cout<<" call by reference"<<endl;
    display(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int (10);
    cout<<*a<<endl;
    cout<<"after use of delete"<<endl;
    delete(a);
    cout<<"now value of a"<<" "<<a;
    float *b=new float(20.2);
    cout<<*b<<endl;
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int *c=new int[n];
    delete[]c;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a=10;
 cout<<std::setw(5);
 cout<<std::setfill('*');
 cout<<std::left;
 cout<<a;
  return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
class student{
int roll;
string name;
public:
    student(int r,string n):roll(r),name(n)
    {
    }
    void print()
    {
        cout<<"name is"<<" "<<name<<endl;
        cout<<"roll no is"<<" "<<roll<<endl;
    }
};
int main()
{
    student k(11,"kunal");
    k.print();
    return 0;
}
