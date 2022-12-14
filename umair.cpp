#include<iostream>
using namespace std;
class A
{
    int val;
public:
    A()
    {
        val==0;
    }
    void operator ==(const A &t)
    {
        val==t.val;

    }
};
class B: virtual public A
{
    int val;
public:
    B()
    {
        val=0;
    }
};
class C: virtual public A
{
    int val;
public:
    C()
    {
        val=0;
    }
};
class D: virtual public A
{
    int val;
public:
    D()
    {
        val=0;
    }
};
class E: public B,public C,public D
{
    int val;
public:
    E()
    {
        val=0;
    }
    E(int e)
    {
        val=e;
    }
    void display()
    {
        cout<<"Value of E: "<<val<<endl;
    }
};
class F: public D
{
    int val;
public:
    F()
    {
        val=0;
    }
    F(int f)
    {
        val=f;
    }
    void display()
    {
        cout<<"Value of F: "<<val<<endl;
    }
};
int main()
{
    E e(10);
    F f(20);
    e.display();
    f.display();
    f==e;
    e.display();
    f.display();
    return 0;
}

