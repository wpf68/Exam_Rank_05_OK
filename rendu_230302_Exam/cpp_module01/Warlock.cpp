/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:48:42 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 08:49:09 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"


Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day.\n";
}
Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!\n";
}

std::string	const	&Warlock::getName() const {return _name;}
std::string const	&Warlock::getTitle() const {return _title;}

void	Warlock::setTitle(std::string const &title) {_title = title;}

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

void	Warlock::learnSpell(ASpell *rhs) {
	if (_datas.find(rhs->getName()) == _datas.end())
		_datas.insert(std::pair<std::string, ASpell*>(rhs->getName(), rhs->clone()));
}
void	Warlock::forgetSpell(std::string spell) {
	if (_datas.find(spell) != _datas.end())
	{
		delete _datas[spell];
		_datas.erase(spell);
	}
}
void	Warlock::launchSpell(std::string spell, ATarget const &rhs)
{
	if (_datas.find(spell) != _datas.end())
		_datas[spell]->launch(rhs);
}
