//Two number Accept input and Aftr print their sum neither using third varible or nor using third varible
#include<bits\stdc++.h>
using namespace std;
class Sum_Their_input
{
private:
    int ram,ravi,sum;
public:
    void getdata(void); //Function Declartion
    int sumdata(void);
};

void Sum_Their_input::getdata(void) //Function Definition
{
    cout<<"Enter the Ram,ravi Marks of c++"<<"\n";
    cin>>ram>>ravi;

}
int Sum_Their_input::sumdata(void) //Function Data
{
    sum=ram+ravi;
    cout<<"Sum of ravi and ram marks :"<<" "<<sum;
    return (sum);
}

int main()
{
    Sum_Their_input outdata;
    outdata.getdata();
    outdata.sumdata();
}
