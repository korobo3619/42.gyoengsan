/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:11:08 by heahn             #+#    #+#             */
/*   Updated: 2025/11/02 14:36:50 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		is_upper;
	int		is_lower;

	i = 0;
	while (str[i] != '\0')
	{
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		is_lower = (str[i] >= 'a' && str[i] <= 'z');
		if (!(is_upper || is_lower))
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
// 	a = ft_str_is_alpha(str);
// 	b = ft_str_is_alpha(str2);
// 	c = ft_str_is_alpha(str3);
// 	printf("%d", a);
// 	printf("%d", b);
// 	printf("%d", c);
// }
