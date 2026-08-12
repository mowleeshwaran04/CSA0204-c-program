1.Write a C program to input marks (0–100) of a student and display the grade using the following conditions:
• A: 90–100
• B: 80–89
• C: 70–79
• D: 60–69
• F: Below 60
 Code:
 #include <stdio.h>

int main() {
    int mark;

    printf("Enter the mark:\n");
    scanf("%d", &mark);

    if(mark >= 0 && mark <= 59){
        printf("You failed in the exam.");
    }
    else if(mark >= 60 && mark <= 70){
        printf("You have achieved D grade.");
    }
    else if(mark >= 71 && mark <= 80){
        printf("You have achieved C grade.");
    }
    else if(mark >= 81 && mark <= 90){
        printf("You have achieved B grade.");
    }
    else if(mark >= 91 && mark <= 100){
        printf("You have achieved A grade.");
    }
    else{
        printf("Enter the marks properly.");
    }

    return 0;
}
2. Write a C program to input three integers and determine the largest number using nested if-else statements.
code :
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number: \n");
    scanf("%d",&a);
    printf("enter the second number: \n");
    scanf("%d",&b);
    printf("enter the third number: \n");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is the greatest",a);
    }
    else if(b>a && b>c ){
        printf("%d is the greatest",b);
    }
    else if(c>a && c>b){
        printf("%d is the greatest",c);
    }
    else if(a == b && b==c && a==c ){
        printf("all are equal");
    }
    return 0;
}
3. Write a C program to print the following pattern.
*****
****
***
**
*
code :
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter number of rows: \n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
4. Write a C program to input two integers start and end and print all prime numbers between them using nested loops and appropriate control statements.
code :
#include <stdio.h>

int main() {
    int start, end, i, j, prime;

    printf("Enter the starting number: \n");
    scanf("%d", &start);

    printf("Enter the ending number: \n");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++) {

        if(i < 2)
            continue;

        prime = 1;

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
