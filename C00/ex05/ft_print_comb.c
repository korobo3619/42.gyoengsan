/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_comb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:59:50 by heahn             #+#    #+#             */
/*   Updated: 2025/10/29 20:25:44 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;
	char	combo[3];

	i = -1;
	while (++i <= 7)
	{
		j = i;
		while (++j <= 8)
		{
			k = j;
			while (++k <= 9)
			{
				combo[0] = i + '0';
				combo[1] = j + '0';
				combo[2] = k + '0';
				write(1, combo, 3);
				if (i != 7 || j != 8 || k != 9)
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
//void main() {
//    ft_print_comb();
//}
