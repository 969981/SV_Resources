/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0a5f0; name: FUN_00c0a5f0
 */


void FUN_00c0a5f0(int param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte abStack_50 [8];
  void *local_48;
  
  pbVar10 = abStack_50;
  pbVar8 = abStack_50;
  uVar5 = param_1 << 3;
  if (*(int *)(param_3 + 2) < 5) {
    if (0x7f < uVar5) {
      pbVar9 = abStack_50;
      uVar11 = uVar5;
      do {
        uVar5 = uVar11 >> 7;
        uVar2 = uVar11 >> 0xe;
        pbVar10 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        pbVar9 = pbVar10;
        uVar11 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar10 = (byte)uVar5;
    iVar7 = ((int)pbVar10 - (int)abStack_50) + 1;
    iVar6 = *(int *)(param_3 + 2);
    pvVar4 = (void *)param_3[1];
    if (iVar6 < iVar7) {
      pbVar8 = abStack_50;
      do {
        memcpy(pvVar4,pbVar8,(long)iVar6);
        iVar1 = *(int *)(param_3 + 2);
        uVar3 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,param_3 + 2);
        if ((uVar3 & 1) == 0) {
          param_3[1] = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0a744;
        }
        iVar6 = *(int *)(param_3 + 2);
        iVar7 = iVar7 - iVar1;
        pbVar8 = pbVar8 + iVar1;
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar6;
        pvVar4 = local_48;
      } while (iVar6 < iVar7);
    }
    memcpy(pvVar4,pbVar8,(long)iVar7);
    param_3[1] = param_3[1] + (long)iVar7;
    iVar7 = *(int *)(param_3 + 2) - iVar7;
  }
  else {
    pbVar8 = (byte *)param_3[1];
    if (uVar5 < 0x80) {
      pbVar10 = pbVar8;
    }
    else {
      pbVar9 = pbVar8;
      uVar11 = uVar5;
      do {
        uVar5 = uVar11 >> 7;
        uVar2 = uVar11 >> 0xe;
        pbVar10 = pbVar9 + 1;
        *pbVar9 = (byte)uVar11 | 0x80;
        pbVar9 = pbVar10;
        uVar11 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar10 = (byte)uVar5;
    iVar7 = ((int)pbVar10 - (int)pbVar8) + 1;
    param_3[1] = param_3[1] + (long)iVar7;
    iVar7 = *(int *)(param_3 + 2) - iVar7;
  }
  *(int *)(param_3 + 2) = iVar7;
LAB_00c0a744:
  FUN_00c0998c(param_3,param_2);
  return;
}


