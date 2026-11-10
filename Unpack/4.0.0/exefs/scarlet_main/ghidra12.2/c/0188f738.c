/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188f738; name: FUN_0188f738
 */


void FUN_0188f738(long param_1)

{
  code *pcVar1;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined1 auStack_a0 [96];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d8));
  pcVar1 = *(code **)(param_1 + 0x98);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar1)(param_1 + 0xb0);
  }
  pcVar1 = *(code **)(param_1 + 0x118);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    (*pcVar1)(param_1 + 0x130);
  }
  pcVar1 = *(code **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 400) = 0;
  memset(&local_c0,0,0x80);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    (*pcVar1)(param_1 + 0x1c0);
    if (local_a8 != (code *)0x0) {
      (*local_a8)(auStack_a0,param_1 + 0x1c0);
      pcVar1 = local_b8;
      *(code **)(param_1 + 0x1b8) = local_a8;
      *(undefined8 *)(param_1 + 0x1a0) = local_c0;
      *(code **)(param_1 + 0x1a8) = local_b8;
      *(undefined8 *)(param_1 + 0x1b0) = local_b0;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        local_a8 = (code *)0x0;
        local_c0 = 0;
        local_b8 = (code *)0x0;
        (*pcVar1)(auStack_a0);
      }
    }
  }
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  *(undefined8 *)(param_1 + 0x220) = 0;
  memset(&local_c0,0,0x80);
  pcVar1 = *(code **)(param_1 + 0x238);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    (*pcVar1)(param_1 + 0x250);
    if (local_a8 != (code *)0x0) {
      (*local_a8)(auStack_a0,param_1 + 0x250);
      pcVar1 = local_b8;
      *(code **)(param_1 + 0x248) = local_a8;
      *(undefined8 *)(param_1 + 0x230) = local_c0;
      *(code **)(param_1 + 0x238) = local_b8;
      *(undefined8 *)(param_1 + 0x240) = local_b0;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        local_a8 = (code *)0x0;
        local_c0 = 0;
        local_b8 = (code *)0x0;
        (*pcVar1)(auStack_a0);
      }
    }
  }
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  memset(&local_c0,0,0x80);
  pcVar1 = *(code **)(param_1 + 0x2c8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    (*pcVar1)(param_1 + 0x2e0);
    if (local_a8 != (code *)0x0) {
      (*local_a8)(auStack_a0,param_1 + 0x2e0);
      pcVar1 = local_b8;
      *(code **)(param_1 + 0x2d8) = local_a8;
      *(undefined8 *)(param_1 + 0x2c0) = local_c0;
      *(code **)(param_1 + 0x2c8) = local_b8;
      *(undefined8 *)(param_1 + 0x2d0) = local_b0;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        local_a8 = (code *)0x0;
        local_c0 = 0;
        local_b8 = (code *)0x0;
        (*pcVar1)(auStack_a0);
      }
    }
  }
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  *(undefined8 *)(param_1 + 0x340) = 0;
  memset(&local_c0,0,0x80);
  pcVar1 = *(code **)(param_1 + 0x358);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    (*pcVar1)(param_1 + 0x370);
    if (local_a8 != (code *)0x0) {
      (*local_a8)(auStack_a0,param_1 + 0x370);
      pcVar1 = local_b8;
      *(code **)(param_1 + 0x368) = local_a8;
      *(undefined8 *)(param_1 + 0x350) = local_c0;
      *(code **)(param_1 + 0x358) = local_b8;
      *(undefined8 *)(param_1 + 0x360) = local_b0;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        local_a8 = (code *)0x0;
        local_c0 = 0;
        local_b8 = (code *)0x0;
        (*pcVar1)(auStack_a0);
      }
    }
  }
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d8));
  return;
}


