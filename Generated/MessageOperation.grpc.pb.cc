// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: MessageOperation.proto

#include "MessageOperation.pb.h"
#include "MessageOperation.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* MessageService_method_names[] = {
  "/MessageService/Calculate",
};

std::unique_ptr< MessageService::Stub> MessageService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MessageService::Stub> stub(new MessageService::Stub(channel));
  return stub;
}

MessageService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Calculate_(MessageService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MessageService::Stub::Calculate(::grpc::ClientContext* context, const ::MessasgeRequest& request, ::OperationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Calculate_, context, request, response);
}

void MessageService::Stub::experimental_async::Calculate(::grpc::ClientContext* context, const ::MessasgeRequest* request, ::OperationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Calculate_, context, request, response, std::move(f));
}

void MessageService::Stub::experimental_async::Calculate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::OperationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Calculate_, context, request, response, std::move(f));
}

void MessageService::Stub::experimental_async::Calculate(::grpc::ClientContext* context, const ::MessasgeRequest* request, ::OperationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Calculate_, context, request, response, reactor);
}

void MessageService::Stub::experimental_async::Calculate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::OperationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Calculate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::OperationResponse>* MessageService::Stub::AsyncCalculateRaw(::grpc::ClientContext* context, const ::MessasgeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::OperationResponse>::Create(channel_.get(), cq, rpcmethod_Calculate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::OperationResponse>* MessageService::Stub::PrepareAsyncCalculateRaw(::grpc::ClientContext* context, const ::MessasgeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::OperationResponse>::Create(channel_.get(), cq, rpcmethod_Calculate_, context, request, false);
}

MessageService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MessageService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MessageService::Service, ::MessasgeRequest, ::OperationResponse>(
          std::mem_fn(&MessageService::Service::Calculate), this)));
}

MessageService::Service::~Service() {
}

::grpc::Status MessageService::Service::Calculate(::grpc::ServerContext* context, const ::MessasgeRequest* request, ::OperationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


