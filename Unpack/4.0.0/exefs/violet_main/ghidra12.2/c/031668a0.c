/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031668a0; name: FUN_031668a0
 */


undefined8 FUN_031668a0(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined2 *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined2 *local_a8;
  long local_a0;
  int *local_98;
  ulong local_90;
  long local_88;
  int *local_80;
  ulong local_78;
  long local_70;
  ulong local_68;
  
  uVar9 = *(uint *)(param_2 + 1);
  local_98 = (int *)0x0;
  local_90 = 0x8000000000000000;
  lVar36 = tpidr_el0;
  lVar25 = *(long *)(lVar36 + 0x1000b8);
  if (lVar25 == 0) {
    lVar25 = FUN_00e5d3b4();
    *(long *)(lVar36 + 0x1000b8) = lVar25;
  }
  local_88 = *(long *)(*(long *)(lVar25 + 0x3d0) + 0x10);
  if (*(long *)(local_88 + 8) != 0) {
    local_88 = 0;
  }
  uVar38 = (long)(int)uVar9 * 4;
  local_78 = uVar38;
  local_68 = uVar38;
  if (local_88 == 0) {
    local_80 = (int *)(**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
  }
  else {
    local_c0 = (undefined2 *)(uVar38 + 0x3f & 0xffffffffffffffc0);
    if (local_c0 <= *(undefined2 **)(local_88 + 0x28)) {
      local_80 = *(int **)(local_88 + 0x38);
      if ((ulong)((long)local_c0 + (long)local_80) <= *(ulong *)(local_88 + 0x40)) {
        *(long *)(local_88 + 0x38) = (long)local_c0 + (long)local_80;
        goto LAB_03166978;
      }
    }
    local_80 = (int *)FUN_031cf3b4(local_88,&local_c0);
  }
LAB_03166978:
  local_90 = CONCAT44(uVar9,(uint)local_90) | 0x8000000000000000;
  if ((int)uVar9 < 1) {
    if ((int)uVar9 < 0) {
      local_90 = CONCAT44(local_90._4_4_,uVar9);
    }
  }
  else {
    uVar26 = 0;
    local_90 = CONCAT44(local_90._4_4_,uVar9);
    do {
      pfVar18 = (float *)(*param_2 + uVar26 * 0x10);
      fVar19 = *pfVar18;
      fVar20 = pfVar18[1];
      fVar21 = pfVar18[2];
      auVar39._0_4_ =
           (int)((float)*(undefined8 *)(param_1 + 0x40) +
                 (float)*(undefined8 *)(param_1 + 0x10) * fVar19 +
                 (float)*(undefined8 *)(param_1 + 0x20) * fVar20 +
                 (float)*(undefined8 *)(param_1 + 0x30) * fVar21 + 0.5);
      auVar39._4_4_ =
           (int)((float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar19 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar20 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * fVar21 + 0.5);
      auVar39._8_4_ =
           (int)((float)*(undefined8 *)(param_1 + 0x48) +
                 (float)*(undefined8 *)(param_1 + 0x18) * fVar19 +
                 (float)*(undefined8 *)(param_1 + 0x28) * fVar20 +
                 (float)*(undefined8 *)(param_1 + 0x38) * fVar21 + 0.5);
      auVar39._12_4_ =
           (int)((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar19 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * fVar20 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * fVar21 + 0.5);
      auVar40._8_4_ = 0x3fff;
      auVar40._0_8_ = 0x3fff00003fff;
      auVar40._12_4_ = 0x3fff;
      auVar40 = NEON_smin(auVar40,auVar39,4);
      local_80[uVar26] = auVar40._4_4_ | auVar40._0_4_ << 0x10;
      uVar26 = uVar26 + 1;
    } while (uVar9 != uVar26);
  }
  local_98 = local_80;
  uVar26 = FUN_03165b50(&local_98);
  if ((uVar26 & 1) == 0) {
    if ((int)(uint)local_90 < 2) {
      iVar30 = 0;
      iVar28 = 0;
    }
    else {
      iVar28 = 0;
      iVar30 = 0;
      iVar33 = 0;
      uVar26 = 1;
      uVar34 = 0;
      do {
        uVar1 = uVar34 + 1;
        if (uVar1 < (local_90 & 0xffffffff)) {
          uVar35 = uVar26;
          iVar27 = iVar28;
          do {
            iVar28 = ((local_98[uVar35] - local_98[uVar34]) * 2 & 0x10000U) +
                     (local_98[uVar35] - local_98[uVar34]);
            iVar6 = iVar28 >> 0x10;
            iVar28 = (int)(short)iVar28;
            iVar6 = iVar6 * iVar6 + iVar28 * iVar28;
            iVar28 = (int)uVar34;
            iVar31 = (int)uVar35;
            if (iVar6 <= iVar33) {
              iVar28 = iVar27;
              iVar6 = iVar33;
              iVar31 = iVar30;
            }
            iVar30 = iVar31;
            iVar33 = iVar6;
            uVar35 = uVar35 + 1;
            iVar27 = iVar28;
          } while ((local_90 & 0xffffffff) != uVar35);
        }
        uVar26 = uVar26 + 1;
        uVar34 = uVar1;
      } while (uVar1 != (uint)local_90 - 1);
    }
    iVar31 = (uint)local_90 + -1;
    uVar24 = local_98[iVar28];
    uVar10 = uVar24 >> 0x10;
    uVar32 = local_98[iVar30];
    uVar29 = uVar24 & 0xffff;
    iVar27 = uVar29 - (uVar32 & 0xffff);
    iVar6 = uVar10 - (uVar32 >> 0x10);
    iVar33 = -iVar6;
    if (-1 < iVar6) {
      iVar33 = iVar6;
    }
    iVar12 = iVar27 * iVar27 + iVar6 * iVar6;
    uVar11 = uVar32 >> 0x10;
    uVar5 = uVar32 & 0xffff;
    iVar15 = uVar5 - (uVar24 & 0xffff);
    uVar22 = 1;
    if (iVar6 < 1) {
      uVar22 = 0xffffffff;
    }
    iVar16 = uVar11 - (uVar24 >> 0x10);
    iVar2 = ((uVar32 - uVar24) * 2 & 0x10000) + (uVar32 - uVar24);
    iVar7 = iVar2 >> 0x10;
    iVar17 = (int)(short)iVar2;
    iVar2 = -iVar27;
    if (-1 < iVar27) {
      iVar2 = iVar27;
    }
    uVar23 = 1;
    if (-1 < iVar27) {
      uVar23 = 0xffffffff;
    }
    iVar14 = -iVar12;
    if (iVar33 < iVar2) {
      iVar33 = iVar28;
      do {
        iVar2 = 0;
        if (iVar33 != iVar31) {
          iVar2 = iVar33 + 1;
        }
        uVar22 = local_98[iVar2];
        uVar13 = ((uVar22 >> 0x10) - uVar10) * iVar27 + ((uVar22 & 0xffff) - uVar29) * iVar16;
        if (0 < (int)uVar13) {
          lVar25 = (ulong)uVar13 * (long)-iVar27;
          iVar33 = iVar14;
          if (-1 < lVar25) {
            iVar33 = iVar12;
          }
          lVar37 = -lVar25;
          if (-1 < lVar25) {
            lVar37 = lVar25;
          }
          iVar3 = 0;
          if ((long)iVar33 != 0) {
            iVar3 = (int)((lVar37 + (iVar33 >> 1 ^ iVar33 >> 0x1f)) / (long)iVar33);
          }
          iVar3 = (uVar22 >> 0x10) + iVar3;
          lVar25 = (ulong)uVar13 * (long)iVar6;
          iVar33 = iVar14;
          if (-1 < lVar25) {
            iVar33 = iVar12;
          }
          lVar37 = -lVar25;
          if (-1 < lVar25) {
            lVar37 = lVar25;
          }
          iVar4 = 0;
          if ((long)iVar33 != 0) {
            iVar4 = (int)((lVar37 + (iVar33 >> 1 ^ iVar33 >> 0x1f)) / (long)iVar33);
          }
          uVar22 = (uVar22 & 0xffff) + iVar4;
          uVar22 = uVar22 | ((uVar23 & (int)((iVar3 - uVar11) * iVar15 + (uVar22 - uVar5) * iVar6)
                                       >> 0x1f) + iVar3) * 0x10000;
        }
        iVar33 = ((uVar22 - uVar24) * 2 & 0x10000) + (uVar22 - uVar24);
        if (-1 < (iVar33 >> 0x10) * iVar7 + (short)iVar33 * iVar17) {
          uVar24 = uVar22;
        }
        local_98[iVar2] = uVar24;
        iVar33 = iVar2;
      } while (iVar2 != iVar30);
    }
    else {
      iVar33 = iVar28;
      do {
        iVar2 = 0;
        if (iVar33 != iVar31) {
          iVar2 = iVar33 + 1;
        }
        uVar23 = local_98[iVar2];
        uVar13 = ((uVar23 >> 0x10) - uVar10) * iVar27 + ((uVar23 & 0xffff) - uVar29) * iVar16;
        if (0 < (int)uVar13) {
          lVar37 = (ulong)uVar13 * (long)-iVar27;
          lVar25 = (ulong)uVar13 * (long)iVar6;
          iVar33 = iVar14;
          if (-1 < lVar37) {
            iVar33 = iVar12;
          }
          lVar8 = -lVar37;
          if (-1 < lVar37) {
            lVar8 = lVar37;
          }
          lVar37 = -lVar25;
          if (-1 < lVar25) {
            lVar37 = lVar25;
          }
          iVar3 = 0;
          if ((long)iVar33 != 0) {
            iVar3 = (int)((lVar8 + (iVar33 >> 1 ^ iVar33 >> 0x1f)) / (long)iVar33);
          }
          iVar3 = (uVar23 >> 0x10) + iVar3;
          iVar33 = iVar14;
          if (-1 < lVar25) {
            iVar33 = iVar12;
          }
          iVar4 = 0;
          if ((long)iVar33 != 0) {
            iVar4 = (int)((lVar37 + (iVar33 >> 1 ^ iVar33 >> 0x1f)) / (long)iVar33);
          }
          iVar4 = (uVar23 & 0xffff) + iVar4;
          uVar23 = (uVar22 & (int)((iVar3 - uVar11) * iVar15 + (iVar4 - uVar5) * iVar6) >> 0x1f) +
                   iVar4 | iVar3 * 0x10000;
        }
        iVar33 = ((uVar23 - uVar24) * 2 & 0x10000) + (uVar23 - uVar24);
        if (-1 < (iVar33 >> 0x10) * iVar7 + (short)iVar33 * iVar17) {
          uVar24 = uVar23;
        }
        local_98[iVar2] = uVar24;
        iVar33 = iVar2;
      } while (iVar2 != iVar30);
    }
    iVar33 = -iVar16;
    if (-1 < iVar16) {
      iVar33 = iVar16;
    }
    iVar12 = iVar15 * iVar15 + iVar16 * iVar16;
    uVar24 = 1;
    if (iVar16 < 1) {
      uVar24 = 0xffffffff;
    }
    iVar2 = -iVar15;
    if (-1 < iVar15) {
      iVar2 = iVar15;
    }
    iVar14 = -iVar12;
    uVar22 = 1;
    if (-1 < iVar15) {
      uVar22 = 0xffffffff;
    }
    if (iVar33 < iVar2) {
      do {
        iVar33 = 0;
        if (iVar30 != iVar31) {
          iVar33 = iVar30 + 1;
        }
        uVar24 = local_98[iVar33];
        uVar23 = ((uVar24 >> 0x10) - uVar11) * iVar15 + ((uVar24 & 0xffff) - uVar5) * iVar6;
        if (0 < (int)uVar23) {
          lVar37 = (ulong)uVar23 * (long)-iVar15;
          lVar25 = (ulong)uVar23 * (long)iVar16;
          iVar30 = iVar14;
          if (-1 < lVar37) {
            iVar30 = iVar12;
          }
          lVar8 = -lVar37;
          if (-1 < lVar37) {
            lVar8 = lVar37;
          }
          lVar37 = -lVar25;
          if (-1 < lVar25) {
            lVar37 = lVar25;
          }
          iVar2 = 0;
          if ((long)iVar30 != 0) {
            iVar2 = (int)((lVar8 + (iVar30 >> 1 ^ iVar30 >> 0x1f)) / (long)iVar30);
          }
          iVar2 = (uVar24 >> 0x10) + iVar2;
          iVar30 = iVar14;
          if (-1 < lVar25) {
            iVar30 = iVar12;
          }
          iVar3 = 0;
          if ((long)iVar30 != 0) {
            iVar3 = (int)((lVar37 + (iVar30 >> 1 ^ iVar30 >> 0x1f)) / (long)iVar30);
          }
          uVar24 = (uVar24 & 0xffff) + iVar3;
          uVar24 = uVar24 | ((uVar22 & (int)((iVar2 - uVar10) * iVar27 + (uVar24 - uVar29) * iVar16)
                                       >> 0x1f) + iVar2) * 0x10000;
        }
        iVar30 = ((uVar24 - uVar32) * 2 & 0x10000) + (uVar24 - uVar32);
        if ((iVar30 >> 0x10) * iVar7 + (short)iVar30 * iVar17 < 1) {
          uVar32 = uVar24;
        }
        local_98[iVar33] = uVar32;
        iVar30 = iVar33;
      } while (iVar33 != iVar28);
    }
    else {
      do {
        iVar33 = 0;
        if (iVar30 != iVar31) {
          iVar33 = iVar30 + 1;
        }
        uVar22 = local_98[iVar33];
        uVar23 = ((uVar22 >> 0x10) - uVar11) * iVar15 + ((uVar22 & 0xffff) - uVar5) * iVar6;
        if (0 < (int)uVar23) {
          lVar37 = (ulong)uVar23 * (long)-iVar15;
          lVar25 = (ulong)uVar23 * (long)iVar16;
          iVar30 = iVar14;
          if (-1 < lVar37) {
            iVar30 = iVar12;
          }
          lVar8 = -lVar37;
          if (-1 < lVar37) {
            lVar8 = lVar37;
          }
          lVar37 = -lVar25;
          if (-1 < lVar25) {
            lVar37 = lVar25;
          }
          iVar2 = 0;
          if ((long)iVar30 != 0) {
            iVar2 = (int)((lVar8 + (iVar30 >> 1 ^ iVar30 >> 0x1f)) / (long)iVar30);
          }
          iVar2 = (uVar22 >> 0x10) + iVar2;
          iVar30 = iVar14;
          if (-1 < lVar25) {
            iVar30 = iVar12;
          }
          iVar3 = 0;
          if ((long)iVar30 != 0) {
            iVar3 = (int)((lVar37 + (iVar30 >> 1 ^ iVar30 >> 0x1f)) / (long)iVar30);
          }
          iVar3 = (uVar22 & 0xffff) + iVar3;
          uVar22 = (uVar24 & (int)((iVar2 - uVar10) * iVar27 + (iVar3 - uVar29) * iVar16) >> 0x1f) +
                   iVar3 | iVar2 * 0x10000;
        }
        iVar30 = ((uVar22 - uVar32) * 2 & 0x10000) + (uVar22 - uVar32);
        if ((iVar30 >> 0x10) * iVar7 + (short)iVar30 * iVar17 < 1) {
          uVar32 = uVar22;
        }
        local_98[iVar33] = uVar32;
        iVar30 = iVar33;
      } while (iVar33 != iVar28);
    }
  }
  local_c0 = (undefined2 *)0x0;
  local_b8 = 0x8000000000000000;
  lVar25 = *(long *)(lVar36 + 0x1000b8);
  if (lVar25 == 0) {
    lVar25 = FUN_00e5d3b4();
    *(long *)(lVar36 + 0x1000b8) = lVar25;
  }
  local_b0 = *(long *)(*(long *)(lVar25 + 0x3d0) + 0x10);
  if (*(long *)(local_b0 + 8) != 0) {
    local_b0 = 0;
  }
  lVar36 = (long)(int)uVar9 * 2;
  local_a0 = lVar36;
  local_70 = lVar36;
  if (local_b0 == 0) {
    local_a8 = (undefined2 *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
  }
  else {
    local_68 = lVar36 + 0x3fU & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(local_b0 + 0x28)) {
      local_a8 = *(undefined2 **)(local_b0 + 0x38);
      if (local_68 + (long)local_a8 <= *(ulong *)(local_b0 + 0x40)) {
        *(ulong *)(local_b0 + 0x38) = local_68 + (long)local_a8;
        goto LAB_03166f7c;
      }
    }
    local_a8 = (undefined2 *)FUN_031cf3b4(local_b0,&local_68);
  }
LAB_03166f7c:
  *local_a8 = 0;
  local_b8._0_4_ = 1;
  uVar29 = 1;
  if (1 < (int)(uint)local_90) {
    local_b8._0_4_ = 1;
    uVar26 = 1;
    iVar28 = *local_98;
    uVar29 = 1;
    do {
      iVar30 = local_98[uVar26];
      if (iVar30 != iVar28) {
        local_b8._0_4_ = (int)local_b8 + 1;
        local_98[(int)uVar29] = iVar30;
        uVar29 = uVar29 + 1;
        iVar28 = iVar30;
      }
      local_a8[(int)local_b8 + -1] = (short)uVar26;
      uVar26 = uVar26 + 1;
    } while ((local_90 & 0xffffffff) != uVar26);
    uVar24 = uVar29 - 1;
    if (uVar24 != 0 && 0 < (int)uVar29) {
      if (*local_98 == local_98[uVar24]) {
        uVar29 = uVar24;
        local_b8._0_4_ = (int)local_b8 + -1;
      }
    }
  }
  if ((uint)local_90 != uVar29) {
    local_90 = CONCAT44(local_90._4_4_,uVar29);
  }
  local_c0 = local_a8;
  local_b8._4_4_ = uVar9 | 0x80000000;
  FUN_03165e70(param_1,&local_98,0,&local_c0);
  if (local_a8 == local_c0) {
    local_b8._0_4_ = 0;
  }
  if (local_b0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_a8,lVar36);
    goto LAB_031670f8;
  }
  uVar26 = lVar36 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_b0 + 0x28) < uVar26) ||
     (*(long *)(local_b0 + 0x38) != uVar26 + (long)local_a8)) {
    if (local_a8 == (undefined2 *)0x0) goto LAB_031670f8;
    if (*(ulong *)(local_b0 + 0x28) < uVar26 + 0x40) {
      *(int *)(*(long *)(local_b0 + 0x30) + 0x20) = *(int *)(*(long *)(local_b0 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_b0 + 0x10) + 0x18))
                (*(long **)(local_b0 + 0x10),(long)local_a8 - (long)*(int *)(local_a8 + -2),
                 uVar26 + 0x44);
      goto LAB_031670f8;
    }
    if (*(long *)(local_b0 + 0x38) != uVar26 + (long)local_a8) {
      FUN_031cf778();
      goto LAB_031670f8;
    }
    *(undefined2 **)(local_b0 + 0x38) = local_a8;
  }
  else {
    *(undefined2 **)(local_b0 + 0x38) = local_a8;
    if (*(undefined2 **)(local_b0 + 0x48) != local_a8) goto LAB_031670f8;
  }
  FUN_031cf578();
LAB_031670f8:
  if (local_80 == local_98) {
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_88 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_80,uVar38);
    return 1;
  }
  uVar38 = uVar38 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(local_88 + 0x28) < uVar38) ||
     (*(long *)(local_88 + 0x38) != uVar38 + (long)local_80)) {
    if (local_80 == (int *)0x0) {
      return 1;
    }
    if (*(ulong *)(local_88 + 0x28) < uVar38 + 0x40) {
      *(int *)(*(long *)(local_88 + 0x30) + 0x20) = *(int *)(*(long *)(local_88 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_88 + 0x10) + 0x18))
                (*(long **)(local_88 + 0x10),(long)local_80 - (long)local_80[-1],uVar38 + 0x44);
      return 1;
    }
    if (*(long *)(local_88 + 0x38) != uVar38 + (long)local_80) {
      FUN_031cf778();
      return 1;
    }
    *(int **)(local_88 + 0x38) = local_80;
  }
  else {
    *(int **)(local_88 + 0x38) = local_80;
    if (*(int **)(local_88 + 0x48) != local_80) {
      return 1;
    }
  }
  FUN_031cf578();
  return 1;
}


