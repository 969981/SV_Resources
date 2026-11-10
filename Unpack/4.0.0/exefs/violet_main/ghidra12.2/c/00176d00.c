/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00176d00; name: FUN_00176d00
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00176d00(undefined2 *param_1,uint *param_2,byte *param_3,long param_4,long param_5,
                   size_t param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  size_t sVar4;
  uint uVar5;
  undefined4 *__src;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  int iVar19;
  ulong uVar20;
  uint *puVar21;
  undefined4 *puVar22;
  size_t __n;
  uint *puVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  int local_4d8 [256];
  byte *local_d8;
  byte *pbStack_d0;
  int *local_c8;
  undefined4 *local_c0;
  uint *local_b8;
  undefined4 *local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  long local_78;
  long local_70;
  
  local_78 = 0;
  local_70 = 0;
  puVar1 = (undefined4 *)(param_1 + 1);
  local_80 = 0;
  __src = (undefined4 *)FUN_001617e8(&local_80,(param_4 * 0xb + 0x17) / 0x18 + 9,param_7);
  pbVar26 = param_3 + param_4;
  if (param_4 < 0x40) {
    uVar10 = 0;
    uVar16 = 0;
    uVar20 = 0;
    puVar22 = puVar1;
    uVar8 = 0;
    uVar14 = 0;
    uVar17 = 0;
    puVar11 = __src;
    puVar21 = param_2;
  }
  else {
    lVar6 = 0;
    local_c8 = local_4d8;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    do {
      local_c8[lVar6] =
           ((uint)*(byte *)(param_5 + lVar6) |
           ((1 << (ulong)(*(byte *)(param_5 + lVar6) & 0x1f)) +
           (int)*(undefined8 *)(param_6 + lVar6 * 8)) * 0x100) - 0x100;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x100);
    local_d8 = param_3;
    pbStack_d0 = pbVar26;
    local_c0 = puVar1;
    local_b8 = param_2;
    local_b0 = __src;
    FUN_001798b0(&local_d8);
    uVar10 = local_88 & 0xffffffff;
    uVar20 = local_90 & 0xffffffff;
    uVar16 = local_90 >> 0x20;
    puVar22 = local_c0;
    uVar8 = uStack_98;
    uVar14 = local_a0;
    uVar17 = local_a8;
    puVar11 = local_b0;
    param_3 = local_d8;
    puVar21 = local_b8;
  }
  if (param_3 + 3 <= pbVar26) {
    uVar7 = uVar8;
    puVar12 = puVar11;
    pbVar25 = param_3;
    do {
      uVar8 = uVar20 & 0x3f;
      uVar2 = (int)uVar20 + (uint)*(byte *)(param_5 + (ulong)*pbVar25);
      uVar20 = (ulong)uVar2;
      uVar13 = (int)uVar16 + (uint)*(byte *)(param_5 + (ulong)pbVar25[1]);
      uVar14 = *(long *)(param_6 + (ulong)pbVar25[1] * 8) << (uVar16 & 0x3f) | uVar14;
      uVar17 = *(long *)(param_6 + (ulong)*pbVar25 * 8) << uVar8 | uVar17;
      uVar24 = *(long *)(param_6 + (ulong)pbVar25[2] * 8) << (uVar10 & 0x3f);
      uVar5 = (uint)*(byte *)(param_5 + (ulong)pbVar25[2]);
      if ((int)uVar2 < 0x20) {
        uVar10 = (ulong)((int)uVar10 + uVar5);
        puVar11 = puVar22;
        if (0x1f < (int)uVar13) goto LAB_00176ed0;
LAB_00176ea8:
        iVar9 = (int)uVar10;
        puVar22 = puVar11;
      }
      else {
        puVar11 = puVar22 + 1;
        *puVar22 = (int)uVar17;
        uVar17 = uVar17 >> 0x20;
        uVar20 = (ulong)(uVar2 - 0x20);
        uVar10 = (ulong)((int)uVar10 + uVar5);
        if ((int)uVar13 < 0x20) goto LAB_00176ea8;
LAB_00176ed0:
        uVar13 = uVar13 - 0x20;
        uVar2 = ((uint)uVar14 & 0xff00ff00) >> 8 | ((uint)uVar14 & 0xff00ff) << 8;
        uVar14 = uVar14 >> 0x20;
        puVar21 = puVar21 + -1;
        *puVar21 = uVar2 >> 0x10 | uVar2 << 0x10;
        iVar9 = (int)uVar10;
        puVar22 = puVar11;
      }
      uVar8 = uVar24 | uVar7;
      uVar16 = (ulong)uVar13;
      puVar11 = puVar12;
      if (0x1f < iVar9) {
        uVar8 = uVar24 | uVar7;
        puVar11 = puVar12 + 1;
        *puVar12 = (int)uVar8;
        uVar8 = uVar8 >> 0x20;
        uVar10 = (ulong)(iVar9 - 0x20);
      }
      param_3 = pbVar25 + 3;
      pbVar18 = pbVar25 + 6;
      uVar7 = uVar8;
      puVar12 = puVar11;
      pbVar25 = param_3;
    } while (pbVar18 <= pbVar26);
  }
  puVar12 = puVar22;
  pbVar25 = param_3;
  if (param_3 < pbVar26) {
    pbVar25 = param_3 + 1;
    uVar7 = uVar20 & 0x3f;
    uVar2 = (int)uVar20 + (uint)*(byte *)(param_5 + (ulong)*param_3);
    uVar20 = (ulong)uVar2;
    uVar17 = *(long *)(param_6 + (ulong)*param_3 * 8) << uVar7 | uVar17;
    if (0x1f < (int)uVar2) {
      puVar12 = puVar22 + 1;
      *puVar22 = (int)uVar17;
      uVar17 = uVar17 >> 0x20;
      uVar20 = (ulong)(uVar2 - 0x20);
    }
  }
  if (pbVar25 < pbVar26) {
    uVar7 = uVar16 & 0x3f;
    uVar2 = (int)uVar16 + (uint)*(byte *)(param_5 + (ulong)*pbVar25);
    uVar16 = (ulong)uVar2;
    uVar14 = *(long *)(param_6 + (ulong)*pbVar25 * 8) << uVar7 | uVar14;
    if (0x1f < (int)uVar2) {
      uVar13 = ((uint)uVar14 & 0xff00ff00) >> 8 | ((uint)uVar14 & 0xff00ff) << 8;
      uVar14 = uVar14 >> 0x20;
      uVar16 = (ulong)(uVar2 - 0x20);
      puVar21 = puVar21 + -1;
      *puVar21 = uVar13 >> 0x10 | uVar13 << 0x10;
    }
  }
  puVar23 = (uint *)((long)puVar12 - (long)puVar1);
  __n = (long)param_2 - (long)puVar21;
  iVar19 = (int)uVar20;
  iVar15 = (int)uVar16;
  iVar9 = (int)uVar10;
  puVar3 = puVar23;
  if (0 < iVar19) {
    if ((iVar19 - 1U >> 3 & 1) == 0) {
      puVar21 = (uint *)((long)puVar23 + 1);
      *(char *)((long)puVar1 + (long)puVar23) = (char)uVar17;
      uVar17 = uVar17 >> 8;
      uVar20 = (ulong)(iVar19 - 8);
      puVar23 = puVar21;
    }
    puVar3 = puVar21;
    if (7 < iVar19 - 1U) {
      do {
        uVar2 = (int)uVar20 - 0x10;
        uVar20 = (ulong)uVar2;
        *(short *)((long)param_1 + (long)puVar23 + 2) = (short)uVar17;
        puVar23 = (uint *)((long)puVar23 + 2);
        uVar17 = uVar17 >> 0x10;
        puVar3 = puVar23;
      } while (0 < (int)uVar2);
    }
  }
  pbVar26 = (byte *)((long)puVar11 - (long)__src);
  if (0 < iVar15) {
    sVar4 = __n;
    if ((iVar15 - 1U >> 3 & 1) == 0) {
      uVar16 = (ulong)(iVar15 - 8);
      *(char *)((long)param_2 + ~__n) = (char)uVar14;
      uVar14 = uVar14 >> 8;
      sVar4 = __n + 1;
      param_6 = __n + 1;
    }
    __n = param_6;
    if (7 < iVar15 - 1U) {
      lVar6 = -sVar4;
      do {
        uVar13 = (uint)uVar14;
        uVar20 = uVar14 >> 8;
        uVar2 = (int)uVar16 - 0x10;
        uVar16 = (ulong)uVar2;
        uVar14 = uVar14 >> 0x10;
        *(ushort *)((long)param_2 + lVar6 + -2) =
             (ushort)uVar20 & 0xff | (ushort)((uVar13 & 0xff00ff) << 8);
        lVar6 = lVar6 + -2;
      } while (0 < (int)uVar2);
      __n = -lVar6;
    }
  }
  if (0 < iVar9) {
    pbVar18 = pbVar26;
    if ((iVar9 - 1U >> 3 & 1) == 0) {
      *(char *)puVar11 = (char)uVar8;
      uVar8 = uVar8 >> 8;
      uVar10 = (ulong)(iVar9 - 8);
      pbVar18 = pbVar26 + 1;
      pbVar25 = pbVar26 + 1;
    }
    pbVar26 = pbVar25;
    if (7 < iVar9 - 1U) {
      do {
        pbVar26 = pbVar18 + 2;
        uVar2 = (int)uVar10 - 0x10;
        uVar10 = (ulong)uVar2;
        *(short *)((long)__src + (long)pbVar18) = (short)uVar8;
        uVar8 = uVar8 >> 0x10;
        pbVar18 = pbVar26;
      } while (0 < (int)uVar2);
    }
  }
  *param_1 = (short)puVar3;
  memcpy((void *)((long)puVar1 + (long)puVar3),__src,(size_t)pbVar26);
  memmove((byte *)((long)puVar1 + (long)puVar3 + (long)pbVar26),(void *)((long)param_2 - __n),__n);
  if (local_78 != 0) {
    if ((local_80 == 0) ||
       ((local_70 + 0xfU & 0xfffffffffffffff0) + local_78 != *(long *)(local_80 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(local_80 + 8) = local_78;
    }
  }
  return pbVar26 + (long)puVar3 + __n + 2;
}


