#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

class Rectangle {
    public:
	int len;
	int wid;
        Rectangle(int l, int w) {
		//return 21;
		len=l; wid=w;
		if(len<0){len=0-len;}
		if(wid<0){wid=0-wid;}
		if(len<wid){
			int temp = len;
			len = wid;
			wid = temp;
		}
	};
	int length() { return len;}
	int width() { return wid;}
        int area(){return len*wid;}
	int perimeter(){
		if(len==0){return wid;}
		else if(wid==0){return len;}
		else{return (2*len)+(2*wid);}
	}
};

#endif //__RECTANGLE_HPP__
