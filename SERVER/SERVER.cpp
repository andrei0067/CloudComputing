#include <iostream>
#include "CAdditionServiceImpl.h"
#include "CMessagingServiceImpl.h"

#include <grpc/grpc.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>

int main()
{
    std::string server_adress("localhost:8888");
    CAdditionServiceImpl service;
    CMessagingServiceImpl service2;

    ::grpc_impl::ServerBuilder serverBuilder;
    serverBuilder.AddListeningPort(server_adress, grpc::InsecureServerCredentials());
    serverBuilder.RegisterService(&service);
    serverBuilder.RegisterService(&service2);
    std::unique_ptr<::grpc_impl::Server> server(serverBuilder.BuildAndStart());
    std::cout << "Server listening on" << server_adress << std::endl;
    server->Wait();


}

