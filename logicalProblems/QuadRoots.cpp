#include<iostream>
#include<cmath>//for sqrt() function
#include <iomanip> 

using namespace std;

int main(){
    double a , b ,c,discriminant,root1,root2;

    cout<<"enter cofficient a , b ,c\n";
    cin>>a>>b>>c;
    if(a==0) {
        cout<<"not a quadratic equation\n"; 
        return 0;
    }
    discriminant = (b*b)-(4*a*c);
     cout << fixed << setprecision(2); // to handle decimal limit upto 2
     

    if(discriminant>0){
        root1 = (-b+sqrt(discriminant))/(2*a);
         root2 = (-b-sqrt(discriminant))/(2*a);
         cout<<"roots are real and distinct:"<<root1<<" "<<root2<<endl;
    }

    else if(discriminant==0) {
        root1 = -b/(2*a); 
        cout<<"roots are real and equal :"<<root1;   
        
        }
else{
double realPart = -b/(2*a);
double imgPart = sqrt(-discriminant)/(2*a);

cout<<"roots are complex :"<<realPart<<"+"<<imgPart<<"i and"<<realPart<<"-"<<imgPart<<"i\n";

}

return 0;

}