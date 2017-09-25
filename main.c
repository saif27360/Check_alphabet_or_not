 #include<stdio.h>
main(){
char ch;
printf("Enter any character : ");
scanf("%c", &ch);
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
printf("Alphabet");
}
else {
printf("Not an alphabet");
}
return 0;
}
