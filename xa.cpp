/*Complete the C program to implement the rational number with the remaining operations; multiplication
 and equality, as described in ADT.*/
#include<stdio.h>
#include<conio.h>
typedef struct {
      int numerator;
      int denomenator;
      }rational;
//Main Function
rational make_rational(int,int);
rational add_rational(rational,rational);
rational product_rational(rational ,rational);
rational equal_rational(rational, rational);
int main()
{
rational r1=make_rational(1,3);
rational r2=make_rational(1,3);
rational sum=add_rational(r1,r2);
rational prod=product_rational(r1,r2);
printf("The sum of rational numbers is %d/%d.\n",sum.numerator,sum.denomenator);
printf("The product of rational number is %d/%d.",prod.numerator,prod.denomenator);
equal_rational(r1,r2);
}
//Making rational
rational make_rational(int a,int b)
{
         rational r_number;
         r_number.numerator=a;
         r_number.denomenator=b;
         return r_number;
}
//Adding Rational
rational add_rational(rational a ,rational b)
{
	
         rational sum;
         sum.numerator=(a.numerator*b.denomenator+a.denomenator*b.numerator);
         sum.denomenator=(a.denomenator*b.denomenator);
         return sum;
}
//Product rational
rational product_rational(rational a, rational b)
{
	rational product;
	product.numerator=(a.numerator*b.numerator);
	product.denomenator=(a.denomenator*b.denomenator);
	return product;
}
//Equality Check
rational equal_rational(rational a,rational b)
{
	rational equal;
	if(a.numerator==b.numerator&&a.denomenator==b.denomenator)
	{
		printf("Given rational numbers are equal.\n");
	}
	else
	{
		printf("Given rational numbers are not equal.\n");
	}
}

