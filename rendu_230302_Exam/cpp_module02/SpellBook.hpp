/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:49:17 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 08:49:21 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ASpell;
class ATarget;

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class SpellBook
{
public:
	SpellBook();
	~SpellBook();

	void	learnSpell(ASpell *rhs);
	void	forgetSpell(std::string const &spell);
	ASpell* createSpell(std::string const &spell);


private:
	SpellBook(SpellBook const &rhs);

	SpellBook	&operator=(SpellBook const &rhs);


	std::map<std::string, ASpell*>	_datas;
};
