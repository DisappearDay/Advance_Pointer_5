#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>



void bubble_sort(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int com_fl(const void* e1,const void* e2) {
	if (*(float*)e1 == *(float*)e2) {
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2) {
		return 1;
	}
	else return -1;
//	return ((int)(*(float*)e1 - *(float*)e2));

}

void test11() {
	float farr[] = { 1.2 , 3.4 , 3.5 , 1.7  ,  8.0 };
	int sz = sizeof(farr) / sizeof(farr[0]);
	qsort(farr,sz,sizeof(farr[0]),com_fl);
	int i = 0;
	for (i = 0; i < sz;i++) {
		printf("%f ", farr[i]);
	}
}
struct Stu
{
	char name[20];
	int age;
};

int cmp_Stu_age(const void* e1, const void* e2) {
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}


void test22() {
	struct Stu s[3] = { {"zhangsan",18},{"lisi",28} ,{"wangwu",16} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_Stu_age);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%s ", s[i].name);
		printf("%d  ", s[i].age);
		
	}
}

int cmp_Stu_name(const void* e1, const void* e2) {
	//strcmp是对字符串进行比较
	strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test33() {
	struct Stu s[3] = { {"zhangsan",18},{"lisi",28} ,{"wangwu",16} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_Stu_name);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%s ", s[i].name);
		printf("%d  ", s[i].age);

	}
}


int main() {

	test33();
//	test22();
//	test11();
//	int arr[10] = {1,3,5,7,9,2,4,6,8,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
	/*for (i = 0; i < sz;i++) {
		printf("%d ", arr[i]);
	}*/
	return 0;
}
//void * 类型的指针  可以接受任意类型的地址
//void * 类型的指针  不能进行解引用操作
//void * 类型的指针  不能进行+-整数的操作

