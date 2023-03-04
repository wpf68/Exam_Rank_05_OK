/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:03:51 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 09:04:26 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ASpell;

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ATarget
{
public:
	ATarget();
	ATarget(std::string const &type);
	ATarget(ATarget const &rhs);
	virtual ~ATarget();

	ATarget	&operator=(ATarget const &rhs);

	std::string const	&getType() const;

	virtual ATarget	*clone() const = 0;

	void	getHitBySpell(ASpell const &rhs) const;


protected:
	std::string	_type;


};




