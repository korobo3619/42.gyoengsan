/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 01:29:13 by heahn             #+#    #+#             */
/*   Updated: 2025/11/04 01:36:07 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0);
    i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    int i;

    i = nb;
    if (nb <= 1)
        return (2);
    while (1)
    {
        if((ft_is_prime(i)))
            return (i);
        i++;
    }
    return (i);
}

// #include <stdio.h>
// int main()
// {
//     int a = ft_find_next_prime(32);
//     printf("%d", a);
// }