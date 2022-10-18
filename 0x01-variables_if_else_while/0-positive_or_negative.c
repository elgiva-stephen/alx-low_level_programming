#include <stdlib.h>                                                                                                                     

#include <time.h>                                                                                                                       

#include <stdio.h>                                                                                                                      

                                                                                                                                        

/**                                                                                                                                     
 *
 *  * main - assigns a random number to variable n when executed                                                                           
 *
 *   * Return: Always 0 (Successful)                                                                                                        
 *
 *    */                                                                                                                                     

                                                                                                                                        

int main(void)                                                                                                                          

{                                                                                                                                       

	        int n;                                                                                                                          

		                                                                                                                                        

		        srand(time(0));                                                                                                                 

			        n = rand() - RAND_MAX / 2;                                                                                                      

				        if (n > 0)                                                                                                                      

						                printf("%Id is positive\n", n);                                                                                         

					        else if (n == 0)                                                                                                                

							                printf("%Id is zero\n", n);                                                                                             

						        else if (n < 0)                                                                                                                 

								                printf("%Id is negative\n", n);                                                                                         

							        return (0);                                                                                                                     

								
