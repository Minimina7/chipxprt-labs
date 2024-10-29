#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846

int addI (int number1, int number2){
	return number1 + number2;
}

float addF (float number1, float number2){
	return number1 + number2;
}
float areaC (float radius){
	float area = PI * pow(radius,2);
	return area;
}
int areaR (int length, int width){
	return length * width;
}
int factorial(int number) {
    if (number == 0)
        return 1;
    else
        return number * factorial(number - 1);
}

int main(){
	
	printf("The intger adder for 2 + 2 = %d\n",addI(2,2));
	printf("The float adder for 2.5 + 2.5 = %.2f\n",addF(2.5,2.5));
	printf("The area of circle for radius 5 = %.2f\n",areaC(5));
	printf("The area of rectangle with length of 7 and width of 8 = %d\n",areaR(7,8));
	printf("The factorial of number 9 = %d\n",factorial(9));
	
	return 0;
}
