#include "tag.h"

char* TagGetType(unsigned short id)
{
	char* result = (char*)malloc(sizeof(char)*50);
	for(int i =0; i<50; i++)
		result[i] = '\0';

	switch (id)
	{
			// SWF Version 1.0

		case 0:
			result = "End (V1.0)";
			break;
		case 1:
			result = "ShowFrame (V1.0)";
			break;
		case 2:
			result = "DefineShape (V1.0)";
			break;
		case 3:
			result = "FreeCharacter (V1.0)";
			break;
		case 4:
			result = "PlaceObject (V1.0)";
			break;
		case 5:
			result = "RemoveObject (V1.0)";
			break;
		case 6:
			result = "DefineBits (V1.0)";
			break;
		case 7:
			result = "DefineButton (V1.0)";
			break;
		case 8:
			result = "JPEGTables (V1.0)";
			break;
		case 9:
			result = "SetBackgroundColor (V1.0)";
			break;
		case 10:
			result = "DefineFont (V1.0)";
			break;
		case 11:
			result = "DefineText (V1.0)";
			break;
		case 12:
			result = "DoAction (V1.0)";
			break;
		case 13:
			result = "DefineFontInfo (V1.0)";
			break;

			// SWF Version 2.0

		case 14:
			result = "DefineSound (V2.0)";
			break;
		case 15:
			result = "StartSound (V2.0)";
			break;
		case 16:
			result = "StopSound (V2.0)";
			break;
		case 17:
			result = "DefineButtonSound (V2.0)";
			break;
		case 18:
			result = "SoundStreamHead (V2.0)";
			break;
		case 19:
			result = "SoundStreamBlock (V2.0)";
			break;
		case 20:
			result = "DefineBitsLossless (V2.0)";
			break;
		case 21:
			result = "DefineBitsJPEG2 (V2.0)";
			break;
		case 22:
			result = "DefineShape2 (V2.0)";
			break;
		case 23:
			result = "DefineButtonCxform (V2.0)";
			break;
		case 24:
			result = "Protect (V2.0)";
			break;

			// SWF Version 3.0

		case 25:
			result = "PathsArePostscript (V3.0)";
			break;
		case 26:
			result = "PlaceObject2 (V3.0)";
			break;
		case 28:
			result = "RemoveObject2 (V3.0)";
			break;
		case 29:
			result = "SyncFrame (V3.0)";
			break;
		case 31:
			result = "FreeAll (V3.0)";
			break;
		case 32:
			result = "DefineShape3 (V3.0)";
			break;
		case 33:
			result = "DefineText2 (V3.0)";
			break;
		case 34:
			result = "DefineButton2 (V3.0)";
			break;
		case 35:
			result = "DefineBitsJPEG3 (V3.0)";
			break;
		case 36:
			result = "DefineBitsLossless2 (V3.0)";
			break;
		case 39:
			result = "DefineSprite (V3.0)";
			break;
		case 40:
			result = "NameCharacter (V3.0)";
			break;
		case 41:
			result = "SerialNumber (V3.0)";
			break;
		case 42:
			result = "DefineTextFormat (V3.0)";
			break;
		case 43:
			result = "FrameLabel (V3.0)";
			break;
		case 45:
			result = "SoundStreamHead2 (V3.0)";
			break;
		case 46:
			result = "DefineMorphShape (V3.0)";
			break;
		case 47:
			result = "GenerateFrame (V3.0)";
			break;
		case 48:
			result = "DefineFont2 (V3.0)";
			break;
		case 49:
			result = "GeneratorCommand (V3.0)";
			break;

			// SWF Version 4.0

		case 37:
			result = "DefineEditText (V4.0)";
			break;
		case 38:
			result = "DefineVideo (V4.0)";
			break;

			// SWF Version 5.0

		case 50:
			result = "DefineCommandObject (V5.0)";
			break;
		case 51:
			result = "CharacterSet (V5.0)";
			break;
		case 52:
			result = "ExternalFont (V5.0)";
			break;
		case 56:
			result = "Export (V5.0)";
			break;
		case 57:
			result = "Import (V5.0)";
			break;
		case 58:
			result = "ProtectDebug (V5.0)";
			break;

			// SWF Version 6.0

		case 59:
			result = "DoInitAction (V6.0)";
			break;
		case 60:
			result = "DefineVideoStream (V6.0)";
			break;
		case 61:
			result = "VideoFrame (V6.0)";
			break;
		case 62:
			result = "DefineFontInfo2 (V6.0)";
			break;
		case 64:
			result = "ProtectDebug2 (V6.0)";
			break;

			// SWF Version 7.0

		case 65:
			result = "ScriptLimits (V7.0)";
			break;
		case 66:
			result = "SetTabIndex (V7.0)";
			break;

			// SWF Version 8.0

		case 69:
			result = "FileAttributes (V8.0)";
			break;
		case 70:
			result = "PlaceObject3 (V8.0)";
			break;
		case 71:
			result = "Import2 (V8.0)";
			break;
		case 73:
			result = "DefineFontAlignZones (V8.0)";
			break;
		case 74:
			result = "CSMTextSettings (V8.0)";
			break;
		case 75:
			result = "DefineFont3 (V8.0)";
			break;
		case 77:
			result = "Metadata (V8.0)";
			break;
		case 78:
			result = "DefineScalingGrid (V8.0)";
			break;
		case 83:
			result = "DefineShape4 (V8.0)";
			break;
		case 84:
			result = "DefineMorphShape2 (V8.0)";
			break;

			// SWF Version 9.0
		case 86:
			result = "DefineSceneAndFrameData(v9.0)";
			break;
		case 88:
			result = "DefineFontName(v9.0)";
			break;
		case 82:
			result = "DoABCDefine(v9.0)";
			break;
		case 76:
			result = "SymbolClass(v9.0)";
			break;
		case 72:
			result = "DoABC(v9.0)";
			break;
		case 87:
			result = "DefineSceneAndFrameData(v9.0)";
			break;

			// SWF Version 10.0
		case 90:
			result = "DefineBitsJPEG4(v10.0)";
			break;
		default:
			result[0] = (char)id;
			break;
	}

	//string = result+'\0';
	//return 50;
	return result;
}
