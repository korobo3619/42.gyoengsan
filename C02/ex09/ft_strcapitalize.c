/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:41:10 by heahn             #+#    #+#             */
/*   Updated: 2025/11/02 14:51:23 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_separator;
	int	is_lower;
	int	is_upper;
	int	alphanum;

	i = 0;
	is_separator = 1;
	while (str[i] != '\0')
	{
		is_lower = (str[i] >= 'a' && str[i] <= 'z');
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		alphanum = is_lower || is_upper || (str[i] >= '0' && str[i] <= '9');
		if (is_lower || is_upper)
		{
			if (is_separator && is_lower)
				str[i] = str[i] - 32;
			else if (!is_separator && is_upper)
				str[i] = str[i] + 32;
		}
		is_separator = !alphanum;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(){
//     char str[] = "salut, comMEnt tu vas ? 42mots cinquante+et+un";
//     ft_strcapitalize(str);
//     printf("%s", str);
// }