#ifndef ONEFLOW_CORE_KERNEL_TOTAL_LOSS_INSTANCE_NUM_KERNEL_H_
#define ONEFLOW_CORE_KERNEL_TOTAL_LOSS_INSTANCE_NUM_KERNEL_H_

#include "oneflow/core/kernel/kernel.h"

namespace oneflow {

template<typename T>
class TotalLossInstanceNumKernel final : public KernelIf<DeviceType::kCPU> {
 public:
  OF_DISALLOW_COPY_AND_MOVE(TotalLossInstanceNumKernel);
  TotalLossInstanceNumKernel() = default;
  ~TotalLossInstanceNumKernel() override = default;

 private:
  void ForwardDataContent(const KernelCtx& ctx,
                          std::function<Blob*(const std::string&)> BnInOp2Blob) const override;
};

}  // namespace oneflow

#endif  // ONEFLOW_CORE_KERNEL_TOTAL_LOSS_INSTANCE_NUM_KERNEL_H_
