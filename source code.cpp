#include<stdio.h> 
main() 
{  
int marks[5]; 
int i=0;
float avg=0.0;
int sum=0; 
char grade='F';
printf("Enter the marks in 5 subjects : "); 
for(i=0;i<5;i++)
{ 
scanf("%d,",&marks[i]); 
}
for(i=0;i<5;i++)
{ 
sum = sum+marks[i];
avg = sum/5;
}
printf("\nThe average is : %f",avg) ;
//85 - 100 -> Grade A 70 - 84 -> Grade B 55 - 69 -> Grade C 40 - 54 -> Grade D Below 40 -> Grade F
if(avg>=85)
{ 
grade='A'; 
} 
else if(avg>=70)
{ 
grade='B'; 
} 
else if(avg>=55)
{ 
grade='C'; 
} 
else if(avg>=40)
{ 
grade='D'; 
} 
else
grade='F'; 
printf("\nThe grade alloted is : %c",grade); 
}
