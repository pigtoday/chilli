#include "State.h"

namespace fsm
{
namespace model
{

	State::State(xmlNodePtr xNode,const std::string &session,const std::string & filename):node(xNode),
		m_strSession(session),m_strFilename(filename)
	{
		InitializeInstanceFields();
		m_strId = xmlHelper::getXmlNodeAttributesValue(node,"id");
		m_strName = xmlHelper::getXmlNodeAttributesValue(node,"name");
		//m_strVersion = xmlHelper::getXmlNodeAttributesValue(node,"version");
		m_strDescription = xmlHelper::getXmlNodeAttributesValue(node,"memo");
	}


	void State::InitializeInstanceFields()
	{
		
	}
	std::string & State::getId()
	{
		return m_strId;
	}
	std::string & State::getName()
	{
		return m_strName;
	}
	//std::string & State::getVersion()
	//{
	//	return m_strVersion;
	//}
	std::string & State::getDescription()
	{
		return m_strDescription;
	}
}
}