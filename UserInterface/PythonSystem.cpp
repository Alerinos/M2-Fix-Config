#Search:
		if (!stricmp(command, "WIDTH"))
			m_Config.width = atoi(value);
		else if (!stricmp(command, "HEIGHT"))
			m_Config.height = atoi(value);
		
#Substitute:
		if (!stricmp(command, "WIDTH")) {
			if(atoi(value) < 800)
				m_Config.width = 800;
			else
				m_Config.width = atoi(value);
		}
		else if (!stricmp(command, "HEIGHT")) {
			if (atoi(value) < 600)
				m_Config.height = 600;
			else
				m_Config.height = atoi(value);
		}
		
#Search:
void CPythonSystem::SetDefaultConfig()

#My default settings:
void CPythonSystem::SetDefaultConfig()
{
	m_Config = {};

	m_Config.width = 1280;
	m_Config.height = 720;
	m_Config.bpp = 32;
	m_Config.frequency = 60;

	m_Config.bWindowed = true;

	m_Config.is_software_cursor = false;
	m_Config.is_object_culling = true;
	m_Config.iDistance = 3;

	m_Config.gamma = 3;
	m_Config.music_volume = 0.0f;
	m_Config.voice_volume = 0;

	m_Config.bDecompressDDS = false;
	m_Config.bSoftwareTiling = 0;
	m_Config.iShadowLevel = 3;
	m_Config.bViewChat = true;
	m_Config.bAlwaysShowName = DEFAULT_VALUE_ALWAYS_SHOW_NAME;
	m_Config.bShowDamage = true;
	m_Config.bShowSalesText = true;
	m_Config.bHideEmojiInfo = false;
}