#pragma once

#include "windows.h"

typedef struct tagInfo
{
	float	fX;
	float	fY;
	float	fCX;	// ���� ������
	float	fCY;	// ���� ������

}INFO;

typedef struct tagPoint
{
	float		fX;
	float		fY;

	tagPoint(void) { ZeroMemory(this, sizeof(tagPoint)); }
	tagPoint(float _fX, float _fY) : fX(_fX), fY(_fY) {}

}LINEPOINT;

typedef struct tagLine
{
	LINEPOINT		tLPoint;
	LINEPOINT		tRPoint;

	tagLine() { ZeroMemory(this, sizeof(tagLine)); }
	tagLine(LINEPOINT& tLeft, LINEPOINT& tRight) : tLPoint(tLeft), tRPoint(tRight) {}

}LINE;
