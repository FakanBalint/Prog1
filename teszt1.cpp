#include "Simple_window.h"
#include "Graph.h"
int main()
{
	int width = 1920;
	int height = 1080;
	using namespace Graph_lib; 
	Point t1(100,100);
	Simple_window win(t1,width,height, "Canvas"); 
	Polygon poly;{

			poly.add(Point(300,200));
			poly.add(Point(350,100));
			poly.add(Point(400,200));
			poly.set_color(Color::green);
	}
	
	Image I_k {Point{0,50}, "image.jpg"};
	I_k.set_mask(Point(0,0),width,height);
	Text grt {Point(0,1000),"Teszt Szöveg Ha kedves az életeted akkor ne használd a GUI-T"};
	grt.set_color(Color::red);
	grt.set_font_size(40);
	win.attach(I_k);
	win.attach(grt);
	win.attach (poly);
	win.wait_for_button();
}
