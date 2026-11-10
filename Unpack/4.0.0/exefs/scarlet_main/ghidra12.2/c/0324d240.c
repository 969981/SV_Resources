/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324d240; name: FUN_0324d240
 */


void FUN_0324d240(undefined4 **param_1,undefined4 **param_2,undefined4 **param_3,
                 undefined4 **param_4)

{
  bool bVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  uint *puVar5;
  undefined4 **ppuVar6;
  undefined4 **ppuVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  undefined4 *puVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  int iVar36;
  long local_290;
  undefined8 local_288;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 *local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  
  bVar14 = param_3 != param_1;
  local_78 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x8000000000000000;
  local_88 = (undefined4 *)0x0;
  local_80 = (undefined4 *)0x8000000000000000;
  bVar15 = param_3 != param_2;
  bVar16 = param_4 != param_1;
  bVar17 = param_4 != param_2;
  ppuVar2 = &local_78;
  if (bVar14 && bVar15) {
    ppuVar2 = param_3;
  }
  *(undefined4 *)(ppuVar2 + 1) = 0;
  ppuVar7 = (undefined4 **)&local_70;
  if (bVar14 && bVar15) {
    ppuVar7 = param_3 + 1;
  }
  ppuVar3 = &local_88;
  if (bVar16 && bVar17) {
    ppuVar3 = param_4;
  }
  *(undefined4 *)(ppuVar3 + 1) = 0;
  iVar24 = *(int *)(param_1 + 1);
  lVar35 = (long)iVar24;
  ppuVar4 = (undefined4 **)&local_80;
  if (bVar16 && bVar17) {
    ppuVar4 = param_4 + 1;
  }
  if (iVar24 < *(int *)(param_2 + 1)) {
    if (ppuVar3 != param_1) {
      *(undefined4 *)(ppuVar3 + 1) = 0;
      iVar24 = *(int *)(param_1 + 1);
      puVar30 = *param_1;
      uVar19 = 0;
      if (bVar16 && bVar17) {
        uVar19 = *(uint *)((long)param_4 + 0xc) & 0x7fffffff;
      }
      if ((int)uVar19 < iVar24) {
        ppuVar7 = &local_88;
        if (bVar16 && bVar17) {
          ppuVar7 = param_4;
        }
        FUN_02eb1f88(ppuVar7,PTR_PTR_047d1a50,(long)iVar24);
      }
      if (iVar24 != 0) {
        ppuVar7 = &local_88;
        if (bVar16 && bVar17) {
          ppuVar7 = param_4;
        }
        puVar22 = *ppuVar7;
        uVar27 = (long)iVar24 * 4 - 4;
        uVar19 = ((uint)(uVar27 >> 2) & 0x3fffffff) + 1;
        if ((uVar19 & 3) == 0) {
          puVar26 = puVar30;
        }
        else {
          lVar35 = -((ulong)uVar19 & 3);
          puVar23 = puVar22;
          puVar25 = puVar30;
          do {
            puVar26 = puVar25 + 1;
            bVar14 = lVar35 != -1;
            lVar35 = lVar35 + 1;
            puVar22 = puVar23 + 1;
            *puVar23 = *puVar25;
            puVar23 = puVar22;
            puVar25 = puVar26;
          } while (bVar14);
        }
        if (0xb < uVar27) {
          do {
            *puVar22 = *puVar26;
            puVar22[1] = puVar26[1];
            puVar22[2] = puVar26[2];
            puVar23 = puVar26 + 3;
            puVar26 = puVar26 + 4;
            puVar22[3] = *puVar23;
            puVar22 = puVar22 + 4;
          } while (puVar26 != puVar30 + iVar24);
        }
      }
      *(int *)ppuVar4 = iVar24;
    }
  }
  else if (*(int *)(param_2 + 1) == 0) {
    local_c0 = 1;
    local_b8 = 0;
    local_b0 = &local_290;
    local_d0 = PTR_DAT_047e34b8 + 0x10;
    local_c8 = 0xffffffff;
    local_98 = 0;
    local_a8 = 0;
    local_a0 = 0x1bf;
    memset(&local_290,0,0x1c0);
    FUN_0322bd4c(&local_d0,"Division by zero",0x10);
    iVar24 = FUN_03226f50(0x21b66586,&local_290,
                          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Math/ExtendedMath/hkMpMath.cpp"
                          ,0x105);
    if (iVar24 != 0) {
      CallSupervisor(0x26);
    }
  }
  else {
    if (ppuVar3 == param_1) {
      iVar36 = 0;
      uVar19 = 0;
    }
    else {
      *(undefined4 *)(ppuVar3 + 1) = 0;
      iVar36 = *(int *)(param_1 + 1);
      puVar30 = *param_1;
      uVar19 = 0;
      if (bVar16 && bVar17) {
        uVar19 = *(uint *)((long)param_4 + 0xc) & 0x7fffffff;
      }
      if ((int)uVar19 < iVar36) {
        ppuVar6 = &local_88;
        if (bVar16 && bVar17) {
          ppuVar6 = param_4;
        }
        FUN_02eb1f88(ppuVar6,PTR_PTR_047d1a50,(long)iVar36);
      }
      if (iVar36 != 0) {
        ppuVar6 = &local_88;
        if (bVar16 && bVar17) {
          ppuVar6 = param_4;
        }
        puVar22 = *ppuVar6;
        uVar27 = (long)iVar36 * 4 - 4;
        uVar19 = ((uint)(uVar27 >> 2) & 0x3fffffff) + 1;
        if ((uVar19 & 3) == 0) {
          puVar26 = puVar30;
        }
        else {
          lVar29 = -((ulong)uVar19 & 3);
          puVar23 = puVar22;
          puVar25 = puVar30;
          do {
            puVar26 = puVar25 + 1;
            bVar12 = lVar29 != -1;
            lVar29 = lVar29 + 1;
            puVar22 = puVar23 + 1;
            *puVar23 = *puVar25;
            puVar23 = puVar22;
            puVar25 = puVar26;
          } while (bVar12);
        }
        if (0xb < uVar27) {
          do {
            *puVar22 = *puVar26;
            puVar22[1] = puVar26[1];
            puVar22[2] = puVar26[2];
            puVar23 = puVar26 + 3;
            puVar26 = puVar26 + 4;
            puVar22[3] = *puVar23;
            puVar22 = puVar22 + 4;
          } while (puVar26 != puVar30 + iVar36);
        }
      }
      *(int *)ppuVar4 = iVar36;
      uVar19 = local_80._4_4_;
    }
    if (bVar16 && bVar17) {
      uVar19 = *(uint *)((long)param_4 + 0xc);
    }
    iVar21 = iVar36 + 1;
    iVar20 = iVar36;
    if ((int)(uVar19 & 0x7fffffff) <= iVar36) {
      ppuVar6 = &local_88;
      if (bVar16 && bVar17) {
        ppuVar6 = param_4;
      }
      FUN_02ed686c(ppuVar6,PTR_PTR_047d1a50,(long)iVar21);
      iVar20 = *(int *)(ppuVar3 + 1);
    }
    ppuVar6 = &local_88;
    if (bVar16 && bVar17) {
      ppuVar6 = param_4;
    }
    (*ppuVar6)[iVar20] = 0;
    *(int *)(ppuVar3 + 1) = iVar21;
    local_290 = 0;
    local_288 = -0x8000000000000000;
    if (iVar36 < 0) {
      local_288._0_4_ = 0;
    }
    else {
      FUN_02eb1f88(&local_290,PTR_PTR_047d1a50,iVar21);
    }
    uVar19 = iVar36 - (int)local_288;
    if (iVar36 < (int)local_288) {
      if (iVar21 < (int)local_288) {
        local_288 = CONCAT44(local_288._4_4_,iVar21);
      }
    }
    else {
      lVar29 = (long)(int)local_288;
      local_288 = CONCAT44(local_288._4_4_,iVar21);
      memset((void *)(local_290 + lVar29 * 4),0,(ulong)uVar19 * 4 + 4);
    }
    puVar5 = (uint *)((long)&local_70 + 4);
    if (bVar14 && bVar15) {
      puVar5 = (uint *)((long)param_3 + 0xc);
    }
    lVar29 = (lVar35 - *(int *)(param_2 + 1)) + 1;
    iVar36 = (int)(lVar35 - *(int *)(param_2 + 1));
    if ((int)(*puVar5 & 0x7fffffff) <= iVar36) {
      ppuVar6 = &local_78;
      if (bVar14 && bVar15) {
        ppuVar6 = param_3;
      }
      FUN_02eb1f88(ppuVar6,PTR_PTR_047d1a50,lVar29);
    }
    lVar11 = local_288;
    iVar21 = *(int *)ppuVar7;
    iVar20 = (int)lVar29;
    if ((iVar21 <= iVar36) || (iVar20 < iVar21)) {
      *(int *)ppuVar7 = iVar20;
      iVar21 = iVar20;
    }
    if (0 < iVar21) {
      lVar29 = 0;
      if (bVar14 && bVar15) {
        do {
          (*param_3)[lVar29] = 0;
          uVar27 = (ulong)*(int *)(ppuVar2 + 1);
          lVar29 = lVar29 + 1;
        } while (lVar29 < (long)uVar27);
      }
      else {
        do {
          local_78[lVar29] = 0;
          uVar27 = (ulong)*(int *)ppuVar7;
          lVar29 = lVar29 + 1;
        } while (lVar29 < (long)uVar27);
      }
      iVar21 = (int)uVar27;
      if (0 < iVar21) {
        ppuVar6 = &local_78;
        if (bVar14 && bVar15) {
          ppuVar6 = param_3;
        }
        lVar29 = (uVar27 & 0xffffffff) << 2;
        uVar27 = uVar27 & 0xffffffff;
        do {
          uVar28 = uVar27 - 1;
          (*ppuVar6)[uVar28] = 0;
          uVar19 = 0x1f;
          do {
            uVar8 = *(uint *)(param_2 + 1);
            uVar33 = (ulong)uVar8;
            iVar36 = (int)uVar28;
            if ((int)uVar8 < 0) {
LAB_0324da84:
              (*ppuVar6)[uVar28] = (*ppuVar6)[uVar28] | 1 << (ulong)(uVar19 & 0x1f);
              if ((long)uVar27 <= (long)iVar36) {
                lVar31 = (long)(iVar36 + -1);
                if (bVar16 && bVar17) {
                  do {
                    (*param_4)[lVar31] = *(undefined4 *)(local_290 + lVar31 * 4);
                    bVar12 = (long)uVar27 <= lVar31;
                    lVar31 = lVar31 + -1;
                  } while (bVar12);
                }
                else {
                  do {
                    local_88[lVar31] = *(undefined4 *)(local_290 + lVar31 * 4);
                    bVar12 = (long)uVar27 <= lVar31;
                    lVar31 = lVar31 + -1;
                  } while (bVar12);
                }
              }
            }
            else if (uVar19 == 0) {
              uVar18 = 0;
              bVar12 = false;
              if (bVar16 && bVar17) {
                do {
                  uVar8 = *(uint *)((long)*param_4 + uVar18 * 4 + lVar29 + -4);
                  if (uVar18 == (uVar33 & 0xffffffff)) {
                    uVar32 = 0;
                  }
                  else {
                    uVar32 = (*param_2)[uVar18];
                  }
                  uVar9 = (uVar8 - uVar32) - 1;
                  bVar13 = uVar8 <= uVar9;
                  if (!bVar12) {
                    bVar13 = uVar8 < uVar32;
                  }
                  if (!bVar12) {
                    uVar9 = uVar8 - uVar32;
                  }
                  *(uint *)(local_290 + lVar29 + uVar18 * 4 + -4) = uVar9;
                  uVar33 = (ulong)*(int *)(param_2 + 1);
                  uVar34 = uVar18 + 1;
                  bVar1 = (long)uVar18 < (long)uVar33;
                  uVar18 = uVar34;
                  bVar12 = bVar13;
                } while (bVar1);
              }
              else {
                do {
                  uVar8 = *(uint *)((long)local_88 + uVar18 * 4 + lVar29 + -4);
                  if (uVar18 == (uVar33 & 0xffffffff)) {
                    uVar32 = 0;
                  }
                  else {
                    uVar32 = (*param_2)[uVar18];
                  }
                  uVar9 = (uVar8 - uVar32) - 1;
                  bVar13 = uVar8 <= uVar9;
                  if (!bVar12) {
                    bVar13 = uVar8 < uVar32;
                  }
                  if (!bVar12) {
                    uVar9 = uVar8 - uVar32;
                  }
                  *(uint *)(local_290 + lVar29 + uVar18 * 4 + -4) = uVar9;
                  uVar33 = (ulong)*(int *)(param_2 + 1);
                  uVar34 = uVar18 + 1;
                  bVar1 = (long)uVar18 < (long)uVar33;
                  uVar18 = uVar34;
                  bVar12 = bVar13;
                } while (bVar1);
              }
              uVar33 = (uVar27 + uVar34) - 1;
              if (bVar13) goto LAB_0324da1c;
LAB_0324da80:
              iVar36 = (int)uVar33;
              if (!bVar13) goto LAB_0324da84;
            }
            else {
              if (bVar16 && bVar17) {
                uVar32 = 0;
                if (uVar8 != 0) {
                  uVar32 = **param_2 << (ulong)(uVar19 & 0x1f);
                }
                bVar13 = (uint)(*param_4)[uVar28] < uVar32;
                *(uint *)(local_290 + uVar28 * 4) = (*param_4)[uVar28] - uVar32;
                uVar18 = (ulong)*(uint *)(param_2 + 1);
                if ((int)*(uint *)(param_2 + 1) < 1) goto LAB_0324da14;
                uVar34 = 0;
                do {
                  uVar8 = *(uint *)((long)*param_4 + uVar34 * 4 + lVar29);
                  uVar33 = uVar34 + 1;
                  if (uVar33 == (uVar18 & 0xffffffff)) {
                    uVar32 = 0;
                  }
                  else {
                    uVar32 = (*param_2)[uVar34 + 1] << (ulong)(uVar19 & 0x1f);
                  }
                  uVar32 = uVar32 | (uint)(*param_2)[uVar34] >> (ulong)(0x20 - uVar19 & 0x1f);
                  uVar10 = uVar8 - uVar32;
                  uVar9 = uVar10 - 1;
                  bVar12 = !bVar13;
                  bVar13 = uVar8 <= uVar9;
                  if (bVar12) {
                    uVar9 = uVar10;
                    bVar13 = uVar8 < uVar32;
                  }
                  *(uint *)(local_290 + lVar29 + uVar34 * 4) = uVar9;
                  uVar18 = (ulong)*(int *)(param_2 + 1);
                  uVar34 = uVar33;
                } while ((long)uVar33 < (long)uVar18);
              }
              else {
                uVar32 = 0;
                if (uVar8 != 0) {
                  uVar32 = **param_2 << (ulong)(uVar19 & 0x1f);
                }
                bVar13 = (uint)local_88[uVar28] < uVar32;
                *(uint *)(local_290 + uVar28 * 4) = local_88[uVar28] - uVar32;
                uVar18 = (ulong)*(uint *)(param_2 + 1);
                if ((int)*(uint *)(param_2 + 1) < 1) {
LAB_0324da14:
                  uVar33 = uVar27;
                  if (bVar13) goto LAB_0324da1c;
                  goto LAB_0324da80;
                }
                uVar34 = 0;
                do {
                  uVar8 = *(uint *)((long)local_88 + uVar34 * 4 + lVar29);
                  uVar33 = uVar34 + 1;
                  if (uVar33 == (uVar18 & 0xffffffff)) {
                    uVar32 = 0;
                  }
                  else {
                    uVar32 = (*param_2)[uVar34 + 1] << (ulong)(uVar19 & 0x1f);
                  }
                  uVar32 = uVar32 | (uint)(*param_2)[uVar34] >> (ulong)(0x20 - uVar19 & 0x1f);
                  uVar10 = uVar8 - uVar32;
                  uVar9 = uVar10 - 1;
                  bVar12 = !bVar13;
                  bVar13 = uVar8 <= uVar9;
                  if (bVar12) {
                    uVar9 = uVar10;
                    bVar13 = uVar8 < uVar32;
                  }
                  *(uint *)(local_290 + lVar29 + uVar34 * 4) = uVar9;
                  uVar18 = (ulong)*(int *)(param_2 + 1);
                  uVar34 = uVar33;
                } while ((long)uVar33 < (long)uVar18);
              }
              uVar33 = uVar27 + uVar33;
              if (!bVar13) goto LAB_0324da80;
LAB_0324da1c:
              if (iVar24 <= (int)uVar33) goto LAB_0324da80;
              lVar31 = (long)(int)uVar33;
              if (bVar16 && bVar17) {
                do {
                  iVar21 = (*param_4)[lVar31];
                  *(int *)(local_290 + lVar31 * 4) = iVar21 + -1;
                  lVar31 = lVar31 + 1;
                  if (lVar35 <= lVar31) break;
                } while (iVar21 == 0);
              }
              else {
                do {
                  iVar21 = local_88[lVar31];
                  *(int *)(local_290 + lVar31 * 4) = iVar21 + -1;
                  lVar31 = lVar31 + 1;
                  if (lVar35 <= lVar31) break;
                } while (iVar21 == 0);
              }
              iVar36 = (int)lVar31;
              if (iVar21 != 0) goto LAB_0324da84;
            }
            bVar12 = uVar19 != 0;
            uVar19 = uVar19 - 1;
          } while (bVar12);
          lVar29 = lVar29 + -4;
          bVar12 = 1 < (long)uVar27;
          uVar27 = uVar28;
        } while (bVar12);
        iVar21 = *(int *)ppuVar7;
      }
    }
    if (iVar21 != 0) {
      ppuVar6 = &local_78;
      if (bVar14 && bVar15) {
        ppuVar6 = param_3;
      }
      puVar30 = *ppuVar6;
      lVar35 = (long)iVar21;
      do {
        iVar21 = iVar21 + -1;
        if (puVar30[lVar35 + -1] != 0) break;
        lVar35 = lVar35 + -1;
        *(int *)ppuVar7 = iVar21;
      } while (lVar35 != 0);
    }
    iVar24 = *(int *)ppuVar4;
    lVar35 = (long)iVar24;
    if (iVar24 != 0) {
      ppuVar7 = &local_88;
      if (bVar16 && bVar17) {
        ppuVar7 = param_4;
      }
      puVar30 = *ppuVar7;
      do {
        iVar24 = iVar24 + -1;
        if (puVar30[lVar35 + -1] != 0) break;
        lVar35 = lVar35 + -1;
        *(int *)ppuVar4 = iVar24;
      } while (lVar35 != 0);
    }
    uVar27 = (ulong)local_288._4_4_;
    local_288 = (ulong)local_288._4_4_ << 0x20;
    if ((-1 < lVar11) && (local_290 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_290,uVar27 << 2);
    }
  }
  puVar30 = local_78;
  if ((ppuVar2 != param_3) && (param_3 == param_1 || param_3 == param_2)) {
    *(undefined4 *)(param_3 + 1) = 0;
    iVar24 = (int)local_70;
    lVar35 = (long)(int)local_70;
    if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < (int)local_70) {
      FUN_02eb1f88(param_3,PTR_PTR_047d1a50,lVar35);
    }
    if (iVar24 != 0) {
      puVar22 = *param_3;
      uVar27 = lVar35 * 4 - 4;
      uVar19 = ((uint)(uVar27 >> 2) & 0x3fffffff) + 1;
      if ((uVar19 & 3) == 0) {
        puVar26 = puVar30;
      }
      else {
        lVar35 = -((ulong)uVar19 & 3);
        puVar23 = puVar22;
        puVar25 = puVar30;
        do {
          puVar26 = puVar25 + 1;
          bVar14 = lVar35 != -1;
          lVar35 = lVar35 + 1;
          puVar22 = puVar23 + 1;
          *puVar23 = *puVar25;
          puVar23 = puVar22;
          puVar25 = puVar26;
        } while (bVar14);
      }
      if (0xb < uVar27) {
        do {
          *puVar22 = *puVar26;
          puVar22[1] = puVar26[1];
          puVar22[2] = puVar26[2];
          puVar23 = puVar26 + 3;
          puVar26 = puVar26 + 4;
          puVar22[3] = *puVar23;
          puVar22 = puVar22 + 4;
        } while (puVar26 != puVar30 + iVar24);
      }
    }
    *(int *)(param_3 + 1) = iVar24;
  }
  puVar30 = local_88;
  if ((ppuVar3 != param_4) && (param_4 == param_1 || param_4 == param_2)) {
    *(undefined4 *)(param_4 + 1) = 0;
    iVar24 = (int)local_80;
    lVar35 = (long)(int)local_80;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < (int)local_80) {
      FUN_02eb1f88(param_4,PTR_PTR_047d1a50,lVar35);
    }
    if (iVar24 != 0) {
      puVar22 = *param_4;
      uVar27 = lVar35 * 4 - 4;
      uVar19 = ((uint)(uVar27 >> 2) & 0x3fffffff) + 1;
      if ((uVar19 & 3) == 0) {
        puVar26 = puVar30;
      }
      else {
        lVar35 = -((ulong)uVar19 & 3);
        puVar23 = puVar22;
        puVar25 = puVar30;
        do {
          puVar26 = puVar25 + 1;
          bVar14 = lVar35 != -1;
          lVar35 = lVar35 + 1;
          puVar22 = puVar23 + 1;
          *puVar23 = *puVar25;
          puVar23 = puVar22;
          puVar25 = puVar26;
        } while (bVar14);
      }
      if (0xb < uVar27) {
        do {
          *puVar22 = *puVar26;
          puVar22[1] = puVar26[1];
          puVar22[2] = puVar26[2];
          puVar23 = puVar26 + 3;
          puVar26 = puVar26 + 4;
          puVar22[3] = *puVar23;
          puVar22 = puVar22 + 4;
        } while (puVar26 != puVar30 + iVar24);
      }
    }
    *(int *)(param_4 + 1) = iVar24;
  }
  puVar30 = local_80;
  uVar27 = (ulong)local_80._4_4_;
  local_80 = (undefined4 *)((ulong)local_80._4_4_ << 0x20);
  if ((-1 < (long)puVar30) && (local_88 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar27 << 2);
  }
  puVar30 = local_70;
  uVar27 = (ulong)local_70._4_4_;
  local_70 = (undefined4 *)((ulong)local_70._4_4_ << 0x20);
  if ((-1 < (long)puVar30) && (local_78 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar27 << 2);
  }
  return;
}


