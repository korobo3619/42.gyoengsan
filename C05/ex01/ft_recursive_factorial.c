/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:50:15 by heahn             #+#    #+#             */
/*   Updated: 2025/11/04 01:07:29 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{

    if (nb < 0)
    {
        return (0);
    }
    if (nb == 0 || nb == 1)
    {
        return (1);
    }
    if (nb > 1)
    {
        return (nb * ft_recursive_factorial(nb - 1));
    }
}

// #include <stdio.h>
// int main()
// {
//     int n = ft_recursive_factorial(9);
//     printf("%d", n);
// }
