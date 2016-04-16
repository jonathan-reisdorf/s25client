// Copyright (c) 2005 - 2015 Settlers Freaks (sf-team at siedler25.org)
//
// This file is part of Return To The Roots.
//
// Return To The Roots is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Return To The Roots is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Return To The Roots. If not, see <http://www.gnu.org/licenses/>.
#ifndef NOSIGN_H_INCLUDED
#define NOSIGN_H_INCLUDED

#include "noDisappearingEnvObject.h"
class SerializedGameData;

/// Stellt ein Ressourcen-Schild dar
class noSign : public noDisappearingEnvObject
{
    public:
        noSign(const MapPoint pt, const unsigned char type, const unsigned char quantity);
        noSign(SerializedGameData& sgd, const unsigned obj_id);

        /// Aufräummethoden
    protected:  void Destroy_noSign();
    public:     void Destroy() override { Destroy_noSign(); }
        /// Serialisierungsfunktionen
    protected:  void Serialize_noSign(SerializedGameData& sgd) const;
    public:     void Serialize(SerializedGameData& sgd) const override { Serialize_noSign(sgd); }

        GO_Type GetGOT() const override { return GOT_SIGN; }

        /// An x,y zeichnen.
        void Draw(int x, int y) override;

        void HandleEvent(const unsigned int id) override;

        unsigned char GetSignType() const { return type; }

    private:

        /// Typ der Ressource (0 = Erz, 1 = Gold, 2 = Kohle, 3 = Granit, 4 = Wasser, 5 = nix)
        const unsigned char type;
        /// Häufigkeit der Ressource
        const unsigned char quantity;
};

#endif // !NOSIGN_H_INCLUDED
