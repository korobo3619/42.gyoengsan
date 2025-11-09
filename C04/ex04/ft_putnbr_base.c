/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:36:15 by heahn             #+#    #+#             */
/*   Updated: 2025/11/03 20:30:51 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_check(int base_len, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base_len < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nbr_l;
	char	c;

	base_len = ft_strlen(base);
	if (!base_check(base_len, base))
		return ;
	nbr_l = nbr;
	if (nbr_l < 0)
	{
		write(1, "-", 1);
		nbr_l = -nbr_l;
	}
	if (nbr_l >= base_len)
		ft_putnbr_base(nbr_l / base_len, base);
	c = base[nbr_l % base_len];
	write(1, &c, 1);
}

// int main()
// {
// 	char base[] = "poneyvif";
// 	int n = 32;
// 	ft_putnbr_base(n, base);
// }
