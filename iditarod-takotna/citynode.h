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

	bool setNumber(int num)			{ number_ = num; }
	bool setLatitude(double lat)	{ latitude_ = lat; }
	bool setLongitude(double longi)	{ longitude_ = longi; }
	bool setgraphx(double x)		{ graphx_ = x; }
	bool setgraphy(double y)		{ graphx_ = y; }

private:
	unsigned int number_;
	double latitude_;
	double longitude_;
	double graphx_;
	double graphy_;
};
#endif
