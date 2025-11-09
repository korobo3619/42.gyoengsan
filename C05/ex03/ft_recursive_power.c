/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 00:52:49 by heahn             #+#    #+#             */
/*   Updated: 2025/11/04 01:07:29 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{

    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    return (nb * ft_recursive_power(nb, power - 1));
    
}

// #include <stdio.h>
// int main()
// {
//     int a = ft_recursive_power(2, 1);
//     printf("%d", a);
// }