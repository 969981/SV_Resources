/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0305af4c; name: FUN_0305af4c
 */


undefined8
FUN_0305af4c(long param_1,uint param_2,uint param_3,long param_4,long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  int iVar30;
  int iVar32;
  undefined8 uVar31;
  int iVar33;
  int iVar35;
  int iVar36;
  undefined8 uVar34;
  undefined4 local_a0;
  byte local_9c [4];
  uint local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_78 [2];
  uint local_70 [2];
  uint local_68 [2];
  
  lVar26 = (long)(int)param_2 * 0x90;
  uVar25 = (ulong)(int)param_2;
  iVar20 = 1;
  if (0 < *(int *)(param_4 + 4)) {
    iVar20 = *(int *)(param_4 + 4) + 1;
  }
  lVar23 = (ulong)param_2 << 0x20;
  uVar17 = uVar25;
  uVar10 = 0;
  while (uVar13 = uVar10, uVar29 = uVar17, lVar27 = lVar23, lVar26 = lVar26 + -0x90,
        (long)iVar20 <= (long)uVar29) {
    puVar14 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar26);
    iVar30 = -(uint)((float)*puVar14 == (float)puVar14[2]);
    iVar32 = -(uint)((float)((ulong)*puVar14 >> 0x20) == (float)((ulong)puVar14[2] >> 0x20));
    iVar33 = -(uint)((float)puVar14[1] == (float)puVar14[3]);
    iVar35 = -(uint)((float)((ulong)puVar14[1] >> 0x20) == (float)((ulong)puVar14[3] >> 0x20));
    if ((CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                  (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                  CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                           (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                           CONCAT11((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar30 >> 8) &
                                    (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar35 >> 8),
                                    (byte)iVar32 & (byte)iVar30 & (byte)iVar33 & (byte)iVar35))) !=
         0) || ((*(byte *)(puVar14 + 0x10) >> 4 & 1) != 0)) break;
    iVar30 = -(uint)((float)puVar14[0x12] == (float)puVar14[0x14]);
    iVar32 = -(uint)((float)((ulong)puVar14[0x12] >> 0x20) == (float)((ulong)puVar14[0x14] >> 0x20))
    ;
    iVar33 = -(uint)((float)puVar14[0x13] == (float)puVar14[0x15]);
    iVar35 = -(uint)((float)((ulong)puVar14[0x13] >> 0x20) == (float)((ulong)puVar14[0x15] >> 0x20))
    ;
    if ((CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                  (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                  CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                           (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                           CONCAT11((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar30 >> 8) &
                                    (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar35 >> 8),
                                    (byte)iVar32 & (byte)iVar30 & (byte)iVar33 & (byte)iVar35))) !=
         0) || (((*(byte *)(puVar14 + 0x22) >> 4 & 1) != 0 ||
                (uVar10 = switchD_0305df4c::caseD_4(puVar14,param_5,&local_90), uVar10 == 0xffffffff
                )))) break;
    local_70[0] = (uint)local_90;
    local_68[0] = uVar10;
    if ((param_3 & 1) == 0) {
      iVar30 = FUN_0305bd70(param_5,local_68,local_70,param_6);
    }
    else {
      iVar30 = FUN_0305c000(param_5,local_68,local_70,param_6);
    }
    if (iVar30 == 0) {
      uVar10 = switchD_0305df4c::caseD_4(puVar14 + 0x12,param_5,local_78);
      bVar9 = local_68[0] == uVar10;
    }
    else {
      bVar9 = false;
    }
    lVar23 = lVar27 + -0x100000000;
    uVar17 = uVar29 - 1;
    uVar10 = uVar13 + 1;
    if (!bVar9) break;
  }
  uVar7 = param_2 - uVar13;
  uVar10 = ~param_2;
  iVar20 = uVar13 + 1;
  lVar23 = uVar25 * 0x90;
  lVar26 = uVar25 << 0x20;
  iVar30 = 0;
  while( true ) {
    iVar32 = iVar30;
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x100000000;
    if ((long)*(int *)(param_1 + 0x20) <= (long)uVar25) break;
    puVar14 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar23);
    iVar30 = -(uint)((float)*puVar14 == (float)puVar14[2]);
    iVar33 = -(uint)((float)((ulong)*puVar14 >> 0x20) == (float)((ulong)puVar14[2] >> 0x20));
    iVar35 = -(uint)((float)puVar14[1] == (float)puVar14[3]);
    iVar36 = -(uint)((float)((ulong)puVar14[1] >> 0x20) == (float)((ulong)puVar14[3] >> 0x20));
    if ((CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                  (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar36 >> 0x18),
                  CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                           (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar36 >> 0x10),
                           CONCAT11((byte)((uint)iVar33 >> 8) & (byte)((uint)iVar30 >> 8) &
                                    (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar36 >> 8),
                                    (byte)iVar33 & (byte)iVar30 & (byte)iVar35 & (byte)iVar36))) !=
         0) || ((*(byte *)(puVar14 + 0x10) >> 4 & 1) != 0)) break;
    iVar30 = -(uint)((float)puVar14[0x12] == (float)puVar14[0x14]);
    iVar33 = -(uint)((float)((ulong)puVar14[0x12] >> 0x20) == (float)((ulong)puVar14[0x14] >> 0x20))
    ;
    iVar35 = -(uint)((float)puVar14[0x13] == (float)puVar14[0x15]);
    iVar36 = -(uint)((float)((ulong)puVar14[0x13] >> 0x20) == (float)((ulong)puVar14[0x15] >> 0x20))
    ;
    if ((CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                  (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar36 >> 0x18),
                  CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                           (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar36 >> 0x10),
                           CONCAT11((byte)((uint)iVar33 >> 8) & (byte)((uint)iVar30 >> 8) &
                                    (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar36 >> 8),
                                    (byte)iVar33 & (byte)iVar30 & (byte)iVar35 & (byte)iVar36))) !=
         0) || (((*(byte *)(puVar14 + 0x22) >> 4 & 1) != 0 ||
                (uVar11 = switchD_0305df4c::caseD_4(puVar14,param_5,&local_90), uVar11 == 0xffffffff
                )))) break;
    local_70[0] = (uint)local_90;
    local_68[0] = uVar11;
    if ((param_3 & 1) == 0) {
      iVar30 = FUN_0305bd70(param_5,local_68,local_70,param_6);
      if (iVar30 != 0) goto LAB_0305b1c0;
LAB_0305b1e0:
      uVar11 = switchD_0305df4c::caseD_4(puVar14 + 0x12,param_5,local_78);
      bVar9 = local_68[0] == uVar11;
    }
    else {
      iVar30 = FUN_0305c000(param_5,local_68,local_70,param_6);
      if (iVar30 == 0) goto LAB_0305b1e0;
LAB_0305b1c0:
      bVar9 = false;
    }
    lVar23 = lVar23 + 0x90;
    iVar30 = iVar32 + -1;
    if (!bVar9) break;
  }
  if (*(int *)(param_1 + 0x20) + uVar10 + iVar32 == 0) {
    return 1;
  }
  lVar23 = *(long *)(param_1 + 0x18);
  lVar26 = lVar26 >> 0x20;
  uVar24 = *(uint *)(lVar23 + lVar26 * 0x90 + 0x70);
  uVar25 = (ulong)uVar24 & 0x3fffff;
  lVar19 = *(long *)(*(long *)(*(long *)(param_5 + 0x38) + ((ulong)(uVar24 >> 0xe) & 0x3ff00)) +
                    0x20);
  uVar11 = *(uint *)(*(long *)(lVar19 + 0x168) + uVar25 * 4);
  if ((int)uVar11 < 0) {
    if ((*(int *)(lVar19 + 0x108) != 0) &&
       ((*(byte *)(*(long *)(lVar19 + 0x100) + uVar25) & 1) != 0)) {
      return 2;
    }
    if (*(short *)(lVar23 + lVar26 * 0x90 + 0x74) != -1) {
      return 2;
    }
  }
  else {
    iVar30 = *(int *)(lVar19 + 0x170);
    lVar21 = (long)iVar30;
    if (iVar30 <= (int)(uVar11 + 1)) {
      iVar30 = uVar11 + 1;
    }
    lVar22 = (ulong)uVar11 + 1;
    do {
      if (lVar21 <= lVar22) goto LAB_0305b298;
      lVar1 = lVar22 * 4;
      lVar22 = lVar22 + 1;
    } while (*(int *)(*(long *)(lVar19 + 0x168) + lVar1) == (int)uVar25);
    iVar30 = (int)lVar22 + -1;
LAB_0305b298:
    iVar33 = (int)*(short *)(lVar23 + lVar26 * 0x90 + 0x74);
    if (iVar33 == -1) {
      return 2;
    }
    uVar11 = uVar11 + iVar33;
    if (iVar30 <= (int)uVar11) {
      return 2;
    }
    uVar24 = uVar11 | uVar24 & 0xffc00000;
  }
  if (uVar24 == 0xffffffff) {
    return 2;
  }
  lVar27 = lVar27 >> 0x20;
  uVar11 = switchD_0305df4c::caseD_4(lVar23 + lVar27 * 0x90,param_5,local_68);
  if (uVar11 == 0xffffffff) {
    return 2;
  }
  uVar25 = (ulong)local_68[0];
  local_70[0] = local_68[0];
  uVar17 = uVar25 & 0x3fffff;
  lVar26 = *(long *)(*(long *)(*(long *)(param_5 + 0x38) + ((ulong)(local_68[0] >> 0xe) & 0x3ff00))
                    + 0x20);
  iVar30 = *(int *)(lVar26 + 0x20);
  iVar33 = (int)uVar17;
  if ((param_3 & 1) == 0) {
    iVar35 = iVar33 - iVar30;
    if (iVar33 < iVar30) {
      if (*(int *)(lVar26 + 0x98) == 0) {
        uVar18 = uVar17;
LAB_0305b420:
        iVar35 = (int)uVar18;
        lVar26 = *(long *)(lVar26 + 0xb0);
        goto LAB_0305b424;
      }
      uVar16 = *(uint *)(*(long *)(lVar26 + 0x90) + uVar17 * 4);
      uVar18 = (ulong)uVar16;
      if (uVar16 != 0xffffffff) goto LAB_0305b420;
      puVar15 = (uint *)(*(long *)(lVar26 + 0x18) + uVar17 * 0x10);
    }
    else {
      lVar26 = *(long *)(lVar26 + 0xd0);
LAB_0305b424:
      puVar15 = (uint *)(lVar26 + (long)iVar35 * 0x10);
    }
    uVar16 = uVar11 & 0x3fffff;
    if (uVar16 == *puVar15) {
      uVar16 = uVar16 + (int)(short)puVar15[2];
    }
    uVar28 = 0;
    local_90 = CONCAT44(local_90._4_4_,uVar16 - 1 | uVar11 & 0xffc00000);
    while ((uint)uVar25 != uVar24) {
      iVar30 = FUN_0305c000(param_5,&local_90,local_70,param_6);
      if (iVar30 != 0) {
        return 2;
      }
      uVar28 = uVar28 + 1;
      uVar25 = (ulong)local_70[0];
      if (local_70[0] == local_68[0]) {
        return 2;
      }
    }
  }
  else {
    iVar35 = iVar33 - iVar30;
    if (iVar33 < iVar30) {
      iVar35 = iVar33;
      if ((*(int *)(lVar26 + 0x98) == 0) ||
         (iVar35 = *(int *)(*(long *)(lVar26 + 0x90) + uVar17 * 4), iVar35 != -1)) {
        lVar26 = *(long *)(lVar26 + 0xb0);
        goto LAB_0305b3ac;
      }
      puVar15 = (uint *)(*(long *)(lVar26 + 0x18) + uVar17 * 0x10);
    }
    else {
      lVar26 = *(long *)(lVar26 + 0xd0);
LAB_0305b3ac:
      puVar15 = (uint *)(lVar26 + (long)iVar35 * 0x10);
    }
    uVar16 = *puVar15;
    if ((uVar11 & 0x3fffff) != ((int)(short)puVar15[2] + uVar16) - 1) {
      uVar16 = (uVar11 & 0x3fffff) + 1;
    }
    uVar28 = 0;
    local_90 = CONCAT44(local_90._4_4_,uVar16 | uVar11 & 0xffc00000);
    while ((uint)uVar25 != uVar24) {
      iVar30 = FUN_0305bd70(param_5,&local_90,local_70,param_6);
      if (iVar30 != 0) {
        return 2;
      }
      uVar28 = uVar28 + 1;
      uVar25 = (ulong)local_70[0];
      if (local_70[0] == local_68[0]) {
        return 2;
      }
    }
  }
  lVar23 = lVar23 + lVar27 * 0x90;
  iVar30 = (uVar13 - iVar32) + 1;
  iVar33 = (uVar13 - iVar32) + 1;
  uVar34 = *(undefined8 *)(lVar23 + 0x28);
  uVar31 = *(undefined8 *)(lVar23 + 0x20);
  if ((int)uVar28 < iVar33) {
    iVar36 = (uVar13 - uVar28) - iVar32;
    iVar33 = uVar28 + *(int *)(param_1 + 0x20);
    iVar35 = ~uVar13 + iVar33 + iVar32;
    uVar24 = uVar10 + iVar33 + iVar32;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar35) {
      FUN_0305c2f8(param_1 + 0x18,(long)iVar35);
    }
    iVar33 = iVar36 + 1;
    if (0 < (int)uVar24) {
      lVar26 = *(long *)(param_1 + 0x18);
      if (iVar33 < 1) {
        if (iVar20 != uVar28 + iVar32) {
          lVar26 = lVar26 + lVar27 * 0x90;
          FUN_031d0240(lVar26,lVar26 + (long)iVar33 * 0x90,(ulong)uVar24 * 0x90);
        }
      }
      else {
        uVar17 = (ulong)uVar24 * 0x90 - 1;
        uVar25 = (uVar17 >> 3) + 1;
        if (uVar17 < 0x18) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          puVar14 = (undefined8 *)(lVar26 + (long)(int)uVar7 * 0x90 + 0x18);
          do {
            puVar2 = puVar14 + (long)iVar30 * 0x12 + (ulong)uVar28 * -0x12;
            puVar14[-3] = puVar2[-3];
            puVar14[-2] = puVar2[-2];
            puVar14[-1] = puVar2[-1];
            uVar17 = uVar17 + 4;
            *puVar14 = *puVar2;
            puVar14 = puVar14 + 4;
          } while ((uVar25 & 0x3ffffffffffffffc) != uVar17);
        }
        if (((uint)uVar25 >> 1 & 1) != 0) {
          lVar23 = ((ulong)((uVar24 * 0x90 - 1 >> 3) + 1 >> 1) & 1) * -2;
          puVar14 = (undefined8 *)(lVar26 + uVar17 * 8 + (long)(int)uVar7 * 0x90);
          do {
            bVar9 = lVar23 != -1;
            lVar23 = lVar23 + 1;
            *puVar14 = puVar14[(long)iVar30 * 0x12 + (ulong)uVar28 * -0x12];
            puVar14 = puVar14 + 1;
          } while (bVar9);
        }
      }
    }
    iVar20 = *(int *)(param_1 + 0x38);
    iVar6 = iVar20 * uVar7;
    iVar30 = *(int *)(param_1 + 0x30);
    iVar33 = iVar20 * iVar33;
    iVar8 = iVar30 - iVar33;
    *(int *)(param_1 + 0x20) = iVar35;
    uVar24 = (iVar30 - iVar6) - iVar33;
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar8) {
      FUN_02e9b320((long *)(param_1 + 0x28),PTR_PTR_047d1a50,(long)iVar8);
    }
    if (0 < (int)uVar24) {
      lVar23 = *(long *)(param_1 + 0x28);
      lVar26 = lVar23 + (long)iVar6 * 4;
      if (iVar33 < 1) {
        if (iVar33 != 0) {
          FUN_031d0240(lVar26,lVar26 + (long)iVar33 * 4,(ulong)uVar24 << 2);
        }
      }
      else {
        uVar25 = (ulong)uVar24 * 4;
        if (uVar25 < 5) {
          uVar25 = 4;
        }
        if (uVar25 - 1 < 0xc) {
          uVar18 = 0;
        }
        else {
          uVar17 = (ulong)(iVar30 + iVar20 * (uVar28 + uVar10 + iVar32)) * 4;
          if (uVar17 < 5) {
            uVar17 = 4;
          }
          uVar24 = iVar20 * (iVar36 + 1);
          uVar18 = 0;
          puVar12 = (undefined4 *)(lVar26 + 0xc);
          do {
            puVar3 = (undefined4 *)
                     ((long)puVar12 +
                     (-(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2));
            puVar12[-3] = puVar3[-3];
            puVar12[-2] = puVar3[-2];
            puVar12[-1] = puVar3[-1];
            uVar18 = uVar18 + 4;
            *puVar12 = *puVar3;
            puVar12 = puVar12 + 4;
          } while (((uVar17 - 1 >> 2) + 1 & 0x7ffffffffffffffc) != uVar18);
        }
        if ((((uint)(uVar25 - 1 >> 2) & 0x3fffffff) + 1 & 3) != 0) {
          uVar25 = (ulong)(iVar30 + iVar20 * (uVar28 + uVar10 + iVar32)) * 4;
          iVar30 = (int)uVar25;
          if (uVar25 < 5) {
            iVar30 = 4;
          }
          lVar26 = -((ulong)((iVar30 - 1U >> 2) + 1) & 3);
          puVar12 = (undefined4 *)(lVar23 + uVar18 * 4 + (long)iVar6 * 4);
          do {
            bVar9 = lVar26 != -1;
            lVar26 = lVar26 + 1;
            *puVar12 = puVar12[iVar20 * (iVar36 + 1)];
            puVar12 = puVar12 + 1;
          } while (bVar9);
        }
      }
    }
    *(int *)(param_1 + 0x30) = iVar8;
  }
  else if (iVar33 < (int)uVar28) {
    iVar6 = *(int *)(param_1 + 0x20);
    iVar33 = uVar28 + iVar32;
    iVar35 = ~uVar13 + iVar33;
    iVar36 = ~uVar13 + uVar28 + iVar6 + iVar32;
    iVar32 = uVar10 + iVar6 + uVar13 + 1;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar36) {
      FUN_0305c2f8(param_1 + 0x18,(long)iVar36);
    }
    lVar26 = *(long *)(param_1 + 0x18);
    if (iVar35 < 0) {
      if (iVar20 != iVar33 && iVar32 != 0) {
        uVar25 = (long)iVar32 * 0x90 - 1;
        if (uVar25 < 0x18) {
          uVar17 = 0;
        }
        else {
          puVar14 = (undefined8 *)(lVar26 + (long)(int)uVar7 * 0x90 + 0x10);
          uVar17 = 0;
          do {
            puVar4 = puVar14 + (long)iVar30 * -0x12 + (ulong)uVar28 * 0x12;
            puVar4[-2] = puVar14[-2];
            puVar4[-1] = puVar14[-1];
            *puVar4 = *puVar14;
            puVar2 = puVar14 + 1;
            uVar17 = uVar17 + 4;
            puVar14 = puVar14 + 4;
            puVar4[1] = *puVar2;
          } while ((((ulong)(~((long)(int)uVar7 * 0x90) + (long)iVar6 * 0x90) >> 3) + 1 &
                   0x3ffffffffffffffc) != uVar17);
        }
        if (((int)(uVar25 >> 3) + 1U >> 1 & 1) != 0) {
          puVar14 = (undefined8 *)(lVar26 + uVar17 * 8 + (long)(int)uVar7 * 0x90);
          lVar26 = ((ulong)((~(uVar7 * 0x90) + iVar6 * 0x90 >> 3) + 1 >> 1) & 1) * -2;
          do {
            puVar14[(long)iVar30 * -0x12 + (ulong)uVar28 * 0x12] = *puVar14;
            puVar14 = puVar14 + 1;
            bVar9 = lVar26 != -1;
            lVar26 = lVar26 + 1;
          } while (bVar9);
        }
      }
    }
    else if (iVar20 != iVar33 && iVar32 != 0) {
      lVar26 = lVar26 + lVar27 * 0x90;
      FUN_031d0240(lVar26 + (long)iVar35 * 0x90,lVar26,(long)iVar32 * 0x90);
    }
    iVar30 = *(int *)(param_1 + 0x38);
    iVar35 = iVar30 * iVar35;
    iVar32 = *(int *)(param_1 + 0x30);
    iVar6 = iVar30 * uVar7;
    *(int *)(param_1 + 0x20) = iVar36;
    iVar20 = iVar32 + iVar35;
    uVar10 = iVar32 - iVar6;
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar20) {
      FUN_02e9b320((long *)(param_1 + 0x28),PTR_PTR_047d1a50,(long)iVar20);
    }
    lVar26 = *(long *)(param_1 + 0x28);
    puVar12 = (undefined4 *)(lVar26 + (long)iVar6 * 4);
    if (iVar35 < 0) {
      if (iVar35 != 0 && uVar10 != 0) {
        uVar25 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2;
        if (uVar25 < 5) {
          uVar25 = 4;
        }
        uVar17 = 0;
        if (0xb < uVar25 - 1) {
          uVar18 = (long)iVar32 * 4 + (long)iVar6 * -4;
          if (uVar18 < 5) {
            uVar18 = 4;
          }
          uVar10 = iVar30 * (~uVar13 + iVar33);
          do {
            puVar5 = (undefined4 *)
                     ((long)puVar12 +
                     (-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2));
            *puVar5 = *puVar12;
            puVar5[1] = puVar12[1];
            puVar5[2] = puVar12[2];
            puVar3 = puVar12 + 3;
            uVar17 = uVar17 + 4;
            puVar12 = puVar12 + 4;
            puVar5[3] = *puVar3;
          } while (((uVar18 - 1 >> 2) + 1 & 0x7ffffffffffffffc) != uVar17);
        }
        if ((((uint)(uVar25 - 1 >> 2) & 0x3fffffff) + 1 & 3) != 0) {
          uVar25 = (long)iVar32 * 4 + (long)iVar6 * -4;
          iVar32 = (int)uVar25;
          if (uVar25 < 5) {
            iVar32 = 4;
          }
          puVar12 = (undefined4 *)(lVar26 + uVar17 * 4 + (long)iVar6 * 4);
          lVar26 = -((ulong)((iVar32 - 1U >> 2) + 1) & 3);
          do {
            puVar12[(int)(iVar30 * (~uVar13 + iVar33))] = *puVar12;
            puVar12 = puVar12 + 1;
            bVar9 = lVar26 != -1;
            lVar26 = lVar26 + 1;
          } while (bVar9);
        }
      }
    }
    else if (iVar35 != 0 && uVar10 != 0) {
      FUN_031d0240(puVar12 + iVar35,puVar12,
                   -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2);
    }
    *(int *)(param_1 + 0x30) = iVar20;
  }
  uVar25 = (ulong)local_68[0];
  local_98[0] = local_68[0] >> 0x16;
  local_78[0] = local_68[0];
  lVar26 = *(long *)(*(long *)(*(long *)(param_5 + 0x38) + (ulong)local_98[0] * 0x100) + 0x20);
  local_9c[0] = *(byte *)(*(long *)(lVar26 + 0x68) + 0x80) & 1;
  iVar20 = *(int *)(lVar26 + 0x20);
  uVar17 = uVar25 & 0x3fffff;
  iVar30 = (int)uVar17;
  local_90 = uVar31;
  uStack_88 = uVar34;
  if ((param_3 & 1) == 0) {
    iVar32 = iVar30 - iVar20;
    if (iVar30 < iVar20) {
      if (*(int *)(lVar26 + 0x98) == 0) {
        uVar18 = uVar17;
LAB_0305bc24:
        iVar32 = (int)uVar18;
        lVar26 = *(long *)(lVar26 + 0xb0);
        goto LAB_0305bc28;
      }
      uVar10 = *(uint *)(*(long *)(lVar26 + 0x90) + uVar17 * 4);
      uVar18 = (ulong)uVar10;
      if (uVar10 != 0xffffffff) goto LAB_0305bc24;
      puVar15 = (uint *)(*(long *)(lVar26 + 0x18) + uVar17 * 0x10);
    }
    else {
      lVar26 = *(long *)(lVar26 + 0xd0);
LAB_0305bc28:
      puVar15 = (uint *)(lVar26 + (long)iVar32 * 0x10);
    }
    uVar10 = uVar11 & 0x3fffff;
    if (uVar10 == *puVar15) {
      uVar10 = uVar10 + (int)(short)puVar15[2];
    }
    local_70[0] = uVar10 - 1 | uVar11 & 0xffc00000;
    if (uVar28 != 0) {
      iVar20 = 0;
      while( true ) {
        local_a0 = (undefined4)uVar25;
        FUN_03058bd4(param_1,param_5,param_6,local_70[0],&local_90,&local_a0,local_98,local_9c,
                     uVar7 + iVar20);
        FUN_0305c000(param_5,local_70,local_78,param_6);
        if (uVar28 - 1 == iVar20) break;
        uVar25 = (ulong)local_78[0];
        iVar20 = iVar20 + 1;
      }
    }
    goto LAB_0305bcc0;
  }
  iVar32 = iVar30 - iVar20;
  if (iVar30 < iVar20) {
    iVar32 = iVar30;
    if ((*(int *)(lVar26 + 0x98) == 0) ||
       (iVar32 = *(int *)(*(long *)(lVar26 + 0x90) + uVar17 * 4), iVar32 != -1)) {
      lVar26 = *(long *)(lVar26 + 0xb0);
      goto LAB_0305bb80;
    }
    puVar15 = (uint *)(*(long *)(lVar26 + 0x18) + uVar17 * 0x10);
  }
  else {
    lVar26 = *(long *)(lVar26 + 0xd0);
LAB_0305bb80:
    puVar15 = (uint *)(lVar26 + (long)iVar32 * 0x10);
  }
  local_70[0] = *puVar15;
  if ((uVar11 & 0x3fffff) != ((int)(short)puVar15[2] + local_70[0]) - 1) {
    local_70[0] = (uVar11 & 0x3fffff) + 1;
  }
  local_70[0] = local_70[0] | uVar11 & 0xffc00000;
  if (uVar28 != 0) {
    iVar20 = 0;
    while( true ) {
      local_a0 = (undefined4)uVar25;
      FUN_03058bd4(param_1,param_5,param_6,local_70[0],&local_90,&local_a0,local_98,local_9c,
                   uVar7 + iVar20);
      FUN_0305bd70(param_5,local_70,local_78,param_6);
      if (uVar28 - 1 == iVar20) break;
      uVar25 = (ulong)local_78[0];
      iVar20 = iVar20 + 1;
    }
  }
LAB_0305bcc0:
  if (param_2 != uVar13) {
    if ((int)uVar29 == 1) {
      lVar26 = 0;
    }
    else {
      lVar26 = 0;
      lVar23 = 0x10c;
      do {
        *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar23 + -0x90) = 0;
        *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar23 + -0x8e) = 0;
        *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar23) = 0;
        lVar26 = lVar26 + 2;
        lVar27 = *(long *)(param_1 + 0x18) + lVar23;
        lVar23 = lVar23 + 0x120;
        *(undefined2 *)(lVar27 + 2) = 0;
      } while ((ulong)uVar7 - (uVar29 & 1) != lVar26);
    }
    if ((uVar29 & 1) != 0) {
      *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar26 * 0x90 + 0x7c) = 0;
      *(undefined2 *)(*(long *)(param_1 + 0x18) + lVar26 * 0x90 + 0x7e) = 0;
      return 0;
    }
  }
  return 0;
}


