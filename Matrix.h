#pragma once
#include<iostream>
#include<vector>
#define N 5
#define M 5
//--------------------------
class Matrix
{
private:
	float data[N][M];
public:
	int rows;
	int columns;
	Matrix();
	void setData(std::vector<float> &vData);
	void updateValueByIndex(int i, int j, float val);
	void printMatrix();
	float** getData();
	~Matrix();
};
//--------------------------