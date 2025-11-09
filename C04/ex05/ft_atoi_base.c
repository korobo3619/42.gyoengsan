/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:31:29 by heahn             #+#    #+#             */
/*   Updated: 2025/11/03 21:06:13 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space(char n)
{
	if (n == ' ' || n == '\t' || n == '\n'
		|| n == '\v' || n == '\f' || n == '\r')
		return (1);
	return (0);
}

int	base_check(int n, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (n == 0 || n == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || space(base[i]))
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

int	num_ad(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	sign_check(char *str, int i, int *sign_ptr)
{
	*sign_ptr = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign_ptr *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	num;
	int	base_len;
	int	value;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	if (base_check(base_len, base) == 0)
		return (0);
	i = 0;
	while (space(str[i]) == 1)
		i++;
	i = sign_check(str, i, &sign);
	num = 0;
	value = num_ad(str[i], base);
	while (value != -1)
	{
		num = (num * base_len) + value;
		i++;
		value = num_ad(str[i], base);
	}
	return (sign * num);
}

// #include <stdio.h>
// int main()
// {
//     char str[] = "--ff";
//     char base[] = "0123456789abcdef";
//     int num = ft_atoi_base(str, base);
//     printf("%d", num);
// }
