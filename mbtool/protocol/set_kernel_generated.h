// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_SETKERNEL_MBTOOL_DAEMON_V2_H_
#define FLATBUFFERS_GENERATED_SETKERNEL_MBTOOL_DAEMON_V2_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v2 {
struct GetVersionRequest;
struct GetVersionResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct Rom;
struct GetRomsListRequest;
struct GetRomsListResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct GetBuiltinRomIdsRequest;
struct GetBuiltinRomIdsResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct GetCurrentRomRequest;
struct GetCurrentRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct SwitchRomRequest;
struct SwitchRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v2 {

struct SetKernelRequest;
struct SetKernelResponse;

struct SetKernelRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *rom_id() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::String *boot_blockdev() const { return GetPointer<const flatbuffers::String *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* rom_id */) &&
           verifier.Verify(rom_id()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* boot_blockdev */) &&
           verifier.Verify(boot_blockdev()) &&
           verifier.EndTable();
  }
};

struct SetKernelRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_rom_id(flatbuffers::Offset<flatbuffers::String> rom_id) { fbb_.AddOffset(4, rom_id); }
  void add_boot_blockdev(flatbuffers::Offset<flatbuffers::String> boot_blockdev) { fbb_.AddOffset(6, boot_blockdev); }
  SetKernelRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  SetKernelRequestBuilder &operator=(const SetKernelRequestBuilder &);
  flatbuffers::Offset<SetKernelRequest> Finish() {
    auto o = flatbuffers::Offset<SetKernelRequest>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<SetKernelRequest> CreateSetKernelRequest(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> rom_id = 0,
   flatbuffers::Offset<flatbuffers::String> boot_blockdev = 0) {
  SetKernelRequestBuilder builder_(_fbb);
  builder_.add_boot_blockdev(boot_blockdev);
  builder_.add_rom_id(rom_id);
  return builder_.Finish();
}

struct SetKernelResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint8_t success() const { return GetField<uint8_t>(4, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, 4 /* success */) &&
           verifier.EndTable();
  }
};

struct SetKernelResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(uint8_t success) { fbb_.AddElement<uint8_t>(4, success, 0); }
  SetKernelResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  SetKernelResponseBuilder &operator=(const SetKernelResponseBuilder &);
  flatbuffers::Offset<SetKernelResponse> Finish() {
    auto o = flatbuffers::Offset<SetKernelResponse>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<SetKernelResponse> CreateSetKernelResponse(flatbuffers::FlatBufferBuilder &_fbb,
   uint8_t success = 0) {
  SetKernelResponseBuilder builder_(_fbb);
  builder_.add_success(success);
  return builder_.Finish();
}

}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_SETKERNEL_MBTOOL_DAEMON_V2_H_
