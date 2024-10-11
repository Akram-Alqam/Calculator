  // Name: Akram Alqam
#include  <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std; 
 // section Calculueter 
void cal(char c,int x,int y){
    
   if (c == '+'){

      cout <<x+y<<"\n";
    } else if (c == '-'){

      cout <<x-y<<"\n";
    } else if (c == '*'){

      cout <<x*y<<"\n";
    } else if (c == '/'){

      cout <<x / y<<"\n";
    } else if (c == '^'){

      cout <<pow(x,y)<<"\n";
    } else {
     
      cout <<"out The idea"<<"\n";
    }
}
  // section maximum 
void max(int number1 ,int number2,int number3){

   if (number1>number2 && number1>number3){

      cout <<"number1 is maxmum"<<' '<<'='<<' '<<number1<<"\n";
   } else if (number2>number1 && number2>number3){
 
      cout <<"number2 is maxmum"<<' '<<'='<<' '<<number2<<"\n";
   } else if (number3>number1 && number3>number2){
    
      cout <<"number3 is maxmum"<<' '<<'='<<' '<<number3<<"\n";
   } else {
  
     cout <<"ERORR"<<"\n";
   }
}

  // section  minimum
void min(int n,int w,int z){

   if (n < w && n < z){

      cout <<"n is minmum"<<' '<<'='<<' '<<n<<"\n";
    } else if (w < n && w < z){
 
      cout <<"w is minmum"<<' '<<'='<<' '<<w<<"\n";
    } else if (z < n && z < w){

      cout <<"z is minmum"<<' '<<'='<<' '<<z<<"\n";
    } else {

      cout <<"out The output"<<"\n";
    }
}

  // section Roots
void roots(double f){
    if (f < 0) {
        cout <<"invalid input, negative number for square root"<<"\n";
        return;
    }
    cout <<"Square root of"<<' '<<"="<<' '<<sqrt(f)<<"\n";
}

  // section trigonometric
void trigonometric(double angle){
    
    float pi = 3.14;
    double radians = (angle * pi )/ 180.0;
    
    if (angle >= 0){
        
        cout <<"sin("<<angle<<")="<<sin(radians)<<"\n";
        cout <<"cos("<<angle<<")="<<cos(radians)<<"\n";
        cout <<"tan("<<angle<<")="<<tan(radians)<<"\n";
    } else {
     
      cout <<"invaild trigonometric Function"<<"\n";  
    }
}

  // section Find smallest & Largest
void fan(int largest, int smallest){
    
    int number;
    cout <<"Enter a series of integers, or type -1 to exit:"<<"\n";

    cin >>number;
    if (number == -1){
        
        cout <<"No numbers were entered."<<"\n";
    }

    largest = number;
     
    smallest = number;

    while (number != -1){
        if (number > largest){
            
            largest = number;
        }
        if (number < smallest){
           
            smallest = number;
        }
        cin >>number;
    }
}

  // section output & Print
int main(){
    
      
   char c;
    cout <<"Enter The opretior"<<"\n";
    cin >>c;

   int x;
    cout <<"Enter The Number one"<<"\n";
    cin >>x;
      
   int y;
  cout <<"Enter The Number two"<<"\n";
  cin >>y;

  cal(c , x, y);
    
   cout <<"section maximumom"<<"\n";
   int number1;
   cout <<"Enter Number one"<<"\n";
    cin >>number1;
  
   int number2;
   cout <<"Enter Number two"<<"\n";
   cin >>number2;

   int number3;
   cout <<"Enter Number three"<<"\n";
   cin >>number3;
   
   max(number1 , number2, number3);

    cout <<"section minimum"<<"\n";
   int n;
   cout <<"Enter The Number one"<<"\n";  
   cin >>n;
  
   int w;
   cout <<"Enter The Number two"<<"\n";
   cin >>w;
    
   int z;
   cout <<"Enter The Number Three"<<"\n";
   cin >>z;
    
    min(n , w, z);    
    
    cout <<"section factorial"<<"\n";
    int fact = 1,R;
    cin >>R;
     for (int i = 1;i<=R;i++){

      fact = fact*R;
    cout <<"fact"<<' '<<'='<<' '<<fact<<"\n";
}
    
    cout <<"section Absoliaout"<<"\n";
   
     float G;
     cin >>G;
    
    if (G < 0){
  
       cout <<"Enter Absoliaout value G"<<' '<<'='<<' '<<(-G)<<"\n";
    } else {

       cout <<"Enter Absoliaout value G"<<' '<<'='<<' '<<(G)<<"\n";
}
 
     cout <<"section Roots"<<"\n";
       
        double num;
        cout <<"Enter number to find square root: ";
        cin >> num;
        
        roots(num);
       
       cout <<"section trigonometry"<<"\n";
       
       double angle;
       cout <<"Enter The angle :"<<"\n";
       cin >>angle;
    
       trigonometric(angle);
    
       cout <<"section Larget & small Number"<<"\n";
    
      int smallest = number1;
       
      int largest = number2;

      int number = number1 & number2;
  
    if (largest != number){
        
        cout <<"Largest number"<<' '<<"="<<' '<<largest<<"\n";
    } else if (smallest != number){
        
        cout <<"Smallest number"<<' '<<"="<<' '<<smallest<<"\n";
    } else {
      
        cout <<"No valid numbers entered"<<"\n";
    }
    
        fan(largest, smallest);
      
       cout <<"*****************"<<"\n";
       cout <<"thinks for share 🤍 "<<"\n";
       
   return 0;
}