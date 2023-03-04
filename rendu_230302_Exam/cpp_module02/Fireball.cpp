/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:24:39 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 09:24:43 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"



Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")   {}
Fireball::~Fireball() {}

Fireball	*Fireball::clone() const {return new Fireball();}
