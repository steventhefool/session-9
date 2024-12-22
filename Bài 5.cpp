#include <stdio.h>
using namespace std;
void menu(){
	printf ("==========================Menu=========================\n");
	printf ("1. Nhap so phan tu can nhap va gia tri cua cac phan tu. \n");
	printf ("2. In ra gia tri cac phan tu dang quan ly. \n");
	printf ("3. In ra gia tri cac phan tu chan va tinh tong. \n");
	printf ("4. In ra gia tri lon nhat va nho nhat trong mang. \n");
	printf ("5. In ra cac phan tu la so nguyen to trong mang va tinh tong. \n");
	printf ("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do. \n");
	printf ("7. Them mot phan tu vao vi tri chi dinh. \n");
	printf ("8. Thoat. \n");
}
bool ktrasongto (int n){
	if (n <=1){
	return false;
	}
	for (int i =2; i*i<=n;i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
int main (){
	int n,choice,a[100];
	while (1){
		menu();
		printf ("Lua chon cua ban: ");
		scanf ("%d",&choice);
		switch (choice){
			case 1:
				printf ("nhap so phan tu trong mang: ");
				scanf ("%d",&n);
				for (int i=0; i<n;i++){
					printf ("nhap phan tu thu %d: ",i+1);
					scanf ("%d",&a[i]);
				}
				break;
			case 2: 
				printf ("Gia tri cac phan tu dang quan ly: \n");
				for (int i = 0; i<n;i++){
					printf ("%d. %d\n",i+1,a[i]);
				}
				break;
			case 3:{
				int count = 0, sum=0;
				for (int i =0; i<n;i++){
					if (a[i]%2==0){
						count++;
					}
				}
				if (count!=0){
					printf ("gia tri cac phan tu chan la: ");
					for (int i =0;i<n;i++){
						if (a[i]%2==0){
							printf ("%d ",a[i]);
							sum+=a[i];
						}
					}
					printf ("\nTong cac phan tu chan la: %d\n",sum);
					break;
				}
				else if (count ==0){
					printf ("Khong co phan tu chan nao trong mang.\n");
					break;
				}
			}
			case 4: {
				int min, max;
				min = a[0];
				max = a[0];
				for (int i =1;i<n;i++){
					if (a[i]>max){
						max = a[i];
					}
					if (a[i]<min){
						min =a[i];
					}
				}
				printf ("gia tri lon nhat la: %d\n", max);
				printf ("gia tri nho nhat la: %d\n", min);
				break;
			}
			case 5:{
				int count=0,sum=0;
				for (int i =0; i <n; i++){
					if (ktrasongto(a[i])){
						count++;
					}
				}
					if (count != 0){
						printf ("cac so nguyen to o trong mang la: \n");
						for (int i =0; i <n;i++){
							if (ktrasongto(a[i])){
								printf ("%d ", a[i]);
								sum+=a[i];
							}
						}
						printf ("\ntong cac so nguyen to la: %d\n", sum);
						break;
					}
					else if (count ==0){
						printf ("khong co so nguyen to nao trong mang.\n");
						break;
					}
				}
			case 6: {
				int check,cnt=0;
				printf ("nhap vao so can kiem tra: ");
				scanf ("%d", &check);
					for (int i=0; i<n;i++){
						if (check == a[i]){
							cnt++;
						}
						}
						if (cnt==0){
							printf ("%d khong co xuat hien trong mang.\n",check);
							break;
						}
						else if (cnt!=0){
							printf ("%d xuat hien %d lan.\n",check, cnt);
							break;
						}
					}
			case 7: {
						int add_index, add_value;
						printf ("nhap gia tri can chen: ");
						scanf ("%d",&add_value);
						printf ("nhap vi tri can chen: ");
						scanf ("%d",&add_index);
						add_index-=1;
						if (add_index <0){
							printf ("vi tri chen khong hop le\n");
							break;
						}
						else if (add_index >=0){
								n++;
								if (add_index <n){
									for (int i =n;i>=add_index;i--){
										a[i]=a[i-1];
									}
									a[add_index]=add_value;
									break;
								}
						}
						else if (add_index >=n){
							a[n]=add_value;
							break;
						}
			}
			case 8: {
				printf ("Thoat khoi chuong trinh.");
				return 0;
				break;
			}
			default: {
				printf ("Lua chon khong hop le.");
				break;
			}
			}
			}
			return 0;
	}


