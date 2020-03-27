class CBox
{
private:
	double m_dblLength;
	double m_dblWidth;
	double m_dblHeight;
public:
	CBox(double l = 10, double w = 10, double c = 10);
	CBox(const CBox & rect);
	virtual ~CBox();
	double GetLength();
	double GetWidth();
	double GetHeight();
	void SetLength(double);
	void SetWidth(double);
	void SetHeight(double);
	double Area();
	double Volume();
	double Girth1();
	double Girth2();
	double Girth3();
};
