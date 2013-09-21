/*
  ==============================================================================

   This file is part of the JUCE library.
   Copyright (c) 2013 - Raw Material Software Ltd.

   Permission is granted to use this software under the terms of either:
   a) the GPL v2 (or any later version)
   b) the Affero GPL v3

   Details of these licenses can be found at: www.gnu.org/licenses

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

   ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.juce.com for more information.

  ==============================================================================
*/

ModifierKeys::ModifierKeys() noexcept  : flags (0) {}
ModifierKeys::ModifierKeys (int rawFlags) noexcept  : flags (rawFlags) {}
ModifierKeys::ModifierKeys (const ModifierKeys& other) noexcept  : flags (other.flags) {}

ModifierKeys& ModifierKeys::operator= (const ModifierKeys other) noexcept
{
    flags = other.flags;
    return *this;
}

ModifierKeys ModifierKeys::currentModifiers;

ModifierKeys ModifierKeys::getCurrentModifiers() noexcept
{
    return currentModifiers;
}

int ModifierKeys::getNumMouseButtonsDown() const noexcept
{
    int num = 0;

    if (isLeftButtonDown())     ++num;
    if (isRightButtonDown())    ++num;
    if (isMiddleButtonDown())   ++num;

    return num;
}
