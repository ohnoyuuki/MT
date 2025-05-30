#pragma once
#include <Novice.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _USE_MATH_DEFINE
#include <assert.h>

struct Vector3 {
	float x;
	float y;
	float z;
};

struct Matrix4x4 {
	float m[4][4];
};

// 1.平行移動行列
Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

// 2.拡大縮小行列
Matrix4x4 MakeScaleMatrix(const Vector3& scale);

// 3.座標変換
Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);

// 結果の表示
static const int kRowHeight = 20;
static const int kColumnWidth = 60;

void VectorScreenPrint(int x, int y, Vector3& vector, const char* label);

void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label);