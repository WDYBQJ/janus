//
// Created by shuai on 11/25/15.
//
#pragma once

#include "../scheduler.h"

namespace rococo {

class NoneSched: public Scheduler {
 using Scheduler::Scheduler;
 public:
  virtual int OnHandoutRequest(const SimpleCommand &cmd,
                               rrr::i32 *res,
                               map<int32_t, Value> *output,
                               rrr::DeferredReply *defer);
};

}