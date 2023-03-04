/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:48:42 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 08:49:09 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"


SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
	for (std::map<std::string, ASpell*>::iterator it = _datas.begin(); it != _datas.end(); it++)
		delete it->second;
	_datas.clear();

}


void	SpellBook::learnSpell(ASpell *rhs) {
	if (_datas.find(rhs->getName()) == _datas.end())
		_datas.insert(std::pair<std::string, ASpell*>(rhs->getName(), rhs->clone()));
}
void	SpellBook::forgetSpell(std::string const &spell) {
	if (_datas.find(spell) != _datas.end())
	{
		delete _datas[spell];
		_datas.erase(spell);
	}
}
ASpell* SpellBook::createSpell(std::string const &spell)
{
	std::map<std::string, ASpell*>::iterator it = _datas.find(spell);
	if (it != _datas.end())
		return _datas[spell];
	return NULL;
}
