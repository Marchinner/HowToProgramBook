#include "GasMileage.h"

GasMileage::GasMileage(int milesDriven, int gallonsUsed)
	: m_milesDriven{ milesDriven }
	, m_gallonsUsed{ gallonsUsed }
{
	if (milesDriven > 0)
		m_milesDriven = milesDriven;
	if (gallonsUsed > 0)
		m_gallonsUsed = gallonsUsed;

	calculate();

}

void GasMileage::calculate()
{
	if (m_gallonsUsed > 0)
		m_milesPerGallon = m_milesDriven / m_gallonsUsed;
	else
		m_milesPerGallon = 0;
}

int GasMileage::get() const
{
	return m_milesPerGallon;
}

GasMileage::~GasMileage()
{

}