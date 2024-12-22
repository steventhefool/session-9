#include <stdio.h>
using namespace std;
void menu(){
	printf ("Menu\n");
	printf ("1. Nhap kich co va gia tri cac phan tu cua mang.\n");
	printf ("2. In gia tri cac phan tu cua mang theo ma tran.\n");
	printf ("3. In gia tri cac phan tu le va tinh tong.\n");
	printf ("4. In ra cac phan tu nam tren duong bien va tinh tich.\n");
	printf ("5. In ra cac phan tu nam tren duong cheo chinh.\n");
	printf ("6. In ra cac phan tu nam tren duong cheo phu.\n");
	printf ("7. In ra dong co tong gia tri cac phan tu la lon nhat.\n");
	printf ("8. Thoat\n");
}
int main (){
	while (1){
	int c,r,a[100][100],choice;
	menu();
	printf ("nhap lua chon cua ban: ");
	scanf ("%d",&choice);
	switch (choice){
		case 1: {
			printf ("nhap so hang cua mang: ");
			scanf ("%d",&c);
			printf ("nhap so cot cua mang: ");
			scanf ("%d",&r);
			for (int i =0; i < c; i++){
				for (int j=0;j<r;j++){
			printf ("nhap gia tri cua tung phan tu: ");
			scanf ("%d", &a[j][i]);
			}
			}
			break;
		}
		case 2: {
			printf ("Cac gia tri cua phan tu duoc trinh bay theo ma tran la: \n");
			for (int i=0; i<c;i++){
				for (int j=0;j<r;j++){
					printf ("%d  ",a[j][i]);
				}
				printf ("\n");
			}
			break;
		}
		case 3: {
			int sum;
			printf ("Cac phan tu la so le trong mang la: \n");
			for (int i=0 ; i<c; i++){
				for (int j=0 ; j<r; j++){
					if (a[j][i]%2!=0){
						printf ("%d ",a[j][i]);
						sum+=a[j][i];
					}
					printf ("\n");
				}
			}
			printf ("Tong cac phan tu so le la: %d\n",sum);
			break;
		}	
		case 4: {
			int times=1;
			printf ("Cac phan tu nam tren duong bien la: \n");
			for (int i =0;i<c;i++){
				for (int j=0;j<r;j++){
					if (j==0 || i==0 || i==c-1 || j==r-1 ){
						printf ("%d  ", a[j][i]);
						times*=a[j][i];
					}
				printf ("\n");
				}
			}
			printf ("Tich cac phan tu nam tren duong bien la: %d\n",times);
			break;
		}
		case 5: {
			int t;
			printf ("Cac phan tu nam tren duong cheo chinh la: \n");
			if (r>c){
				t=c;
			}
			else if (r<c){
				t=r;
			}
			else if (r==c){
				t=r;
			}
			for (int i =0; i<t;i++){
				printf ("%d \n",a[i][i]);
			}
			break;
		}
		case 6: {
				printf ("phan tu tren duong cheo phu cua ma tran la: \n");
				for (int i=c,j=0; i>=j-1;i--){
				printf ("%d \n",a[i][j]);
				j++;
				}
			break;
		}
		case 7:{
			int max_sum=0,sum=0,dong,i,j;
			for (i =0;i<c;i++){
				for (j=0;j<r;j++){
					sum+=a[j][i];
				}
				if (sum > max_sum){
					max_sum =sum;
					dong=i;
				}
				sum=0;
			}
			for (i=0;i<r;i++){
				for (j=0;j<c;j++){
					sum+=a[i][j];
				}
				if (sum > max_sum){
					max_sum=sum;
					dong=i;
				}
				sum=0;
			}
			printf ("Dong co tong cac gia tri lon nhat la dong %d\n", dong+1);
			printf ("Tong cua dong do la: %d\n",max_sum);
			break;
		}
		case 8: {
			printf ("Thoat khoi chuong trinh.\n");
			return 0;
		}
		default: {
			printf ("Lua chon khong hop le.\n");
		}
	}
}
}
