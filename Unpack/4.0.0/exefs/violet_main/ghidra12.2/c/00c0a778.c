/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0a778; name: FUN_00c0a778
 */


void FUN_00c0a778(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int *piVar14;
  byte abStack_50 [8];
  void *local_48;
  
  pbVar11 = abStack_50;
  pbVar9 = abStack_50;
  pbVar7 = abStack_50;
  pbVar12 = abStack_50;
  piVar14 = (int *)(param_3 + 2);
  uVar5 = param_1 << 3;
  if (*piVar14 < 5) {
    if (0x7f < uVar5) {
      pbVar10 = abStack_50;
      uVar13 = uVar5;
      do {
        uVar5 = uVar13 >> 7;
        uVar2 = uVar13 >> 0xe;
        pbVar11 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        pbVar10 = pbVar11;
        uVar13 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar11 = (byte)uVar5;
    iVar8 = ((int)pbVar11 - (int)abStack_50) + 1;
    iVar6 = *(int *)(param_3 + 2);
    pvVar4 = (void *)param_3[1];
    if (iVar6 < iVar8) {
      pbVar9 = abStack_50;
      do {
        memcpy(pvVar4,pbVar9,(long)iVar6);
        iVar1 = *(int *)(param_3 + 2);
        uVar3 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar14);
        if ((uVar3 & 1) == 0) {
          pbVar9 = (byte *)0x0;
          param_3[1] = 0;
          iVar8 = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0a8cc;
        }
        iVar6 = *(int *)(param_3 + 2);
        iVar8 = iVar8 - iVar1;
        pbVar9 = pbVar9 + iVar1;
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar6;
        pvVar4 = local_48;
      } while (iVar6 < iVar8);
    }
    memcpy(pvVar4,pbVar9,(long)iVar8);
    pbVar9 = (byte *)(param_3[1] + (long)iVar8);
    iVar8 = *(int *)(param_3 + 2) - iVar8;
    param_3[1] = pbVar9;
  }
  else {
    pbVar9 = (byte *)param_3[1];
    if (uVar5 < 0x80) {
      pbVar11 = pbVar9;
    }
    else {
      pbVar10 = pbVar9;
      uVar13 = uVar5;
      do {
        uVar5 = uVar13 >> 7;
        uVar2 = uVar13 >> 0xe;
        pbVar11 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        pbVar10 = pbVar11;
        uVar13 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar11 = (byte)uVar5;
    iVar8 = ((int)pbVar11 - (int)pbVar9) + 1;
    pbVar9 = (byte *)(param_3[1] + (long)iVar8);
    param_3[1] = pbVar9;
    iVar8 = *(int *)(param_3 + 2) - iVar8;
  }
  *(int *)(param_3 + 2) = iVar8;
LAB_00c0a8cc:
  uVar5 = param_2 << 1 ^ param_2 >> 0x1f;
  if (iVar8 < 5) {
    if (0x7f < uVar5) {
      pbVar9 = abStack_50;
      uVar13 = uVar5;
      do {
        uVar5 = uVar13 >> 7;
        uVar2 = uVar13 >> 0xe;
        pbVar7 = pbVar9 + 1;
        *pbVar9 = (byte)uVar13 | 0x80;
        pbVar9 = pbVar7;
        uVar13 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar7 = (byte)uVar5;
    iVar8 = ((int)pbVar7 - (int)abStack_50) + 1;
    iVar6 = *(int *)(param_3 + 2);
    pvVar4 = (void *)param_3[1];
    if (iVar6 < iVar8) {
      pbVar12 = abStack_50;
      do {
        memcpy(pvVar4,pbVar12,(long)iVar6);
        iVar1 = *(int *)(param_3 + 2);
        uVar3 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar14);
        if ((uVar3 & 1) == 0) {
          param_3[1] = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          return;
        }
        iVar6 = *(int *)(param_3 + 2);
        iVar8 = iVar8 - iVar1;
        pbVar12 = pbVar12 + iVar1;
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar6;
        pvVar4 = local_48;
      } while (iVar6 < iVar8);
    }
    memcpy(pvVar4,pbVar12,(long)iVar8);
    param_3[1] = param_3[1] + (long)iVar8;
    iVar8 = *(int *)(param_3 + 2) - iVar8;
  }
  else {
    pbVar12 = pbVar9;
    if (0x7f < uVar5) {
      pbVar7 = pbVar9;
      uVar13 = uVar5;
      do {
        uVar5 = uVar13 >> 7;
        uVar2 = uVar13 >> 0xe;
        pbVar12 = pbVar7 + 1;
        *pbVar7 = (byte)uVar13 | 0x80;
        pbVar7 = pbVar12;
        uVar13 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar12 = (byte)uVar5;
    iVar8 = ((int)pbVar12 - (int)pbVar9) + 1;
    param_3[1] = param_3[1] + (long)iVar8;
    iVar8 = *(int *)(param_3 + 2) - iVar8;
  }
  *(int *)(param_3 + 2) = iVar8;
  return;
}


