// https://edabit.com/challenge/vJ8ijpB36eLFsjsCx

// read the problem statement
// we have to create a function, coordinates
// such that it assigns first value to x,
// second to y and third to z
// see the example. its clear from it that its must to make parameterized constructor

class Mubashir
{
	private:
		int x;
		int y;
		int z;
	public:
		Mubashir(int x, int y, int z)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
		int coordinates(int x, int y, int z)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
};
