#include "CMessagingServiceImpl.h"
#include <iostream>

::grpc::Status CMessagingServiceImpl::Calculate(::grpc::ServerContext* context, const::MessasgeRequest* request, ::OperationResponse* response)
{

	auto message = request->message();
	std::cout << "Numele clientului : " << message << " \n";

	return::grpc::Status::OK;
}
