/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029aa7ec; name: FUN_029aa7ec
 */


void FUN_029aa7ec(long *param_1)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_e0;
  char *pcStack_d8;
  long local_d0;
  long *local_c8;
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
  if ((char)param_1[0x7e] != '\0') {
    plVar5 = (long *)param_1[0x7c];
    if ((plVar5 != (long *)0x0) && (pcStack_d8 = (char *)plVar5[7], *pcStack_d8 != '\0')) {
      local_e0 = plVar5[6];
      local_d0 = plVar5[8];
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_c8 = plVar5;
      memset(&local_c0,0,0x80);
      FUN_0131fc3c(param_1,&local_e0,&local_c0,100);
      pcVar3 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        local_b8 = (code *)0x0;
        (*pcVar3)(auStack_a0);
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (((char)param_1[0xb] != '\0') || (*(char *)((long)param_1 + 0x59) != '\0')) {
        lVar4 = param_1[0xb];
        plVar5 = param_1 + 7;
        *(undefined2 *)(param_1 + 0xb) = 0;
        if (param_1[9] != 0) {
          FUN_00c6a584(param_1[9],plVar5);
        }
        (**(code **)(*plVar5 + 0x20))(plVar5,(short)lVar4);
      }
    }
    *(undefined1 *)(param_1 + 0x7e) = 0;
  }
  return;
}


