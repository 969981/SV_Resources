/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbc03c; name: FUN_00bbc03c
 */


undefined8 FUN_00bbc03c(ulong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  
  pbVar8 = (byte *)*param_1;
  pbVar6 = (byte *)param_1[1];
  if ((pbVar8 < pbVar6) && (-1 < (char)*pbVar8)) {
    uVar3 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
    *param_1 = (ulong)pbVar8;
  }
  else {
    uVar3 = FUN_00c0954c(param_1);
    if ((int)uVar3 < 0) {
      return 0;
    }
    pbVar8 = (byte *)*param_1;
    pbVar6 = (byte *)param_1[1];
  }
  iVar5 = (int)param_1[3];
  iVar2 = (int)param_1[5];
  pbVar7 = pbVar6 + *(int *)((long)param_1 + 0x2c);
  param_1[1] = (ulong)pbVar7;
  iVar10 = (int)param_1[6];
  iVar4 = (iVar5 - *(int *)((long)param_1 + 0x2c)) + ((int)pbVar8 - (int)pbVar6);
  iVar1 = 0x7fffffff;
  if ((int)uVar3 <= 0x7fffffff - iVar4) {
    iVar1 = iVar4 + uVar3;
  }
  iVar4 = iVar2;
  if (iVar1 <= iVar2) {
    iVar4 = iVar1;
  }
  iVar1 = iVar10;
  if (iVar4 <= iVar10) {
    iVar1 = iVar4;
  }
  iVar9 = iVar5 - iVar1;
  *(int *)(param_1 + 5) = iVar4;
  if (iVar9 == 0 || iVar5 < iVar1) {
    iVar9 = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  else {
    pbVar7 = pbVar7 + -(long)iVar9;
    *(int *)((long)param_1 + 0x2c) = iVar9;
    param_1[1] = (ulong)pbVar7;
  }
  if ((iVar4 != 0x7fffffff) && (0 < (iVar4 - iVar5) + iVar9 + ((int)pbVar7 - (int)pbVar8))) {
    do {
      if (pbVar8 < pbVar7) {
        uVar11 = (ulong)*pbVar8;
        if ((char)*pbVar8 < '\0') goto LAB_00bbc144;
        *param_1 = (ulong)(pbVar8 + 1);
      }
      else {
        uVar11 = 0;
LAB_00bbc144:
        uVar11 = FUN_00c0944c(param_1,uVar11);
        if ((long)uVar11 < 0) {
          return 0;
        }
      }
      iVar4 = *param_2;
      if (iVar4 == param_2[1]) {
        FUN_00ba867c(param_2,iVar4 + 1);
        iVar4 = *param_2;
      }
      *param_2 = iVar4 + 1;
      *(int *)(*(long *)(param_2 + 2) + (long)iVar4 * 4 + 8) = (int)uVar11;
      if ((int)param_1[5] == 0x7fffffff) {
        iVar9 = *(int *)((long)param_1 + 0x2c);
        pbVar7 = (byte *)param_1[1];
        iVar5 = (int)param_1[3];
        break;
      }
      iVar5 = (int)param_1[3];
      iVar9 = *(int *)((long)param_1 + 0x2c);
      pbVar8 = (byte *)*param_1;
      pbVar7 = (byte *)param_1[1];
    } while (0 < ((int)param_1[5] - iVar5) + iVar9 + ((int)pbVar7 - (int)pbVar8));
    iVar10 = (int)param_1[6];
  }
  if (iVar2 <= iVar10) {
    iVar10 = iVar2;
  }
  iVar4 = iVar5 - iVar10;
  *(int *)(param_1 + 5) = iVar2;
  param_1[1] = (ulong)(pbVar7 + iVar9);
  if (iVar4 == 0 || iVar5 < iVar10) {
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  else {
    *(int *)((long)param_1 + 0x2c) = iVar4;
    param_1[1] = (long)(pbVar7 + iVar9) - (long)iVar4;
  }
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return 1;
}


