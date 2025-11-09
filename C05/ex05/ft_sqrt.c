/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heahn <heahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 01:09:01 by heahn             #+#    #+#             */
/*   Updated: 2025/11/04 01:23:27 by heahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int i;

    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    i = 1;
    while (i <= 46430)
    {
        if (i * i == nb)
            return (i);
        if (i * i > nb)
            return (0);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(){
    int a = ft_sqrt(9);
    printf("%d", a);
}