int main() {

    char Employee_ID[10] ;
    int WorkingHour ;
    int Salary ;

    int Answer = 0 ;

    printf( "Input the Employees ID(Max. 10 chars):" ) ;
    scanf( "%s", Employee_ID ) ;
    printf( "Input the working hrs:" ) ;
    scanf( "%d", &WorkingHour ) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%d", &Salary ) ;

    Answer = WorkingHour * 30 * Salary ;

    printf( "\n\n" ) ;
    printf( "Employee ID = %s", Employee_ID ) ;
    printf( "\nSalary = %d THB", Answer ) ;
    printf( "\n\n" ) ;

    return 0 ;
}//end main function
