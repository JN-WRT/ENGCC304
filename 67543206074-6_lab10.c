/*
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome( char str[] ) {
    int start = 0 ;
    int end = strlen ( str ) - 1 ;
    while ( start < end ) {
        while ( !isalnum ( str [ start ] ) && start < end ) {
            start++ ;
        }
        while ( !isalnum ( str [ end ] ) && start < end ) {
            end-- ;
        }
        if ( tolower ( str [ start ] ) != tolower ( str [ end ] ) ) {
            return 0 ;
        }
        start++ ;
        end-- ;
    }
    return 1 ;
}

int main ( ) {
    char input[100] ;

    printf( "Enter word: " ) ;
    fgets( input, sizeof ( input ) ,stdin ) ;

    input [ strcspn ( input, "\n" ) ] = 0 ;

    if ( isPalindrome ( input ) ) {
        printf ( "Pass.\n" ) ;
    } else {
        printf ( "Not Pass.\n" ) ;
    }
    return 0;
}