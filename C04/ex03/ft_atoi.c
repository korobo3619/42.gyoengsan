/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:40:57 by heahn             #+#    #+#             */
/*   Updated: 2025/11/03 18:35:52 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space(char n)
{
	if (n == ' ' || n == '\t' || n == '\n'
		|| n == '\v' || n == '\f' || n == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (space(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (sign * num);
}

// #include <stdio.h>
// int main()
// {
//     char str[50] = " ---+--+1234ab567";
//     int a = ft_atoi(str);
//     printf("%d", a);
// }
