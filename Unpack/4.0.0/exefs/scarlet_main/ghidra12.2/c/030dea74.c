/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030dea74; name: FUN_030dea74
 */


void FUN_030dea74(long param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int local_18 [2];
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar6 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar6 = FUN_0307d71c();
  }
  iVar2 = *param_2;
  if (iVar2 != -1) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (iVar2 < *(int *)(lVar4 + 0x20)) {
      if (*(int *)(lVar4 + 0x98) != 0) {
        lVar5 = (long)iVar2;
        iVar2 = *(int *)(*(long *)(lVar4 + 0x90) + lVar5 * 4);
        if (iVar2 == -1) {
          piVar3 = (int *)(*(long *)(lVar4 + 0x18) + lVar5 * 0x10);
          goto LAB_030deb08;
        }
      }
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + (long)iVar2 * 0x10);
    }
    else {
      piVar3 = (int *)(*(long *)(lVar4 + 0xd0) + (long)(iVar2 - *(int *)(lVar4 + 0x20)) * 0x10);
    }
LAB_030deb08:
    uVar1 = *(ushort *)(param_2 + 2);
    if ((short)uVar1 < (short)piVar3[2]) {
      local_18[0] = *piVar3 + (uint)uVar1;
    }
    else {
      local_18[0] = piVar3[1] + ((uint)uVar1 - (int)(short)piVar3[2] & 0xffff);
    }
    if ((*(int *)(lVar6 + 0x78) != 0) &&
       (-1 < *(int *)(*(long *)(lVar6 + 0x70) + (long)local_18[0] * 4))) {
      FUN_03092c64(lVar6,local_18);
    }
  }
  iVar2 = param_2[1];
  if (iVar2 == -1) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar2 < *(int *)(lVar4 + 0x20)) {
    if (*(int *)(lVar4 + 0x98) != 0) {
      lVar5 = (long)iVar2;
      iVar2 = *(int *)(*(long *)(lVar4 + 0x90) + lVar5 * 4);
      if (iVar2 == -1) {
        piVar3 = (int *)(*(long *)(lVar4 + 0x18) + lVar5 * 0x10);
        goto LAB_030debb0;
      }
    }
    piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + (long)iVar2 * 0x10);
  }
  else {
    piVar3 = (int *)(*(long *)(lVar4 + 0xd0) + (long)(iVar2 - *(int *)(lVar4 + 0x20)) * 0x10);
  }
LAB_030debb0:
  uVar1 = *(ushort *)((long)param_2 + 10);
  if ((short)uVar1 < (short)piVar3[2]) {
    local_18[0] = *piVar3 + (uint)uVar1;
  }
  else {
    local_18[0] = piVar3[1] + ((uint)uVar1 - (int)(short)piVar3[2] & 0xffff);
  }
  if ((*(int *)(lVar6 + 0x78) != 0) &&
     (-1 < *(int *)(*(long *)(lVar6 + 0x70) + (long)local_18[0] * 4))) {
    FUN_03092c64(lVar6,local_18);
  }
  return;
}


