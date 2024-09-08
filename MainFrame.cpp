#include "MainFrame.h"
#include <wx/spinctrl.h>


MainFrame::MainFrame(const wxString& title) :
	wxFrame(nullptr, wxID_ANY, title)

{
	wxPanel* panel = new wxPanel(this);

	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35), 
	/* style */ wxBU_LEFT);

	wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "Check Box", wxPoint(550, 55), wxDefaultSize, 
	/* style */ wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);

	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, " Static Text - NOT editable", wxPoint(0, 150), wxSize(400, -1),
	/* style */ wxALIGN_CENTER_HORIZONTAL );
	staticText->SetBackgroundColour( *wxLIGHT_GREY);

	wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "TextCtrl - editable", wxPoint(500, 145), wxSize(200, -1), 
	/* style */ wxTE_PASSWORD);


	wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1),
	/* style */ wxSL_VALUE_LABEL);

	wxGauge* Gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(590, 205), wxSize(-1, 125), 
	/* style */	wxGA_VERTICAL);
	Gauge->SetValue(50);

	wxArrayString choices;
	choices.Add("Item B");
	choices.Add("Item C");
	choices.Add("Item A");

	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices, 
	/* style */ wxCB_SORT);
	choice->Select(0);


	wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1), 
	/* style */wxSP_WRAP);

	wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices, 
	/* style */	wxLB_MULTIPLE);

	wxRadioBox* RadioBox = new wxRadioBox(panel, wxID_ANY, "Radio Box", wxPoint(555, 450), wxDefaultSize, choices, 3,
	/* style */ wxRA_SPECIFY_ROWS);
}
