/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 01:50:02 by heahn             #+#    #+#             */
/*   Updated: 2025/11/01 17:38:58 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int main(){
// 	int a = 42;
// 	int b = 5;
// 	int div = 0, mod = 0;
// 	ft_div_mod(a, b, &div, &mod);

// 	printf("%d %d", div, mod);
// }
