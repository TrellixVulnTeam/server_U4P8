
#include "KBEngineArgs.h"
#include "KBDebug.h"

KBEngineArgs::KBEngineArgs():
	ip(TEXT("127.0.0.1")),
	port(20013),
	clientType(EKCLIENT_TYPE::CLIENT_TYPE_WIN),
	syncPlayerMS(100),
	useAliasEntityID(true),
	isOnInitCallPropertysSetMethods(true),
	serverHeartbeatTick(15),
	TCP_SEND_BUFFER_MAX(TCP_PACKET_MAX),
	UDP_SEND_BUFFER_MAX(128),
	TCP_RECV_BUFFER_MAX(TCP_PACKET_MAX),
	UDP_RECV_BUFFER_MAX(128)
{
}

KBEngineArgs::~KBEngineArgs()
{
}

int KBEngineArgs::getTCPRecvBufferSize()
{
	return (int)TCP_RECV_BUFFER_MAX;
}

int KBEngineArgs::getTCPSendBufferSize()
{
	return (int)TCP_SEND_BUFFER_MAX;
}

int KBEngineArgs::getUDPRecvBufferSize()
{
	return (int)UDP_RECV_BUFFER_MAX;
}

int KBEngineArgs::getUDPSendBufferSize()
{
	return (int)UDP_SEND_BUFFER_MAX;
}