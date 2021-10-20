                                                          /* insertion and exteration operator overloading*/
#include <iostream>
using namespace std;

class complex
{
    private:int a,b;
    public:
    friend istream& operator>>(istream&,complex&);
    friend ostream& operator<<(ostream&,complex);            
           
};
    istream& operator>>(istream& X,complex& Y)
    
    {
        X>>Y.a>>Y.b;
        return(X);
    }
    ostream& operator<<(ostream& X,complex Y)
    {
        X<<"\na="<<Y.a<<"b="<<Y.b;
        return(X);
    }


int main()
{
    complex c1,c2;
    cin>>c1;                                       //cin.operator>>(c1)  ----> operator>>(cin,c1) {it means friend function use krke...}
    cout<<c1;
    return 0;
}
