/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:51:33 by heahn             #+#    #+#             */
/*   Updated: 2025/11/04 01:07:29 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i;
    int result;

    result = 1;
    i = 0;
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    if (nb > 0 && power > 0)
    {
        while (i < power)
        {
            result = result * nb;
            i++;
        }
    }
    return (result);
}

// #include <stdio.h>
// int main()
// {
//     int a = ft_iterative_power(2, 10);
//     printf("%d", a);
// }