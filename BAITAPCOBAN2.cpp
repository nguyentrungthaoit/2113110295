////////////NGUYEN TRUNG THAO
///////////2113110295
//////////CCQ1311LA

#include <stdio.h>
#include <conio.h>
#include <math.h>

void Bai1(int n);
void Bai2(int n);
void Bai3(int n);
void Bai4(int n);
void Bai5(int n);
void Bai6(int n);
void Bai7(int n);
void Bai8(int n);
int Bai9(int n);
void Bai10(int n);

void Bai1 (int n)
{
	float s=0;
   int i;
	for ( i=1; i<=n; i++)
	{
		s+=((float)(1))/(i * 2);
	}
   printf("Tong S=%f",s);
}


void Bai2(int n)
{
	int i;
   int s=0;
 	while(1)
   {
   	if (n>0)
      {
      	s+=n%10;
         n/=10;
      }
      else
      {
      	break;
      }
   }
   printf ("\nTong S=%d",s);
}


void Bai3 (int n)
{
	float s=0;
   float s1=0;
   float sum=0;
   int i;
	for (i=0; i<=n; i++)
	{
		s=(s+(2*i+1));
      s1=(s1+(2*i+2));
      sum+=s/s1;
	}
   printf("\nTong S=%f",sum);
}

void Bai4(int n)
{
	int du;
	int tong=0;
	do
	{
	 du=n%10;
	 if(du%2!=0)
	 {
		tong+=du;
	 }
	 n=n/10;
	}while(n>0);
	{
		printf("tong = %d",tong);
	}
}
void Bai5(int n)
{
	float s,tu=0,mau=0;
   int i;
	s=0;
   for(i=0;i<n;i++)
   {
   	tu+=(float)i;
      mau+=(float)i+1;
      s+=tu/mau;
   }
   printf("s=%f",s);
}
void Bai6(int n)
{
	int du;
	int dem=0;
	do
	{
	 du=n%10;
	 if(du%2!=0)
	 {
		dem++;
	 }
	 n=n/10;
	}while(n>0);
	{
		printf("dem so le la = %d",dem);
	}
}
void Bai7(int n)
{
	float tu=0,mau=0,tong=0;
	int i;
	for(i=0;i<n;i++)
	{
		tu+=(float)2*i+1;
		mau+=(float)2*i+2;
		tong+=tu/mau;
	}
	printf("tong= %f",tong);
}
void Bai8(int n)
{
	int du;
	printf("liet ke cac so le la: ");
   do
   {

    du=n%10;
    if(du%2!=0)
    {
    	printf("%d\t",du);
    }
    n=n/10;
   }while(n>0);
}
int Bai9(int n)
{
	int du;
	printf("Xuat ra so le cuoi cung : ");
   do
   {

    	du=n%10;
    	n=n/10;
    	if(du%2!=0)
    	{
    		printf("%d\t",du);
      	return du;
    	}else
    	{
    		printf("-1");
    		return -1;
    	}
	}while(n>0);
}
void Bai10(int n)
{
	int tong=0;
	while(1)
   {
   	printf("\nnhap vao n:");
      scanf("%d",&n);
      if(n==0)
      	break;
      else
      {
      	tong+=n;
         printf("tong = %d",tong);
      }
   }
}
void main()
{
	int n;
   printf("NHAP VAO n: ");
   scanf("%d",&n);
   Bai1(n);
   printf("\n");
   Bai2(n);
   printf("\n");
   Bai3(n);
   printf("\n");
   Bai4(n);
   printf("\n");
   Bai5(n);
   printf("\n");
   Bai6(n);
   printf("\n");
   Bai7(n);
   printf("\n");
   Bai8(n);
   printf("\n");
   Bai9(n);
   printf("\n");
   Bai10(n);
   getch();
}

