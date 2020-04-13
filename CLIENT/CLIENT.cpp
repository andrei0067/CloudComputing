#include <iostream>
#include <SumOperation.grpc.pb.h>
#include <MessageOperation.grpc.pb.h>

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;

int main()
{
    grpc_init();
    ClientContext context;

    /*auto sum_stub = SumOperationService::NewStub(grpc::CreateChannel("localhost:8888", grpc::InsecureChannelCredentials()));
    SumRequest sumRequest;
    sumRequest.set_firstoperand(1);
    sumRequest.set_secondoperand(4);
    OperationResponse response;
    auto status = sum_stub->Calculate(&context, sumRequest, &response);
    if (status.ok())
    {
        std::cout << "Sum:" << response.result() << std::endl;
    }*/

    auto message_stub = MessageService::NewStub(grpc::CreateChannel("localhost:8888", grpc::InsecureChannelCredentials()));
   
    MessasgeRequest messasgeRequest;  
    OperationResponse response;

    std::cout << "Introduceti numele clientului  : ";

    std::string message;
    std::getline(std::cin, message);

    messasgeRequest.set_message(message);
    auto status = message_stub->Calculate(&context, messasgeRequest, &response);

    if (status.ok())
    {
        std::cout << "Mesajul a fost trimis\n";
    }

    return 0;
}

