/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __AMDGPU_DM_IRQ_PARAMS_H__
#define __AMDGPU_DM_IRQ_PARAMS_H__

enum amdgpu_flip_status {
	AMDGPU_FLIP_NONE,
	AMDGPU_FLIP_PENDING,
	AMDGPU_FLIP_SUBMITTED
};

struct dm_irq_params {
	struct amdgpu_flip_work *pflip_works;
	enum amdgpu_flip_status pflip_status;
	int deferred_flip_completion;
	u32 last_flip_vblank;
};

#endif /* __AMDGPU_DM_IRQ_PARAMS_H__ */
