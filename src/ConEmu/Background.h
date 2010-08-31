
#pragma once

typedef BOOL (WINAPI* AlphaBlend_t)(HDC hdcDest, int xoriginDest, int yoriginDest, int wDest, int hDest, HDC hdcSrc, int xoriginSrc, int yoriginSrc, int wSrc, int hSrc, BLENDFUNCTION ftn);

class CBackground
{
public:
    COORD    bgSize;
    HDC      hBgDc;
	
	CBackground();
	~CBackground();
	
	bool CreateField(int anWidth, int anHeight);
	bool FillBackground(const BITMAPFILEHEADER* apBkImgData, int X, int Y, int Width, int Height, BackgroundOp Operation);
	
private:
	HBITMAP  hBgBitmap, hOldBitmap;
	void Destroy();

	//// Alpha blending
	//HMODULE mh_MsImg32;
	//AlphaBlend_t fAlphaBlend;
};