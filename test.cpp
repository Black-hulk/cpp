#include<iostream>
using namespace std;
//int argc, char** argv[]
int main ()
{
    int size_of_almari=10;
    int number_of_cloth=0;
    cout<<"What do you want to do?"<<endl;
    for (int z = 0; z=true; z++)
    {
        int x;
        cout<<"1. Put a cloth."<<endl;
        cout<<"2. Know current status."<<endl;
        cout<<"3. Take a cloth."<<endl;
        cout<<"4. Quit."<<endl;
        cin>>x;
        if(x==1)
        {
            if(size_of_almari!=number_of_cloth){
                number_of_cloth++;
                cout<<"Success. You can put "<<size_of_almari-number_of_cloth<<" more clothes in you almari. What do you want to do next?"<<endl;
            }
            else{
                cout<<"Sorry! You have no more space "<<endl;
            }
        }
        else if(x==2)
        {
            cout<<"You have "<<number_of_cloth<<" cloth in your almari. What do you want to do next?"<<endl;
        }
        else if(x==3)
        {
            if(number_of_cloth==0){
                cout<<"Sorry! You have no cloth."<<endl;
            }
            else{
                cout<<"Success. You have "<<number_of_cloth-1<<" more clothes in your almari. What do you want to do next?"<<endl;
                number_of_cloth--;
            }

        }
        else if(x==4
                ){
            break;
        }
        else
        {
            cout<<"Wrong Selection!!!"<<endl;
        }
    }


}
