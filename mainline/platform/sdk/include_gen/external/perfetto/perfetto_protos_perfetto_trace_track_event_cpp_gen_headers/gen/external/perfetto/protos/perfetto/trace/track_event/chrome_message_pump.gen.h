// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_MESSAGE_PUMP_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_MESSAGE_PUMP_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class ChromeMessagePump;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT ChromeMessagePump : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kSentMessagesInQueueFieldNumber = 1,
    kIoHandlerLocationIidFieldNumber = 2,
  };

  ChromeMessagePump();
  ~ChromeMessagePump() override;
  ChromeMessagePump(ChromeMessagePump&&) noexcept;
  ChromeMessagePump& operator=(ChromeMessagePump&&);
  ChromeMessagePump(const ChromeMessagePump&);
  ChromeMessagePump& operator=(const ChromeMessagePump&);
  bool operator==(const ChromeMessagePump&) const;
  bool operator!=(const ChromeMessagePump& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_sent_messages_in_queue() const { return _has_field_[1]; }
  bool sent_messages_in_queue() const { return sent_messages_in_queue_; }
  void set_sent_messages_in_queue(bool value) { sent_messages_in_queue_ = value; _has_field_.set(1); }

  bool has_io_handler_location_iid() const { return _has_field_[2]; }
  uint64_t io_handler_location_iid() const { return io_handler_location_iid_; }
  void set_io_handler_location_iid(uint64_t value) { io_handler_location_iid_ = value; _has_field_.set(2); }

 private:
  bool sent_messages_in_queue_{};
  uint64_t io_handler_location_iid_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_MESSAGE_PUMP_PROTO_CPP_H_