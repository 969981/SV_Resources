/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00809130; name: FUN_00809130
 */


uint FUN_00809130(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *local_50;
  long local_48 [3];
  
  uVar5 = *(uint *)(param_1 + 0x40);
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_50);
  plVar6 = local_50;
  while (plVar6 != local_48) {
    uVar2 = FUN_00560b6c(plVar6 + 8);
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_00560b98(plVar6 + 8);
      if (uVar5 <= uVar1) {
        uVar1 = uVar5;
      }
      uVar5 = uVar1;
    }
    plVar3 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar3 = plVar6 + 2;
      if (*(long **)*plVar3 == plVar6) {
        plVar6 = (long *)*plVar3;
      }
      else {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar6 = (long *)*plVar3;
        } while (*plVar6 != lVar4);
      }
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_00558b48(&local_50,local_48[0]);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return uVar5;
}


