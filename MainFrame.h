#pragma once

#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:

	MainFrame( const wxString& title);

//private:
//	
//	void OnAnyButtonClicked(wxCommandEvent& evt);
//	void OnButton1Clicked(wxCommandEvent& evt);
//	void OnButton2Clicked(wxCommandEvent& evt);
//	void OnClose(wxCloseEvent& evt);

	void OnMouseEvent(wxMouseEvent& evt);
	//Events
	//wxDECLARE_EVENT_TABLE();
};

