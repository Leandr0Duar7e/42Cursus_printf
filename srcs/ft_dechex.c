#include <unistd.h>

int	ft_dechex(int dec, char d)
{
	int	rest;
	int	quoc;
	char	imp;

	rest = dec % 16;
	quoc = dec / 16;
	if(rest != 0 || (rest == 0 && dec > 15))
		ft_dechex(quoc, d);
	else
		return(0);
	if(rest > 9)
	{
		if (d == 'X')
			imp = 'A' + rest - 10;
		else
			imp = 'a' + rest - 10;
		write(1, &imp, 1);
	}
	else
	{
		imp = '0' + rest;
		write(1, &imp, 1);
	}
}

int	main()
{
	ft_dechex(16, 'X');
}
