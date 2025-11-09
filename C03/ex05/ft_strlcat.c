/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:10:41 by heahn             #+#    #+#             */
/*   Updated: 2025/11/03 18:18:18 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	dest_len = i;
	src_len = ft_strlen(src);
	if (dest_len >= size)
	{
		return (size + src_len);
	}
	j = 0;
	while (src[j] != '\0' && (dest_len + j) < (size - 1))
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}

//#include <stdio.h>
//int main(){
//    char a1[40] = "This is a test string.";
//    char a2[] = "test 234567";
//    int a = 29;
//    int b;
//    b = ft_strlcat(a1, a2, a);
//    printf("%s\n", a1);
//    printf("%d", b);
//}
