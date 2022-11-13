#include<stdio.h>  
int main()   
{   
double English , Hindi ,Maths, Science, SocialStudy, CGPA , CGPAper ; 
printf("*****CGPA CALCULATOR****")
printf("\nEnter a English mark: ");
scanf("%lf",&English);
printf("\nEnter a Hindi mark: ");
scanf("%lf",&Hindi);
printf("\nEnter a Maths mark: ");
scanf("%lf",&Maths);
printf("\nEnter a Science mark: ");
scanf("%lf",&Science);
printf("\nEnter a SocialStudy mark: ");
scanf("%lf",&SocialStudy);
CGPA = (English+Hindi+Maths+Science+SocialStudy)/(5.0);  
CGPAper = (float)(9.5 * (CGPA));  
printf("\n\n CGPA percentage is: %f",CGPAper);  
return (0);  
}  