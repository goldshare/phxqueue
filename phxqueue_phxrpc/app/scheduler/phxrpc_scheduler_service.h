/* phxrpc_scheduler_service.h

 Generated by phxrpc_pb2service from scheduler.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include "scheduler.pb.h"


class SchedulerService {
  public:
    SchedulerService();
    virtual ~SchedulerService();

    virtual int PHXEcho(const google::protobuf::StringValue &req,
                        google::protobuf::StringValue *resp);

    virtual int GetAddrScale(const phxqueue::comm::proto::GetAddrScaleRequest &req,
                             phxqueue::comm::proto::GetAddrScaleResponse *resp);

};
