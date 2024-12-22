#include <stdio.h>
using namespace std;
void menu(){
	printf ("===============Menu==============\n");
	printf ("1. Nhap vao mang. \n");
	printf ("2. Hien thi mang. \n");
	printf ("3. Them phan tu. \n");
	printf ("4. Sua phan tu. \n");
	printf ("5. Xoa phan tu. \n");
	printf ("6. Thoat. \n");
}
int main (){
	int n,a[100],choice;
	while (1){
		menu();
		printf ("Nhap vao lua chon cua ban: ");
		scanf ("%d",&choice);
		switch (choice){
			case 1:
				printf ("nhap so phan tu trong mang: ");
				scanf ("%d",&n);
				for (int i = 0; i<n; i++){
					printf ("nhap phan tu thu %d: ",i);
					scanf ("%d", &a[i]);
				}
				break;
			case 2: 
				printf ("cac phan tu trong mang la: \n");
				for (int i =0; i<n;i++){
					printf ("phan tu thu %d la: %d\n", i, a[i]);
				}
				break;
			case 3:
				int add_index,add_value;
				printf ("nhap vao gia tri can them vao: ");
				scanf ("%d",&add_value);
				printf ("nhap vao vi tri can them: ");
				scanf ("%d",&add_index);
				if (add_index<0){
					printf ("Vi tri can them khong hop le.");
					break;
				}	
				else if (add_index>=0){
					n++;
					if (add_index <n){
						for (int i=n;i>=add_index;i--){
							a[i]=a[i-1];
						}
						a[add_index]=add_value;
					}
					if (add_index >=n){
						a[n]=add_value;
					}
					break;
				}
			case 4:
				int edit_index,edit_value;
				printf ("Nhap vi tri can sua: ");
				scanf ("%d",&edit_index);
				printf ("Nhap gia tri sua: ");
				scanf ("%d",&edit_value);
				if (edit_index <0){
					printf ("Vi tri can sua khong hop le.\n");
				}
				else if (edit_index >=0 && edit_index<n){
					a[edit_index]=edit_value;
				}
				if (edit_index >=n){
					printf ("Vi tri can sua khong hop le.\n");
				}
				break;
			case 5:
				int delete_index;
				printf ("nhap vao vi tri can xoa: ");
				scanf ("%d",&delete_index);
				if (delete_index <0){
					printf ("Vi tri can xoa khong hop le.\n");
				}
				if (delete_index>=0 && delete_index<n){
					for (int i= delete_index;i<n;i++){
						a[i]=a[i+1];
					}
					n--;
					break;
				}
			case 6:
					printf ("Thoat khoi chuong trinh.\n");
					return 0;
		}
	}
	return 0;
}
