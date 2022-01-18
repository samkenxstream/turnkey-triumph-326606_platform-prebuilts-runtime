// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_ANDROID_LOG_CONSTANTS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_ANDROID_LOG_CONSTANTS_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


enum AndroidLogId : int32_t {
  LID_DEFAULT = 0,
  LID_RADIO = 1,
  LID_EVENTS = 2,
  LID_SYSTEM = 3,
  LID_CRASH = 4,
  LID_STATS = 5,
  LID_SECURITY = 6,
  LID_KERNEL = 7,
};

const AndroidLogId AndroidLogId_MIN = LID_DEFAULT;
const AndroidLogId AndroidLogId_MAX = LID_KERNEL;

enum AndroidLogPriority : int32_t {
  PRIO_UNSPECIFIED = 0,
  PRIO_UNUSED = 1,
  PRIO_VERBOSE = 2,
  PRIO_DEBUG = 3,
  PRIO_INFO = 4,
  PRIO_WARN = 5,
  PRIO_ERROR = 6,
  PRIO_FATAL = 7,
};

const AndroidLogPriority AndroidLogPriority_MIN = PRIO_UNSPECIFIED;
const AndroidLogPriority AndroidLogPriority_MAX = PRIO_FATAL;

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.