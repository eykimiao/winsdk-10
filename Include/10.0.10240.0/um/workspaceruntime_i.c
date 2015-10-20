

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IWorkspace,0xB922BBB8,0x4C55,0x4FEA,0x84,0x96,0xBE,0xB0,0xB4,0x42,0x85,0xE5);


MIDL_DEFINE_GUID(IID, IID_IWorkspace2,0x96D8D7CF,0x783E,0x4286,0x83,0x4C,0xEB,0xC0,0xE9,0x5F,0x78,0x3C);


MIDL_DEFINE_GUID(IID, IID_IWorkspace3,0x1BECBE4A,0xD654,0x423B,0xAF,0xEB,0xBE,0x8D,0x53,0x2C,0x13,0xC6);


MIDL_DEFINE_GUID(IID, IID_IWorkspaceRegistration,0xB922BBB8,0x4C55,0x4FEA,0x84,0x96,0xBE,0xB0,0xB4,0x42,0x85,0xE6);


MIDL_DEFINE_GUID(IID, IID_IWorkspaceRegistration2,0xCF59F654,0x39BB,0x44D8,0x94,0xD0,0x46,0x35,0x72,0x89,0x57,0xE9);


MIDL_DEFINE_GUID(IID, IID_IWorkspaceScriptable,0xEFEA49A2,0xDDA5,0x429D,0x8F,0x42,0xB2,0x3B,0x92,0xC4,0xC3,0x47);


MIDL_DEFINE_GUID(IID, IID_IWorkspaceScriptable2,0xEFEA49A2,0xDDA5,0x429D,0x8F,0x42,0xB3,0x3B,0xA2,0xC4,0xC3,0x48);


MIDL_DEFINE_GUID(IID, IID_IWorkspaceScriptable3,0x531E6512,0x2CBF,0x4BD2,0x80,0xA5,0xD9,0x0A,0x71,0x63,0x6A,0x9A);


MIDL_DEFINE_GUID(IID, IID_IWorkspaceReportMessage,0xa7c06739,0x500f,0x4e8c,0x99,0xa8,0x2b,0xd6,0x95,0x58,0x99,0xeb);


MIDL_DEFINE_GUID(IID, LIBID_WorkspaceRuntimeLib,0x1B8D8AE1,0xA595,0x4687,0xA7,0xAD,0x9E,0x38,0x28,0xE0,0x9B,0x79);


MIDL_DEFINE_GUID(IID, DIID__ITSWkspEvents,0xB922BBB8,0x4C55,0x4FEA,0x84,0x96,0xBE,0xB0,0xB4,0x42,0x85,0xE9);


MIDL_DEFINE_GUID(CLSID, CLSID_Workspace,0x4F1DFCA6,0x3AAD,0x48E1,0x84,0x06,0x4B,0xC2,0x1A,0x50,0x1D,0x7C);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


