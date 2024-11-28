#include<stdio.h>
int main (){
	int n;
	int mang[100];
	int vitri;
	 printf (" ban có the nhap so phan tu muon nhap là ");
	 scanf("%d",&n);
	  
	 if (n<1||n>100){
	 printf (" so phan tu khong hop le\n");
	 }
	 for (int i=0;i<n;i++){
	 printf (" nhap phan tu thu %d\n",i+1);
	 scanf ("%d",&mang[i]);
	 }
	 printf (" mang vua nhap");
	 for(int i=0;i<n;i++){
	 printf ("%d\n",mang[i]);
	 } 
	 printf ("\n");
	
	printf(" nhap vi tri muon xoa tu 0-%d",n-1);
	scanf("%d",&vitri);
	for(int i=vitri;vitri<n;i++){
		mang[i]=mang[i+1];
		}
		n--;
		printf (" mang moi là ");
		for (int i=0;i<n;i++){
			printf ("%d",mang[i]);
			}
			return 0;
			}
		
	
	 
	
	
