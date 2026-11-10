/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0316e990; name: FUN_0316e990
 */


undefined8 FUN_0316e990(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  int *piVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  int *piVar27;
  int iVar28;
  int *piVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int *local_a0;
  uint local_98;
  uint local_94;
  int *local_90;
  ulong local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  local_70 = 0;
  local_68 = 0x8000000000000000;
  local_80 = 0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0x80000000;
  uVar18 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar18) {
    FUN_0316f1d0(&local_70,(ulong)uVar18 << 1);
    uVar18 = *(uint *)(param_1 + 1);
    if (0 < (int)uVar18) {
      FUN_0316f2e4(&local_80,(ulong)uVar18 << 1);
      uVar18 = *(uint *)(param_1 + 1);
    }
  }
  puVar11 = PTR_PTR_047d1a50;
  local_90 = (int *)0x0;
  local_88 = 0x8000000000000000;
  iVar31 = 8;
  do {
    iVar23 = iVar31;
    iVar31 = iVar23 << 1;
  } while (iVar23 < (int)(uVar18 * 4));
  uVar18 = iVar23 * 8;
  if (iVar23 < 1) {
    local_88._0_4_ = 0;
  }
  else {
    FUN_00cb58c0(&local_90,PTR_PTR_047d1a50 + 0x20,uVar18);
  }
  uVar19 = (uint)local_88;
  if ((uint)local_88 != uVar18) {
    local_88 = CONCAT44(local_88._4_4_,uVar18);
    uVar19 = uVar18;
  }
  uVar19 = uVar19 >> 3;
  local_94 = uVar19 - 1;
  uVar32 = (ulong)local_94;
  local_98 = 0x80000000;
  local_a0 = local_90;
  if ((uVar19 != 0) && (*local_90 = -1, uVar19 != 1)) {
    uVar26 = (ulong)uVar19 - 1;
    uVar21 = uVar26 & 3;
    if ((ulong)uVar19 - 2 < 3) {
      lVar24 = 1;
    }
    else {
      uVar2 = 0;
      piVar29 = local_90;
      do {
        uVar25 = uVar2;
        uVar2 = uVar25 + 4;
        piVar29[2] = -1;
        piVar29[4] = -1;
        piVar29[6] = -1;
        piVar29[8] = -1;
        piVar29 = piVar29 + 8;
      } while ((uVar26 & 0xfffffffffffffffc) != uVar2);
      lVar24 = uVar25 + 5;
    }
    if (uVar21 != 0) {
      piVar29 = local_90 + lVar24 * 2;
      do {
        uVar21 = uVar21 - 1;
        *piVar29 = -1;
        piVar29 = piVar29 + 2;
      } while (uVar21 != 0);
    }
  }
  if (*(int *)(param_1 + 1) == 0) {
    uVar18 = 0x80000000;
  }
  else {
    piVar29 = (int *)*param_1;
    piVar22 = piVar29 + (long)*(int *)(param_1 + 1) * 0xc;
    uVar18 = (uint)local_68;
    do {
      uVar8 = local_98;
      piVar27 = local_a0;
      uVar30 = (uint)uVar32;
      uVar19 = uVar18 + 1;
      uVar20 = uVar18;
      if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)uVar18) {
        FUN_0316f3f8(&local_70,(long)(int)uVar19);
        uVar20 = (uint)local_68;
      }
      *(int **)(local_70 + (-(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar20 << 4)) =
           piVar29;
      if ((int)uVar30 < 1) {
LAB_0316eb98:
        iVar31 = -1;
      }
      else {
        iVar31 = *piVar29;
        uVar7 = (iVar31 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar31 * -0x61c8864f & 0xff00ffU) << 8;
        uVar32 = (ulong)((uVar7 >> 0x10 | uVar7 << 0x10) & uVar30);
        if (piVar27[uVar32 * 2] == -1) goto LAB_0316eb98;
        if (piVar27[uVar32 * 2] != iVar31) {
          do {
            uVar32 = (ulong)((int)uVar32 + 1U & uVar30);
            if (piVar27[uVar32 * 2] == -1) goto LAB_0316eb98;
          } while (piVar27[uVar32 * 2] != iVar31);
        }
        iVar31 = piVar27[uVar32 * 2 + 1];
      }
      *(int *)(local_70 + (long)(int)uVar20 * 0x10 + 8) = iVar31;
      local_68._0_4_ = uVar19;
      if ((int)uVar30 < (int)(uVar8 * 2)) {
        FUN_0316f50c(&local_a0,uVar30 * 2 + 2);
        piVar27 = local_a0;
        uVar30 = local_94;
      }
      iVar31 = *piVar29;
      uVar20 = (iVar31 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar31 * -0x61c8864f & 0xff00ffU) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      while( true ) {
        uVar20 = uVar20 & uVar30;
        if (piVar27[(ulong)uVar20 * 2] == -1) break;
        if (piVar27[(ulong)uVar20 * 2] == iVar31) {
          iVar23 = 0;
          goto LAB_0316ec00;
        }
        uVar20 = uVar20 + 1;
      }
      iVar23 = 1;
LAB_0316ec00:
      iVar23 = local_98 + iVar23;
      piVar27[(long)(int)uVar20 * 2] = iVar31;
      (piVar27 + (long)(int)uVar20 * 2)[1] = uVar18;
      uVar18 = uVar18 + 2;
      uVar20 = uVar19;
      local_98 = iVar23;
      if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)uVar19) {
        FUN_0316f3f8(&local_70,(long)(int)uVar18);
        uVar20 = (uint)local_68;
      }
      local_68 = CONCAT44(local_68._4_4_,uVar18);
      *(int **)(local_70 + (-(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar20 << 4)) =
           piVar29;
      if ((int)local_94 < 1) {
LAB_0316ecb4:
        iVar31 = -1;
      }
      else {
        iVar31 = piVar29[1];
        uVar8 = (iVar31 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar31 * -0x61c8864f & 0xff00ffU) << 8;
        uVar32 = (ulong)((uVar8 >> 0x10 | uVar8 << 0x10) & local_94);
        if (piVar27[uVar32 * 2] == -1) goto LAB_0316ecb4;
        if (piVar27[uVar32 * 2] != iVar31) {
          do {
            uVar32 = (ulong)((int)uVar32 + 1U & local_94);
            if (piVar27[uVar32 * 2] == -1) goto LAB_0316ecb4;
          } while (piVar27[uVar32 * 2] != iVar31);
        }
        iVar31 = piVar27[uVar32 * 2 + 1];
      }
      *(int *)(local_70 + (long)(int)uVar20 * 0x10 + 8) = iVar31;
      if ((int)local_94 < iVar23 * 2) {
        FUN_0316f50c(&local_a0,local_94 * 2 + 2);
      }
      uVar32 = (ulong)local_94;
      uVar20 = piVar29[1] * -0x61c8864f;
      uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      while( true ) {
        uVar20 = uVar20 & local_94;
        if (local_a0[(ulong)uVar20 * 2] == -1) break;
        if (local_a0[(ulong)uVar20 * 2] == piVar29[1]) {
          iVar31 = 0;
          goto LAB_0316ed20;
        }
        uVar20 = uVar20 + 1;
      }
      iVar31 = 1;
LAB_0316ed20:
      local_98 = local_98 + iVar31;
      piVar27 = piVar29 + 1;
      piVar29 = piVar29 + 0xc;
      local_a0[(long)(int)uVar20 * 2] = *piVar27;
      (local_a0 + (long)(int)uVar20 * 2)[1] = uVar19;
    } while (piVar29 != piVar22);
    uVar18 = local_98 & 0x80000000;
  }
  piVar29 = local_a0;
  iVar31 = (int)uVar32;
  if (-1 < iVar31) {
    uVar21 = 0xffffffffffffffff;
    piVar22 = local_a0;
    do {
      if (*piVar22 != -1) {
        iVar23 = (int)uVar21;
        break;
      }
      uVar21 = uVar21 + 1;
      piVar22 = piVar22 + 2;
      iVar23 = iVar31;
    } while (uVar32 != uVar21);
    iVar23 = iVar23 + 1;
joined_r0x0316ed8c:
    iVar28 = iVar23;
    if (iVar28 <= iVar31) {
      uVar19 = (uint)local_78 + 1;
      if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)(uint)local_78) {
        FUN_0316f6b4(&local_80,(long)(int)uVar19);
      }
      piVar22 = (int *)(local_80 + (long)(int)(uint)local_78 * 8);
      *piVar22 = piVar29[(long)iVar28 * 2];
      iVar3 = iVar31;
      if (iVar31 <= iVar28) {
        iVar3 = iVar28;
      }
      piVar22[1] = (piVar29 + (long)iVar28 * 2)[1];
      lVar24 = (long)iVar3 - (long)iVar28;
      piVar22 = piVar29 + (long)iVar28 * 2 + 2;
      do {
        iVar23 = iVar3 + 1;
        local_78._0_4_ = uVar19;
        if (lVar24 == 0) break;
        iVar6 = *piVar22;
        lVar24 = lVar24 + -1;
        iVar28 = iVar28 + 1;
        piVar22 = piVar22 + 2;
        iVar23 = iVar28;
      } while (iVar6 == -1);
      goto joined_r0x0316ed8c;
    }
  }
  uVar19 = (uint)local_78;
  uVar32 = (ulong)(uint)local_78;
  if (1 < (int)(uint)local_78) {
    FUN_0316f7d0(local_80,0,(uint)local_78 - 1);
  }
  if (0 < iVar31) {
    lVar24 = -((ulong)(iVar31 + 1U) & 0xfffffffe);
    piVar22 = piVar29;
    do {
      if (*piVar22 != -1) {
        *piVar22 = -1;
      }
      if (piVar22[2] != -1) {
        piVar22[2] = -1;
      }
      piVar22 = piVar22 + 4;
      lVar24 = lVar24 + 2;
    } while (lVar24 != 0);
    if (((iVar31 + 1U & 1) != 0) && (*piVar22 != -1)) {
      *piVar22 = -1;
    }
  }
  local_98 = uVar18;
  if ((uVar18 == 0) && (piVar29 != (int *)0x0)) {
    (**(code **)(*(long *)(puVar11 + 0x20) + 0x20))
              (puVar11 + 0x20,piVar29,
               -(ulong)(iVar31 + 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(iVar31 + 1U) << 3);
  }
  uVar21 = local_88;
  local_88 = local_88 & 0xffffffff00000000;
  if ((-1 < (long)uVar21) && (local_90 != (int *)0x0)) {
    (**(code **)(*(long *)(puVar11 + 0x20) + 0x20))();
  }
  lVar24 = local_70;
  uVar18 = local_78._4_4_;
  if (0 < (int)uVar19) {
    uVar21 = 0;
    do {
      piVar29 = (int *)(local_80 + uVar21 * 8);
      uVar19 = piVar29[1];
      if (uVar19 != 0xffffffff) {
        iVar31 = *piVar29;
        do {
          piVar29 = *(int **)(local_70 +
                             (-(ulong)(uVar19 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar19 << 4));
          if ((char)piVar29[7] != '\0') {
            lVar4 = 0x20;
            if (*piVar29 != iVar31) {
              lVar4 = 0x28;
            }
            iVar23 = *(int *)(local_70 + (long)(int)uVar19 * 0x10 + 8);
            lVar5 = 0x24;
            if (*piVar29 != iVar31) {
              lVar5 = 0x2c;
            }
            if (iVar23 != -1) {
              fVar33 = *(float *)((long)piVar29 + lVar4);
              fVar34 = *(float *)((long)piVar29 + lVar5);
              do {
                plVar1 = (long *)(local_70 + (long)iVar23 * 0x10);
                piVar29 = (int *)*plVar1;
                if ((char)piVar29[7] != '\0') {
                  lVar4 = 0x20;
                  if (*piVar29 != iVar31) {
                    lVar4 = 0x28;
                  }
                  fVar35 = *(float *)((long)piVar29 + lVar4);
                  lVar5 = 0x24;
                  if (*piVar29 != iVar31) {
                    lVar5 = 0x2c;
                  }
                  fVar36 = *(float *)((long)piVar29 + lVar5);
                  fVar37 = fVar33;
                  if (fVar33 <= fVar35) {
                    fVar37 = fVar35;
                  }
                  bVar9 = fVar33 <= fVar35;
                  bVar12 = fVar35 <= fVar34;
                  bVar10 = fVar33 <= fVar36;
                  bVar13 = fVar36 <= fVar34;
                  fVar38 = fVar34;
                  if (bVar13) {
                    fVar38 = fVar36;
                  }
                  if (fVar38 - fVar37 < 0.01) {
                    if (0.0 < fVar38 - fVar37 && ((!bVar9 || !bVar12) || (!bVar10 || !bVar13))) {
                      if ((!bVar10 || !bVar13) && (fVar33 <= fVar35 && fVar35 <= fVar34)) {
                        *(float *)((long)piVar29 + lVar4) = fVar34;
                        fVar35 = fVar34;
                      }
                      else if ((!bVar9 || !bVar12) && (fVar33 <= fVar36 && fVar36 <= fVar34)) {
                        *(float *)((long)piVar29 + lVar5) = fVar33;
                        fVar36 = fVar33;
                      }
                    }
                  }
                  bVar14 = true;
                  bVar16 = false;
                  if (fVar35 <= fVar34) {
                    bVar14 = false;
                    bVar16 = true;
                    if (!NAN(fVar36) && !NAN(fVar34)) {
                      bVar14 = fVar36 < fVar34;
                      bVar16 = false;
                    }
                  }
                  bVar15 = true;
                  bVar17 = false;
                  if (bVar14 == bVar16) {
                    bVar15 = false;
                    bVar17 = true;
                    if (!NAN(fVar36) && !NAN(fVar33)) {
                      bVar15 = fVar36 < fVar33;
                      bVar17 = false;
                    }
                  }
                  bVar14 = false;
                  bVar16 = true;
                  if (bVar15 == bVar17) {
                    bVar14 = false;
                    bVar16 = true;
                    if (!NAN(fVar35) && !NAN(fVar33)) {
                      bVar14 = fVar35 == fVar33;
                      bVar16 = fVar33 <= fVar35;
                    }
                  }
                  if (!bVar16 || bVar14) {
                    *(undefined1 *)(*plVar1 + 0x1c) = 0;
                  }
                  if ((bVar9 && bVar12) && (bVar10 && bVar13)) {
                    *(undefined1 *)(*plVar1 + 0x1c) = 0;
                  }
                }
                iVar23 = *(int *)(local_70 + (long)iVar23 * 0x10 + 8);
              } while (iVar23 != -1);
            }
          }
          uVar19 = *(uint *)(local_70 + (long)(int)uVar19 * 0x10 + 8);
        } while (uVar19 != 0xffffffff);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar32);
    uVar21 = 0;
    do {
      piVar29 = (int *)(local_80 + uVar21 * 8);
      uVar19 = piVar29[1];
      if (uVar19 != 0xffffffff) {
        iVar31 = *piVar29;
        do {
          piVar29 = *(int **)(local_70 +
                             (-(ulong)(uVar19 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar19 << 4));
          if ((char)piVar29[7] != '\0') {
            lVar4 = 0x20;
            if (*piVar29 != iVar31) {
              lVar4 = 0x28;
            }
            uVar20 = *(uint *)(local_70 + (long)(int)uVar19 * 0x10 + 8);
            lVar5 = 0x24;
            if (*piVar29 != iVar31) {
              lVar5 = 0x2c;
            }
            if (uVar20 != 0xffffffff) {
              fVar33 = *(float *)((long)piVar29 + lVar4);
              fVar34 = *(float *)((long)piVar29 + lVar5);
              do {
                piVar29 = *(int **)(local_70 +
                                   (-(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 |
                                   (ulong)uVar20 << 4));
                if ((char)piVar29[7] != '\0') {
                  lVar4 = 0x20;
                  if (*piVar29 != iVar31) {
                    lVar4 = 0x28;
                  }
                  lVar5 = 0x24;
                  if (*piVar29 != iVar31) {
                    lVar5 = 0x2c;
                  }
                  fVar35 = fVar33;
                  if (fVar33 <= *(float *)((long)piVar29 + lVar4)) {
                    fVar35 = *(float *)((long)piVar29 + lVar4);
                  }
                  fVar37 = fVar34;
                  if (*(float *)((long)piVar29 + lVar5) <= fVar34) {
                    fVar37 = *(float *)((long)piVar29 + lVar5);
                  }
                  if (0.0 < fVar37 - fVar35) {
                    *(undefined1 *)(piVar29 + 7) = 0;
                  }
                }
                uVar20 = *(uint *)(local_70 + (long)(int)uVar20 * 0x10 + 8);
              } while (uVar20 != 0xffffffff);
            }
          }
          uVar19 = *(uint *)(local_70 + (long)(int)uVar19 * 0x10 + 8);
        } while (uVar19 != 0xffffffff);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar32);
  }
  uVar32 = (ulong)local_78._4_4_;
  local_78 = uVar32 << 0x20;
  if ((local_80 != 0) && (-1 < (int)uVar18)) {
    (**(code **)(*(long *)(puVar11 + 0x20) + 0x20))(puVar11 + 0x20,local_80,uVar32 << 3);
  }
  uVar21 = local_68;
  uVar32 = local_68 >> 0x20;
  local_68 = uVar32 << 0x20;
  if ((lVar24 != 0) && (-1 < (long)uVar21)) {
    (**(code **)(*(long *)(puVar11 + 0x20) + 0x20))(puVar11 + 0x20,lVar24,uVar32 << 4);
  }
  return 0;
}


