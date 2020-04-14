//temperature_data.h
#include"temperature.h"
#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H
#include<fstream>
#include<string>
#include<vector>

class TemperatureData
{
public:
	void save_tenos(std::vector<Temperature>& ts);
	std::vector<Temperature>get_temps()const;
	
private:
	const std::string file_name{ "temperature.dat" };
};



#endif // !TEMPERATURE_DATA_H
