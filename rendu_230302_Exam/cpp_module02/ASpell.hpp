/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:03:51 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 09:04:26 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ATarget;

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ASpell
{
public:
	ASpell();
	ASpell(std::string const &name, std::string const &effects);
	ASpell(ASpell const &rhs);
	virtual ~ASpell();

	ASpell	&operator=(ASpell const &rhs);

	std::string const	&getName() const;
	std::string const	&getEffects() const;

	virtual ASpell	*clone() const = 0;

	void	launch(ATarget const &rhs);


protected:
	std::string	_name;
	std::string	_effects;

};




