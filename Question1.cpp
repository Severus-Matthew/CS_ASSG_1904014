#include <stdio.h>
#include <math.h>

struct Complex1{
    float cm1;
    float cm2;
};
struct Complex1 Cnum1;

struct Complex2{
    float cm1;
    float cm2;
};
struct Complex1 Cnum2;

int Add(){
    int sumR , sumC;
    sumR = Cnum1.cm1 + Cnum2.cm1 ;
    sumC = Cnum1.cm2 + Cnum2.cm2 ;
    printf("The sum is %d + %d i" , sumR , sumC);
    return 0;
}

int Sub(){
    int subR , subC;
    subR = Cnum1.cm1 - Cnum2.cm1 ;
    subC = Cnum1.cm2 - Cnum2.cm2 ;
    printf("The difference is %d + %d i" , subR , subC);
    return 0;
}

int Mul(){
    int mulR , mulC;
    mulR = Cnum1.cm1*Cnum2.cm1 - Cnum1.cm2*Cnum2.cm2 ;
    mulC = Cnum1.cm1*Cnum2.cm2 + Cnum1.cm2*Cnum2.cm1 ;
    printf("The product is is %d + %d i" , mulR , mulC);
    return 0;
}

int Div(){
    int divR , divC , div;
    div = Cnum2.cm1*Cnum2.cm1 + Cnum2.cm2*Cnum2.cm2;
    divR = (Cnum1.cm1*Cnum2.cm1 + Cnum1.cm2*Cnum2.cm2)/div ;
    divC = (Cnum1.cm1*Cnum2.cm2 - Cnum1.cm2*Cnum2.cm1)/div ;
    printf("The product is is %d + %d i" , mulR , mulC);
    return 0;
}

int main(){
    int n;
   printf ("welcome to complex arithmetic calclation/n") ;
   printf ("what would you like to do/n");
   printf("Enter 1 for Addition\n Enter 2 for Substraction\n Enter 3 for Multiplication \n Enter 3 for Division\n");
   scanf("%d" , &n);
   printf("Please enter the values");
   printf("Enter the real part of First number");
   scanf("%f" , &cnum1.cm1);
   printf("Enter the imaginary part of First number");
   scanf("%f" , &cnum1.cm2);
   printf("Enter the real part of Second number");
   scanf("%f" , &cnum2.cm1);
   printf("Enter the Imaginary part of Second number");
   scanf("%f" , &cnum2.cm2);

   switch(n){
       case 1:Add();
       break;
       case 2: Sub();
       break;
       case 3: Mul();
       break;
       case 4: Div();
       break;
       default : 
       printf("inavlid input!");
       break;
   }
   printf("THANK YOU!");
   return 0;
   }
