/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:34:29 by dapinto           #+#    #+#             */
/*   Updated: 2019/08/29 13:13:53 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	errout(int v, char *merr)
{
	if (!v)
		ft_printf("ERROR\n");
	else
		ft_printf("%s\n", merr);
}
