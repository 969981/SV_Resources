/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079d9d8; name: FUN_0079d9d8
 */


undefined8 FUN_0079d9d8(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar2 = *(int *)(param_2 + 0x44);
  iVar4 = (**(code **)(*param_1 + 0xe8))();
  if (((iVar2 != iVar4) ||
      (uVar3 = *(uint *)(param_2 + 0x48), uVar5 = (**(code **)(*param_1 + 0xf0))(param_1),
      uVar5 < uVar3)) ||
     (uVar6 = (**(code **)(*param_1 + 0x350))(param_1,param_2), (uVar6 & 1) == 0)) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x3f));
  plVar1 = param_1 + 0x17;
  uVar6 = FUN_00796784(plVar1);
  if ((uVar6 & 1) == 0) {
LAB_0079da74:
    uVar6 = FUN_00796784(plVar1);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_00796784(param_1 + 0x13);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_007967e8(param_1 + 0x13,plVar1), (uVar6 & 1) == 0))
      goto LAB_0079dac0;
    }
  }
  else {
    uVar6 = FUN_00796784(param_1 + 0x13);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_007967e8(param_1 + 0x13,plVar1), (uVar6 & 1) == 0))
    goto LAB_0079da74;
LAB_0079dac0:
    lVar7 = param_1[0x43];
    if ((*(long *)(lVar7 + 8) != *(long *)(param_2 + 0x28)) ||
       (((*(long *)(lVar7 + 0x10) != *(long *)(param_2 + 0x38) ||
         (*(short *)((long)param_1 + 0x114e) != *(short *)(param_2 + 0x32))) ||
        (*(char *)(lVar7 + 0x1f) != *(char *)(param_2 + 0x41))))) {
      uVar8 = 0;
      goto LAB_0079db08;
    }
  }
  uVar8 = 1;
LAB_0079db08:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3f));
  return uVar8;
}


