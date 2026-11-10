/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349fa78; name: FUN_0349fa78
 */


undefined8 FUN_0349fa78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_28;
  int iStack_24;
  
  local_50 = *param_1;
  uStack_48 = param_1[1];
  if ((*(int *)((long)param_1 + 4) == 0) || ((int)local_50 == 0)) {
    FUN_0349dde0(&local_50,(ulong)&local_50 | 4);
    uVar4 = 1;
    iVar6 = (int)local_50;
  }
  else {
    uVar4 = 0;
    iVar6 = (int)local_50;
  }
  iVar2 = local_50._4_4_;
  lVar5 = CONCAT44(local_50._4_4_,iVar6);
  if ((*PTR_DAT_047e7258 != '\0') && ((iVar6 == 0 || (local_50._4_4_ == 0)))) {
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    lVar3 = FUN_034a0148(iVar6,iVar2);
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x28);
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
  }
  lVar3 = DAT_048b0118;
  if (lVar5 == 0) {
    for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(char *)(lVar3 + 0x46d) != '\0') {
        return 1;
      }
    }
  }
  else {
    local_28 = (int)lVar5;
    iStack_24 = (int)((ulong)lVar5 >> 0x20);
    if ((local_28 == 0) || (lVar1 = DAT_048b0118, lVar3 = lVar5, iStack_24 == 0)) {
      FUN_0349dde0(&local_28,&iStack_24);
      lVar3 = CONCAT44(iStack_24,local_28);
      lVar1 = DAT_048b0118;
    }
    for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(long *)(lVar1 + 0x28) == lVar3) {
        return 1;
      }
    }
  }
  uVar4 = FUN_0349e7f4(lVar5,&local_50,param_3,param_2,0,0,0,uVar4);
  return uVar4;
}


