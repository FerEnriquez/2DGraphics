
#include "Point.h"

class Line{
	private:
		Point p1, p2;
	public:
		Line();
		~Line();
		void setValues(int, int, int, int);
		void setValues(Point, Point);
        void draw();
};
