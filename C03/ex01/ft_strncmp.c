/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:37:30 by heahn             #+#    #+#             */
/*   Updated: 2025/11/02 15:03:40 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// int main(){
//     char a1[] = "abce";
//     char a2[] = "abcd";
//     char b1[] = "abcd";
//     char b2[] = "abce";
//     char c1[] = "abc";
//     char c2[] = "abc"; 
//     int n = 5;
//     int a = ft_strncmp(a1, a2, n);
//     int b = ft_strncmp(b1, b2, n);
//     int c = ft_strncmp(c1, c2, n);
//     printf("%d %d %d", a, b, c);
// }
