#include<stdio.h>
int main(){
    int a,b,action,ans;
    printf("// enter arithmatic action which you want to perform //\n");
    printf("\t1. + (addition)\n\t2. - (substraction)\n\t3. * (multiplication)\n\t4. / (division)\n\t5. (modulo)\n");
    printf("\nenter first value : ");
    scanf("%d",&a);
    printf("enter action which you want to perform : ");
    scanf("%d",&action);
    printf("enter second value : ");
    scanf("%d",&b);

    switch (action){
    case 1:
    ans = a + b;
    printf("\naddition of %d and %d is : %d",a,b,ans);
    break;

    case 2:
    ans = a - b;
    printf("\nsubstraction of %d and %d is : %d",a,b,ans);
    break;

    case 3:
    ans = a * b;
    printf("\nmultiplication of %d and %d is : %d",a,b,ans);
    break;

    case 4:
    ans = a / b;
    printf("\ndivision of %d and %d is : %d",a,b,ans);
    break;

    case 5:
    ans = a % b;
    printf("\nmodulo of %d and %d is : %d",a,b,ans);
    break;

    default:
    printf("\nthis action can't be perform, please select from given options...");
    break;
}
return 0;
}
