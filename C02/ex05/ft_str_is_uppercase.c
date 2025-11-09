/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:29:09 by heahn             #+#    #+#             */
/*   Updated: 2025/11/02 14:36:13 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_upper;

	i = 0;
	while (str[i] != '\0')
	{
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		if (!(is_upper))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main(){
// 	char str[] = "HELLO";
// 	char str2[] = "!@#$";
// 	char str3[] = "1234";
// 	int a;
// 	int b;
// 	int c;
// 	a = ft_str_is_uppercase(str);
// 	b = ft_str_is_uppercase(str2);
// 	c = ft_str_is_uppercase(str3);
// 	printf("%d", a);
// 	printf("%d", b);
// 	printf("%d", c);
// }
