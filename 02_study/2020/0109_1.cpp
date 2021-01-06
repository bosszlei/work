class Tri{
public:
	Tri(int len = 1, int bp = 1);

private:
	int length;
	int beg_pos;
	int next;

};

Tri::Tri(int len, int bp)  //构造函数
{
	length = len > 0 ? len : 1;
	beg_pos = bp > 0 ? len : 1;
	next = beg_pos - 1;
}

//member initialization list
Tri::Tri(const Tri &rhs):length(rhs.length),beg_pos(rhs.beg_pos),next(rhs.beg_pos - 1)
{}

class Matrix{
private:
	int row,col;
	double* pmt;
public:
	Matrix(int rw, int cl):row(rw), col(cl)
	{
		pmt = new double[row * col];
	}

	~Matrix()
	{
		delete [] pmt;
	}

};