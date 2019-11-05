#include <iostream>
//include <pch.h>

using namespace std;

int calculation(int a, int b, char op)
{
	int c = 0;
	switch (op)
	{
	case '%':
		c = a % b;
		break;
	case '*':
		c = a * b;
		break;
	case '+':
		c = a + b;
		break;
	case '-':
		c = a - b;
		break;
	case '/':
		c = a / b;
		break;
	default:
		cout << "Invalid operator.";
	}
	return c;
}

int main(int argc, char* argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result = calculation(num1, num2, *argv[2]);
	cout << result;
	return 0;
}

