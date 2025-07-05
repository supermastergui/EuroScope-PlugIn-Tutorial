#include "pch.h"
#include "CESPlugIn.h"
#include <string>

CESPlugIn* pMyPlugIn = nullptr;

void __declspec (dllexport)
EuroScopePlugInInit(EuroScopePlugIn::CPlugIn** ppPlugInInstance)
{
    // allocate
    *ppPlugInInstance = pMyPlugIn =
        new CESPlugIn();
}

void __declspec (dllexport)
EuroScopePlugInExit(void)
{
    delete pMyPlugIn;
}

CESPlugIn::CESPlugIn(void)
    :CPlugIn(EuroScopePlugIn::COMPATIBILITY_CODE,
        "Your Plugin name",
        "x.x.x",
        "Your name",
        "Your LICENSE")
{
    using namespace std;
    for (int i = 1; i <= 10000; i++) {
        DisplayUserMessage("NOTAM", "DearAuthor", string("Congratulations! 'Hello World!' No." + std::to_string(i)).c_str(), 1, 0, 0, 0, 0);
    }
}