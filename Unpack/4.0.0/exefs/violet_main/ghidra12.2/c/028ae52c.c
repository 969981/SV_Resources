/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ae52c; name: FUN_028ae52c
 */


undefined8 FUN_028ae52c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3f0));
  uVar5 = *(ulong *)(param_1 + 0x3a8);
  lVar4 = *(long *)(param_1 + 0x370);
  plVar1 = (long *)(lVar4 + (uVar5 / 0xaa) * 8);
  if (*(long *)(param_1 + 0x378) == lVar4) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar1 + (uVar5 % 0xaa) * 0x18;
  }
  uVar5 = *(long *)(param_1 + 0x3b0) + uVar5;
  plVar2 = (long *)(lVar4 + (uVar5 / 0xaa) * 8);
  if (*(long *)(param_1 + 0x378) == lVar4) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar2 + (uVar5 % 0xaa) * 0x18;
  }
  uVar5 = FUN_028ae640(plVar1,lVar3,plVar2,lVar4,param_2);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x3d8) != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x3d8) + 0x40);
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (lVar4 != 0) {
        plVar1 = (long *)(lVar4 + 0x30);
      }
      plVar2 = (long *)PTR_DAT_047d8b70;
      if (*param_2 != 0) {
        plVar2 = (long *)(*param_2 + 0x30);
      }
      if (*plVar1 == *plVar2) goto LAB_028ae5c8;
    }
    uVar6 = 0;
  }
  else {
LAB_028ae5c8:
    uVar6 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3f0));
  return uVar6;
}


