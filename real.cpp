/*#include<bits/stdc++.h>
using namespace std;
class dist{
int x;
public:
    void getdata()
    {
        cout<<"enter the distance"<<endl;
    }
    void showdata()
    {
        cout<<"distance is;"<<" "<<x<<endl;
    }
    dist addvalue(dist a)
    {
        dist d4;
        int k=x+a.x;
        return d4;
    }
};
int main()
{
    dist d1,d2,d3;
    d1.getdata();
    d1.showdata();
    d2.getdata();
    d2.showdata();
    d3=d1.addvalue(d2);
    d3.showdata();
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
class dist{
int x;
public:
    void getdata()
    {
        cout<<"enter the distance"<<endl;
        cin>>x;
    }
    void showdata()
    {
        cout<<"distance is"<<" "<<x<<endl;
    }
    void addvalue(dist a,dist b)
    {
        cout<<"add distance";
        x=b.x+a.x;
    }
};
int main()
{
    dist d1,d2,d3;
    d1.getdata();
    d1.showdata();
    d2.getdata();
    d2.showdata();
    d3.addvalue(d2,d1);
    cout<<endl;
    d3.showdata();
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
class comp{
int x;
int y;
public:
    void getdata()
    {
        cout<<"enter the real number"<<endl;
        cin>>x;
        cout<<"enter the imaginary number"<<endl;
        cin>>y;
    }
    void showdata()
    {
        cout<<"complex number is"<<" "<<x<<"+i"<<y<<endl;
    }
    void addvalue(comp &a,comp& b)
    {
        cout<<"add complex number";
        a.x=2;
        b.y=3;
        x=b.x+a.x;
        y=a.y+b.y;
    }
};
int main()
{
    comp d1,d2,d3;
    d1.getdata();
    d1.showdata();
    d2.getdata();
    d2.showdata();
    d3.addvalue(d2,d1);
    cout<<" ";
    d3.showdata();
    cout<<"after the reference"<<endl;
    d1.showdata();
    d2.showdata();
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
class timee{
int x;
int y;
public:
    void getdata(int i,int w)
    {
    x=i;
    y=w;
    }
    void showdata()
    {
        cout<<"Timezone is"<<" "<<x<<":"<<y<<endl;
    }
    timee addvalue(timee a,timee b)
    {
        timee t4;
        cout<<"add Timezone "<<" ";
         t4.y=a.y+b.y;
         int k=0;
         if(t4.y>=60)
         {
             t4.y-=60;
             k=1;

         }
        t4.x=b.x+a.x+k;
        return t4;

    }
};
int main()
{
    timee d1,d2,d3;
    d1.getdata(10,20);
    d1.showdata();
    d2.getdata(20,40);
    d2.showdata();
    d3=d3.addvalue(d2,d1);
    cout<<" ";
    d3.showdata();
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
class cord{
int x;
int y;
public:
    void getdata(int i,int w)
    {
    x=i;
    y=w;
    }
    void showdata()
    {
        cout<<"coordinates is (x,y)"<<" "<<"("<<x<<","<<y<<")"<<endl;
    }
    cord addvalue(cord a,cord b)
    {
        cord t4;
        cout<<"add "<<" ";
         t4.y=a.y+b.y;
        t4.x=b.x+a.x;
        return t4;

    }
};
int main()
{
    cord d1,d2,d3;
    d1.getdata(10,20);
    d1.showdata();
    d2.getdata(20,40);
    d2.showdata();
    d3=d3.addvalue(d2,d1);
    cout<<" ";
    d3.showdata();
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
class cal{

int a;
int h;
public:
    void getvalue(int a,int b)
    {
this->a=a;
h=b;
    }
    void showvalue()
    {
        cout<<"age is"<<a<<endl;
        cout<<"height is"<<h<<endl;
    }
    friend void addage(cal f,cal g);
    };
    void addage(cal f,cal g)
    {
        cout<<"average age is"<<(f.a+g.a)/2<<endl;
        cout<<"height is"<<(f.h+g.h)/2;

    }
int main()
{
    cal c1,c2,c3;
    c1.getvalue(10,20);
    c1.showvalue();
    c2.getvalue(12,25);
    c2.showvalue();
    addage(c1,c2);
    return 0;
}
