
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Majeedah Khan
 * ID: 201933931 
 */

 int main( void ) {

   // define and initialise variables for the problem data 

   float salary, NI_rate, tax_rate, NI_contribution, tax_contribution, take_home_salary, taxable_salary ;

   salary = 36250;
   NI_rate = 8;
   tax_rate = 15;

   NI_contribution = (NI_rate/100) * salary ;

   // tax is only deducted from salary remaining after NI deduction
   // only applies to the part of the salary remaining over 12500

   taxable_salary = (salary - NI_contribution) - 12500 ;

   if (taxable_salary > 0) {

    tax_contribution = (taxable_salary) * (tax_rate/100) ;

   }

   else {

    tax_contribution = 0 ;
    
   }

   take_home_salary = salary - NI_contribution - tax_contribution ;


    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }