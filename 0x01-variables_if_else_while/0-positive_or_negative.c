#include <stdlib.h> 
#include <time.h> 
/* more headers goes there */ 
  
/* betty style doc for function main goes there */
 
/**
* main - is the main function that print random numbers
*
* Return: always return 0
*/

int main(void)
{
int n;
srand(time(0)); 
n = rand() - RAND_MAX / 2; 
/* your code goes there*/ 
if(n > 0)
{
Printf("%d is postive\n", n);
}
else if (n < 0)
{
Printf("%d is negative\n", n);
}
else
{
Printf("%d is zero\n", n);
}
return (0); 
}
