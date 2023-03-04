/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:04:32 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 09:05:16 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"


ATarget::ATarget() {}
ATarget::ATarget(std::string const &type) : _type(type) {}
ATarget::ATarget(ATarget const &rhs) {*this = rhs;}
ATarget::~ATarget() {}

ATarget	&ATarget::operator=(ATarget const &rhs) {
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string const	&ATarget::getType() const {return _type;}

void	ATarget::getHitBySpell(ASpell const &rhs) const {
	std::cout << _type << " has been " << rhs.getEffects() << "!\n";
}
