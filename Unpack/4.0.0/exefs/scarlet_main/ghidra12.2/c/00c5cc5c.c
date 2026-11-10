/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5cc5c; name: FUN_00c5cc5c
 */


undefined8 FUN_00c5cc5c(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  short local_18 [4];
  
  plVar3 = (long *)*param_2;
  if (*(int *)((long)plVar3 + 0x74) == 2) {
    cVar1 = *(char *)((long)plVar3 + 0x71);
    if ((char)plVar3[0xe] != cVar1) {
      *(char *)(plVar3 + 0xe) = cVar1;
      if (cVar1 == '\0') {
        pcVar6 = *(code **)(*plVar3 + 0x98);
      }
      else {
        pcVar6 = *(code **)(*plVar3 + 0x90);
      }
      (*pcVar6)();
    }
  }
  else if (*(int *)((long)plVar3 + 0x74) == 4) {
    if (plVar3[0x1b] != -1) {
      FUN_01336468(param_1);
      lVar5 = *param_2;
      if (((*(char *)(lVar5 + 0xf8) != '\0') || (*(char *)(lVar5 + 0xfa) != '\0')) &&
         (*(short *)(lVar5 + 0xe0) != -1)) {
        local_18[0] = *(short *)(lVar5 + 0xe0);
        nn::os::LockMutex((MutexType *)(param_1 + 0x120));
        lVar5 = *(long *)(param_1 + 0x88);
        *(undefined1 *)(param_1 + 0x108) = 1;
        if (*(long *)(lVar5 + 8) == *(long *)(lVar5 + 0x10)) {
          FUN_0133bcb4(lVar5,local_18);
        }
        else {
          FUN_01335cdc();
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
        lVar5 = *param_2;
      }
      uVar7 = *(ulong *)(lVar5 + 0xa8);
      nn::os::LockMutex((MutexType *)(param_1 + 0x120));
      lVar5 = *(long *)(param_1 + 0x210);
      if (lVar5 != 0) {
        lVar4 = param_1 + 0x210;
        do {
          bVar2 = *(ulong *)(lVar5 + 0x20) < uVar7;
          if (!bVar2) {
            lVar4 = lVar5;
          }
          lVar5 = *(long *)(lVar5 + (ulong)bVar2 * 8);
        } while (lVar5 != 0);
        if ((lVar4 != param_1 + 0x210) && (*(ulong *)(lVar4 + 0x20) <= uVar7)) {
          FUN_01335e48(param_1 + 0x208);
        }
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
    }
    return 1;
  }
  return 0;
}


