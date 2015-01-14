/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 13:16:41 by alegent           #+#    #+#             */
/*   Updated: 2015/01/14 10:25:57 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_xy			*get_coor(t_xy **base)
{
	(*base)->x = (*base)->x + CTE * (*base)->z;
	(*base)->y = ((*base)->y - (*base)->z) + (CTE / 2) * (*base)->z;
	return (*base);
}
