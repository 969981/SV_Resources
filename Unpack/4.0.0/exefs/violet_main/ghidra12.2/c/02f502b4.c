/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f502b4; name: FUN_02f502b4
 */


void FUN_02f502b4(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  int iVar29;
  uint uVar30;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  uint local_198;
  uint local_194;
  undefined1 local_190 [136];
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [92];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  uint local_70;
  
  uVar2 = param_2 + 1;
  lVar26 = tpidr_el0;
  lVar16 = *(long *)(lVar26 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar26 + 0x1000b8) = lVar16;
  }
  uVar15 = uVar2 * param_2;
  lVar26 = *(long *)(*(long *)(lVar16 + 0x3d0) + 0x10);
  if (*(long *)(lVar26 + 8) == 0) {
    local_1a8 = (undefined1 *)(-(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1);
    local_1a0 = local_1a8;
    if (lVar26 != 0) {
      local_108 = (undefined1 *)((ulong)(local_1a8 + 0x3f) & 0xffffffffffffffc0);
      if (local_108 <= *(undefined1 **)(lVar26 + 0x28)) {
        pbVar11 = *(byte **)(lVar26 + 0x38);
        if (pbVar11 + (long)local_108 <= *(byte **)(lVar26 + 0x40)) {
          *(byte **)(lVar26 + 0x38) = pbVar11 + (long)local_108;
          goto LAB_02f503ac;
        }
      }
      pbVar11 = (byte *)FUN_031cf3b4(lVar26,&local_108);
      goto LAB_02f503ac;
    }
  }
  else {
    local_1a0 = (undefined1 *)(-(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1);
  }
  local_1a8 = local_1a0;
  pbVar11 = (byte *)(**(code **)PTR_DAT_047d1a08)(1,&local_1a0,0x40);
  lVar26 = 0;
LAB_02f503ac:
  if ((int)param_2 < 1) {
    uVar30 = 0;
  }
  else {
    uVar14 = 0;
    lVar16 = 0;
    uVar13 = param_2;
    do {
      uVar30 = param_2 - uVar14 & 3;
      iVar29 = (int)lVar16;
      if (2 < ~uVar14 + param_2) {
        uVar22 = 0;
        pbVar20 = pbVar11 + (long)iVar29 * 2 + 4;
        do {
          uVar9 = (ushort)uVar22;
          sVar8 = (short)uVar14 + uVar9;
          *(ushort *)(pbVar20 + -4) = uVar9 & 0xfc | sVar8 * 0x100;
          *(ushort *)(pbVar20 + 2) = (uVar9 + 3 & 0xff | sVar8 * 0x100) + 0x300;
          uVar22 = uVar22 + 4;
          *(ushort *)(pbVar20 + -2) = (uVar9 + 1 & 0xfd | sVar8 * 0x100) + 0x100;
          *(ushort *)pbVar20 = (uVar9 + 2 & 0xfe | sVar8 * 0x100) + 0x200;
          uVar21 = (uint)uVar22;
          pbVar20 = pbVar20 + 8;
        } while ((uVar13 & 0xfffffffc) != uVar21);
        lVar16 = uVar22 + (long)iVar29;
        goto joined_r0x02f50460;
      }
      uVar22 = 0;
      lVar1 = (long)iVar29;
      uVar10 = uVar14;
      while (uVar30 != 0) {
        uVar21 = (int)uVar22 + 1;
        lVar16 = lVar1 + 1;
        uVar30 = uVar30 - 1;
        *(ushort *)(pbVar11 + lVar1 * 2) = (ushort)uVar22 & 0xff | (ushort)(uVar10 << 8);
        uVar22 = (ulong)uVar21;
joined_r0x02f50460:
        uVar10 = uVar14 + uVar21;
        lVar1 = lVar16;
      }
      uVar30 = (uint)lVar16;
      uVar14 = uVar14 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar14 != param_2);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < (int)uVar30) {
      FUN_02f51930(param_1 + 8,PTR_PTR_047d1a50,(long)(int)uVar30);
    }
  }
  if (*(uint *)(param_1 + 0x10) != uVar30) {
    *(uint *)(param_1 + 0x10) = uVar30;
  }
  lVar16 = *(long *)(param_1 + 8);
  uVar14 = param_2;
  if ((int)param_2 < 0) {
    uVar14 = param_2 + 1;
  }
  puVar27 = auStack_f8;
  local_100 = -0x7fffffdeffffffdf;
  local_70 = 0x420;
  local_108 = puVar27;
  if (((uint)puVar27 >> 3 & 1) == 0) {
    puVar17 = auStack_78;
  }
  else {
    puVar17 = auStack_f8 + (4 - ((ulong)puVar27 >> 2 & 2)) * 4;
    if (auStack_f8 + (4 - ((ulong)puVar27 >> 2 & 2)) * 4 <= auStack_f4) {
      puVar17 = auStack_f4;
    }
    memset(puVar27,0,(size_t)(puVar17 + (-0x10 - (long)&local_108)));
    lVar1 = -(long)&local_108;
    puVar27 = puVar17 + (long)(local_190 + lVar1 + 0x88);
    puVar17 = puVar17 + (long)(auStack_98 + lVar1);
  }
  if (puVar17 <= puVar27 + 0x10) {
    puVar17 = puVar27 + 0x10;
  }
  memset(puVar27,0,(ulong)(puVar17 + ~(ulong)puVar27 + 0x10) & 0xfffffffffffffff0);
  puVar27 = puVar27 + ((ulong)(puVar17 + ~(ulong)puVar27) & 0xfffffffffffffff0) + 0x10;
  if (puVar27 < auStack_74) {
    memset(puVar27,0,(size_t)(auStack_74 + -(long)puVar27));
  }
  uVar13 = local_70;
  iVar29 = (int)(uVar15 + 0x1f) >> 5;
  local_70 = uVar15;
  if ((int)(local_100._4_4_ & 0x7fffffff) < iVar29) {
    FUN_02eb1f88(&local_108,PTR_PTR_047d1a50,(long)iVar29);
  }
  puVar27 = local_108;
  if ((int)local_100 != iVar29) {
    local_100 = CONCAT44(local_100._4_4_,iVar29);
  }
  uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
  if (((int)uVar13 < (int)(local_70 + 0x1f & 0xffffffe0)) &&
     (uVar15 = (int)(local_70 + 0x1f) >> 5, uVar15 != uVar13 >> 5)) {
    uVar21 = uVar13 >> 5;
    uVar23 = (ulong)(uVar21 + 1);
    puVar17 = local_108 + uVar23 * 4;
    iVar29 = uVar15 + ~uVar21;
    *(uint *)(local_108 + (ulong)uVar21 * 4) =
         *(uint *)(local_108 + (ulong)uVar21 * 4) & (-1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
    uVar22 = (ulong)iVar29;
    puVar28 = puVar17;
    if (((ulong)puVar17 & 0xf) == 0) {
      uVar18 = uVar22;
    }
    else {
      uVar18 = 4 - (((ulong)puVar17 & 0xf) >> 2);
      uVar3 = uVar22;
      if (uVar18 <= uVar22) {
        uVar3 = uVar18;
      }
      uVar18 = uVar22 - uVar3;
      if (0 < (long)uVar3) {
        puVar28 = puVar17 + uVar3 * 4;
        if (puVar17 + uVar3 * 4 <= local_108 + (uVar23 + 1) * 4) {
          puVar28 = local_108 + (uVar23 + 1) * 4;
        }
        uVar19 = ~(ulong)local_108;
        memset(puVar17,0,(ulong)(puVar28 + uVar19 + uVar23 * -4 + 4) & 0xfffffffffffffffc);
        puVar28 = puVar27 + (uVar23 + 1 + ((ulong)(puVar28 + uVar19 + uVar23 * -4) >> 2)) * 4;
      }
    }
    if ((3 < uVar18) && (0 < (long)(uVar18 & 0xfffffffffffffffc))) {
      puVar4 = puVar28 + (uVar18 & 0xfffffffffffffffc) * 4;
      if (puVar28 + (uVar18 & 0xfffffffffffffffc) * 4 <= puVar28 + 0x10) {
        puVar4 = puVar28 + 0x10;
      }
      memset(puVar28,0,(ulong)(puVar4 + ~(ulong)puVar28 + 0x10) & 0xfffffffffffffff0);
      puVar28 = puVar28 + ((ulong)(puVar4 + ~(ulong)puVar28) & 0xfffffffffffffff0) + 0x10;
    }
    if (puVar28 < puVar17 + (long)iVar29 * 4) {
      memset(puVar28,0,
             (ulong)(puVar27 + ((uVar23 + uVar22) * 4 - (long)puVar28) + 3) & 0xfffffffffffffffc);
    }
  }
  local_1a0 = local_190;
  local_198 = 0;
  local_194 = 0x80000021;
  uVar15 = 0;
  if (0x20 < (int)param_2) {
    FUN_02e9b320(&local_1a0,PTR_PTR_047d1a50,(long)(int)uVar2);
    uVar15 = local_198;
  }
  if (((int)uVar15 <= (int)param_2) && ((int)uVar15 < (int)uVar2)) {
    local_198 = uVar2;
    memset(local_1a0 + (long)(int)uVar15 * 4,0,(ulong)(param_2 - uVar15) * 4 + 4);
  }
  if (0 < (int)uVar30) {
    iVar29 = (int)uVar14 >> 1;
    uVar22 = (ulong)uVar30;
    if ((int)param_2 < 0) {
      pbVar20 = pbVar11;
      do {
        uVar22 = uVar22 - 1;
        uVar7 = *(undefined2 *)pbVar20;
        bVar5 = *pbVar20;
        bVar6 = pbVar20[1];
        pbVar20 = pbVar20 + 2;
        *(undefined2 *)(lVar16 + (long)(*(int *)(local_1a0 + -4) - iVar29) * 2) = uVar7;
        *(int *)(local_1a0 + -4) = *(int *)(local_1a0 + -4) + 1;
        iVar25 = (int)(bVar5 - param_2) >> 5;
        *(uint *)(local_108 + (long)iVar25 * 4) =
             *(uint *)(local_108 + (long)iVar25 * 4) | 1 << (ulong)(bVar5 - param_2 & 0x1f);
        iVar25 = (int)(bVar6 - param_2) >> 5;
        *(uint *)(local_108 + (long)iVar25 * 4) =
             *(uint *)(local_108 + (long)iVar25 * 4) | 1 << (ulong)(bVar6 - param_2 & 0x1f);
      } while (uVar22 != 0);
    }
    else {
      uVar23 = 0;
      do {
        pbVar20 = pbVar11 + uVar23 * 2;
        iVar25 = 0;
        iVar24 = 0;
        uVar18 = 0;
        iVar12 = -1;
        do {
          if (*(int *)(local_1a0 + uVar18 * 4) < iVar29) {
            uVar15 = iVar25 + (uint)*pbVar20;
            uVar30 = 1 << (ulong)(uVar15 & 0x1f);
            iVar12 = (int)uVar18;
            if ((uVar30 & *(uint *)(local_108 + (long)((int)uVar15 >> 5) * 4)) == 0) {
              uVar14 = iVar25 + (uint)pbVar20[1];
              uVar13 = 1 << (ulong)(uVar14 & 0x1f);
              if ((*(uint *)(local_108 + (long)((int)uVar14 >> 5) * 4) & uVar13) == 0) {
                *(undefined2 *)(lVar16 + (long)(*(int *)(local_1a0 + uVar18 * 4) - iVar24) * 2) =
                     *(undefined2 *)pbVar20;
                lVar1 = (long)((ulong)uVar15 << 0x20) >> 0x25;
                *(int *)(local_1a0 + (uVar18 & 0xffffffff) * 4) =
                     *(int *)(local_1a0 + (uVar18 & 0xffffffff) * 4) + 1;
                *(uint *)(local_108 + lVar1 * 4) = *(uint *)(local_108 + lVar1 * 4) | uVar30;
                lVar1 = (long)((ulong)uVar14 << 0x20) >> 0x25;
                goto LAB_02f508e4;
              }
            }
          }
          uVar18 = uVar18 + 1;
          iVar24 = iVar24 - iVar29;
          iVar25 = iVar25 + param_2;
        } while (uVar2 != uVar18);
        bVar5 = *pbVar20;
        bVar6 = pbVar20[1];
        *(undefined2 *)
         (lVar16 + (long)(*(int *)(local_1a0 + (long)iVar12 * 4) + iVar12 * iVar29) * 2) =
             *(undefined2 *)pbVar20;
        uVar15 = iVar12 * param_2 + (uint)bVar5;
        uVar30 = iVar12 * param_2 + (uint)bVar6;
        *(int *)(local_1a0 + (long)iVar12 * 4) = *(int *)(local_1a0 + (long)iVar12 * 4) + 1;
        iVar25 = (int)uVar15 >> 5;
        uVar13 = 1 << (ulong)(uVar30 & 0x1f);
        *(uint *)(local_108 + (long)iVar25 * 4) =
             *(uint *)(local_108 + (long)iVar25 * 4) | 1 << (ulong)(uVar15 & 0x1f);
        lVar1 = (long)((int)uVar30 >> 5);
LAB_02f508e4:
        uVar23 = uVar23 + 1;
        *(uint *)(local_108 + lVar1 * 4) = *(uint *)(local_108 + lVar1 * 4) | uVar13;
      } while (uVar23 != uVar22);
    }
  }
  local_198 = 0;
  if ((-1 < (int)local_194) && (local_1a0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_1a0,(ulong)local_194 << 2);
  }
  lVar16 = local_100;
  uVar22 = (ulong)local_100._4_4_;
  local_100 = (ulong)local_100._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_108 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_108,uVar22 << 2);
  }
  if (lVar26 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pbVar11,local_1a8);
    return;
  }
  uVar22 = (ulong)(local_1a8 + 0x3f) & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar26 + 0x28) < uVar22) || (*(byte **)(lVar26 + 0x38) != pbVar11 + uVar22)) {
    if (pbVar11 == (byte *)0x0) {
      return;
    }
    if (*(ulong *)(lVar26 + 0x28) < uVar22 + 0x40) {
      *(int *)(*(long *)(lVar26 + 0x30) + 0x20) = *(int *)(*(long *)(lVar26 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar26 + 0x10) + 0x18))
                (*(long **)(lVar26 + 0x10),(long)pbVar11 - (long)*(int *)(pbVar11 + -4),
                 uVar22 + 0x44);
      return;
    }
    if (*(byte **)(lVar26 + 0x38) != pbVar11 + uVar22) {
      FUN_031cf778(lVar26,pbVar11);
      return;
    }
    *(byte **)(lVar26 + 0x38) = pbVar11;
  }
  else {
    *(byte **)(lVar26 + 0x38) = pbVar11;
    if (*(byte **)(lVar26 + 0x48) != pbVar11) {
      return;
    }
  }
  FUN_031cf578(lVar26);
  return;
}


