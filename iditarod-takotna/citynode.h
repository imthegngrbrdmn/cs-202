#ifndef CITYNODE_H
#define CITYNODE_H

class CityNode
{
public:
	CityNode();
	~CityNode();

private:
	unsigned int number_;
	double latitude_;
	double longitude_;
	double graphx_;
	double graphy_;
};

CityNode::CityNode()
{
}

CityNode::~CityNode()
{
}
#endif // !CITYNODE_H
