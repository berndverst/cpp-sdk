// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: dapr/proto/runtime/v1/appcallback.proto

#include "dapr/proto/runtime/v1/appcallback.pb.h"
#include "dapr/proto/runtime/v1/appcallback.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace dapr {
namespace proto {
namespace runtime {
namespace v1 {

static const char* AppCallback_method_names[] = {
  "/dapr.proto.runtime.v1.AppCallback/OnInvoke",
  "/dapr.proto.runtime.v1.AppCallback/ListTopicSubscriptions",
  "/dapr.proto.runtime.v1.AppCallback/OnTopicEvent",
  "/dapr.proto.runtime.v1.AppCallback/ListInputBindings",
  "/dapr.proto.runtime.v1.AppCallback/OnBindingEvent",
};

std::unique_ptr< AppCallback::Stub> AppCallback::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AppCallback::Stub> stub(new AppCallback::Stub(channel));
  return stub;
}

AppCallback::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_OnInvoke_(AppCallback_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListTopicSubscriptions_(AppCallback_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_OnTopicEvent_(AppCallback_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListInputBindings_(AppCallback_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_OnBindingEvent_(AppCallback_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status AppCallback::Stub::OnInvoke(::grpc::ClientContext* context, const ::dapr::proto::common::v1::InvokeRequest& request, ::dapr::proto::common::v1::InvokeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_OnInvoke_, context, request, response);
}

void AppCallback::Stub::experimental_async::OnInvoke(::grpc::ClientContext* context, const ::dapr::proto::common::v1::InvokeRequest* request, ::dapr::proto::common::v1::InvokeResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_OnInvoke_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::dapr::proto::common::v1::InvokeResponse>* AppCallback::Stub::AsyncOnInvokeRaw(::grpc::ClientContext* context, const ::dapr::proto::common::v1::InvokeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::dapr::proto::common::v1::InvokeResponse>::Create(channel_.get(), cq, rpcmethod_OnInvoke_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::dapr::proto::common::v1::InvokeResponse>* AppCallback::Stub::PrepareAsyncOnInvokeRaw(::grpc::ClientContext* context, const ::dapr::proto::common::v1::InvokeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::dapr::proto::common::v1::InvokeResponse>::Create(channel_.get(), cq, rpcmethod_OnInvoke_, context, request, false);
}

::grpc::Status AppCallback::Stub::ListTopicSubscriptions(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::dapr::proto::runtime::v1::ListTopicSubscriptionsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListTopicSubscriptions_, context, request, response);
}

void AppCallback::Stub::experimental_async::ListTopicSubscriptions(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::dapr::proto::runtime::v1::ListTopicSubscriptionsResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ListTopicSubscriptions_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::dapr::proto::runtime::v1::ListTopicSubscriptionsResponse>* AppCallback::Stub::AsyncListTopicSubscriptionsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::dapr::proto::runtime::v1::ListTopicSubscriptionsResponse>::Create(channel_.get(), cq, rpcmethod_ListTopicSubscriptions_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::dapr::proto::runtime::v1::ListTopicSubscriptionsResponse>* AppCallback::Stub::PrepareAsyncListTopicSubscriptionsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::dapr::proto::runtime::v1::ListTopicSubscriptionsResponse>::Create(channel_.get(), cq, rpcmethod_ListTopicSubscriptions_, context, request, false);
}

::grpc::Status AppCallback::Stub::OnTopicEvent(::grpc::ClientContext* context, const ::dapr::proto::runtime::v1::TopicEventRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_OnTopicEvent_, context, request, response);
}

void AppCallback::Stub::experimental_async::OnTopicEvent(::grpc::ClientContext* context, const ::dapr::proto::runtime::v1::TopicEventRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_OnTopicEvent_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AppCallback::Stub::AsyncOnTopicEventRaw(::grpc::ClientContext* context, const ::dapr::proto::runtime::v1::TopicEventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_OnTopicEvent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AppCallback::Stub::PrepareAsyncOnTopicEventRaw(::grpc::ClientContext* context, const ::dapr::proto::runtime::v1::TopicEventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_OnTopicEvent_, context, request, false);
}

::grpc::Status AppCallback::Stub::ListInputBindings(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::dapr::proto::runtime::v1::ListInputBindingsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListInputBindings_, context, request, response);
}

void AppCallback::Stub::experimental_async::ListInputBindings(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::dapr::proto::runtime::v1::ListInputBindingsResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ListInputBindings_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::dapr::proto::runtime::v1::ListInputBindingsResponse>* AppCallback::Stub::AsyncListInputBindingsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::dapr::proto::runtime::v1::ListInputBindingsResponse>::Create(channel_.get(), cq, rpcmethod_ListInputBindings_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::dapr::proto::runtime::v1::ListInputBindingsResponse>* AppCallback::Stub::PrepareAsyncListInputBindingsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::dapr::proto::runtime::v1::ListInputBindingsResponse>::Create(channel_.get(), cq, rpcmethod_ListInputBindings_, context, request, false);
}

::grpc::Status AppCallback::Stub::OnBindingEvent(::grpc::ClientContext* context, const ::dapr::proto::runtime::v1::BindingEventRequest& request, ::dapr::proto::runtime::v1::BindingEventResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_OnBindingEvent_, context, request, response);
}

void AppCallback::Stub::experimental_async::OnBindingEvent(::grpc::ClientContext* context, const ::dapr::proto::runtime::v1::BindingEventRequest* request, ::dapr::proto::runtime::v1::BindingEventResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_OnBindingEvent_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::dapr::proto::runtime::v1::BindingEventResponse>* AppCallback::Stub::AsyncOnBindingEventRaw(::grpc::ClientContext* context, const ::dapr::proto::runtime::v1::BindingEventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::dapr::proto::runtime::v1::BindingEventResponse>::Create(channel_.get(), cq, rpcmethod_OnBindingEvent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::dapr::proto::runtime::v1::BindingEventResponse>* AppCallback::Stub::PrepareAsyncOnBindingEventRaw(::grpc::ClientContext* context, const ::dapr::proto::runtime::v1::BindingEventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::dapr::proto::runtime::v1::BindingEventResponse>::Create(channel_.get(), cq, rpcmethod_OnBindingEvent_, context, request, false);
}

AppCallback::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppCallback_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppCallback::Service, ::dapr::proto::common::v1::InvokeRequest, ::dapr::proto::common::v1::InvokeResponse>(
          std::mem_fn(&AppCallback::Service::OnInvoke), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppCallback_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppCallback::Service, ::google::protobuf::Empty, ::dapr::proto::runtime::v1::ListTopicSubscriptionsResponse>(
          std::mem_fn(&AppCallback::Service::ListTopicSubscriptions), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppCallback_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppCallback::Service, ::dapr::proto::runtime::v1::TopicEventRequest, ::google::protobuf::Empty>(
          std::mem_fn(&AppCallback::Service::OnTopicEvent), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppCallback_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppCallback::Service, ::google::protobuf::Empty, ::dapr::proto::runtime::v1::ListInputBindingsResponse>(
          std::mem_fn(&AppCallback::Service::ListInputBindings), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AppCallback_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AppCallback::Service, ::dapr::proto::runtime::v1::BindingEventRequest, ::dapr::proto::runtime::v1::BindingEventResponse>(
          std::mem_fn(&AppCallback::Service::OnBindingEvent), this)));
}

AppCallback::Service::~Service() {
}

::grpc::Status AppCallback::Service::OnInvoke(::grpc::ServerContext* context, const ::dapr::proto::common::v1::InvokeRequest* request, ::dapr::proto::common::v1::InvokeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppCallback::Service::ListTopicSubscriptions(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::dapr::proto::runtime::v1::ListTopicSubscriptionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppCallback::Service::OnTopicEvent(::grpc::ServerContext* context, const ::dapr::proto::runtime::v1::TopicEventRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppCallback::Service::ListInputBindings(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::dapr::proto::runtime::v1::ListInputBindingsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AppCallback::Service::OnBindingEvent(::grpc::ServerContext* context, const ::dapr::proto::runtime::v1::BindingEventRequest* request, ::dapr::proto::runtime::v1::BindingEventResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace dapr
}  // namespace proto
}  // namespace runtime
}  // namespace v1

