/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:24:39 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 09:24:43 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"



Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")   {}
Polymorph::~Polymorph() {}

Polymorph	*Polymorph::clone() const {return new Polymorph();}
