#include <stdio.h>
#include <string.h>

struct Student {
    char Name[ 20 ] ;
    char ID[ 5 ] ;
    float ScoreSub[ 5 ] ;
} typedef S ;

S STD[ 3 ] ;

void data() ;
void Grade() ;

int main() {
    data() ;
    Grade() ;
    return 0 ;
}//end main function

void data() {
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "Enter the details of Student %d:\n" , i + 1 ) ;
        printf( "Name: " ) ;

        fgets( STD[ i ].Name , 20 , stdin ) ;
        STD[ i ].Name[ strcspn( STD[ i ].Name , "\n" ) ] = 0 ;
        
        printf( "ID: " ) ;
        scanf( "%s" , STD[ i ].ID ) ;

        for ( int j = 0 ; j < 5 ; j++ ) {
            printf( "Scores in Subject %d: " , j + 1 ) ;
            scanf( "%f" , &STD[ i ].ScoreSub[ j ] ) ;
        }//end for กรอกคะแนน
        getchar() ;
    }//end funtion data
    printf( "\n" ) ;
}

void Grade() {
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "Student %d:\n" , i + 1 ) ;
        printf( "Name: %s\n" , STD[ i ].Name ) ;
        printf( "ID: %s\n" , STD[ i ].ID ) ;
        printf( "Scores:" ) ;

    for ( int j = 0 ; j < 5 ; j++ ) {
        printf( " %2.0f" , STD[ i ].ScoreSub[ j ] ) ;
    }//end for แสดงคะแนน
    printf( "\n" ) ;
    printf( "Grades:" ) ;
    for ( int j = 0 ; j < 5 ; j++ ) {
        if ( STD[i].ScoreSub[ j ] >= 80 ) {
            printf( " %s" , "A" ) ;
        } else if ( STD[ i ].ScoreSub[ j ] >= 75 && STD[ i ].ScoreSub[ j ] < 80 ) {
            printf( " %s" , "B+" ) ;
        } else if ( STD[ i ].ScoreSub[ j ] >= 70 && STD[ i ].ScoreSub[ j ] < 75 ) {
            printf( " %s" , "B" )  ;
        } else if ( STD[ i ].ScoreSub[ j ] >= 65 && STD[ i ].ScoreSub[ j ] < 70 ) {
            printf( " %s" , "C+" ) ;
        } else if ( STD[ i ].ScoreSub[ j ] >= 60 && STD[ i ].ScoreSub[ j ] < 65 ) {
            printf( " %s" , "C" )  ;
        } else if ( STD[ i ].ScoreSub[ j ] >= 55 && STD[ i ].ScoreSub[ j ] < 60 ) {
            printf( " %s" , "D+" ) ;
        } else if ( STD[ i ].ScoreSub[ j ] >= 50 && STD[ i ].ScoreSub[ j ] < 55 ) {
            printf( " %s" , "D" ) ;
        } else {
            printf ( " %s" , "F" ) ;
        }//end if 
    }//end for ปริ้นท์เกรด

    float Average = 0 ;
    for ( int j = 0 ; j < 5 ; j++ ) {
        Average += STD[ i ].ScoreSub[ j ] ;
    }//end for หาค่าเฉลี่ย
    printf( "\n" ) ;
    printf( "Average Scores: %.1f" , Average / 5 ) ;
    printf( "\n\n" ) ;


    }//end funtion Grade
}//end void Grade