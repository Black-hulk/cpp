#include<iostream>
using namespace std;
class farnichar
{
    int n,size_of_almari=9,number_of_cloth=0,m;
    string a;
public:
    void input()
    {
        cout<<"Choose a number of question."<<endl;
        cin>>n;
    }
    void call()
    {
        int amount_of_cloth;
        if(n==1)
        {
            cout<<"\nEnter The amount of cloth what you want to put...."<<endl;
            cin>>amount_of_cloth;
            if(size_of_almari>=amount_of_cloth)
            {
                if(size_of_almari>=(amount_of_cloth+number_of_cloth)){
                    number_of_cloth+=amount_of_cloth;
                    cout<<"\nSuccess. You can put "<<size_of_almari-number_of_cloth<<" more clothes in you almari. What do you want to do next?"<<endl;
                }
                else{
                    cout<<"\nDo not have enough space to put "<<amount_of_cloth<<" cloth"<<endl;
                }
            }
            else
            {
                cout<<"\nSorry! You have no more space "<<endl;
            }

        }
        else if(n==2)
        {
            cout<<"You have "<<number_of_cloth<<" cloth in your almari. What do you want to do next?"<<endl;
        }
        else if(n==3)
        {
            if(number_of_cloth==0)
            {
                cout<<"Sorry! You have no cloth."<<endl;
            }
            else
            {
                cout<<"\nEnter The amount of cloth what you want to take...."<<endl;
                cin>>amount_of_cloth;
                if(number_of_cloth>=amount_of_cloth){
                    cout<<"Success. You have "<<number_of_cloth-amount_of_cloth<<" more clothes in your almari. What do you want to do next?"<<endl;
                    number_of_cloth-=amount_of_cloth;
                }
                else{
                    cout<<"\nYou have not enough cloth to take"<<endl;
                }
            }

        }
        else
        {
            cout<<"Wrong Selection!!!"<<endl;
        }
    }
};
int main()
{
    farnichar fc;
    for(int t=0; t=true; t++)
    {
        cout<<"1. Put cloth."<<endl;
        cout<<"2. Know current status."<<endl;
        cout<<"3. Take a cloth."<<endl;
        fc.input();
        fc.call();
    }
}
