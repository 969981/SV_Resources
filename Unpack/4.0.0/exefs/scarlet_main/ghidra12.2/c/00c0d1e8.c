/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0d1e8; name: FUN_00c0d1e8
 */


void FUN_00c0d1e8(int param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  int *piVar17;
  byte abStack_50 [8];
  void *local_48;
  
  pbVar14 = abStack_50;
  pbVar11 = abStack_50;
  pbVar9 = abStack_50;
  pbVar13 = abStack_50;
  piVar17 = (int *)(param_3 + 2);
  uVar7 = param_1 << 3 | 2;
  if (*piVar17 < 5) {
    if (0x7f < uVar7) {
      pbVar12 = abStack_50;
      uVar16 = uVar7;
      do {
        uVar7 = uVar16 >> 7;
        uVar2 = uVar16 >> 0xe;
        pbVar14 = pbVar12 + 1;
        *pbVar12 = (byte)uVar16 | 0x80;
        pbVar12 = pbVar14;
        uVar16 = uVar7;
      } while (uVar2 != 0);
    }
    *pbVar14 = (byte)uVar7;
    iVar10 = ((int)pbVar14 - (int)abStack_50) + 1;
    iVar8 = *(int *)(param_3 + 2);
    pvVar6 = (void *)param_3[1];
    if (iVar8 < iVar10) {
      pbVar11 = abStack_50;
      do {
        memcpy(pvVar6,pbVar11,(long)iVar8);
        iVar1 = *(int *)(param_3 + 2);
        uVar5 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar17);
        if ((uVar5 & 1) == 0) {
          param_3[1] = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0d340;
        }
        iVar8 = *(int *)(param_3 + 2);
        iVar10 = iVar10 - iVar1;
        pbVar11 = pbVar11 + iVar1;
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar8;
        pvVar6 = local_48;
      } while (iVar8 < iVar10);
    }
    memcpy(pvVar6,pbVar11,(long)iVar10);
    param_3[1] = param_3[1] + (long)iVar10;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  else {
    pbVar11 = (byte *)param_3[1];
    if (uVar7 < 0x80) {
      pbVar14 = pbVar11;
    }
    else {
      pbVar12 = pbVar11;
      uVar16 = uVar7;
      do {
        uVar7 = uVar16 >> 7;
        uVar2 = uVar16 >> 0xe;
        pbVar14 = pbVar12 + 1;
        *pbVar12 = (byte)uVar16 | 0x80;
        pbVar12 = pbVar14;
        uVar16 = uVar7;
      } while (uVar2 != 0);
    }
    *pbVar14 = (byte)uVar7;
    iVar10 = ((int)pbVar14 - (int)pbVar11) + 1;
    param_3[1] = param_3[1] + (long)iVar10;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  *(int *)(param_3 + 2) = iVar10;
LAB_00c0d340:
  uVar5 = (**(code **)(*param_2 + 0x78))(param_2);
  uVar7 = (uint)uVar5;
  if (*piVar17 < 5) {
    if (0x7f < uVar7) {
      uVar15 = uVar5 & 0xffffffff;
      pbVar11 = abStack_50;
      do {
        bVar4 = (byte)uVar15;
        uVar15 = uVar5 >> 7 & 0x1ffffff;
        uVar7 = (uint)uVar15;
        uVar3 = uVar5 >> 0xe;
        pbVar9 = pbVar11 + 1;
        *pbVar11 = bVar4 | 0x80;
        uVar5 = uVar15;
        pbVar11 = pbVar9;
      } while ((uVar3 & 0x3ffff) != 0);
    }
    *pbVar9 = (byte)uVar7;
    iVar10 = ((int)pbVar9 - (int)abStack_50) + 1;
    iVar8 = *(int *)(param_3 + 2);
    pvVar6 = (void *)param_3[1];
    if (iVar8 < iVar10) {
      pbVar13 = abStack_50;
      do {
        memcpy(pvVar6,pbVar13,(long)iVar8);
        iVar1 = *(int *)(param_3 + 2);
        uVar5 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar17);
        if ((uVar5 & 1) == 0) {
          param_3[1] = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0d47c;
        }
        iVar8 = *(int *)(param_3 + 2);
        iVar10 = iVar10 - iVar1;
        pbVar13 = pbVar13 + iVar1;
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar8;
        pvVar6 = local_48;
      } while (iVar8 < iVar10);
    }
    memcpy(pvVar6,pbVar13,(long)iVar10);
    param_3[1] = param_3[1] + (long)iVar10;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  else {
    pbVar11 = (byte *)param_3[1];
    if (uVar7 < 0x80) {
      pbVar13 = pbVar11;
    }
    else {
      uVar15 = uVar5 & 0xffffffff;
      pbVar9 = pbVar11;
      do {
        bVar4 = (byte)uVar15;
        uVar15 = uVar5 >> 7 & 0x1ffffff;
        uVar7 = (uint)uVar15;
        uVar3 = uVar5 >> 0xe;
        pbVar13 = pbVar9 + 1;
        *pbVar9 = bVar4 | 0x80;
        uVar5 = uVar15;
        pbVar9 = pbVar13;
      } while ((uVar3 & 0x3ffff) != 0);
    }
    *pbVar13 = (byte)uVar7;
    iVar10 = ((int)pbVar13 - (int)pbVar11) + 1;
    param_3[1] = param_3[1] + (long)iVar10;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  *(int *)(param_3 + 2) = iVar10;
LAB_00c0d47c:
                    /* WARNING: Could not recover jumptable at 0x00c0d4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x68))(param_2,param_3);
  return;
}


