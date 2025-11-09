/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:28:24 by heahn             #+#    #+#             */
/*   Updated: 2025/11/02 14:36:13 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lower;

	i = 0;
	while (str[i] != '\0')
	{
		is_lower = (str[i] >= 'a' && str[i] <= 'z');
		if (!(is_lower))
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
// 	a = ft_str_is_lowercase(str);
// 	b = ft_str_is_lowercase(str2);
// 	c = ft_str_is_lowercase(str3);
// 	printf("%d", a);
// 	printf("%d", b);
// 	printf("%d", c);
// }
