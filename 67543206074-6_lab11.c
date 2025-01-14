/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/
#include <stdio.h>
#include <math.h>

int main ( ) {
    int number, temp, remainder, result = 0 ;
    printf ( "Enter Number: " ) ;
    scanf ( "%d", &number ) ;

    temp = number ;
    int n = 0 ;
    while ( temp != 0 ) {
        n++ ;
        temp /= 10 ;
    }

    temp = number ;
    while ( temp != 0 ) {
        remainder = temp % 10 ;
        result += pow ( remainder, n ) ;
        temp /= 10 ;
    }
    if ( result == number )
        printf ( "Pass.\n" ) ;
    else
        printf ( "Not Pass.\n" ) ;

    return 0 ;
}
