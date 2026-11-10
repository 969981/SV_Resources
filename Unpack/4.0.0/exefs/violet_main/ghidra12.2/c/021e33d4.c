/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e33d4; name: FUN_021e33d4
 */


void FUN_021e33d4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char local_28 [8];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar3 != lVar4) {
      do {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                  (*(long **)(param_1 + 0x40),*(undefined8 *)(lVar3 + 8),
                   *(undefined8 *)(lVar3 + 0x10));
        lVar3 = lVar3 + 0x30;
      } while (lVar4 != lVar3);
      lVar3 = *(long *)(param_1 + 8);
      lVar4 = *(long *)(param_1 + 0x10);
      while (lVar1 = lVar4, lVar1 != lVar3) {
        lVar4 = lVar1 + -0x30;
        if (*(char *)(lVar1 + -0x10) != '\0') {
          *(undefined1 *)(lVar1 + -0x10) = 0;
        }
      }
    }
    *(long *)(param_1 + 0x10) = lVar3;
    FUN_02b6917c((long *)(param_1 + 8));
  }
  else {
    plVar2 = *(long **)(param_1 + 0x60);
    if (plVar2 != (long *)0x0) {
      local_28[0] = '\0';
      (**(code **)(*plVar2 + 0x60))(plVar2,local_28);
      if (local_28[0] != '\0') {
        local_28[0] = '\0';
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  return;
}


