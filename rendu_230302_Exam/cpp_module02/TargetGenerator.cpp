/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:48:42 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 08:49:09 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	for (std::map<std::string, ATarget*>::iterator it = _datas.begin(); it != _datas.end(); it++)
		delete it->second;
	_datas.clear();
}


void	TargetGenerator::learnTargetType(ATarget *rhs) {
	if (_datas.find(rhs->getType()) == _datas.end())
		_datas.insert(std::pair<std::string, ATarget*>(rhs->getType(), rhs->clone()));
}
void	TargetGenerator::forgetTargetType(std::string const &spell) {
	if (_datas.find(spell) != _datas.end())
	{
		delete _datas[spell];
		_datas.erase(spell);
	}
}
ATarget* TargetGenerator::createTarget(std::string const &spell)
{
	std::map<std::string, ATarget*>::iterator it = _datas.find(spell);
	if (it != _datas.end())
		return _datas[spell];
	return NULL;
}
