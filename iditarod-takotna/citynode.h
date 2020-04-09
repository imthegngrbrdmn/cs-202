#ifndef CITYNODE_H
#define CITYNODE_H

class CityNode
{
public:
	CityNode();
	~CityNode();
	unsigned int number()	{ return number_; }
	double latitude()		{ return latitude_; }
	double longitude()		{ return longitude_; }
	double graphx()			{ return graphx_; }
	double graphy()			{ return graphy_; }
private:
	unsigned int number_;
	double latitude_;
	double longitude_;
	double graphx_;
	double graphy_;
};
#endif
