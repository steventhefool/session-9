#include <iostream>
using namespace std;
int main (){
	int a[100],n,delete_index;
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d",&n);
	for (int i=0; i<n;i++){
		printf ("nhap phan tu thu %d trong mang: ",i);
		scanf ("%d",&a[i]);
	}
	printf ("nhap vi tri phan tu can xoa: ");
	scanf("%d",&delete_index);
	if (delete_index <0 || delete_index >n){
		printf ("vi tri xoa khong hop le.");
	}
	else {
		for (int i =delete_index;i<n;i++){
			a[i]=a[i+1];
		}
		n--;
}
	printf ("mang sau khi duoc xoa la: \n");
	for (int i =0; i<n;i++){
		printf ("%d\n",a[i]);
	}
	return 0;
}
