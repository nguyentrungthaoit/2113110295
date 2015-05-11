////////////////NGUYEN TRUNG THAO//////////////
///////////////2113110295/////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
int demkhoang(char str[]);
int demktso(char str[]);
int demkthoa(char str[]);
int demktthuong(char str[]);
int chuyensanghoa(char str[]);
int chuyensangthuong(char str[]);


int demkhoang(char str[])
{
   int i=0;
   int dem=0;
   while(str[i]!='\0')
   {
   	if(str[i]==' ')
      	dem++;
      i++;
   }
   return dem;
}
int demktso(char str[])
{
       int i,dem=0;
       for (i=0;i<strlen(str);i++)
        		if (isdigit(str[i]))
                     dem++;
       return dem;
}
int demkthoa(char str[])
{
       int i,dem=0;
       for (i=0;i<strlen(str);i++)
        		if (isupper(str[i]))
                     dem++;
       return dem;
}
int demktthuong(char str[])
{
       int i,dem=0;
       for (i=0;i<strlen(str);i++)
        		if (islower(str[i]))
                     dem++;
       return dem;
}
int chuyensanghoa(char str[])
{
	int i=0;
   while(str[i])
   {
      putchar (toupper(str[i]));
      i++;
   }
   return i;
}
int chuyensangthuong(char str[])
{
	int i=0;
   while(str[i])
   {
      putchar (tolower(str[i]));
      i++;
   }
   return i;
}

int main()
{
	clrscr();
	char str[MAX];
   char chuoi1[MAX],chuoi2[MAX];
   int temp;
	printf("NHAP VAO CHUOI: ");
   fflush(stdin);
	gets(str);
   temp=strlen(str);
   printf("so ky tu trong chuoi la: %d",temp);

   temp=demkhoang(str);
   printf("\nso khoang trang trong chuoi la: %d",temp);
   temp=demktso(str);
   printf("\ndem so trong chuoi la: %d",temp);
   temp=demkthoa(str);
   printf("\ndem ky tu hoa trong chuoi la: %d",temp);
   temp=demktthuong(str);
   printf("\ndem ky tu thuong trong chuoi la: %d",temp);
   printf("\nCHUYEN SANG CHU HOA:\n");
   chuyensanghoa(str);
   printf("\nCHUYEN SANG CHU THUONG:\n");
   chuyensangthuong(str);
   printf("\nNHAP VAO CHUOI 1: ");
   fflush(stdin);
	gets(chuoi1);
   printf("\nNHAP VAO CHUOI 2: ");
   fflush(stdin);
	gets(chuoi2);
   strcat(chuoi1,chuoi2);
   printf("GHEP CHUOI: ");
   puts(chuoi1);
   getch();
	return 0;
}
