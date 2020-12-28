#include <utility>
#include "mediapipe_api/gpu/gpu_buffer.h"

MpReturnCode mp_GpuBuffer__PSgtb(SharedGlTextureBuffer* gl_texture_buffer, mediapipe::GpuBuffer** gpu_buffer_out) {
  TRY {
    *gpu_buffer_out = new mediapipe::GpuBuffer { *gl_texture_buffer };
    RETURN_CODE(MpReturnCode::Success);
  } CATCH_EXCEPTION
}

void mp_GpuBuffer__delete(mediapipe::GpuBuffer* gpu_buffer) {
  delete gpu_buffer;
}

const SharedGlTextureBuffer& mp_GpuBuffer__GetGlTextureBufferSharedPtr(mediapipe::GpuBuffer* gpu_buffer) {
  return gpu_buffer->GetGlTextureBufferSharedPtr();
}

int mp_GpuBuffer__width(mediapipe::GpuBuffer* gpu_buffer) {
  return gpu_buffer->width();
}

int mp_GpuBuffer__height(mediapipe::GpuBuffer* gpu_buffer) {
  return gpu_buffer->height();
}

mediapipe::GpuBufferFormat mp_GpuBuffer__format(mediapipe::GpuBuffer* gpu_buffer) {
  return gpu_buffer->format();
}

void mp_StatusOrGpuBuffer__delete(StatusOrGpuBuffer* status_or_gpu_buffer) {
  delete status_or_gpu_buffer;
}

bool mp_StatusOrGpuBuffer__ok(StatusOrGpuBuffer* status_or_gpu_buffer) {
  return mp_StatusOr__ok(status_or_gpu_buffer);
}

MpReturnCode mp_StatusOrGpuBuffer__status(StatusOrGpuBuffer* status_or_gpu_buffer, mediapipe::Status** status_out) {
  return mp_StatusOr__status(status_or_gpu_buffer, status_out);
}

MpReturnCode mp_StatusOrGpuBuffer__ConsumeValueOrDie(StatusOrGpuBuffer* status_or_gpu_buffer, mediapipe::GpuBuffer** value_out) {
  return mp_StatusOr__ConsumeValueOrDie(status_or_gpu_buffer, value_out);
}

MpReturnCode mp__MakeGpuBufferPacket__Rgb(mediapipe::GpuBuffer* gpu_buffer, mediapipe::Packet** packet_out) {
  TRY {
    *packet_out = new mediapipe::Packet { mediapipe::MakePacket<mediapipe::GpuBuffer>(std::move(*gpu_buffer)) };
    RETURN_CODE(MpReturnCode::Success);
  } CATCH_EXCEPTION
}

MpReturnCode mp__MakeGpuBufferPacket_At__Rgb_Rts(mediapipe::GpuBuffer* gpu_buffer,
                                                 mediapipe::Timestamp* timestamp,
                                                 mediapipe::Packet** packet_out) {
  TRY {
    *packet_out = new mediapipe::Packet { mediapipe::MakePacket<mediapipe::GpuBuffer>(std::move(*gpu_buffer)).At(*timestamp) };
    RETURN_CODE(MpReturnCode::Success);
  } CATCH_EXCEPTION
}

MpReturnCode mp_Packet__ConsumeGpuBuffer(mediapipe::Packet* packet, StatusOrGpuBuffer** status_or_value_out) {
  return mp_Packet__Consume(packet, status_or_value_out);
}

MpReturnCode mp_Packet__GetGpuBuffer(mediapipe::Packet* packet, const mediapipe::GpuBuffer** value_out) {
  return mp_Packet__Get(packet, value_out);
}

MpReturnCode mp_Packet__ValidateAsGpuBuffer(mediapipe::Packet* packet, mediapipe::Status** status_out) {
  TRY {
    *status_out = new mediapipe::Status { packet->ValidateAsType<mediapipe::GpuBuffer>() };
    RETURN_CODE(MpReturnCode::Success);
  } CATCH_EXCEPTION
}
