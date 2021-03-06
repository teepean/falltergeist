/*
 * Copyright 2012-2016 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FALLTERGEIST_PLAYERCREATEOPTIONS_H
#define FALLTERGEIST_PLAYERCREATEOPTIONS_H

// C++ standard includes

// Falltergeist includes
#include "State.h"

// Third party includes

namespace Falltergeist
{
namespace State
{

class PlayerCreateOptions : public State
{
public:
    PlayerCreateOptions();
    ~PlayerCreateOptions() override;

    void init() override;

    void onSaveButtonClick(Event::Mouse* event);
    void onLoadButtonClick(Event::Mouse* event);
    void onPrintToFileButtonClick(Event::Mouse* event);
    void onEraseButtonClick(Event::Mouse* event);
    void onDoneButtonClick(Event::Mouse* event);
    void onKeyDown(Event::Keyboard* event) override;
};

}
}

#endif // FALLTERGEIST_PLAYERCREATEOPTIONS_H
