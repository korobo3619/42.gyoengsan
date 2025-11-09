/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 01:50:58 by heahn             #+#    #+#             */
/*   Updated: 2025/11/01 17:40:26 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp1;
	int		temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}

// #include <stdio.h>
// int main(){
// 	int a = 42;
// 	int b = 5;
// 	ft_ultimate_div_mod(&a, &b);

// 	printf("%d %d", a, b);
// }
