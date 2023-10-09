#include <stdio.h>
// main(){
//     char a;
//     printf("enter value : ");
//     scanf("%c", &a);
//     if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
//         printf("alfabet");
//     }
//     else{
//         printf("not alfabet");
//     }
// }

// main(){
//     int a;
//     printf("enter a number : ");
//     scanf("%d", &a);
//     if (a%2==0){
//         printf("even");
//     }
//     else{
//         printf("odd");
//     }

// }

// main(){
//     char name;
//     printf("enter name: ");
//     scanf("%c", &name);
//     if(name>='a'&& name<='z'){
//         printf("lower");
//     }
//     else{
//         printf("upper");
//     }
// }

// main(){
//     int a;
//     printf("enter numaber : ");
//     scanf("%d", &a);
//     if (a%5==0&&a%11==0){
//         printf("yes");
//     }
//     else{
//         printf("no");
//     }

// }

// main(){
//     int a, b, c;
//     printf("enter number : ");
//     scanf("%d%d%d", &a,&b,&c);
//     if(a<b&&b<c){
//         printf("c is big number");
//     }
//     else if (a<c){
//         printf("b is big number");
//     }
//     else{
//         printf("a is big number");
//     }

// }

// main(){
//     int age;
//     printf("enter age : ");
//     scanf("%d", &age);
//     if(age>=18){
//         printf("adult");
//     }
//     else if(age>13&&age<18){
//         printf("teenager");
//     }
//     else{
//         printf("child");

//     }
// }

// main(){
//     int age;
//     printf("enter age : ");
//     scanf("%d", &age);

//     age >= 18 ? printf("adulat\n") : printf("not adulat\n");
// }

// main(){
//     int a = 4;
//     for (int i = 0; i <= a;i++){
//         for (int j = 0; j < i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// main(){
//     int row = 5;
//     for (int i = 0; i <= row;i++)
//     {
//         for (int j = 0; j<row-i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int i;
//     int j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 4; j >= i; j--)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// main(){
//     int day;
//     printf("enter day: ");
//     scanf("%d", &day);
//     switch (day){
//         case 1:
//             printf("M");
//             break;
//         case 2:
//             printf("T");
//             break;
//         case 3:
//             printf("w");
//             break;
//         case 4:
//             printf("t");
//             break;
//         case 5:
//             printf("F");
//             break;
//         case 6:
//             printf("S");
//             break;
//         case 7:
//             printf("S");
//             break;
//         default:
//             printf("not valid day");
//     }

// }

// main(){
//     int number;
//     printf("enter number : ");
//     scanf("%d", &number);
//     if(number>=0){
//         printf("positive\n");
//         if(number%2==0){
//             printf("even mumber");
//         }
//         else{
//             printf("odd number");
//         }

//     }
//     else{
//             printf("negative number");
//         }
// }

// main(){
//     int marks;
//     printf("enter marks");
//     scanf("%d", &marks);
//     if(marks<=30){
//         printf("fail");
//     }
//     else if(marks>30&&marks<=100){
//         printf("pass");
//     }
//     else{
//         printf("valid marks");
//     }
// }

// main(){
//     char ch;
//     printf("enter value: ");
//     scanf("%c", &ch);
//     if((ch>='a')&&(ch<='z')){
//         printf("lowwer cash");
//     }
//     else if((ch>='A')&&(ch<='Z')){
//         printf("upper cash");
//     }
//     else{
//         printf("not english letter");
//     }
// }

// main(){
//     int a, b;
//     printf("enter a number: ");
//     scanf("%d", &a);

//     printf("enter b number: ");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a-b;
//     printf("A=%d\nB=%d", a, b);
//     // printf("%da is\n", a);
//     // printf("%db is", b);
// }

// main(){
//     int a, b, c;
//     printf("enter a number");
//     scanf("%d",&a);
//     printf("enter b number");
//     scanf("%d",&b);
//     printf("A=%d,B=%d\n", a, b);
//     c = a;
//     a = b;
//     b = c;
//     printf("A=%d\nB=%d", a, b);
// }

// main(){
//     int a;
//     printf("enter value: ");
//     scanf("%d", &a);
//     for (int i = 0; i < a;i++){
//         printf("hello\n");
//     }
//     return 0;
// }

// main(){
//     int a=1;
//     // printf("enter value: ");
//     // scanf("%d", &a);
//     while (a<7)
//     {
//         // printf("A=%d\n",a);
//         printf("hello\n");
//         a++;
//     }

// }

// main(){
//     for (int i = 0; i < 5;i++){
//         if(i==3){
//             // break;
//             continue;
//         }
//         printf("%d\n", i);
//     }
//     printf("end");
// }

// main()
// {
//     int n;
//     do
//     {
//         printf("enter number : ");
//         scanf("%d", &n);
//         printf("%d\n", n);

//         if (n % 2 != 0)
//         {
//             break;
//         }
//     } while (1);
//     printf("TNK\n");
// }

// main(){
//     printInfo(1);
// }

// void printInfo(int a){
//     printf("hello\n");
// }


// main(){
//     char ch;
//     printf("enter you country");
//     scanf("%c", &ch);
//     if (ch =='i')
//     {
//         namste();
//     }
//     else{
//         bonjour();
//     }
    
// }

// void namste(){
//     printf("namste\n");
// }

// void bonjour(){
//     printf("bonjour");
// }


// main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d", &n);
//     table(n);
// }

// void table(int n){
//     for (int i = 1; i <= 10;i++){
//         printf("%d*%d=%d\n",n,i, i * n);
//     }
// }

main(){
    int i, n;
    printf("enter any number : ");
    scanf("%d", &n);
    for (i = 1; i <= 10;i++){
        printf("%d*%d=%d\n", n, i, i*n);
    }
}