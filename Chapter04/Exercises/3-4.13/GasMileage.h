#ifndef GAS_MILEAGE_H
#define GAS_MILEAGE_H

class GasMileage
{
public:
	GasMileage(int milesDriven, int gallonsUsed);
	~GasMileage();

	int get() const;

private:
	void calculate();

private:
	int m_milesDriven;
	int m_gallonsUsed;
	float m_milesPerGallon{ 0.f };
};


#endif // !GAS_MILEAGE_H
