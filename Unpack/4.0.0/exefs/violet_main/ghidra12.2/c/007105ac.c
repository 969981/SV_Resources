/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007105ac; name: FUN_007105ac
 */


void FUN_007105ac(undefined *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long *local_38;
  int *piStack_30;
  ulong local_28;
  
  piStack_30 = *(int **)(param_1 + 0x20);
  local_28 = *(ulong *)(piStack_30 + 6);
  uVar14 = *(ulong *)(piStack_30 + 2);
  iVar8 = *piStack_30;
  if (local_28 < uVar14) {
    do {
      local_38 = *(long **)(*(long *)(piStack_30 + 8) + local_28 * 8);
      if (local_38 != (long *)0x0) {
        if (local_38 == *(long **)(*(long *)(piStack_30 + 8) + (local_28 ^ 1) * 8)) {
          local_38 = *(long **)(*local_38 + 0x20);
        }
        goto joined_r0x00710620;
      }
      local_28 = local_28 + 1;
    } while (uVar14 != local_28);
    local_38 = (long *)0x0;
    local_28 = uVar14;
  }
  else {
    local_38 = (long *)0x0;
  }
joined_r0x00710620:
  while (local_38 != (long *)0x0) {
    pbVar11 = (byte *)local_38[1];
    uVar7 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      uVar7 = *(uint *)(pbVar11 + 8);
    }
    uVar13 = (uint)(pbVar11[0x18] >> 1);
    if ((pbVar11[0x18] & 1) != 0) {
      uVar13 = *(uint *)(pbVar11 + 0x20);
    }
    uVar7 = uVar7 + uVar13 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
            (((uint)LZCOUNT(uVar13 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    FUN_006ef338(&local_38);
  }
  piStack_30 = *(int **)(param_1 + 0x38);
  iVar8 = *piStack_30 + iVar8;
  local_28 = *(ulong *)(piStack_30 + 6);
  uVar14 = *(ulong *)(piStack_30 + 2);
  if (local_28 < uVar14) {
    do {
      local_38 = *(long **)(*(long *)(piStack_30 + 8) + local_28 * 8);
      if (local_38 != (long *)0x0) {
        if (local_38 == *(long **)(*(long *)(piStack_30 + 8) + (local_28 ^ 1) * 8)) {
          local_38 = *(long **)(*local_38 + 0x20);
        }
        goto joined_r0x00710720;
      }
      local_28 = local_28 + 1;
    } while (uVar14 != local_28);
    local_38 = (long *)0x0;
    local_28 = uVar14;
  }
  else {
    local_38 = (long *)0x0;
  }
joined_r0x00710720:
  while (local_38 != (long *)0x0) {
    pbVar11 = (byte *)local_38[1];
    uVar7 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      uVar7 = *(uint *)(pbVar11 + 8);
    }
    uVar13 = (uint)(pbVar11[0x18] >> 1);
    if ((pbVar11[0x18] & 1) != 0) {
      uVar13 = *(uint *)(pbVar11 + 0x20);
    }
    uVar7 = uVar7 + uVar13 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
            (((uint)LZCOUNT(uVar13 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    FUN_006ef338(&local_38);
  }
  lVar9 = FUN_00534808(param_1 + 0x40);
  uVar7 = (uint)lVar9;
  if (lVar9 == 0) {
    uVar13 = 0;
  }
  else {
    if ((int)uVar7 < 0) {
      uVar13 = 10;
    }
    else {
      uVar13 = ((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar8 = iVar8 + uVar13 + 1;
    uVar13 = uVar7;
  }
  iVar8 = iVar8 + uVar7;
  *(uint *)(param_1 + 0x50) = uVar13;
  lVar9 = FUN_00534808(param_1 + 0x58);
  if (lVar9 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar7 = *(uint *)(param_1 + 0x70);
    if (uVar7 == 0) goto LAB_00710848;
LAB_0071087c:
    lVar12 = *(long *)(param_1 + 0x78);
    uVar13 = 0;
    lVar9 = 0;
    if (uVar7 < 4) goto LAB_007109d4;
    if ((int)(uVar7 - 1) < 0) goto LAB_007109d4;
    uVar19 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar16 = 0;
    lVar9 = 0;
    uVar13 = uVar7 & 0xfffffffc;
    do {
      uVar2 = *(uint *)(lVar12 + (long)(int)uVar19 * 4);
      uVar3 = *(uint *)(lVar12 + (long)(int)(uVar19 + 1) * 4);
      uVar4 = *(uint *)(lVar12 + (long)(int)(uVar19 + 2) * 4);
      uVar5 = *(uint *)(lVar12 + (long)(int)(uVar19 + 3) * 4);
      uVar1 = 10;
      if (-1 < (int)uVar2) {
        uVar1 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
      }
      uVar2 = 10;
      if (-1 < (int)uVar3) {
        uVar2 = ((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
      }
      uVar3 = 10;
      if (-1 < (int)uVar4) {
        uVar3 = ((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
      }
      uVar4 = 10;
      if (-1 < (int)uVar5) {
        uVar4 = ((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
      }
      uVar19 = uVar19 + 4;
      lVar17 = lVar17 + (ulong)uVar1;
      lVar18 = lVar18 + (ulong)uVar2;
      lVar16 = lVar16 + (ulong)uVar3;
      lVar9 = lVar9 + (ulong)uVar4;
    } while (uVar13 != uVar19);
    lVar9 = lVar9 + lVar16 + lVar18 + lVar17;
    for (; uVar7 != uVar13; uVar13 = uVar13 + 1) {
LAB_007109d4:
      uVar19 = *(uint *)(lVar12 + (long)(int)uVar13 * 4);
      if ((int)uVar19 < 0) {
        uVar14 = 10;
      }
      else {
        uVar14 = (ulong)(((uint)LZCOUNT(uVar19 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      }
      lVar9 = uVar14 + lVar9;
    }
    if (lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      pbVar11 = *(byte **)(param_1 + 0x88);
      bVar6 = *pbVar11;
      goto joined_r0x007109f4;
    }
    uVar7 = (uint)lVar9;
    if ((int)uVar7 < 0) {
      uVar13 = 10;
    }
    else {
      uVar13 = ((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar8 = iVar8 + uVar13 + 2;
    *(uint *)(param_1 + 0x80) = uVar7;
    pbVar11 = *(byte **)(param_1 + 0x88);
    uVar14 = (ulong)*pbVar11;
    if ((*pbVar11 & 1) != 0) goto LAB_007109f8;
LAB_00710a28:
    uVar15 = uVar14 >> 1;
    iVar8 = iVar8 + (int)lVar9;
  }
  else {
    uVar13 = (uint)lVar9;
    if ((int)uVar13 < 0) {
      uVar19 = 10;
    }
    else {
      uVar19 = ((uint)LZCOUNT(uVar13 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    *(uint *)(param_1 + 0x68) = uVar13;
    uVar7 = *(uint *)(param_1 + 0x70);
    iVar8 = iVar8 + uVar19 + 2 + uVar13;
    if (uVar7 != 0) goto LAB_0071087c;
LAB_00710848:
    lVar9 = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    pbVar11 = *(byte **)(param_1 + 0x88);
    bVar6 = *pbVar11;
joined_r0x007109f4:
    uVar14 = (ulong)bVar6;
    if ((bVar6 & 1) == 0) goto LAB_00710a28;
LAB_007109f8:
    uVar15 = *(ulong *)(pbVar11 + 8);
    iVar8 = iVar8 + (int)lVar9;
  }
  if (uVar15 != 0) {
    uVar7 = (uint)(uVar14 >> 1);
    if ((uVar14 & 1) != 0) {
      uVar7 = (uint)*(undefined8 *)(pbVar11 + 8);
    }
    iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar11 = *(byte **)(param_1 + 0x90);
  bVar6 = *pbVar11;
  if ((bVar6 & 1) == 0) {
    if (bVar6 >> 1 != 0) {
LAB_00710a88:
      uVar7 = (uint)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar7 = (uint)*(undefined8 *)(pbVar11 + 8);
      }
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar11 + 8) != 0) goto LAB_00710a88;
  pbVar11 = *(byte **)(param_1 + 0x98);
  bVar6 = *pbVar11;
  if ((bVar6 & 1) == 0) {
    if (bVar6 >> 1 != 0) {
LAB_00710adc:
      uVar7 = (uint)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar7 = (uint)*(undefined8 *)(pbVar11 + 8);
      }
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar11 + 8) != 0) goto LAB_00710adc;
  pbVar11 = *(byte **)(param_1 + 0xa0);
  bVar6 = *pbVar11;
  if ((bVar6 & 1) == 0) {
    if (bVar6 >> 1 != 0) {
LAB_00710b30:
      uVar7 = (uint)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar7 = (uint)*(undefined8 *)(pbVar11 + 8);
      }
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar11 + 8) != 0) goto LAB_00710b30;
  pbVar11 = *(byte **)(param_1 + 0xa8);
  bVar6 = *pbVar11;
  if ((bVar6 & 1) == 0) {
    if (bVar6 >> 1 != 0) {
LAB_00710b84:
      uVar7 = (uint)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar7 = (uint)*(undefined8 *)(pbVar11 + 8);
      }
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
  }
  else if (*(long *)(pbVar11 + 8) != 0) goto LAB_00710b84;
  pbVar11 = *(byte **)(param_1 + 0xb0);
  bVar6 = *pbVar11;
  if ((bVar6 & 1) == 0) {
    if (bVar6 >> 1 == 0) goto LAB_00710c0c;
  }
  else if (*(long *)(pbVar11 + 8) == 0) goto LAB_00710c0c;
  uVar7 = (uint)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar7 = (uint)*(undefined8 *)(pbVar11 + 8);
  }
  iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
LAB_00710c0c:
  if (param_1 != PTR_DAT_047cfc00) {
    if (*(long *)(param_1 + 0xb8) != 0) {
      uVar7 = FUN_0026aac8();
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if (*(long *)(param_1 + 0xc0) != 0) {
      uVar7 = FUN_00514094();
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if (*(long *)(param_1 + 200) != 0) {
      uVar7 = FUN_00514094();
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if (*(long *)(param_1 + 0xd0) != 0) {
      uVar7 = FUN_00514094();
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      uVar7 = FUN_00514094();
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      uVar7 = FUN_00514094();
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      uVar7 = FUN_00514094();
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if (*(long *)(param_1 + 0xf0) != 0) {
      uVar7 = FUN_00514094();
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      uVar7 = FUN_00514094();
      iVar8 = iVar8 + uVar7 + (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x100);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      uVar7 = 10;
    }
    else {
      uVar7 = ((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar8 = iVar8 + uVar7 + 1;
  }
  uVar7 = *(uint *)(param_1 + 0x104);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      uVar7 = 10;
    }
    else {
      uVar7 = ((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar8 = iVar8 + uVar7 + 1;
  }
  uVar7 = *(uint *)(param_1 + 0x108);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      uVar7 = 10;
    }
    else {
      uVar7 = ((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar8 = iVar8 + uVar7 + 1;
  }
  uVar7 = *(uint *)(param_1 + 0x10c);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      uVar7 = 10;
    }
    else {
      uVar7 = ((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar8 = iVar8 + uVar7 + 1;
  }
  uVar7 = *(uint *)(param_1 + 0x110);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      uVar7 = 10;
    }
    else {
      uVar7 = ((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar8 = iVar8 + uVar7 + 1;
  }
  uVar7 = *(uint *)(param_1 + 0x114);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      iVar10 = 0xc;
    }
    else {
      iVar10 = (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar8 = iVar10 + iVar8;
  }
  if (param_1[0x118] != '\0') {
    iVar8 = iVar8 + 2;
  }
  if (param_1[0x119] != '\0') {
    iVar8 = iVar8 + 3;
  }
  uVar7 = *(uint *)(param_1 + 0x11c);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      iVar10 = 0xc;
    }
    else {
      iVar10 = (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar8 = iVar10 + iVar8;
  }
  uVar7 = *(uint *)(param_1 + 0x120);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      iVar10 = 0xc;
    }
    else {
      iVar10 = (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar8 = iVar10 + iVar8;
  }
  uVar7 = *(uint *)(param_1 + 0x124);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      iVar10 = 0xc;
    }
    else {
      iVar10 = (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar8 = iVar10 + iVar8;
  }
  uVar7 = *(uint *)(param_1 + 0x128);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      iVar10 = 0xc;
    }
    else {
      iVar10 = (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar8 = iVar10 + iVar8;
  }
  uVar7 = *(uint *)(param_1 + 300);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      iVar10 = 0xc;
    }
    else {
      iVar10 = (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar8 = iVar10 + iVar8;
  }
  uVar7 = *(uint *)(param_1 + 0x130);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      iVar10 = 0xc;
    }
    else {
      iVar10 = (((uint)LZCOUNT(uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar8 = iVar10 + iVar8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar14 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar6 = *(byte *)(uVar14 + 8);
    if ((bVar6 & 1) == 0) {
      uVar7 = (uint)(bVar6 >> 1);
    }
    else {
      uVar7 = (uint)*(undefined8 *)(uVar14 + 0x10);
    }
    iVar8 = uVar7 + iVar8;
  }
  *(int *)(param_1 + 0x134) = iVar8;
  return;
}


