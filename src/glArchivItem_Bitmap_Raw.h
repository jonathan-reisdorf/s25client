// $Id: glArchivItem_Bitmap_Raw.h 6582 2010-07-16 11:23:35Z FloSoft $
//
// Copyright (c) 2005 - 2010 Settlers Freaks (sf-team at siedler25.org)
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
#ifndef GLARCHIVITEM_BITMAP_RAW_H_INCLUDED
#define GLARCHIVITEM_BITMAP_RAW_H_INCLUDED

#pragma once

/// Klasse f�r GL-RAW-Bitmaps.
class glArchivItem_Bitmap_Raw : public libsiedler2::baseArchivItem_Bitmap_Raw, public glArchivItem_Bitmap
{
public:
	/// Konstruktor von @p glArchivItem_Bitmap_Raw.
	glArchivItem_Bitmap_Raw(void) : baseArchivItem_Bitmap(), baseArchivItem_Bitmap_Raw(), glArchivItem_Bitmap() {}

	/// Kopierkonstruktor von @p glArchivItem_Bitmap_Raw.
	glArchivItem_Bitmap_Raw(const glArchivItem_Bitmap_Raw *item) : baseArchivItem_Bitmap(item), baseArchivItem_Bitmap_Raw(item), glArchivItem_Bitmap(item) {}
};

#endif // !GLARCHIVITEM_BITMAP_RAW_H_INCLUDED