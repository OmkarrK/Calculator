#include<iostream>
#include<cmath>
using namespace std;
class result
{
    public:
    float res;
};
class simplecal
{
    protected:
    float a,b,res;
    public:
    simplecal(){};
    simplecal(float a,float b):a(a),b(b){};
    void calci()
    {
        char oper;
        float num1,num2;

        cout<<"enter the operator(+,-,*,/)"<<endl;
        cin>>oper;
        cout<<"enter two numbers"<<endl;
        cin>>num1>>num2;
        switch(oper)
        {
            case '+':
            res=a+b;
            break;
            case '-':
            res=a-b;
            break;
            case '*':
            res=a*b;
            break;
            case '/':
            res=a/b;
            break;

        }
        cout<<"result"<<endl;
    }
};
class scientificCalc
{
    protected:
    float a1,res;
    public:
    scientificCalc(){};
    scientificCalc(float a1):a1(a1){};
    void sciCalci(){
        cout<<"1.sin"<<endl<<"2.cos"<<endl<<"3.log"<<endl<<"4.tan"<<endl;
        int n;
        cin>>n;
        switch(n)
        {
            case 1:
            res=sin(a1);
            break;
            case 2:
            res=cos(a1);
            break;
            case 3:
            res=log(a1);
            break;
            case 4:
            res=tan(a1);
            break;

        }
        cout<<"res"<<endl;
    }
};
class HybridCalc:public scientificCalc,public simplecal
{
    public:
    HybridCalc(){};
    HybridCalc(float a):scientificCalc(a){};
    HybridCalc(float a,float b):simplecal(a,b){};
};

int main()
{
    float a,b;
    cin>>a>>b;
    HybridCalc y(a);
    HybridCalc z(a,b);
    y.sciCalci();
    z.calci();

return 0;
}