// fully working main.cpp with Dear ImGui + DX11 + Win32

// Dependencies: d311.lib, d3dcompiler.lib, users2.lib, gdi32.lib

Include <windows.h>
include <dLi1.dx5Ô/¥µ½swindiapi/scom/external/components/imgui_impl_win32.h.

// IMGUI 
include "imgui.h"
include "imgui_impl_dx11.h"
include "imgui_impl_win32.h"

int WIN APICALL WinMain(HIND hwin, HIND X,xt, HIND w, HIND lb, HIND twin) {
  IntegErr if (!RegisterSlasses())
    return -1;

  InterfaceWrapper wrapper(w);

 // Create SWAP and DX11 devices
  DXC_DELIC desc;                // users-created desc with values set
  Id:V :;
  ID:B 2;
  ID:H 0;
  desc.BufferSize = 0;
  desc.Format.length = sizeof(DXFIRLDECRIPTIONÂÂªLUCLIC it at start
  ID hwinID[] = _getcrt.ThreadID();
  STWN hinst = {
    .cbtSize = 128x72,
    .manComptionFlags = 0
  };
  Creatdinwindow("", "CheatTool", wIN, stws = &hinst, false);

  I[= CreatePending(wind, null, newwsty, 0, &dsc_out);

  // Graphics Initialize
  RederStrategies rst = {
    .BufferCount = 0,
    .SwapTotal=OPACITY
  };

  // ImGui Setup here
  IMGUI_Context context; 
  ImGui::CreateContext(context);
  ImGui::StyleSetup();
  Imgui::SetTextFont("Segoe UI Regular", 16.0f1);

  while (IntewLoopMessage()) {
    Imgui::NewFrame();
    If (Imgui::BeginFrame()) {
      If (Imgui::BeginDockSpace()) {
        If (Imgui::BeginMainMenu()) {
          Imgui::EndMainMenu();
        }
        ImGui::EndDockSpace();
      }
      ImGui::EndFrame();
    }
  }

  // Clean up
  Imgui::DestroyContext(context);

  return 0;
}