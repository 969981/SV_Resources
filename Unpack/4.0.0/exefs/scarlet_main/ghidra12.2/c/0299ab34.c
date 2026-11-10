/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299ab34; name: FUN_0299ab34
 */


void FUN_0299ab34(long *param_1)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  if (*(char *)((long)param_1 + 0x323) != '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x29));
  lVar4 = param_1[0x44];
  lVar5 = param_1[0x45];
  if (lVar4 != lVar5) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    FUN_0131fc3c(param_1,lVar4,&local_c0,*(undefined4 *)(lVar4 + 0x20));
    pcVar3 = local_b8;
    bVar1 = local_b8 != (code *)0x0;
    local_b8 = (code *)0x0;
    if (bVar1) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar3)(auStack_a0);
    }
    while (lVar2 = lVar4 + 0x28, lVar2 != lVar5) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      FUN_0131fc3c(param_1,lVar2,&local_c0,*(undefined4 *)(lVar4 + 0x48));
      pcVar3 = local_b8;
      bVar1 = local_b8 != (code *)0x0;
      local_b8 = (code *)0x0;
      lVar4 = lVar2;
      if (bVar1) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        local_b8 = (code *)0x0;
        (*pcVar3)(auStack_a0);
      }
    }
    lVar4 = param_1[0x44];
    lVar5 = param_1[0x45];
    if (lVar5 != lVar4) {
      if (*(long **)(lVar5 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + -0x10) + 0x20))();
      }
      if (lVar5 + -0x28 != lVar4) {
        do {
          if (*(long **)(lVar5 + -0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar5 + -0x38) + 0x20))();
          }
          lVar5 = lVar5 + -0x28;
        } while (lVar4 + 0x28 != lVar5);
      }
    }
  }
  param_1[0x45] = lVar4;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x29));
  return;
}


