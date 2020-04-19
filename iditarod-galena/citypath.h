#ifndef CITYPATH_H
#define CITYPATH_H

class CityPath
{
public:
	CityPath()	{};
	~CityPath() {};
	void addToPath(int node)	{ path_.push_back(node); }
	std::vector<int> path()		{ return path_; }

private:
	std::vector<int> path_;
};

#endif