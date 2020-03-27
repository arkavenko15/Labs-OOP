#include "Box.h"

CBox::CBox(double l, double w, double c)
{
	m_dblLength = l;
	m_dblWidth = w;
	m_dblHeight = c;
}

CBox::CBox(const CBox & rect)
{
	m_dblLength = rect.m_dblLength;
	m_dblWidth = rect.m_dblWidth;
	m_dblHeight = rect.m_dblHeight;
}

CBox::~CBox()
{
}

double CBox::GetLength()
{
	return m_dblLength;
}

double CBox::GetWidth()
{
	return m_dblWidth;
}

double CBox::GetHeight()
{
	return m_dblHeight;
}




void CBox::SetLength(double l)
{
	m_dblLength = l;
}

void CBox::SetWidth(double w)
{
	m_dblWidth = w;
}

void CBox::SetHeight(double c)
{
	m_dblHeight = c;
}

double CBox::Area()
{
	return 2.0*(m_dblLength*m_dblHeight+m_dblWidth*m_dblHeight+m_dblLength*m_dblHeight);
}

double CBox::Volume()
{
	return m_dblHeight*m_dblLength*m_dblWidth;
}

double CBox::Girth1()
{
	return 2.0*(m_dblLength+m_dblWidth);
}

double CBox::Girth2()
{
	return 2.0*(m_dblLength+m_dblHeight);
}

double CBox::Girth3()
{
	return 2.0*(m_dblHeight+m_dblWidth);
}
