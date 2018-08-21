// 0821test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<iostream>
using namespace std;
void move(char src, char dest) {
	cout << src << "-->" << dest << endl;
}
void hanoi(int n, char src, char medium, char dest) {
	if (n == 1)
		move(src, dest);
	else {
		hanoi(n - 1, src, dest, medium);
		move(src, dest);
		hanoi(n - 1, medium, src, dest);
	}
}

int main() {
	int a;
	cout << "汉诺塔游戏，有几个盘子" << endl;
	cin >> a;
	hanoi(a, 'A', 'B', 'C');
	return 0;
}
