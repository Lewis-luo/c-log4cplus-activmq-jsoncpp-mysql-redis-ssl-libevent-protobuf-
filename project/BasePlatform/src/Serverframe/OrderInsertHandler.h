﻿#ifndef FUANDA_ORDER_INSERT_HANDLER_H
#define FUANDA_ORDER_INSERT_HANDLER_H
////////////////////////////////////////////////////////////////////////////////
#include "Server.h"

namespace serverframe{;
////////////////////////////////////////////////////////////////////////////////
class OrderInsertHandler : public RequestHandler
{
////////////////////////////////////////////////////////////////////////////////
public:
	typedef boost::shared_ptr<google::protobuf::Message> probuf_msg_ptr;

	void OnRequest(IN AmqContext& context);
};


////////////////////////////////////////////////////////////////////////////////
}// serverframe
#endif