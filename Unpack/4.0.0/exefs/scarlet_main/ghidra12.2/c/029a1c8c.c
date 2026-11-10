/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a1c8c; name: FUN_029a1c8c
 */


void FUN_029a1c8c(long *param_1)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  if (*(char *)((long)param_1 + 0x463) == '\0') {
    return;
  }
  if (*(char *)((long)param_1 + 0x323) != '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x29));
  lVar4 = param_1[0x44];
  lVar6 = param_1[0x45];
  if (lVar4 != lVar6) {
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
    while (lVar2 = lVar4 + 0x28, lVar2 != lVar6) {
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
    lVar6 = param_1[0x45];
    if (lVar6 != lVar4) {
      if (*(long **)(lVar6 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + -0x10) + 0x20))();
      }
      if (lVar6 + -0x28 != lVar4) {
        do {
          if (*(long **)(lVar6 + -0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar6 + -0x38) + 0x20))();
          }
          lVar6 = lVar6 + -0x28;
        } while (lVar4 + 0x28 != lVar6);
      }
    }
  }
  param_1[0x45] = lVar4;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x29));
  nn::os::LockMutex((MutexType *)(param_1 + 0x25));
  cVar5 = (char)param_1[0x8c];
  if ((cVar5 != '\0') || (*(char *)((long)param_1 + 0x461) != '\0')) {
    if ((*(int *)((long)param_1 + 0x3f4) != 1) &&
       (((char)param_1[0xb] != -0x7e || (*(char *)((long)param_1 + 0x59) != -0x7e)))) {
      lVar4 = param_1[0xb];
      *(undefined2 *)(param_1 + 0xb) = 0x8282;
      if (param_1[9] != 0) {
        FUN_00c6a584(param_1[9],param_1 + 7);
      }
      (**(code **)(param_1[7] + 0x20))(param_1 + 7,(short)lVar4);
      cVar5 = (char)param_1[0x8c];
    }
    if (cVar5 == '\0') {
      if (*(char *)((long)param_1 + 0x461) != '\0') {
        (**(code **)(*param_1 + 0x198))(param_1);
        *(undefined1 *)((long)param_1 + 0x461) = 0;
      }
    }
    else {
      (**(code **)(*param_1 + 400))(param_1);
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x25));
  return;
}


