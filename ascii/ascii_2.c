/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascii.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 04:56:42 by dvolberg          #+#    #+#             */
/*   Updated: 2015/03/01 19:06:15 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void ascii_2(int y, int x)
{
	mvprintw(y, x, " oP\"Yb.");
	mvprintw(y + 1, x, " \"' dP'");
	mvprintw(y + 2, x, "   dP' ");
	mvprintw(y + 3, x, " .d8888");
}