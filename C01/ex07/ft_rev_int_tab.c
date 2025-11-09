/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 02:15:29 by heahn             #+#    #+#             */
/*   Updated: 2025/11/01 17:45:22 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;
	int		j;

	j = size - 1;
	i = 0;
	while (i < j)
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		j--;
		i++;
	}
}

// #include <stdio.h>
// int main(){
// 	int tab[7] = {1, 2, 3, 4, 5, 6, 7};
// 	int tab2[6] = {1, 2, 3, 4, 5, 6};
// 	int size = 7;
// 	int size2 = 6;

// 	int i = 0;
// 	ft_rev_int_tab(tab, size);
// 	ft_rev_int_tab(tab2, size2);
// 	while(i < size){
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (i < size2){
// 		printf("%d", tab2[i]);
// 		i++;
// 	}
// }
