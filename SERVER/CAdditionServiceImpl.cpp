#include "CAdditionServiceImpl.h"

::grpc::Status CAdditionServiceImpl::Calculate(::grpc::ServerContext* context, const ::SumRequest* request, ::OperationResponse* response)
{
	int sumResult = request->firstoperand() + request->secondoperand(); // primul/al doilea parametru pe care il trimite serverului
	response->set_result(sumResult);
	return::grpc::Status::OK;
}