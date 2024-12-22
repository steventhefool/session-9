#include <stdio.h>
using namespace std;
int main (){
	int replace_index,n,value;
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d",&n);
	int a[n];
	for (int i =0;i<n;i++){
		printf ("nhap gia tri cua phan tu thu %d: ",i);
		scanf ("%d",&a[i]);
	}
	printf ("cac phan tu trong mang la: \n");
	for (int i=0; i<n; i++){
		printf ("%d. %d\n",i,a[i]);
	}
	printf ("nhap gia tri can them vao vi tri can sua: ");
	scanf ("%d",&value);
	printf ("nhap vi tri cua sua: ");
	scanf ("%d",&replace_index);
	while (1){
		if (replace_index>=0 && replace_index <n){
			a[replace_index]=value;
			break;
		}
		else {
			printf ("vi tri can chen nhap vao khong hop le.");
			continue;
		}
	}
	printf ("cac phan tu trong mang sau khi duoc sua la: \n");
	for (int i =0; i<n;i++){
		printf ("%d. %d\n",i,a[i]);
	}
	return 0;
}
