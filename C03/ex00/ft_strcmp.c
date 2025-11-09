/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:56:50 by heahn             #+#    #+#             */
/*   Updated: 2025/11/02 15:03:39 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// int main(){
//     char a1[] = "abce";
//     char a2[] = "abcd";
//     char b1[] = "abcd";
//     char b2[] = "abce";
//     char c1[] = "abc";
//     char c2[] = "abc"; 
//     int a = ft_strcmp(a1, a2);
//     int b = ft_strcmp(b1, b2);
//     int c = ft_strcmp(c1, c2);
//     printf("%d %d %d", a, b, c);
// }
