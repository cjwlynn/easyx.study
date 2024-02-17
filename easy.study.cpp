#include<graphics.h>
#include<iostream>
#include<conio.h>//键盘按键控制
#pragma comment (lib,"winmm.lib")//库文件  播放音乐
using namespace std;
int main()
{
	initgraph(800, 800);
	//设置背景颜色
	setbkcolor(GREEN);
	cleardevice();

	//画图
	//无颜色图形
	circle(300, 300, 50);
	rectangle(150, 150, 250, 250);
	putpixel(200, 50, RED);

	//颜色图形
	//（存有线框）
	setfillcolor(BLACK);//图形颜色
	fillcircle(400, 400, 20);//颜色圆形
	fillrectangle(200, 200, 300, 300);//颜色矩形
	//(不含线框）
	setfillcolor(RGB(250, 0, 0));//RGB填充颜色
	solidcircle(500, 500, 60);
	solidrectangle(300, 300, 400, 400);
	setlinecolor(BLACK);//线的颜色
	line(150, 150, 225, 225);


	//控制
		//鼠标：
	ExMessage mouse;
	while (peekmessage(&mouse)) {
		switch (mouse.message) {
		case WM_LBUTTONDOWN:
			//控制信息
			break;//左键
		case WM_RBUTTONDOWN:
			//控制信息
			break;//右键
		}
	}

	//键盘
	if (_kbhit()) {
		int user = _getch();
		switch (user) {
		case 'w':
		case 'W':
			//up
			break;
		case 's':
		case 'S':
			//down
			break;
		case 'a':
		case 'A':
			//left
			break;
		case 'd':
		case 'D':
			//right
			break;
		}
	}




	//控制程序暂停速度
	Sleep(20);//让程序暂停20毫秒


	//需要修改字符集（多字节字符集）
	mciSendString("open  D:\\c语言系列\\小球游戏\\郎朗晴天.mp3", 0, 0, 0);
	mciSendString("play D:\\c语言系列\\小球游戏\\郎朗晴天.mp3", 0, 0, 0);
	

	closegraph();

	return 0;
}