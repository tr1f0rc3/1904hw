﻿// Sorts.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"

#include "PrintPrime.h"

int main()
{
	using namespace std;

	PP pp;
	pp.PrintPrimePow();
	cout << GCD(5, 10);

	vector<int> vec1{ 6, 4, 7, 1, 2, 5, 3 };
	bubbleSort<int>(&vec1);
	vector<char> vec2{ 'c', 'o', 'm', 'p', 'l', 'e', 't','e' };
	insertionSort<char>(&vec2);
	vector<int> vec3{ 6, 4, 7, 1, 2, 5, 3 };
	selectionSort<int>(&vec3);
	vector<int> vec4{ 6, 4, 7, 1, 2, 5, 3 };
	quickSort<int>(vec4.begin(), vec4.end());
	vector<int> vec5{ 6, 4, 7, 1, 2, 5, 3 };
	quickSort02(&vec5, 0, 7);
	vector<int> vec6{ 6, 4, 7, 1, 2, 5, 3 };
	insertionSort02(&vec6);
	vector<int> vec7{ 6, 4, 7, 1, 2, 5, 3 };
	mergeSort<int>(vec7.begin(), vec7.end());




}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
