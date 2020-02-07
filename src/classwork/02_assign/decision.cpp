//Write the function code that returns the product of hours and hourly_rate.
double gross_pay(double hours, double hourly_rate)
{
	if (hours > 40)
	{
		int overtime = hours - 40;
		return((hours - overtime) * hourly_rate) + (hourly_rate * 1.5 * overtime);
	}
	else
	{
		return hours * hourly_rate;
	}
}












































