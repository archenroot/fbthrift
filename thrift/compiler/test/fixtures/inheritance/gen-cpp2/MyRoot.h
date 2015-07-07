/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/futures/Future.h>
#include "module_types.h"



namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyRootSvAsyncIf {
 public:
  virtual ~MyRootSvAsyncIf() {}
  virtual void async_tm_do_root(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual void async_do_root(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = delete;
  virtual folly::Future<folly::Unit> future_do_root() = 0;
};

class MyRootAsyncProcessor;

class MyRootSvIf : public MyRootSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef MyRootAsyncProcessor ProcessorType;

  virtual ~MyRootSvIf() {}
  virtual std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor();
  virtual void do_root();
  folly::Future<folly::Unit> future_do_root();
  virtual void async_tm_do_root(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
};

class MyRootSvNull : public MyRootSvIf {
 public:
  virtual ~MyRootSvNull() {}
  virtual void do_root();
};

class MyRootAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  virtual const char* getServiceName();
 protected:
  MyRootSvIf* iface_;
  virtual folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType);
  virtual void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  virtual bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header);
 private:
  static std::unordered_set<std::string> onewayMethods;
  static std::unordered_map<std::string, int16_t> CacheKeyMap;
  typedef void (MyRootAsyncProcessor::*binaryProcessFunction)(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<apache::thrift::BinaryProtocolReader> iprot, apache::thrift::Cpp2RequestContext* context, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  typedef std::unordered_map<std::string, binaryProcessFunction> binaryProcessMap;
  static MyRootAsyncProcessor::binaryProcessMap binaryProcessMap_;
  typedef void (MyRootAsyncProcessor::*compactProcessFunction)(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<apache::thrift::CompactProtocolReader> iprot, apache::thrift::Cpp2RequestContext* context, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  typedef std::unordered_map<std::string, compactProcessFunction> compactProcessMap;
  static MyRootAsyncProcessor::compactProcessMap compactProcessMap_;
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_do_root(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_do_root(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_do_root(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_do_root(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_do_root(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyRootAsyncProcessor(MyRootSvIf* iface) :
      iface_(iface) {}

  virtual ~MyRootAsyncProcessor() {}
};

class MyRootAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, apache::thrift::async::TDelayedDestruction::Destructor> channel_ptr;

  virtual ~MyRootAsyncClient() {}

  MyRootAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext(nullptr, nullptr, channel_->getHeader(), nullptr, nullptr));
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }
  virtual void do_root(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void do_root(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void sync_do_root();
  virtual void sync_do_root(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_do_root();
  virtual folly::Future<folly::Unit> future_do_root(apache::thrift::RpcOptions& rpcOptions);
  virtual void do_root(std::function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_do_root(::apache::thrift::ClientReceiveState& state);
  static void recv_do_root(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_do_root(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_do_root(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void do_rootT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_do_rootT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_do_rootT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
 protected:
  std::unique_ptr<apache::thrift::server::TConnectionContext>connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift