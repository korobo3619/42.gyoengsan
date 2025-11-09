/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:26:13 by heahn             #+#    #+#             */
/*   Updated: 2025/11/02 14:35:58 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_number;

	i = 0;
	while (str[i] != '\0')
	{
		is_number = (str[i] >= '0' && str[i] <= '9');
		if (!(is_number))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main(){
// 	char str[] = "hello";
// 	char str2[] = "!@#$";
// 	char str3[] = "1234";
// 	int a;
// 	int b;
// 	int c;
// 	a = ft_str_is_numeric(str);
// 	b = ft_str_is_numeric(str2);
// 	c = ft_str_is_numeric(str3);
// 	printf("%d", a);
// 	printf("%d", b);
// 	printf("%d", c);
// }
