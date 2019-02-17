#ifndef CIMGUI_HELPER
#define CIMGUI_HELPER

#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include "cimgui.h"

// ImGuiIO_Get
CIMGUI_API ImGuiConfigFlags ImGuiIO_Get_ConfigFlags(ImGuiIO* io);
CIMGUI_API ImGuiBackendFlags ImGuiIO_Get_BackendFlags(ImGuiIO* io);
CIMGUI_API ImVec2 ImGuiIO_Get_DisplaySize(ImGuiIO* io);
CIMGUI_API float ImGuiIO_Get_DeltaTime(ImGuiIO* io);
CIMGUI_API float ImGuiIO_Get_IniSavingRate(ImGuiIO* io);
CIMGUI_API const char* ImGuiIO_Get_IniFilename(ImGuiIO* io);
CIMGUI_API const char* ImGuiIO_Get_LogFilename(ImGuiIO* io);
CIMGUI_API float ImGuiIO_Get_MouseDoubleClickTime(ImGuiIO* io);
CIMGUI_API float ImGuiIO_Get_MouseDoubleClickMaxDist(ImGuiIO* io);
CIMGUI_API float ImGuiIO_Get_MouseDragThreshold(ImGuiIO* io);
CIMGUI_API int ImGuiIO_Get_KeyMap(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_KeyRepeatDelay(ImGuiIO* io);
CIMGUI_API float ImGuiIO_Get_KeyRepeatRate(ImGuiIO* io);
CIMGUI_API void* ImGuiIO_Get_UserData(ImGuiIO* io);
CIMGUI_API ImFontAtlas* ImGuiIO_Get_Fonts(ImGuiIO* io);
CIMGUI_API float ImGuiIO_Get_FontGlobalScale(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_FontAllowUserScaling(ImGuiIO* io);
CIMGUI_API ImFont* ImGuiIO_Get_FontDefault(ImGuiIO* io);
CIMGUI_API ImVec2 ImGuiIO_Get_DisplayFramebufferScale(ImGuiIO* io);
CIMGUI_API ImVec2 ImGuiIO_Get_DisplayVisibleMin(ImGuiIO* io);
CIMGUI_API ImVec2 ImGuiIO_Get_DisplayVisibleMax(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_MouseDrawCursor(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_ConfigMacOSXBehaviors(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_ConfigInputTextCursorBlink(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_ConfigResizeWindowsFromEdges(ImGuiIO* io);
CIMGUI_API const char* ImGuiIO_Get_BackendPlatformName(ImGuiIO* io);
CIMGUI_API const char* ImGuiIO_Get_BackendRendererName(ImGuiIO* io);
CIMGUI_API void* ImGuiIO_Get_ImeWindowHandle(ImGuiIO* io);
CIMGUI_API void* ImGuiIO_Get_RenderDrawListsFnUnused(ImGuiIO* io);
CIMGUI_API ImVec2 ImGuiIO_Get_MousePos(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_MouseDown(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_MouseWheel(ImGuiIO* io);
CIMGUI_API float ImGuiIO_Get_MouseWheelH(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_KeyCtrl(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_KeyShift(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_KeyAlt(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_KeySuper(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_KeysDown(ImGuiIO* io, int i);
CIMGUI_API ImWchar ImGuiIO_Get_InputCharacters(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_NavInputs(ImGuiIO* io, int i);
CIMGUI_API bool ImGuiIO_Get_WantCaptureMouse(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_WantCaptureKeyboard(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_WantTextInput(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_WantSetMousePos(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_WantSaveIniSettings(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_NavActive(ImGuiIO* io);
CIMGUI_API bool ImGuiIO_Get_NavVisible(ImGuiIO* io);
CIMGUI_API float ImGuiIO_Get_Framerate(ImGuiIO* io);
CIMGUI_API int ImGuiIO_Get_MetricsRenderVertices(ImGuiIO* io);
CIMGUI_API int ImGuiIO_Get_MetricsRenderIndices(ImGuiIO* io);
CIMGUI_API int ImGuiIO_Get_MetricsRenderWindows(ImGuiIO* io);
CIMGUI_API int ImGuiIO_Get_MetricsActiveWindows(ImGuiIO* io);
CIMGUI_API int ImGuiIO_Get_MetricsActiveAllocations(ImGuiIO* io);
CIMGUI_API ImVec2 ImGuiIO_Get_MouseDelta(ImGuiIO* io);
CIMGUI_API ImVec2 ImGuiIO_Get_MousePosPrev(ImGuiIO* io);
CIMGUI_API ImVec2 ImGuiIO_Get_MouseClickedPos(ImGuiIO* io, int i);
CIMGUI_API double ImGuiIO_Get_MouseClickedTime(ImGuiIO* io, int i);
CIMGUI_API bool ImGuiIO_Get_MouseClicked(ImGuiIO* io, int i);
CIMGUI_API bool ImGuiIO_Get_MouseDoubleClicked(ImGuiIO* io, int i);
CIMGUI_API bool ImGuiIO_Get_MouseReleased(ImGuiIO* io, int i);
CIMGUI_API bool ImGuiIO_Get_MouseDownOwned(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_MouseDownDuration(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_MouseDownDurationPrev(ImGuiIO* io, int i);
CIMGUI_API ImVec2 ImGuiIO_Get_MouseDragMaxDistanceAbs(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_MouseDragMaxDistanceSqr(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_KeysDownDuration(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_KeysDownDurationPrev(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_NavInputsDownDuration(ImGuiIO* io, int i);
CIMGUI_API float ImGuiIO_Get_NavInputsDownDurationPrev(ImGuiIO* io, int i);

// ImGuiIO_Set
CIMGUI_API void ImGuiIO_Set_ConfigFlags(ImGuiIO* io, ImGuiConfigFlags x);
CIMGUI_API void ImGuiIO_Set_BackendFlags(ImGuiIO* io, ImGuiBackendFlags x);
CIMGUI_API void ImGuiIO_Set_DisplaySize(ImGuiIO* io, ImVec2 x);
CIMGUI_API void ImGuiIO_Set_DeltaTime(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_IniSavingRate(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_IniFilename(ImGuiIO* io, const char* x);
CIMGUI_API void ImGuiIO_Set_LogFilename(ImGuiIO* io, const char* x);
CIMGUI_API void ImGuiIO_Set_MouseDoubleClickTime(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_MouseDoubleClickMaxDist(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_MouseDragThreshold(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_KeyMap(ImGuiIO* io, int i, int x);
CIMGUI_API void ImGuiIO_Set_KeyRepeatDelay(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_KeyRepeatRate(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_UserData(ImGuiIO* io, void* x);
CIMGUI_API void ImGuiIO_Set_Fonts(ImGuiIO* io, ImFontAtlas* x);
CIMGUI_API void ImGuiIO_Set_FontGlobalScale(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_FontAllowUserScaling(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_FontDefault(ImGuiIO* io, ImFont* x);
CIMGUI_API void ImGuiIO_Set_DisplayFramebufferScale(ImGuiIO* io, ImVec2 x);
CIMGUI_API void ImGuiIO_Set_DisplayVisibleMin(ImGuiIO* io, ImVec2 x);
CIMGUI_API void ImGuiIO_Set_DisplayVisibleMax(ImGuiIO* io, ImVec2 x);
CIMGUI_API void ImGuiIO_Set_MouseDrawCursor(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_ConfigMacOSXBehaviors(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_ConfigInputTextCursorBlink(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_ConfigResizeWindowsFromEdges(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_BackendPlatformName(ImGuiIO* io, const char* x);
CIMGUI_API void ImGuiIO_Set_BackendRendererName(ImGuiIO* io, const char* x);
CIMGUI_API void ImGuiIO_Set_ImeWindowHandle(ImGuiIO* io, void* x);
CIMGUI_API void ImGuiIO_Set_RenderDrawListsFnUnused(ImGuiIO* io, void* x);
CIMGUI_API void ImGuiIO_Set_MousePos(ImGuiIO* io, ImVec2 x);
CIMGUI_API void ImGuiIO_Set_MouseDown(ImGuiIO* io, int i, bool x);
CIMGUI_API void ImGuiIO_Set_MouseWheel(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_MouseWheelH(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_KeyCtrl(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_KeyShift(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_KeyAlt(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_KeySuper(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_KeysDown(ImGuiIO* io, int i, bool x);
CIMGUI_API void ImGuiIO_Set_InputCharacters(ImGuiIO* io, int i, ImWchar x);
CIMGUI_API void ImGuiIO_Set_NavInputs(ImGuiIO* io, int i, float x);
CIMGUI_API void ImGuiIO_Set_WantCaptureMouse(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_WantCaptureKeyboard(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_WantTextInput(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_WantSetMousePos(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_WantSaveIniSettings(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_NavActive(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_NavVisible(ImGuiIO* io, bool x);
CIMGUI_API void ImGuiIO_Set_Framerate(ImGuiIO* io, float x);
CIMGUI_API void ImGuiIO_Set_MetricsRenderVertices(ImGuiIO* io, int x) ;
CIMGUI_API void ImGuiIO_Set_MetricsRenderIndices(ImGuiIO* io, int x);
CIMGUI_API void ImGuiIO_Set_MetricsRenderWindows(ImGuiIO* io, int x);
CIMGUI_API void ImGuiIO_Set_MetricsActiveWindows(ImGuiIO* io, int x);
CIMGUI_API void ImGuiIO_Set_MetricsActiveAllocations(ImGuiIO* io, int x);
CIMGUI_API void ImGuiIO_Set_MouseDelta(ImGuiIO* io, ImVec2 x);
CIMGUI_API void ImGuiIO_Set_MousePosPrev(ImGuiIO* io, ImVec2 x);
CIMGUI_API void ImGuiIO_Set_MouseClickedPos(ImGuiIO* io, int i, ImVec2 x);
CIMGUI_API void ImGuiIO_Set_MouseClickedTime(ImGuiIO* io, int i, double x);
CIMGUI_API void ImGuiIO_Set_MouseClicked(ImGuiIO* io, int i, bool x);
CIMGUI_API void ImGuiIO_Set_MouseDoubleClicked(ImGuiIO* io, int i, bool x);
CIMGUI_API void ImGuiIO_Set_MouseReleased(ImGuiIO* io, int i, bool x);
CIMGUI_API void ImGuiIO_Set_MouseDownOwned(ImGuiIO* io, int i, bool x);
CIMGUI_API void ImGuiIO_Set_MouseDownDuration(ImGuiIO* io, int i, float x);
CIMGUI_API void ImGuiIO_Set_MouseDownDurationPrev(ImGuiIO* io, int i, float x);
CIMGUI_API void ImGuiIO_Set_MouseDragMaxDistanceAbs(ImGuiIO* io, int i, ImVec2 x);
CIMGUI_API void ImGuiIO_Set_MouseDragMaxDistanceSqr(ImGuiIO* io, int i, float x);
CIMGUI_API void ImGuiIO_Set_KeysDownDuration(ImGuiIO* io, int i, float x);
CIMGUI_API void ImGuiIO_Set_KeysDownDurationPrev(ImGuiIO* io, int i, float x);
CIMGUI_API void ImGuiIO_Set_NavInputsDownDuration(ImGuiIO* io, int i, float x);
CIMGUI_API void ImGuiIO_Set_NavInputsDownDurationPrev(ImGuiIO* io, int i, float x);

// ImDrawData_Get
CIMGUI_API bool ImDrawData_Get_Valid(ImDrawData* data);
CIMGUI_API ImDrawList* ImDrawData_Get_CmdLists(ImDrawData* data, int i);
CIMGUI_API int ImDrawData_Get_CmdListsCount(ImDrawData* data);
CIMGUI_API int ImDrawData_Get_TotalIdxCount(ImDrawData* data);
CIMGUI_API int ImDrawData_Get_TotalVtxCount(ImDrawData* data);
CIMGUI_API ImVec2 ImDrawData_Get_DisplayPos(ImDrawData* data);
CIMGUI_API ImVec2 ImDrawData_Get_DisplaySize(ImDrawData* data);

// ImDrawList_Get
CIMGUI_API ImVector_ImDrawCmd ImDrawList_Get_CmdBuffer(ImDrawList* list);
CIMGUI_API ImVector_ImDrawIdx ImDrawList_Get_IdxBuffer(ImDrawList* list);
CIMGUI_API ImVector_ImDrawVert ImDrawList_Get_VtxBuffer(ImDrawList* list);

// ImDrawCmd_Get
CIMGUI_API unsigned int ImDrawCmd_Get_ElemCount(ImDrawCmd* cmd);
CIMGUI_API ImVec4 ImDrawCmd_Get_ClipRect(ImDrawCmd* cmd);
CIMGUI_API ImTextureID ImDrawCmd_Get_TextureId(ImDrawCmd* cmd);
CIMGUI_API ImDrawCallback ImDrawCmd_Get_UserCallback(ImDrawCmd* cmd);
CIMGUI_API void* ImDrawCmd_Get_UserCallbackData(ImDrawCmd* cmd);

// ImGuiSizeCallbackData_Get
CIMGUI_API void* ImGuiSizeCallbackData_Get_UserData(ImGuiSizeCallbackData* data);
CIMGUI_API ImVec2 ImGuiSizeCallbackData_Get_Pos(ImGuiSizeCallbackData* data);
CIMGUI_API ImVec2 ImGuiSizeCallbackData_Get_CurrentSize(ImGuiSizeCallbackData* data);
CIMGUI_API ImVec2 ImGuiSizeCallbackData_Get_DesiredSize(ImGuiSizeCallbackData* data);
// ImGuiSizeCallbackData_Set
CIMGUI_API void ImGuiSizeCallbackData_Set_DesiredSize(ImGuiSizeCallbackData* data, ImVec2 x);


#endif // CIMGUI_HELPER
