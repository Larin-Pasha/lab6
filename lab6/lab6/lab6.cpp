/*
Завдання:
Реалізувати клас Fazzynumber для роботи з нечіткими числами, які
представляються трійками чисел (х – e1, х, х + e2). Для чисел А = (А - аi, А, А + аr) і В = (В - bi, В, В + br)
арифметичні операції виконуються по наступних формулах:
• додавання А + В = (А + В - аi - br, А + В, А + В + ar + br);
• вирахування А - В = (А - В - аi - br, А - В, А - В + ai + br);
• множення А * В = (A * B – B * ai – А * bi + ai * bi, А * В, A * B + B * ai + А * bi + ai * bi);
• обернене число А = (1 / (А + ar), 1/ А, 1 / (А – аi)), А > 0;
• ділення А / В = ((A - ai) / (В + bi), А / В, (А + аr) / (В - bi)), В > 0;
*/


#include"../Fazzynumber/Fazzynumber.h"
#include<iostream>
using namespace std;

int main()
{
	Fazzynumber one;
	Fazzynumber two;
	one = one.Init(12, 2, 4);
	two = two.Init(15, 3, 6);
	//one = one.Read();
	//two = two.Read();
	Fazzynumber rezult;
	rezult.Display(rezult.Sum(one, two));
	rezult.Display(rezult.subtract(one, two));
	rezult.Display(rezult.multiplication(one, two));
	rezult.Display_error1(rezult.inverse(one),one);
	rezult.Display_error2(rezult.division(one, two),two);
	system("pause");
	return 0;
}