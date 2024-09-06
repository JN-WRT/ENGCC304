#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int playAgain = 0 ;
    printf( "Do you want to play game (1=play,-1=exit) : " ) ;
    scanf( "%d", &playAgain ) ;

    while ( playAgain == 1 ) {
        srand( time ( NULL ) ) ;
        int randomNumber = ( rand () % 100 ) + 1 ; /*สุ่มเลข 1-100*/
        int input_num = 0 ;
        int score = 100 ; /*เริ่มต้นที่ 100 คะแนน*/
        int min = 1 ;
        int max = 100 ;

        printf ( " ( Score = 100 ) \n " ) ;
        while ( score > 0 ) {
            printf ( " Guess the winning number %d-%d : ", min, max ) ;
            scanf ( " %d", &input_num ) ;
            if ( input_num < min || input_num > max ) {
                printf( " Please enter a number between %d and %d. \n ", min, max ) ;
                continue ;
            }//end if

            if ( input_num > randomNumber ) {
                printf( " Sorry, the winning number is LOWER than %d. ( Score = %d ) \n ", input_num, score - 10 ) ;
                max = input_num - 1 ; // ปรับขอบเขตสูงสุด
                score -= 10 ; /*ตอบผิดลบ 10 คะแนน*/
            } else if ( input_num < randomNumber ) {
                printf( " Sorry, the winning number is HIGHER than %d. ( Score = %d ) \n ", input_num, score - 10 ) ;
                min = input_num + 1 ; // ปรับขอบเขตต่ำสุด
                score -= 10 ; /*ตอบผิดลบ 10 คะแนน*/
            } else {
                printf( " That is correct! The winning number is %d \n ", randomNumber ) ;
                printf( " Score this game : %d \n ", score ) ;
                break ; /*ออกจากลูปเมื่อตอบถูก*/
            }//end if

            if ( score == 0 ) {
                printf( " The winning number is %d \n ", randomNumber ) ;
                break;
            }//end if
        }//end while
        printf ( " Do you want to play game (1=play,-1=exit) : " ) ;
        scanf ( " %d", &playAgain ) ;
    }//end while
    return 0 ;
}//end main
