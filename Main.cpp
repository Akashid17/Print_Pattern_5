
#include<iostream>

using namespace std;

class PatternX
{
    public:
        void Display(int);
};

void PatternX::Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 1;

    do
    {
        cout<<iCnt<<"\t*\t";
    
        iCnt++;
    }while(iCnt <= iNo);

    cout<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    PatternX pobj;
    pobj.Display(iValue);

    return 0;
}