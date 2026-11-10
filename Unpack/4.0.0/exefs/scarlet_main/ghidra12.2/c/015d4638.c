/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d4638; name: FUN_015d4638
 */


bool FUN_015d4638(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *local_70 [4];
  long *local_50;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x60));
  FUN_0105016c(local_70,param_2);
  puVar4 = PTR_DAT_047d8b70;
  lVar6 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar6 == lVar3) {
    lVar7 = lVar6;
  }
  else {
    do {
      plVar5 = (long *)FUN_00f618d8(lVar6);
      plVar1 = (long *)puVar4;
      if (local_70[0] != (long *)0x0) {
        plVar1 = local_70[0] + 6;
      }
      plVar2 = (long *)puVar4;
      if (*plVar5 != 0) {
        plVar2 = (long *)(*plVar5 + 0x30);
      }
    } while ((((*plVar1 != *plVar2) || (*(long *)(lVar6 + 8) == 0)) ||
             (lVar7 = lVar6, (*(byte *)(*(long *)(lVar6 + 8) + 0x1e8) & 1) == 0)) &&
            (lVar6 = lVar6 + 0x40, lVar7 = lVar3, lVar3 != lVar6));
    lVar6 = *(long *)(param_1 + 0x30);
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x60));
  return lVar6 != lVar7;
}


