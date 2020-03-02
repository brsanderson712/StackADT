#include <string>

class Planet
{
public:
	Planet()
	{
	}
	Planet(std::string plnt, double a)
	{
		name = plnt;
		au = a;
	}
	std::string getPlanetName() const
		{	return (name); }
	double getPlanetDist() const
		{	return (au); }
	friend std::ostream& operator<<(std::ostream &strm, const Planet &p)
		{	return strm << p.name;	}
private:
	std::string name;
	double au;
};

