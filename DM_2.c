#include <stdio.h>

void factorization(){
	int a;
	scanf("%d", &a); // запись числа
	int k = a;
	int mas[a];
	for(int g = 0; g < a; g++){ //обнуление массива
		mas[g] = 0;
	}
	int i = 2;
	while(a != 1){
		if(a % i == 0){
			int count = 0;
			for(int j = 1; j < (i + 1); j++){
				if(i % j == 0){
				count++;
				}
			}
			if(count == 2){
			mas[i] += 1;
			a = a / i;
			i = 2;
			}
		}
		else{
			i++;
		}
		
	}
	for(int s = 0; s < k; s++){
		if(mas[s] != 0){
		printf("%d: %d\n", s, mas[s]);
		}
	}
}


int main(){
	printf("\n\tМосковский Авиационный Институт\n");
	printf("\t(Национальный Исследовательский Университет)\n");
	printf("\tФакультет №3 \"Системы управления, \n\tинформатика и электроэнергетика\"\n");
	printf("\t\tКафедра 308\n");
	printf("\t\"Информационные системы и технологии\"\n\n");
	printf("\t\t\t\tГруппа М3О-121Б-19\n"); 
	printf("\t\t\t\tСтудент Умургулов Ринат Ихсанович\n");
	printf("\t\t\t\tДоцент к. т. н. Гридин А. Н.\n\n");
	printf("\t\tМосква\n");
	printf("\t\t2020\n\n");
	printf("Введите команду, которую хотите выполнить\n1 - Факторизацию числа\n2 - Закрыть программу\n");
	int p;
	scanf("%d", &p);
	if(p == 1){
		factorization();
	}
	if(p == 2){
		printf("Досвидос\n");
	}
}
