/////////////////NGUYEN TRUNG THAO
/////////////////2113110295
////////////////CCQ1311LA
#include <stdio.h>
#include <conio.h>
#include <math.h>

int ktsnt(int n);
int ktsht(int n);
void lksnt(int n);
void bai68(int n);
int giai_thua(int n);
void bai70(int n);
void bai72(int n);
int uscln(int a,int b);
float bscnn(float a,float b);
void hoanvi(int &a,int &b);
void bai88(int n);
int TongUocSo(int n);
void SapTang(int a[],int n);
void Xuat(int a[],int n);
void Bai93(int n);


int ktsnt(int n)
{
	int i;
 if(n<=1)
 	return 0;
 for(i=2;i<sqrt(n);i++)
 {
    if(n%i==0)
    	return 0;
 }
 return 1;
}
int ktsht(int n)
{
   int i;
   int tong=0;
   for(i=1;i<n;i++)
   {
   	if((n%i)==0)
      {
      	tong+=i;
      }
   }
   if(tong==n)
   {
   	return 1;
   }
   return 0;
}
void lksnt(int n)
{
	int i;
   printf("\nCAC SO NGUYEN TO TU 2->N LA:\n");
  	for(i=2;i<=n;i++)
   {
   	if(ktsnt(i)==1)
      	printf("%d \t",i);
   }

}

void bai68(int n)
{
	int i;
   float s=0;
   for(i=1;i<=n;i++)
   {
      s+=1/(float)i;
   }
   printf("S= %0.2f",s);
}
void bai70(int n)
{
	int i;
   float tu=0,mau=0;
   float s=0;
	for(i=0;i<=n;i++)
   {
   	tu+=(float)i;
      mau+=(float)i+1;
      s+=tu/mau;
   }
   printf("S= %0.2f",s);
}

int giai_thua(int n)
{
  int i,giaithua;
  if (n==0)
    return 1;
  else
    giaithua=1;
  for (i=1;i<=n;i++)
    giaithua=giaithua*i;
  return giaithua;
}
void bai72(int n)
{
	float tu=0,mau=1,s=0;
   int i;
   for(i=1;i<n;i++)
   {
    	tu+=(float)i;
      mau+=(float)giai_thua(i);
      s+=tu/mau;
   }
   printf("S= %0.2f",s);
}
int uscln(int a,int b)
{
	while(a!=b)
   	if(a>b)
			a=a-b;
		else
			b=b-a;
	return a;
}
float bscnn(float a,float b)
{
	float s;
	s=(a*b)/(float)uscln(a,b);
   return s;
}
void hoanvi(int &a,int &b)
{
	int temp=a;
   	a=b;
      b=temp;
}
void bai88(int n)
{
	int du;
	int demle=0,demchan=0;
	do
	{
	 du=n%10;
	 if(du%2!=0)
	 {
		demle++;
	 }
    else
    {
    	demchan++;
    }

	 n=n/10;
	}while(n>0);
	{
		printf("SO SO LE = %d",demle);
      printf("\n SO SO CHAN = %d",demchan);
	}
}
void SapTang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
   {
   	if(a[i]>a[i+1])
      {
      	hoanvi(a[i],a[i+1]);
      }
   }
}
void Xuat(int a[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
   	printf("%d",a[i]);
   }
}
void Bai93(int n)
{
    int b[100];
    int k = 0;
        while(n != 0){
            int dv = n % 10;
            b[k++] = dv;
            n = n / 10;
        }
        SapTang(b, k);
        Xuat(b, k);
}
int TongUocSo(int n)
{
	int tongus=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			tongus=tongus+i;
	}
	return tongus;
}
void main()
{
	int n,temp,a,b;
   float ftemp;
   int kt;
   printf("\n");
   do
   {
   	clrscr();
      printf("MENU:\n");
      printf("-----------------------\n");
      printf("\n1: KIEM TRA SO NGUYEN TO");
      printf("\n2: KIEM TRA SO HOAN THIEN");
      printf("\n3: LIET KE CAC SO NGUYEN TO TU 2 -> n");
      printf("\n4: BAI TAP 68");
      printf("\n5: BAI TAP 70");
      printf("\n6: BAI TAP 72");
      printf("\n7: UOC SO CHUNG LON NHAT");
      printf("\n8: BOI SO CHUNG NHO NHAT");
      printf("\n9: HOAN VI 2 SO");
      printf("\n10: BAI TAP 88");
      printf("\n11: TONG CAC UOC SO DUONG TU 1->N");
      printf("\n12: SAP XEP SO NGUYEN N TANG DAN\n");
      printf("\ESC: THOAT");
      printf("\nSELECT NUMBER: ");
      scanf("%d",&kt);
      switch(kt)
      {
      	case(1):
         	   printf("NHAP VAO N: ");
   				scanf("%d",&n);
                  temp=ktsnt(n);
   				if(temp==0)
   				{
   					printf("\nN KHONG PHAI LA SO NGUYEN TO\n");
               }
   				else
   				{
   					printf("\nN LA SO NGUYEN TO\n");
   				}
               break;
         case(2):
                 printf("NHAP VAO N: ");
                 scanf("%d",&n);
                 temp=ktsht(n);
                 if(temp==0)
                 {
                 		printf("N KHONG LA SO HOAN THIEN");
                 }
                 else
                 {
                 		printf("N LA SO HOAN THIEN");
                 }

         	break;
         case(3):
            		printf("NHAP VAO N: ");
                 	scanf("%d",&n);
            		bai68(n);
            		break;
         case(4):
            		printf("NHAP VAO N: ");
                 	scanf("%d",&n);
            		bai68(n);
            		break;

         case(5):
         			printf("NHAP VAO N: ");
                 	scanf("%d",&n);
            		bai70(n);
            		break;
         case(6):
         			printf("NHAP VAO N: ");
                 	scanf("%d",&n);
            		bai72(n);
            		break;
         case(7):
      				printf("NHAP VAO A: ");
                 	scanf("%d",&a);
         			printf("NHAP VAO B: ");
                 	scanf("%d",&b);
                  temp=uscln(a,b);
                  if(temp==0)
                  {
                  	printf("A VA B KHONG CO UOC SO CHUNG LON NHAT!!");
                  }
                  else
                  {
                  	printf("UOC SO CHUNG LON NHAT CUA A VA B LA: %d",temp);
                  }
                  break;
         case(8):
      				printf("NHAP VAO A: ");
                 	scanf("%d",&a);
         			printf("NHAP VAO B: ");
                 	scanf("%d",&b);
                  ftemp=bscnn(a,n);
                  if(temp==0)
                  {
                  	printf("A VA B KHONG CO BOI SO CHUNG NHO NHAT  !!");
                  }
                  else
                  {
                  	printf("BOI SO CHUNG NHO NHAT CUA A VA B LA: %0.2f",ftemp);
                  }
                  break;
         case(9):
         			printf("NHAP VAO A: ");
                 	scanf("%d",&a);
         			printf("NHAP VAO B: ");
                 	scanf("%d",&b);
                  printf("A=%d AND B=%d\n",a,b);
                  hoanvi(a,b);
                  printf("SAU KHI HOAN VI:\n");
                  printf("A=%d AND B=%d",a,b);
                  break;
         case(10):
         			printf("NHAP VAO N: ");
                 	scanf("%d",&n);
                  bai88(n);
                  break;
         case(11):
         			printf("NHAP VAO N: ");
                 	scanf("%d",&n);
                  temp=TongUocSo(n);
                  if(n>0)
                  	printf("TONG CAC UOC SO DUONG TU 1->N LA: %d",temp);
                  else
                  	printf("NHAP SAI N>=1");
                  break;
         case(12):
         			printf("NHAP VAO N: ");
                 	scanf("%d",&n);
                  printf("N TANG DAN: \n");
                  Bai93(n);
                  break;

         default:
         	printf("\nBAN NHAP SAI");
      }
   }while(getch() !=27);


}

