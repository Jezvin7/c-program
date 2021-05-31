#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a ,b,i=0;

    string c[9]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    if((a<=9)&&(b<9))
    {
        for(i=a;i<=b;i++)
        {
            cout<<c[i-1]<<endl;
        }
    }
    else if((a<9)&&(b>9))
    {
       for(i=a;i<=9;i++){
           cout<<c[i-1]<<endl;
       }
       for(i=10;i<=b;i++)
       {
           if(i%2==0){
                cout<<"even"<<endl;}
           else{
               cout<<"odd"<<endl;
           }
           
       }
    }
    else{
        for(i=a;i<=b;i++){
            if(i%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
          }
    
 
    return 0;
}
