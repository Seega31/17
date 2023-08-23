#include <iostream>


int mean(int a, int b) {
	return (a + b) / 2;
}
int mean_arr(int arr[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	return sum / length;
}
void powers(int N, int M) {
	for (int i = 0; i <= M; i++) {
		int result = 1;
		for (int j = 0; j < i; j++) {
			result *= N;
		}
		std::cout << "Степень " << i << ": " << result << std::endl;
	}
}
void positive_arr(int arr1[], int length1) {
	for (int i = 0; i < length1; i++) {
		if (arr1[i] < 0) {
			arr1[i] *= -1;
		}
	}
}


int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1.
	int num1, num2;
	std::cout << "Введите первое число -> ";
	std::cin >> num1;
	std::cout << "Введите второе число -> ";
	std::cin >> num2;
	int result = mean(num1, num2);
	std::cout << "Среднее арифметическое = " << result << std::endl;
	std::cout << "\n\n";


	//Задача 2.
	int length = 5;
	int arr[] = { 1, 2, 3, 4, 5 };	
	int average = mean_arr(arr, length);
	std::cout << "Среднее арифметическое массива: " << average << std::endl;
	std::cout << "\n\n";


	//Задача 3.
	std::cout << "Введите число N -> ";
	int N;
	std::cin >> N;
	std::cout << "Введите число M -> ";
	int M;
	std::cin >> M;
	powers(N, M);
	std::cout << "\n\n";


	//Задача 4
	int length1 = 10;
	int arr1[] = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10 };
	positive_arr(arr1, length1);
	for (int i = 0; i < length1; i++) {
		std::cout << arr1[i] << " ";
	}




	return 0;
}