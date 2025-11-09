/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:43:29 by heahn             #+#    #+#             */
/*   Updated: 2025/10/29 20:25:10 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	output_char;

	if (n < 0)
	{
		output_char = 'N';
	}
	else
	{
		output_char = 'P';
	}
	write(1, &output_char, 1);
}

// void main(){
//    int p = 5;
//    int n = -2;

//    ft_is_negative(p);
//    ft_is_negative(n);
// }
