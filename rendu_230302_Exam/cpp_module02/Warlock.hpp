/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
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
class SpellBook;

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock
{
public:
	Warlock(std::string const &name, std::string const &title);
	virtual ~Warlock();

	std::string	const	&getName() const;
	std::string const	&getTitle() const;

	void	setTitle(std::string const &title);

	void	introduce() const;

	void	learnSpell(ASpell *rhs);
	void	forgetSpell(std::string spell);
	void	launchSpell(std::string spell, ATarget const &rhs);


private:
	Warlock();
	Warlock(Warlock const &rhs);

	Warlock	&operator=(Warlock const &rhs);

	std::string	_name;
	std::string	_title;

	SpellBook	_datas;
};
