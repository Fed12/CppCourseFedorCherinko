#include <stdio.h>
#include <stdlib.h>

float softSign(float x) {
	float f = 1 + abs(x);
	float res = 1/f;
	return res;
}

int main(int argc, char *argv[]) {
	float func = softSign(5);
	printf("%f", func);
	printf("\n");
	
	 float x = 1; // �����, � ��� ���������� �������
  	 float h = 0.1; // ���� � ���� ���������� �������
 
  // ��������� ���������� ����� ������� ������ ���������
  float fl = (softSign(x) - softSign(x - h)) / h; // ���
  float fr = (softSign(x + h) - softSign(x)) / h; // �����
  float fc = (softSign(x + h) - softSign(x - h)) / (2 * h); // ����������
  float f2 = (softSign(x + h) - 2 * softSign(x) + softSign(x - h)) / (h * h);
 
  printf("%f", f2);
	return 0;
}
