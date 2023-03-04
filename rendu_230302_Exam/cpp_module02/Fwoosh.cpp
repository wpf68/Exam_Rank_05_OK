/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:24:39 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 09:24:43 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"



Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")   {}
Fwoosh::~Fwoosh() {}

Fwoosh	*Fwoosh::clone() const {return new Fwoosh();}
