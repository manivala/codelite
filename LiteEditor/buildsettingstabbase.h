///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2007)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __buildsettingstabbase__
#define __buildsettingstabbase__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/clrpicker.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class BuildTabSettingsBase
///////////////////////////////////////////////////////////////////////////////
class BuildTabSettingsBase : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxColourPickerCtrl* m_colourPickerError;
		wxStaticText* m_staticText2;
		wxColourPickerCtrl* m_colourPickerWarnings;
		wxCheckBox* m_checkBoxSkipeWarnings;
	
	public:
		BuildTabSettingsBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
	
};

#endif //__buildsettingstabbase__
