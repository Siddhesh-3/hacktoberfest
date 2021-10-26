//Program to convert binary number to decimal and vice versa


#include<stdio.h>
#include<math.h>
int DecimaltoBinary(int);
int binarytodecimal(int);
int main(){
int number,binary,num,decimal;

printf("Enter the decimal number");
scanf("%d",&number);
printf("Enter the binary number");
scanf("%d",&num);
binary= DecimaltoBinary(number);
decimal=binarytodecimal(num);
printf("Decimal to Binary conversion of %d is %d\n",number,binary);
printf("Binary to decimal conversion of %d is %d\n",num,decimal);

}

int DecimaltoBinary(int number){
int binary=0,i=1,remainder;
while(number!=0){
remainder=number%2;
number/=2;
binary =binary+remainder*i;
i*=10;
}
return binary;
}


int binarytodecimal(int num){
int lastdigit,decimal=0,i=0;
while(num!=0){
lastdigit=num%10;
num/=10;
decimal = decimal+lastdigit*pow(2,i);
i++;
}
return decimal;
}
