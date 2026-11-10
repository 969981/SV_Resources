/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0a338; name: FUN_00c0a338
 */


void FUN_00c0a338(int param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  byte abStack_50 [8];
  void *local_48;
  
  pbVar11 = abStack_50;
  pbVar8 = abStack_50;
  pbVar6 = abStack_50;
  pbVar10 = abStack_50;
  piVar13 = (int *)(param_3 + 2);
  uVar14 = param_1 << 3;
  if (*piVar13 < 5) {
    if (0x7f < uVar14) {
      pbVar9 = abStack_50;
      uVar12 = uVar14;
      do {
        uVar14 = uVar12 >> 7;
        uVar2 = uVar12 >> 0xe;
        pbVar11 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        pbVar9 = pbVar11;
        uVar12 = uVar14;
      } while (uVar2 != 0);
    }
    *pbVar11 = (byte)uVar14;
    iVar7 = ((int)pbVar11 - (int)abStack_50) + 1;
    iVar5 = *(int *)(param_3 + 2);
    pvVar4 = (void *)param_3[1];
    if (iVar5 < iVar7) {
      pbVar8 = abStack_50;
      do {
        memcpy(pvVar4,pbVar8,(long)iVar5);
        iVar1 = *(int *)(param_3 + 2);
        uVar3 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar13);
        if ((uVar3 & 1) == 0) {
          pbVar8 = (byte *)0x0;
          param_3[1] = 0;
          iVar7 = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0a488;
        }
        iVar5 = *(int *)(param_3 + 2);
        iVar7 = iVar7 - iVar1;
        pbVar8 = pbVar8 + iVar1;
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar5;
        pvVar4 = local_48;
      } while (iVar5 < iVar7);
    }
    memcpy(pvVar4,pbVar8,(long)iVar7);
    pbVar8 = (byte *)(param_3[1] + (long)iVar7);
    iVar7 = *(int *)(param_3 + 2) - iVar7;
  }
  else {
    pbVar8 = (byte *)param_3[1];
    if (uVar14 < 0x80) {
      pbVar11 = pbVar8;
    }
    else {
      pbVar9 = pbVar8;
      uVar12 = uVar14;
      do {
        uVar14 = uVar12 >> 7;
        uVar2 = uVar12 >> 0xe;
        pbVar11 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        pbVar9 = pbVar11;
        uVar12 = uVar14;
      } while (uVar2 != 0);
    }
    *pbVar11 = (byte)uVar14;
    iVar7 = ((int)pbVar11 - (int)pbVar8) + 1;
    pbVar8 = (byte *)(param_3[1] + (long)iVar7);
    iVar7 = *(int *)(param_3 + 2) - iVar7;
  }
  param_3[1] = pbVar8;
  *(int *)(param_3 + 2) = iVar7;
LAB_00c0a488:
  if (iVar7 < 5) {
    if (0x7f < param_2) {
      pbVar8 = abStack_50;
      uVar14 = param_2;
      do {
        param_2 = uVar14 >> 7;
        uVar12 = uVar14 >> 0xe;
        pbVar6 = pbVar8 + 1;
        *pbVar8 = (byte)uVar14 | 0x80;
        pbVar8 = pbVar6;
        uVar14 = param_2;
      } while (uVar12 != 0);
    }
    *pbVar6 = (byte)param_2;
    iVar7 = ((int)pbVar6 - (int)abStack_50) + 1;
    iVar5 = *(int *)(param_3 + 2);
    pvVar4 = (void *)param_3[1];
    if (iVar5 < iVar7) {
      pbVar10 = abStack_50;
      do {
        memcpy(pvVar4,pbVar10,(long)iVar5);
        iVar1 = *(int *)(param_3 + 2);
        uVar3 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar13);
        if ((uVar3 & 1) == 0) {
          param_3[1] = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          return;
        }
        iVar5 = *(int *)(param_3 + 2);
        iVar7 = iVar7 - iVar1;
        pbVar10 = pbVar10 + iVar1;
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar5;
        pvVar4 = local_48;
      } while (iVar5 < iVar7);
    }
    memcpy(pvVar4,pbVar10,(long)iVar7);
    param_3[1] = param_3[1] + (long)iVar7;
    iVar7 = *(int *)(param_3 + 2) - iVar7;
  }
  else {
    pbVar10 = pbVar8;
    if (0x7f < param_2) {
      pbVar6 = pbVar8;
      uVar14 = param_2;
      do {
        param_2 = uVar14 >> 7;
        uVar12 = uVar14 >> 0xe;
        pbVar10 = pbVar6 + 1;
        *pbVar6 = (byte)uVar14 | 0x80;
        pbVar6 = pbVar10;
        uVar14 = param_2;
      } while (uVar12 != 0);
    }
    *pbVar10 = (byte)param_2;
    iVar7 = ((int)pbVar10 - (int)pbVar8) + 1;
    param_3[1] = param_3[1] + (long)iVar7;
    iVar7 = *(int *)(param_3 + 2) - iVar7;
  }
  *(int *)(param_3 + 2) = iVar7;
  return;
}


