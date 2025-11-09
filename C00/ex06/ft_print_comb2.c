/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:59:55 by heahn             #+#    #+#             */
/*   Updated: 2025/10/29 20:43:17 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		first;
	int		second;
	char	combo[5];

	combo[2] = ' ';
	first = -1;
	while (++first <= 98)
	{
		second = first;
		while (++second <= 99)
		{
			combo[0] = (first / 10) + '0';
			combo[1] = (first % 10) + '0';
			combo[3] = (second / 10) + '0';
			combo[4] = (second % 10) + '0';
			write(1, combo, 5);
			if (first != 98 || second != 99)
			{
				write(1, ", ", 2);
			}
		}
	}
}
// void main()
// {
//     ft_print_comb2();
// }
