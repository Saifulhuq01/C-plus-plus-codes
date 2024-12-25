#include <iostream>
#include <cmath> //for sqrt function
using namespace std;

int main(){

    /*
    int num = 9;
    cout<<"Enter the number: "<<endl;
    //cin>>num;
    for (int i = 2; i < num; i++)
    {
        int count=0;
        for (int j=1; j<=i;j++){
            if (i%j ==0)
            {
                count++;
            }     
        }
        if (count == 2){
            cout<<i<<" is a prime number"<<endl;
        }
        
    }
    */


   //optimal solution
   int num = 15;
   bool isPrime = true;
    //cout<<"Enter the number: "<<endl;
    //cin>>num;
    for(int i=2 ;i<sqrt(num);i++){//sqrt(num) --> if num = 15 we can just check sqrt(15) only like 15 sqrt is 3.87298334621 so we just check within 3.
        if(num %i ==0){
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout<<num<<" is a prime number"<<endl;
    }else{
        cout<<num<<" is not a prime number"<<endl;
    }
    
    return 0;
}