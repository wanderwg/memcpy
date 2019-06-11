#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//#include<string.h>
void* Memcpy( void* dest, const void* src,size_t num){
	assert(dest != NULL);
	assert(src != NULL);
	const char* psrc = (const char*)src;
	char* pdest = (char*)dest;
	for (size_t i = 0; i < num; ++i) {
		pdest[i] = psrc[i];
	}
	return dest;
}
int main() {
	int arr1[4] = { 0 };
	int arr2[4] = { 1,2,3,4 };
	Memcpy(arr1, arr2, 16);//单位是字节，所以不能填4
	for (int i = 0; i < 4; ++i) {
		printf("%d ", arr1[i]);
	}
	system("pause");
	return 0;
}
