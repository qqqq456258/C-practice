#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
 int a ;
 while (cin >>a )
 {
 for (int i=2 ;i<=sqrt(a);i++ )
 {
 	if (a%i==0)
 {
 		cout <<i ;
 		int b =0 ;
 			while (a%i==0)
 {
 				b++ ;
 				a/= i;
 }
 	if (a==1)
 {
 	cout <<"^" <<b <<endl ;
 }
 	else if (b>1 )
 {
 	cout <<"^" <<b <<" * ";
 }
 else if (b==1&a>1)
 {
 cout <<" * " ;
 }
 
 }
 }
 if (a>1)
 cout <<a <<endl ;
 }
}
