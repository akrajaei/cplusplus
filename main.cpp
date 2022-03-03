#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;


void   median( float [], int );
void   sort( float[], int );
void   print( const float[], int );

int main()
{
   const int size = 15;  

   float a[ size ] =  { -5,1,-1,8,7,1,8,0,-2,9,4,3,7,-7.4,4} ;
   
   sort(a,size);
   cout<<"Sorted Array:";
   print(a,size);
   
   median(a,size);
  
   getch();
} 

void median(float a[] , int len)
{
	cout<<"\n\n median=" <<a[len/2];
}

void sort( float a[], int len )
{
   int hold;  
     
   for ( int pass = 1; pass < len; pass++ )
      for ( int j = 0; j < len - 1; j++ )
         if ( a[ j ] > a[ j + 1 ] ) {
            hold = a[ j ];
            a[ j ] = a[ j + 1 ];
            a[ j + 1 ] = hold;
         }
} 

void print( const float a[], int len )
{
   for ( int i = 0; i < len; i++ ) {
       cout << setw( 3 ) << a[ i ];
   } 
} 
