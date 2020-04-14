#ifndef CITYNODE_H
#define CITYNODE_H
#include <string>

class CityNode
{

public:
	CityNode(std::string information);
	~CityNode()	{}
	unsigned int number()	{ return number_; }
	double latitude()		{ return latitude_; }
	double longitude()		{ return longitude_; }
	double graphx()			{ return graphx_; }
	double graphy()			{ return graphy_; }

	void setNumber(int num)			{ number_ = num; }
	void setLatitude(double lat)	{ latitude_ = lat; }
	void setLongitude(double longi)	{ longitude_ = longi; }
	void setgraphx(double x)		{ graphx_ = x; }
	void setgraphy(double y)		{ graphx_ = y; }

private:
	unsigned int number_{0};
	double latitude_{0};
	double longitude_{0};
	double graphx_{0};
	double graphy_{0};
};
#endif
