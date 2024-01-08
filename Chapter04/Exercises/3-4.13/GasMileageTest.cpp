#include "GasMileage.h"

#include <vector>
#include <iostream>

bool checkContinue(int);

int main()
{
	std::vector<GasMileage> trips;

	int milesDriven{ 0 };
	int gallonsUsed{ 0 };
	float totalMPG{ 0.f };
	while (checkContinue(milesDriven))
	{
		std::cout << "Enter miles driven (-1 to quit): ";
		std::cin >> milesDriven;
		if (checkContinue(milesDriven))
		{
			std::cout << "Enter gallons used: ";
			std::cin >> gallonsUsed;

			if (checkContinue(gallonsUsed))
			{
				GasMileage trip1(milesDriven, gallonsUsed);
				std::cout << "MPG this trip: " << trip1.get() << std::endl;

				trips.push_back(trip1);

				for (GasMileage trip : trips)
				{
					totalMPG += trip.get();
				}

				std::cout << "Total MPG: " << totalMPG << std::endl;
			}
		}

	}
}

bool checkContinue(int milesDriven)
{
	if (milesDriven >= -1)
	{
		if (milesDriven == -1)
			return false;
		else
			return true;
	}
	else
	{
		std::cout << "The number must be greater than -1 or -1 to cancel"
			<< std::endl;
		return false;
	}
}