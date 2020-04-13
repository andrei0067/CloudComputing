#pragma once
#include <SumOperation.grpc.pb.h>
class CAdditionServiceImpl final : public SumOperationService::Service
{
public: 
	CAdditionServiceImpl() {};
	::grpc::Status Calculate(::grpc::ServerContext* context, const ::SumRequest* request, ::OperationResponse* response) override;


};

