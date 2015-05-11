///////////NGUYEN TRUNG THAO//////////////
///////////2113110295////////////

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 70
void NhapMang(int a[],int n);
void XuatMang(int a[],int n);
int Min(int a[],int n);
void TrungBinh(int a[],int n);
int SoChinhPhuong(int a);
void LietKeSoChinhPhuong(int a[],int n);
void demsolonhon2x(int a[],int n,int x);
void HoanVi(int &a,int &b);
void MangGiam(int a[],int n);

void NhapMang(int a[],int n)
{
	if(n<=70)
   {
		int i;
		for(i=0;i<n;i++)
   	{
      	printf("a[%d]=",i);
      	scanf("%d",&a[i]);
   	}
   }
   else
   {
   	printf("NHAP SAI N >=70");
   }
}
void XuatMang(int a[],int n)
{
	printf("\nMANG VUA NHAP:\n");
	int i;
	for(i=0;i<n;i++)
   {
   	printf("\t%d",a[i]);
   }
   printf("\n");
}
int Min(int a[],int n)
{
   int temp = a[0];
   for(int i=1;i<n;i++)
   if(temp>a[i])
      temp=a[i];
   return temp;
}
void TrungBinh(int a[],int n)
{
	float d=0,t=0,tb;
   int i;
  for(i=0;i<n;i++)
  {
     if(a[i]%3==0)
     {
     		t+=(float)a[i];
         d++;
     }
  }
  tb=t/d;
  printf("\nTRUNG BINH CAC SO CHIA HET CHO 3 TRONG MANG LA: %0.2f\n",tb);
}
int SoChinhPhuong(int a)
{
	int i;
	i=(int)sqrt(a);
	if(a==i*i)
   {
		return 1;
   }
	return 0;
}
void LietKeSoChinhPhuong(int a[],int n)
{
	printf("\nVI TRI SO CHINH PHUONG TRONG MANG LA: \n");
	int i;
 	for(i=0;i<n;i++)
   {
      if(SoChinhPhuong(a[i])==1)
      {
      	printf("\t%d",i);
      }
   }
}
void demsolonhon2x(int a[],int n,int x)
{
	int i,d=0;
   for(i=0;i<n;i++)
   {
   	if(a[i]>(2*x))
      {
      	d++;
      }
   }
   printf("\nTONG CAC SO TRONG MANG >2X LA: %d\n",d);
}
void HoanVi(int &a,int &b)
{
	int temp=a;
   a=b;
   b=temp;
}
void MangGiam(int a[],int n)
{
 int i,j,max;
 for(i=0;i<n-1;i++)
 {
 	max = i;
   for(j=i+1;j<n;j++)
   {
   	if(a[max]<a[j])
       max = j;
   }
   HoanVi(a[i],a[max]);
 }
 XuatMang(a,n);
}
void main()
{
	clrscr();
	int a[MAX];
   int n,x;
   int temp;
   printf("NHAP VAO SO PHAN TU: ");
   scanf("%d",&n);
   NhapMang(a,n);
   XuatMang(a,n);
   temp=Min(a,n);
   printf("\nMIN=%d\n",temp);
   TrungBinh(a,n);
   LietKeSoChinhPhuong(a,n);
   printf("\nNHAP VAO X: ");
   scanf("%d",&x);
   demsolonhon2x(a,n,x);
   MangGiam(a,n);
   getch();
}