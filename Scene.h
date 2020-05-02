//--------------------------------------------------------------------------------------
// File: Scene.h
// Desc: 
//
// Author:      QUALCOMM, Advanced Content Group - Snapdragon SDK
//
//               Copyright (c) 2013 QUALCOMM Technologies, Inc. 
//                         All Rights Reserved. 
//                      QUALCOMM Proprietary/GTDR
//--------------------------------------------------------------------------------------
#ifndef SCENE_H
#define SCENE_H

#include <OpenGLES/FrmUserInterfaceGLES.h>
#include <OpenGLES/FrmResourceGLES.h>
#include <OpenGLES/FrmFontGLES.h>
#include <FrmUtils.h>

#include "fluid.h"

//--------------------------------------------------------------------------------------
// Name: class CSample
// Desc: The main application class for this sample
//--------------------------------------------------------------------------------------
class CSample : public CFrmApplication
{
    
public:
    virtual BOOL Initialize();
    virtual BOOL Resize();
    virtual VOID Destroy();
    virtual VOID Update();
    virtual VOID Render();

    CSample( const CHAR* strName );
	

	void    DrawScene(double time);

	void    BuildInfoString(char *pBuffer, int iSize, float fFrameRate);
    void    FlameLogMsg_getGLError(int Msg);

	void    FlameLogMsg_int(int Msg);
	void    FlameLogMsg_float(float Msg);

private:    


    const CHAR*  g_strWindowTitle;
    UINT32 m_nWidth;
    UINT32 m_nHeight;
    FLOAT  g_fAspectRatio;

    FRMMATRIX4X4       m_matProj;
	
    CFrmTexture*       m_pLogoTexture;

	UINT32              m_FrameCount;
    FLOAT               m_LastFPSDisplayTime;

	CFrmFontGLES*          m_pFont;
    CFrmTimer              m_Timer;
    CFrmUserInterfaceGLES  m_UserInterface;
};

#endif // SCENE_H
