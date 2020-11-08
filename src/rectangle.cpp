#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

class Rectangle {
    public:
	int length;
	int width;
        Rectangle(int l, int w) {
		//if(l < w){
		//    temp = w;
		//    w = l;
		//    l = temp;
		//}
		length=l; width=w;
		//if(length<0){length=0-length;}
		//if(width<0){width=0-width;}
	};
	int length() { return length;}
	int width() { return width;}
        int area(){return length*width;}
	int perimeter(){return (2*length)+(2*width);}
};

#endif //__RECTANGLE_HPP__
