/* --- Armstrong Number Program ---. 
 * Armstrong number is sum of cube of its digit,
 * equal to that same number. 
 */

#include<iostream>
using namespace std;

int main(){

int num1,num2,rem,sum=0;   

cout<<"Input a positive number: "<<endl;
cin>>num1;

num2=num1;

while(num2!=0){
rem=num2%10;		
sum=sum+(rem*rem*rem);
num2=num2/10;
}

if(sum==num1){
cout<<num1<<" is an Armstrong number."<<endl;
}else{
cout<<num1<<" is not an Armstrong number."<<endl;
}

return 0;
}
