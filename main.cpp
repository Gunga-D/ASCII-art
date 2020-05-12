#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
using namespace std;
unsigned int H;
unsigned int W;
Color cp;
int mc;
int main()
{
	//loading image
	Image i;
	i.loadFromFile("Path");
	//input
	std::cout << "Height:" << std::endl;
	std::cin >> H;
	std::cout << "Width:" << std::endl;
	std::cin >> W;
	//create the file
	std::ofstream out("Path");
	//draw
	for (int h = 0; h < H; h++)
	{
		for (int w = 0; w < W; w++)
		{
			cp = i.getPixel(w, h);
			mc = (cp.r + cp.b + cp.g) / 3;
			if (mc ==0)
			{
				out << "#";
			}
			if (mc > 0 && mc <= 15)
			{
				out << "¹";
			}
			if (mc > 15 && mc <=30)
			{
				out << "&";
			}
			if (mc > 30 && mc <= 45)
			{
				out << "@";
			}
			if (mc > 45 && mc <= 60)
			{
				out << "$";
			}
			if (mc > 60 && mc <= 75)
			{
				out << "%";
			}
			if (mc > 75 && mc <= 90)
			{
				out << "[";
			}
			if (mc > 90 && mc <= 105)
			{
				out << "*";
			}
			if (mc > 105 && mc <= 120)
			{
				out << "?";
			}
			if (mc > 120 && mc <= 135)
			{
				out << "+";
			}
			if (mc > 135 && mc <= 150)
			{
				out << "|";
			}
			if (mc > 150 && mc <= 165)
			{
				out << "~";
			}
			if (mc > 165 && mc <= 180)
			{
				out << "!";
			}
			if (mc > 180 && mc <= 195)
			{
				out << ";";
			}
			if (mc > 195 && mc <= 210)
			{
				out << ":";
			}
			if (mc > 210 && mc <= 225)
			{
				out << "=";
			}
			if (mc > 225 && mc <= 240)
			{
				out << "-";
			}
			if (mc > 240 && mc <= 255)
			{
				out << " ";
			}


		}
		out<<'\n';
	}
	out.close();
	return 1;
}
