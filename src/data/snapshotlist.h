// 
//  Copyright 2012 MultiMC Contributors
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//

#pragma once

#include <wx/arrstr.h>

#include <wx/string.h>

class SnapshotList : public wxArrayString
{
public:
	SnapshotList();

	bool LoadFromURL(wxString url);

	void Sort(bool descending = false);

	static int CompareSnapshots(wxString *first, wxString *second, bool reverse = false);

	static inline int CompareSnapshotsAscending(wxString *first, wxString *second)
	{
		return CompareSnapshots(first, second);
	}

	static inline int CompareSnapshotsDescending(wxString *first, wxString *second)
	{
		return CompareSnapshots(first, second, true);
	}
};
