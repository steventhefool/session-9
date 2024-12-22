#include <stdio.h>
using namespace std;
int main (){
	int n,a[100],add_index,current_length,value;
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d",&n);
	current_length = n;
	for (int i =0;i<n;i++){
		printf ("nhap gia tri cua phan tu thu %d: ",i);
		scanf ("%d",&a[i]);
	}
	printf ("gia tri cac phan tu trong mang la: \n");
	for (int i =0;i<n;i++){
		printf ("%d. %d\n",i,a[i]);
	}
	printf ("Nhap gia tri them vao: ");
	scanf ("%d",&value);
	while (1){
	printf ("nhap vi tri can chen: ");
	scanf ("%d",&add_index);
	if (add_index >0){
		if (add_index <current_length){
			for (int i =current_length;i>=add_index;i--){
				a[i]=a[i-1];
			}
			a[add_index]=value;
			break;
		}
		if (add_index >=current_length){
			a[current_length]=value;
			break;
		}
	}
	else {
		printf ("Nhap sai roi, vi tri can chen khong hop le.\n");
		continue;
	}
}
	printf ("Mang sau khi duoc chen vao la: \n");
	for (int i =0; i<=current_length; i++){
		printf ("%d. %d\n",i,a[i]);
	}
	return 0;
}
