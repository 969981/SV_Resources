/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f45260; name: FUN_00f45260
 */


void FUN_00f45260(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_40;
  long local_38;
  ulong local_28;
  
  local_28 = 0;
  FUN_007935cc(&local_28);
  FUN_0079365c();
  local_28 = 0;
  FUN_007935cc(&local_28);
  param_1[6] = local_28;
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  if (param_2 == 0) {
    uVar5 = *(ulong *)PTR_DAT_047d0950;
  }
  else {
    plVar3 = (long *)FUN_0079365c();
    uVar5 = param_1[6] + *plVar3 * (ulong)param_2;
  }
  local_28 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0xd));
  iVar2 = (int)param_1[2];
  while (iVar2 != 0) {
    FUN_007935cc(&local_28);
    if (uVar5 < local_28) {
      if (((int)param_1[2] == 0) || (param_1[1] == 0)) {
        lVar6 = 0;
        lVar4 = FUN_0078fa90(param_1 + 3);
      }
      else {
        lVar6 = param_1[1] - (long)*(int *)((long)param_1 + 0x14);
        lVar4 = FUN_0078fa90(param_1 + 3);
      }
      if (lVar4 == 0) goto LAB_00f4547c;
      lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c);
      goto joined_r0x00f453e8;
    }
    lVar4 = *param_1 - (long)*(int *)((long)param_1 + 0x14);
    if (local_28 < *(ulong *)(lVar4 + 0x10)) break;
    FUN_0078fac8(param_1);
    FUN_0078ce60(lVar4,0);
    iVar2 = (int)param_1[2];
  }
  if ((int)param_1[5] != 0) {
    do {
      lVar4 = FUN_0078fa90(param_1 + 3);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c);
      }
      FUN_0078f9e0(param_1,param_1,*(int *)((long)param_1 + 0x14) + lVar4);
    } while ((int)param_1[5] != 0);
  }
  local_38 = 0;
  FUN_007935cc(&local_38);
  param_1[9] = local_38 - param_1[6];
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_0078c338();
  goto LAB_00f454c4;
joined_r0x00f453e8:
  if (lVar4 != 0) {
    if (lVar6 == 0) {
      FUN_0078f9e0(param_1,param_1,*(int *)((long)param_1 + 0x14) + lVar4);
      lVar4 = FUN_0078fa90(param_1 + 3);
      if (lVar4 == 0) goto LAB_00f4547c;
      lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c);
      lVar6 = 0;
    }
    else {
      iVar2 = *(int *)((long)param_1 + 0x14);
      lVar1 = iVar2 + lVar6;
      if (*(ulong *)(lVar4 + 0x10) < *(ulong *)(lVar6 + 0x10)) {
        plVar3 = *(long **)(lVar1 + 8);
        lVar6 = 0;
        if (plVar3 != param_1) {
          lVar6 = (long)plVar3 + (long)-iVar2;
        }
      }
      else {
        FUN_0078f9e0(param_1,lVar1,iVar2 + lVar4);
        lVar4 = FUN_0078fa90(param_1 + 3);
        if (lVar4 == 0) goto LAB_00f4547c;
        lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c);
      }
    }
    goto joined_r0x00f453e8;
  }
LAB_00f4547c:
  local_40 = 0;
  FUN_007935cc(&local_40);
  local_38 = local_40 - param_1[6];
  FUN_0078c338(&local_38);
  local_38 = 0;
  FUN_007935cc(&local_38);
  param_1[9] = local_38 - param_1[6];
  *(undefined1 *)(param_1 + 10) = 1;
LAB_00f454c4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd));
  FUN_007935cc(param_1 + 8);
  return;
}


