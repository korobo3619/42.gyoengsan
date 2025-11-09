/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:29:59 by heahn             #+#    #+#             */
/*   Updated: 2025/11/02 14:36:12 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	while (str[i] != '\0')
	{
		is_printable = (str[i] >= 32 && str[i] <= 127);
		if (!(is_printable))
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
// 	char str3[] = {127, };
// 	int a;
// 	int b;
// 	int c;
// 	a = ft_str_is_printable(str);
// 	b = ft_str_is_printable(str2);
// 	c = ft_str_is_printable(str3);
// 	printf("%d", a);
// 	printf("%d", b);
// 	printf("%d", c);
// }
