/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0d4cc; name: FUN_00c0d4cc
 */


void FUN_00c0d4cc(int param_1,long *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  int *piVar15;
  byte abStack_58 [8];
  void *local_38;
  
  piVar15 = (int *)(param_3 + 2);
  uVar5 = param_1 << 3 | 2;
  if (*piVar15 < 5) {
    pbVar11 = abStack_58;
    if (0x7f < uVar5) {
      pbVar13 = pbVar11;
      uVar14 = uVar5;
      do {
        uVar5 = uVar14 >> 7;
        uVar3 = uVar14 >> 0xe;
        pbVar11 = pbVar13 + 1;
        *pbVar13 = (byte)uVar14 | 0x80;
        pbVar13 = pbVar11;
        uVar14 = uVar5;
      } while (uVar3 != 0);
    }
    pbVar13 = abStack_58;
    *pbVar11 = (byte)uVar5;
    iVar10 = ((int)pbVar11 - (int)pbVar13) + 1;
    iVar9 = *(int *)(param_3 + 2);
    pvVar7 = (void *)param_3[1];
    if (iVar9 < iVar10) {
      pbVar13 = abStack_58;
      do {
        memcpy(pvVar7,pbVar13,(long)iVar9);
        iVar2 = *(int *)(param_3 + 2);
        uVar6 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_38,piVar15);
        if ((uVar6 & 1) == 0) {
          param_3[1] = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0d628;
        }
        iVar9 = *(int *)(param_3 + 2);
        iVar10 = iVar10 - iVar2;
        pbVar13 = pbVar13 + iVar2;
        param_3[1] = local_38;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
        pvVar7 = local_38;
      } while (iVar9 < iVar10);
    }
    memcpy(pvVar7,pbVar13,(long)iVar10);
    param_3[1] = param_3[1] + (long)iVar10;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  else {
    pbVar11 = (byte *)param_3[1];
    if (uVar5 < 0x80) {
      pbVar13 = pbVar11;
    }
    else {
      pbVar12 = pbVar11;
      uVar14 = uVar5;
      do {
        uVar5 = uVar14 >> 7;
        uVar3 = uVar14 >> 0xe;
        pbVar13 = pbVar12 + 1;
        *pbVar12 = (byte)uVar14 | 0x80;
        pbVar12 = pbVar13;
        uVar14 = uVar5;
      } while (uVar3 != 0);
    }
    *pbVar13 = (byte)uVar5;
    iVar10 = ((int)pbVar13 - (int)pbVar11) + 1;
    param_3[1] = param_3[1] + (long)iVar10;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  *(int *)(param_3 + 2) = iVar10;
LAB_00c0d628:
  uVar5 = (**(code **)(*param_2 + 0x78))(param_2);
  if (*piVar15 < 5) {
    pbVar11 = abStack_58;
    uVar14 = uVar5;
    if (0x7f < uVar5) {
      pbVar13 = pbVar11;
      uVar6 = (ulong)uVar5;
      do {
        uVar14 = (uint)(uVar6 >> 7);
        uVar4 = uVar6 >> 0xe;
        pbVar11 = pbVar13 + 1;
        *pbVar13 = (byte)uVar6 | 0x80;
        pbVar13 = pbVar11;
        uVar6 = uVar6 >> 7;
      } while (uVar4 != 0);
    }
    pbVar13 = abStack_58;
    *pbVar11 = (byte)uVar14;
    iVar10 = ((int)pbVar11 - (int)pbVar13) + 1;
    iVar9 = *(int *)(param_3 + 2);
    pvVar7 = (void *)param_3[1];
    if (iVar9 < iVar10) {
      pbVar13 = abStack_58;
      do {
        memcpy(pvVar7,pbVar13,(long)iVar9);
        iVar2 = *(int *)(param_3 + 2);
        uVar6 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_38,piVar15);
        if ((uVar6 & 1) == 0) {
          lVar8 = 0;
          param_3[1] = 0;
          iVar10 = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0d76c;
        }
        iVar9 = *(int *)(param_3 + 2);
        iVar10 = iVar10 - iVar2;
        pbVar13 = pbVar13 + iVar2;
        param_3[1] = local_38;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
        pvVar7 = local_38;
      } while (iVar9 < iVar10);
    }
    memcpy(pvVar7,pbVar13,(long)iVar10);
    lVar8 = param_3[1] + (long)iVar10;
    param_3[1] = lVar8;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
  }
  else {
    pbVar11 = (byte *)param_3[1];
    if (uVar5 < 0x80) {
      pbVar13 = pbVar11;
      uVar14 = uVar5;
    }
    else {
      pbVar12 = pbVar11;
      uVar6 = (ulong)uVar5;
      do {
        uVar14 = (uint)(uVar6 >> 7);
        uVar4 = uVar6 >> 0xe;
        pbVar13 = pbVar12 + 1;
        *pbVar12 = (byte)uVar6 | 0x80;
        pbVar12 = pbVar13;
        uVar6 = uVar6 >> 7;
      } while (uVar4 != 0);
    }
    *pbVar13 = (byte)uVar14;
    iVar10 = ((int)pbVar13 - (int)pbVar11) + 1;
    lVar8 = param_3[1] + (long)iVar10;
    iVar10 = *(int *)(param_3 + 2) - iVar10;
    param_3[1] = lVar8;
  }
  *(int *)(param_3 + 2) = iVar10;
LAB_00c0d76c:
  if ((int)uVar5 <= iVar10) {
    param_3[1] = lVar8 + (int)uVar5;
    *(uint *)(param_3 + 2) = iVar10 - uVar5;
    if (lVar8 != 0) {
      puVar1 = PTR_DAT_047dad70;
      if (*(char *)((long)param_3 + 0x1a) != '\0') {
        puVar1 = (undefined1 *)((long)param_3 + 0x1b);
      }
                    /* WARNING: Could not recover jumptable at 0x00c0d7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x80))(param_2,*puVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c0d7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x68))(param_2,param_3);
  return;
}


