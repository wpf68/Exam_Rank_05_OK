/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:04:32 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 09:05:16 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"


ASpell::ASpell() {}
ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects) {}
ASpell::ASpell(ASpell const &rhs) {*this = rhs;}
ASpell::~ASpell() {}

ASpell	&ASpell::operator=(ASpell const &rhs) {
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string const	&ASpell::getName() const {return _name;}
std::string const	&ASpell::getEffects() const {return _effects;}

void	ASpell::launch(ATarget const &rhs) {
	rhs.getHitBySpell(*this);
}
