/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 02:24:29 by heahn             #+#    #+#             */
/*   Updated: 2025/11/01 17:46:09 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int main(){
// 	int tab[7] = {3, 2, 5, 7, 1, 4, 6};
// 	int size = 7;
// 	int i = 0;
// 	ft_sort_int_tab(tab, size);
// 	while(i < size){
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
