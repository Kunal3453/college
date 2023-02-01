/*#include<bits/stdc++.h>
using namespace std;
void asn(int n)
{
    if(n==0)
    {
        return ;
        }
    else {
        asn(n-1);
            cout<<n<<" ";

    }
}
int main()
{
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    asn(n);
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
void dec(int n)
{
    if(n==0)
    {
        return ;
        }
    else {

            cout<<n<<" ";
            asn(n-1);

    }
}
int main()
{
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    dec(n);
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0){
        return 0;}

    return n+sum(n-1);
}
int main()
{
    int n;
    cout<<"enter the number upto to n sum:"<<endl;
    cin>>n;
    cout<<sum(n);
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{

    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{

    int n;
    cout<<"enter the number for factorial:"<<endl;
    cin>>n;
    cout<<fact(n);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==0||n==1)
        return n;
return fib(n-1)+fib(n-2);
}
int main()
{

    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    cout<<fib(n);
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int power(int n,int p)
{
    if(p==0)
        return 1;
    return( n*power(n,p-1));
}
int main()
{
   int n;
   cout<<"enter the number"<<endl;
   cin>>n;
   int p;
   cout<<"enter the power:"<<endl;
   cin>>p;
   cout<< power(n,p);
   return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
void rev(string a)
{
    if(a.length()==0)
        return ;
    else{
        rev(a.substr(1));
        cout<<a[0];
    }
}
int main()
{
    string a="hello";
    rev(a);
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
void toh(int n,char src,char hlp,char dst)
{
    if(n>0)
        {
            toh(n-1,src,dst,hlp);
            cout<<"move from disc"<<src<<" "<<n<<" "<<"to"<<dst<<endl;
            toh(n-1,hlp,src,dst);
        }

}
int main()
{
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}

