/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:36:44 by heahn             #+#    #+#             */
/*   Updated: 2025/11/03 22:49:47 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int n;
    int result;

    n = 1;
    result = 1;
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
        while (n <= nb)
        {
            result = result * n;
            n++;
        }
    }
    return (result);
}

// #include <stdio.h>
// int main()
// {
//     int n = ft_iterative_factorial(9);
//     printf("%d", n);
// }
