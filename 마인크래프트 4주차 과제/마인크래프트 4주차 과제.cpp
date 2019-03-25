#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <math.h>

int main() {
	double pi = 3.14159265358979323846;
	int px, py, pz;
	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();
	double radian = dir * pi / 180. ;
	int dx = -10 * sin(radian);					
	int dz = 10 * cos(radian);					
	px += dx;
	pz += dz;

	//블록 생성하기
	BlockID A = createBlock(BLOCK_PURPUR);
	BlockID B = createBlock(BLOCK_STAINED_GLASS);

	//하트 겉부분 만들기
	locateBlock(A, px, py, pz);
	locateBlock(A, px+1, py+1, pz);
	locateBlock(A, px-1, py+1, pz);
	locateBlock(A, px+2, py+2, pz);
	locateBlock(A, px-2, py+2, pz);
	locateBlock(A, px+3, py+3, pz);
	locateBlock(A, px-3, py+3, pz);
	locateBlock(A, px+4, py+4, pz);
	locateBlock(A, px-4, py+4, pz);
	locateBlock(A, px+3, py+5, pz);
	locateBlock(A, px-3, py+5, pz);
	locateBlock(A, px+2, py+6, pz);
	locateBlock(A, px-2, py+6, pz);
	locateBlock(A, px+1, py+5, pz);
	locateBlock(A, px-1, py+5, pz);
	locateBlock(A, px, py+4, pz);

	//하트 속 채우기
	locateBlock(B, px, py + 1, pz);
	locateBlock(B, px, py + 2, pz);
	locateBlock(B, px, py + 3, pz);
	locateBlock(B, px - 1, py + 2, pz);
	locateBlock(B, px - 1, py + 3, pz);
	locateBlock(B, px - 1, py + 4, pz);
	locateBlock(B, px - 2, py + 3, pz);
	locateBlock(B, px - 2, py + 4, pz);
	locateBlock(B, px - 2, py + 5, pz);
	locateBlock(B, px - 3, py + 4, pz);
	locateBlock(B, px + 1, py + 2, pz);
	locateBlock(B, px + 1, py + 3, pz);
	locateBlock(B, px + 1, py + 4, pz);
	locateBlock(B, px + 2, py + 3, pz);
	locateBlock(B, px + 2, py + 4, pz);
	locateBlock(B, px + 2, py + 5, pz);
	locateBlock(B, px + 3, py + 4, pz);

}


