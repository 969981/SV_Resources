/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0998c; name: FUN_00c0998c
 */


void FUN_00c0998c(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  byte local_4c [12];
  void *local_28;
  
  iVar6 = *(int *)(param_1 + 2);
  if (iVar6 < 10) {
    if (param_2 < 0x80) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      uVar11 = param_2;
      do {
        param_2 = uVar11 >> 7;
        local_4c[uVar8] = (byte)uVar11 | 0x80;
        uVar8 = uVar8 + 1;
        uVar12 = uVar11 >> 0xe;
        uVar11 = param_2;
      } while (uVar12 != 0);
    }
    pbVar7 = local_4c;
    iVar13 = (int)uVar8 + 1;
    pbVar7[uVar8 & 0xffffffff] = (byte)param_2 & 0x7f;
    pvVar4 = (void *)param_1[1];
    if (iVar6 <= (int)uVar8) {
      pbVar7 = local_4c;
      do {
        memcpy(pvVar4,pbVar7,(long)iVar6);
        iVar1 = *(int *)(param_1 + 2);
        uVar8 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_28,param_1 + 2);
        if ((uVar8 & 1) == 0) {
          param_1[1] = 0;
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined1 *)(param_1 + 3) = 1;
          return;
        }
        iVar6 = *(int *)(param_1 + 2);
        iVar13 = iVar13 - iVar1;
        pbVar7 = pbVar7 + iVar1;
        param_1[1] = local_28;
        *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + iVar6;
        pvVar4 = local_28;
      } while (iVar6 < iVar13);
    }
    memcpy(pvVar4,pbVar7,(long)iVar13);
    param_1[1] = param_1[1] + (long)iVar13;
    iVar13 = *(int *)(param_1 + 2) - iVar13;
    goto LAB_00c09b50;
  }
  pbVar7 = (byte *)param_1[1];
  bVar3 = (byte)(param_2 >> 0x38);
  uVar5 = (uint)param_2;
  uVar10 = (uint)(param_2 >> 0x1c);
  uVar2 = (uint)(param_2 >> 0x20);
  if (bVar3 == 0) {
    if (uVar10 != 0) {
      if (uVar10 >> 0xe != 0) {
        if (0x1fffff < uVar10) {
          lVar9 = 8;
          goto LAB_00c09ad8;
        }
        lVar9 = 7;
        goto LAB_00c09ae4;
      }
      if (0x7f < uVar10) {
        lVar9 = 6;
        goto LAB_00c09af0;
      }
      lVar9 = 5;
      goto LAB_00c09afc;
    }
    if ((param_2 >> 0xe & 0x3ffff) != 0) {
      if (0x1fffff < uVar5) {
        lVar9 = 4;
        goto LAB_00c09b04;
      }
      lVar9 = 3;
      goto LAB_00c09b10;
    }
    if (0x7f < uVar5) {
      lVar9 = 2;
      goto LAB_00c09b18;
    }
    lVar9 = 1;
  }
  else {
    if (bVar3 < 0x80) {
      lVar9 = 9;
    }
    else {
      pbVar7[9] = 0x81;
      lVar9 = 10;
    }
    pbVar7[8] = bVar3 | 0x80;
LAB_00c09ad8:
    pbVar7[7] = (byte)(uVar2 >> 0x11) | 0x80;
LAB_00c09ae4:
    pbVar7[6] = (byte)(uVar2 >> 10) | 0x80;
LAB_00c09af0:
    pbVar7[5] = (byte)(uVar2 >> 3) | 0x80;
LAB_00c09afc:
    pbVar7[4] = (byte)(param_2 >> 0x1c) | 0x80;
LAB_00c09b04:
    pbVar7[3] = (byte)(uVar5 >> 0x15) | 0x80;
LAB_00c09b10:
    pbVar7[2] = (byte)(param_2 >> 0xe) | 0x80;
LAB_00c09b18:
    pbVar7[1] = (byte)(uVar5 >> 7) | 0x80;
  }
  uVar2 = (int)lVar9 - 1;
  *pbVar7 = (byte)param_2 | 0x80;
  pbVar7[uVar2] = pbVar7[uVar2] & 0x7f;
  param_1[1] = param_1[1] + lVar9;
  iVar13 = *(int *)(param_1 + 2) - (int)lVar9;
LAB_00c09b50:
  *(int *)(param_1 + 2) = iVar13;
  return;
}


