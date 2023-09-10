/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนโปรแกรมในข้อนี้โดยห้ามใช้ For Loop)
    
    Test case:
        5
    Output:
        5! = 5 x 4 x 3 x 2 x 1
        5! = 120

    Test case:
        8
    Output:
        8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
        8! = 120

*/


#include<stdio.h>

int main(){

    int ip , sum = 1; 

    printf( "input :  " ) ;
    scanf( "%d" , &ip ) ;

    int i = ip ;

    printf( "%d! = " , ip ) ; 

    while (i > 0)
    {
        printf( "%d" , i ) ; 

        sum *= i ;

        i-- ; 

        while ( i > 0 )
        {
            printf( " x " ) ; 
            break ;
        }
        
    }


    printf( "\n%d! = %d" , ip , sum );

    return 0 ;
}