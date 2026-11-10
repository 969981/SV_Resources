/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001007a0; name: FUN_001007a0
 */


undefined4 * FUN_001007a0(ulong *param_1,undefined8 *param_2,uint param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong *puVar6;
  bool bVar7;
  int iVar8;
  code *pcVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  ulong *puVar22;
  int *piVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 *puVar27;
  undefined4 *__dest;
  undefined4 *puVar28;
  uint uVar29;
  float fVar30;
  long local_b38;
  undefined1 auStack_b30 [264];
  undefined1 auStack_a28 [576];
  ulong local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  uint local_7c0;
  undefined4 local_7bc;
  uint local_7b8 [32];
  uint local_738;
  uint local_734;
  undefined4 local_730;
  int local_724;
  uint local_720;
  uint local_718;
  uint local_714;
  undefined4 local_710;
  uint local_700;
  undefined8 local_698;
  undefined1 auStack_670 [8];
  ulong local_668;
  long local_658;
  undefined4 local_620;
  undefined1 auStack_5c8 [72];
  undefined1 auStack_580 [16];
  undefined1 auStack_570 [24];
  undefined1 auStack_558 [48];
  code *local_528 [5];
  code *local_500;
  undefined1 *local_4c0;
  undefined1 *local_4b0;
  undefined1 *local_4a8;
  int local_460;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  uint local_118;
  int local_110;
  undefined4 local_cc;
  int local_c8;
  uint local_c4;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [8];
  int local_70;
  
  local_7bc = 0;
  FUN_0010ca90();
  FUN_00120280(auStack_a28,0x20);
  if ((param_3 >> 0xe & 1) == 0) {
    uVar29 = 1;
    puVar28 = &local_7bc;
  }
  else {
    uVar29 = *(uint *)((long)param_2 + 0x1c);
    puVar28 = (undefined4 *)param_2[4];
  }
  memset(&local_738,0,0x6d0);
  local_cc = FUN_0011f640();
  DAT_047ec100 = '\0';
  if ((param_3 >> 0x1a & 1) == 0) {
    pcVar9 = (code *)PTR_LAB_047cb818;
    if (((param_3 >> 0x19 & 1) != 0) && ((code *)param_2[5] != (code *)0x0)) {
      pcVar9 = (code *)param_2[5];
    }
    memset(local_528,0,400);
    local_4c0 = &LAB_00102ed0;
    local_4b0 = &LAB_00102ee0;
    local_4a8 = &LAB_00102ef0;
    FUN_001003e0();
    if ((param_3 >> 5 & 1) != 0) {
      local_698 = *param_2;
    }
    if (DAT_047ec2a0 != 0) {
      FUN_001209d0(&DAT_047ec3a8);
    }
    iVar11 = (*pcVar9)(local_528,param_1,param_3);
    if (DAT_047ec2a0 != 0) {
      FUN_00120750(&DAT_047ec3a8);
    }
    if (iVar11 == 0) {
      if (DAT_047ec100 != '\0') {
        return (undefined4 *)0x0;
      }
      DAT_047ec100 = 0x45;
      lVar14 = 1;
      do {
        (&DAT_047ec100)[lVar14] = "Error opening file."[lVar14];
        lVar14 = lVar14 + 1;
      } while ((int)lVar14 != 0x14);
      return (undefined4 *)0x0;
    }
    (*local_528[0])(local_528,0,&local_7e8,0x2c);
  }
  else {
    local_7e8 = *param_1;
    local_7e0 = param_1[1];
    local_7d8 = param_1[2];
    local_7d0 = param_1[3];
    local_7c8 = param_1[4];
    local_7c0 = (uint)param_1[5];
  }
  if ((int)(uint)local_7d0 < 0) {
    local_7d0._4_4_ = (int)(local_7d0 >> 0x20);
    local_7d0 = CONCAT44(local_7d0._4_4_,(uint)local_7d0 + 0x7f000000);
  }
  iVar11 = FUN_0010c880(local_7e8 & 0xffffffff);
  if ((iVar11 == 0) || (local_460 != 0)) {
    DAT_047ec100 = 0x4e;
    lVar14 = 0;
    do {
      lVar20 = lVar14 + 1;
      (&DAT_047ec101)[lVar14] = "Not a Bink file."[lVar14 + 1];
      lVar14 = lVar20;
    } while ((int)lVar20 != 0x10);
    goto joined_r0x00100974;
  }
  local_7c0 = local_7c0 & 0xbfffffff;
  if ((uint)local_7e0 == 0) {
    DAT_047ec100 = 0x54;
    lVar14 = 1;
    do {
      (&DAT_047ec100)[lVar14] = "The file doesn\'t contain any compressed frames yet."[lVar14];
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 != 0x34);
    goto joined_r0x00100974;
  }
  uVar24 = local_7d8._4_4_;
  if ((long)local_7d8 < 0) {
    uVar24 = -local_7d8._4_4_;
    local_7d8 = CONCAT44(uVar24,(uint)local_7d8);
  }
  if ((((0x100 < local_7c0) || ((uint)local_7d8 < (uint)local_7e0)) || (1000000 < (uint)local_7d8))
     || (((((uint)local_7d0 | uVar24) >> 0xf != 0 || (local_7d0._4_4_ == 0)) ||
         ((uint)local_7c8 == 0)))) {
    DAT_047ec100 = 0x54;
    lVar14 = 1;
    do {
      (&DAT_047ec100)[lVar14] = "The file has a corrupt header."[lVar14];
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 != 0x1f);
    goto joined_r0x00100974;
  }
  if ((param_3 & 0x100) != 0) {
    param_3 = param_3 & 0xfffffeff | 0x400;
  }
  local_620 = (undefined4)local_7e8;
  local_714 = local_7c8._4_4_;
  uVar4 = param_3 & 0xffefffff;
  if ((local_7c8 & 0x10000000000000) != 0) {
    uVar4 = param_3;
  }
  local_718 = local_7c8._4_4_ & 0x60013 | uVar4 & 0xfffffffb;
  if ((local_7c8 & 0x400000000) != 0) {
    local_718 = local_7c8._4_4_ & 0x60013 | uVar4 | 4;
  }
  local_734 = (uint)local_7d0;
  local_738 = uVar24;
  iVar11 = FUN_0010c790();
  if ((iVar11 != 0) || (iVar11 = FUN_0010c720(local_7e8 & 0xffffffff), iVar11 != 0)) {
    uVar24 = local_7c8._4_4_ >> 0x16 & 0x3fc;
    local_70 = uVar24 + 4;
    if (((byte)local_718 >> 2 & 1) == 0) {
      if ((local_7c8._4_4_ >> 0x10 & 1) != 0) {
        local_70 = uVar24 + 0x1c;
      }
    }
    else {
      local_70 = uVar24 + 0x10;
    }
  }
  iVar11 = FUN_0010c760(local_7e8 & 0xffffffff);
  if (iVar11 != 0) {
    local_718 = local_718 | 0x8000;
  }
  local_110 = (uint)local_7d8;
  local_730 = (uint)local_7e0;
  if (((param_3 >> 0xc & 1) == 0) || (local_724 = *(int *)(param_2 + 2), local_724 == -1)) {
    local_720 = (uint)local_7c8;
    local_724 = local_7d0._4_4_;
  }
  else {
    local_720 = *(uint *)((long)param_2 + 0x14);
  }
  local_c8 = local_7d0._4_4_;
  uVar24 = local_7d0._4_4_ + ((uint)local_7c8 >> 1);
  local_668 = local_7e8 >> 0x20;
  local_c4 = (uint)local_7c8;
  local_700 = local_7c0;
  local_118 = 0;
  if ((uint)local_7c8 != 0) {
    local_118 = uVar24 / (uint)local_7c8;
  }
  if (uVar24 < (uint)local_7c8) {
    local_118 = 1;
  }
  local_710 = local_7e0._4_4_;
  if ((param_3 >> 0x1c & 1) == 0) {
    FUN_001202a0(auStack_a28,auStack_150,local_118 << 2);
    FUN_001202a0(auStack_a28,auStack_148,local_118 << 2);
    FUN_001202a0(auStack_a28,auStack_140,local_118 << 2);
    FUN_001202a0(auStack_a28,auStack_138,local_118 << 2);
    FUN_001202a0(auStack_a28,auStack_130,local_118 << 2);
    FUN_001202a0(auStack_a28,auStack_128,local_118 << 2);
    FUN_001202a0(auStack_a28,auStack_120,local_118 << 2);
    iVar11 = FUN_0010c810(local_7e8 & 0xffffffff);
    if (iVar11 != 0) {
      FUN_001202a0(auStack_a28,auStack_88,
                   (local_738 + 0x1f >> 5) * ((byte)PTR_DAT_047cb820[(ulong)local_718 & 3] - 1) * 4
                   + 4);
    }
    uVar24 = uVar29;
    if (uVar29 == 0) {
      uVar24 = 1;
    }
    FUN_001202a0(auStack_a28,auStack_580,(ulong)uVar24 * 0x1c0);
    FUN_001202a0(auStack_a28,auStack_670,uVar29 << 2);
    iVar11 = FUN_0010c6e0(local_7e8 & 0xffffffff);
    if (iVar11 != 0) {
      FUN_00107cb0(auStack_5c8,local_738 + 0xf & 0xfffffff0);
    }
    if ((param_3 >> 0x1a & 1) == 0) {
      FUN_001202a0(auStack_a28,auStack_78,local_70);
      puVar17 = auStack_558;
      iVar11 = local_700 * 0xc + local_110 * 8 + 0x108;
    }
    else {
      puVar17 = auStack_570;
      iVar11 = local_110 * 8 + 0x10;
    }
    FUN_001202a0(auStack_a28,puVar17,iVar11);
    lVar14 = FUN_00120300(auStack_a28);
    local_658 = lVar14 + local_658 + 2000;
    lVar14 = FUN_00120310(auStack_a28,2000);
    if (lVar14 != 0) {
      __dest = (undefined4 *)(lVar14 + 0x100U & 0xffffffffffffff00);
      __dest[-1] = (int)__dest - (int)lVar14;
      memcpy(__dest,&local_738,0x6d0);
      *(undefined4 **)(__dest + 0x92) = __dest;
      **(undefined4 **)(__dest + 0x17c) = 0;
      **(undefined4 **)(__dest + 0x17e) = 0;
      **(undefined4 **)(__dest + 0x180) = 0;
      **(undefined4 **)(__dest + 0x182) = 0;
      **(undefined4 **)(__dest + 0x184) = 0;
      puVar27 = __dest + 0x84;
      **(undefined4 **)(__dest + 0x186) = 0;
      if ((param_3 >> 0x1a & 1) == 0) {
        if (__dest[0x1b2] != 0) {
          (**(code **)(__dest + 0x84))(puVar27,0xffffffffffffffff,*(undefined8 *)(__dest + 0x1b0));
        }
        uVar19 = *(long *)(__dest + 0x78) + 0x80U & 0xffffffffffffff80 | 0x2c;
        *(ulong *)(__dest + 0x78) = uVar19;
        (**(code **)(__dest + 0x84))
                  (puVar27,0xffffffffffffffff,uVar19,local_700 * 0xc + local_110 * 4 + 4);
        lVar18 = (long)(int)local_700 * 4;
        lVar20 = *(long *)(__dest + 0x78) + lVar18 + lVar18;
        lVar14 = lVar20 + lVar18;
        *(long *)(__dest + 0x7a) = *(long *)(__dest + 0x78) + lVar18;
        *(long *)(__dest + 0x7c) = lVar20;
        *(ulong *)(__dest + 0x72) = lVar14 + 7U & 0xfffffffffffffff8;
        if (__dest[0xb6] == 0) goto LAB_00101040;
        DAT_047ec100 = 0x45;
        lVar14 = 1;
        do {
          (&DAT_047ec100)[lVar14] = "Error reading Bink header."[lVar14];
          lVar14 = lVar14 + 1;
        } while ((int)lVar14 != 0x1b);
      }
      else {
        iVar11 = __dest[0xe];
        lVar14 = (long)param_1 + 0x2c;
        *(long *)(__dest + 0x1b0) = lVar14;
        uVar19 = (ulong)(uint)__dest[0x1b2];
        *(ulong *)(__dest + 0x78) = lVar14 + uVar19;
        *(ulong *)(__dest + 0x7a) = lVar14 + (iVar11 << 2) + uVar19;
        *(ulong *)(__dest + 0x7c) = lVar14 + (iVar11 << 3) + uVar19;
        lVar14 = lVar14 + iVar11 * 0xc + uVar19;
LAB_00101040:
        if ((local_7c8._4_4_ >> 2 & 1) == 0) {
          if ((local_7c8._4_4_ >> 0x10 & 1) == 0) {
            puVar2 = &DAT_03caa4fc;
            if ((__dest[8] & 0x10) != 0) {
              puVar2 = &DAT_03caa4bc;
            }
            uVar16 = puVar2[1];
            uVar21 = puVar2[2];
            uVar3 = puVar2[3];
            *(undefined8 *)(__dest + 0x18) = *puVar2;
            *(undefined8 *)(__dest + 0x1a) = uVar16;
            *(undefined8 *)(__dest + 0x1c) = uVar21;
            *(undefined8 *)(__dest + 0x1e) = uVar3;
            uVar16 = puVar2[5];
            uVar21 = puVar2[6];
            uVar3 = puVar2[7];
            *(undefined8 *)(__dest + 0x20) = puVar2[4];
            *(undefined8 *)(__dest + 0x22) = uVar16;
            *(undefined8 *)(__dest + 0x24) = uVar21;
            *(undefined8 *)(__dest + 0x26) = uVar3;
            iVar11 = FUN_0010c740(local_7e8 & 0xffffffff);
            if (iVar11 != 0) {
              uVar21 = *(undefined8 *)(__dest + 0x1c);
              *(undefined8 *)(__dest + 0x1c) = *(undefined8 *)(__dest + 0x18);
              uVar13 = __dest[0x1a];
              *(undefined8 *)(__dest + 0x18) = uVar21;
              __dest[0x1a] = __dest[0x1e];
              __dest[0x1e] = uVar13;
            }
          }
          else {
            lVar18 = *(long *)(__dest + 0x1b0);
            lVar20 = 0;
            iVar11 = 0;
            *(long *)(__dest + 0x1b0) = lVar18 + 0x18;
            __dest[0x1b2] = __dest[0x1b2] + -0x18;
            do {
              if ((~(uint)lVar20 & 3) == 0) {
                fVar30 = 0.0;
              }
              else {
                lVar5 = (long)iVar11;
                iVar11 = iVar11 + 1;
                fVar30 = (float)(int)*(short *)(lVar18 + lVar5 * 2) * 0.00024414062;
              }
              __dest[lVar20 + 0x18] = fVar30;
              lVar20 = lVar20 + 1;
            } while (lVar20 != 0x10);
          }
        }
        else {
          lVar18 = *(long *)(__dest + 0x1b0);
          lVar20 = 0;
          *(long *)(__dest + 0x1b0) = lVar18 + 0xc;
          __dest[0x1b2] = __dest[0x1b2] + -0xc;
          do {
            __dest[lVar20 + 0x18] = (float)(int)*(short *)(lVar18 + lVar20 * 2) * 3.051851e-05;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 5);
          __dest[0x1d] = (float)(int)*(short *)(lVar18 + 10);
        }
        FUN_0010c960(__dest[0x46],__dest[8],*__dest,__dest[1],__dest + 0x4c);
        uVar4 = __dest[2];
        puVar22 = *(ulong **)(__dest + 0x72);
        uVar24 = __dest[0x188];
        if ((int)uVar4 < 0) {
LAB_00101234:
          lVar14 = 0;
          uVar12 = 1;
        }
        else {
          lVar20 = (long)(int)uVar4;
          do {
            puVar22[lVar20] = (ulong)*(uint *)(lVar14 + lVar20 * 4);
            bVar1 = 0 < lVar20;
            lVar20 = lVar20 + -1;
          } while (bVar1);
          if ((int)uVar4 < 1) goto LAB_00101234;
          uVar19 = (ulong)uVar4;
          uVar12 = 1;
          lVar20 = 0;
          uVar25 = *puVar22;
          puVar6 = puVar22;
          do {
            *puVar6 = lVar20 + uVar25;
            uVar15 = puVar6[1];
            lVar18 = (uVar15 & 0xfffffffffffffffc) - (uVar25 & 0xfffffffffffffffc);
            if (0x10000000 < lVar18) {
              *(undefined8 *)(__dest + 0x2a) = 0xffffffffffffffff;
              goto LAB_00101414;
            }
            uVar12 = uVar12 & (uint)uVar25;
            lVar14 = lVar20 + 0x100000000;
            if (0 < lVar18) {
              lVar14 = lVar20;
            }
            uVar19 = uVar19 - 1;
            lVar20 = lVar14;
            uVar25 = uVar15;
            puVar6 = puVar6 + 1;
          } while (uVar19 != 0);
        }
        uVar19 = (ulong)uVar4;
        puVar22[uVar19] = puVar22[uVar19] + lVar14;
        *(long *)(__dest + 0x34) = *(long *)(__dest + 0x34) + lVar14;
        if ((int)(uVar4 - uVar24) < 1) {
          iVar11 = 0;
LAB_001012b4:
          uVar26 = 0;
          if (uVar19 != 0) {
            uVar26 = (((puVar22[uVar19] & 0xfffffffffffffffc) - (*puVar22 & 0xfffffffffffffffc)) *
                     (ulong)uVar24) / uVar19;
          }
        }
        else {
          uVar25 = 0;
          iVar11 = 0;
          uVar15 = 0;
          do {
            uVar26 = (puVar22[uVar24 + (int)uVar25] & 0xfffffffffffffffc) -
                     (puVar22[uVar25] & 0xfffffffffffffffc);
            iVar8 = (int)uVar25;
            if (uVar26 <= uVar15) {
              uVar26 = uVar15;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            uVar25 = uVar25 + 1;
            uVar15 = uVar26;
          } while (uVar25 < uVar4 - uVar24);
          if (uVar26 == 0) goto LAB_001012b4;
        }
        __dest[0x77] = uVar12;
        __dest[0x82] = iVar11;
        *(ulong *)(__dest + 0x2a) = uVar26;
        if (uVar26 == 0xffffffffffffffff) {
LAB_00101414:
          DAT_047ec100 = 0x54;
          lVar14 = 1;
          do {
            (&DAT_047ec100)[lVar14] = "This file has bad frame size data."[lVar14];
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 != 0x23);
        }
        else {
          if ((param_3 >> 10 & 1) == 0) {
            FUN_019b3640(__dest,auStack_b30);
            iVar11 = FUN_00100580(__dest,auStack_b30,0);
            if (iVar11 != 0) {
              *(void **)(__dest + 0x2c) = *(void **)(__dest + 0x1aa);
              memcpy(*(void **)(__dest + 0x1aa),auStack_b30,0x108);
              goto LAB_0010131c;
            }
          }
          else {
LAB_0010131c:
            if (((param_3 >> 0x18 & 1) == 0) || (lVar14 = param_2[1], lVar14 + 1U < 2)) {
              lVar14 = *(long *)(__dest + 0x2a);
            }
            *(long *)(__dest + 0x36) = lVar14;
            if (((param_3 >> 0x16 & 1) == 0) || (iVar11 = *(int *)(param_2 + 3), iVar11 + 1U < 2)) {
              iVar11 = 0;
            }
            __dest[0x80] = iVar11;
            if ((param_3 >> 0x1a & 1) != 0) {
              *(ulong *)(__dest + 0x7e) =
                   (long)param_1 + (**(ulong **)(__dest + 0x72) & 0xfffffffffffffffc);
              __dest[8] = __dest[8] | 0x8000000;
LAB_00101514:
              __dest[3] = 0xffffffff;
              uVar24 = __dest[5];
              if (uVar24 == 0) {
                uVar13 = 2000;
              }
              else {
                uVar13 = 0;
                if ((ulong)uVar24 != 0) {
                  uVar13 = (undefined4)(((ulong)(uint)__dest[6] * 2000) / (ulong)uVar24);
                }
              }
              __dest[0x193] = uVar13;
              __dest[0x11] = 1;
              iVar11 = FUN_0011f640();
              __dest[0x19b] = iVar11 - __dest[0x19b];
              *(undefined4 *)(*(long *)(__dest + 0x6e) + 0x4c) = 0x10000;
              __dest[0x4b] = 0;
              if ((uVar29 != 0) && (__dest[0xe] != 0)) {
                uVar19 = 0;
                uVar24 = 0;
LAB_0010163c:
                if (0 < (int)__dest[0xe]) {
                  lVar14 = 0;
                  do {
                    if (*(int *)(*(long *)(__dest + 0x7c) + lVar14 * 4) == puVar28[uVar19]) {
                      uVar4 = __dest[0x4b];
                      __dest[0x4b] = uVar4 + 1;
                      *(int *)(*(long *)(__dest + 0x32) + (ulong)uVar4 * 4) = (int)lVar14;
                      uVar12 = *(uint *)(*(long *)(__dest + 0x7a) + lVar14 * 4);
                      uVar10 = 4;
                      if ((*(byte *)((long)__dest + 0x22) & 4) == 0) {
                        uVar10 = (uVar12 & 0x90000000) == 0x10000000;
                      }
                      uVar12 = FUN_00103a10(uVar12 & 0xffff,(uVar12 >> 0x1d & 1) + 1,uVar10);
                      local_7b8[uVar4] = uVar12;
                      uVar24 = uVar12 + uVar24 +
                               (((uint)(*(int *)(*(long *)(__dest + 0x78) + lVar14 * 4) * 5) >> 2) +
                                0xff & 0x7fffff00);
                      break;
                    }
                    lVar14 = lVar14 + 1;
                  } while (lVar14 < (int)__dest[0xe]);
                }
LAB_00101608:
                uVar19 = uVar19 + 1;
                if (uVar19 == uVar29) {
                  if (uVar24 == 0) {
                    local_b38 = 0;
                  }
                  else {
                    lVar14 = FUN_00120300(auStack_a28);
                    *(ulong *)(__dest + 0x38) = lVar14 + (ulong)uVar24 + *(long *)(__dest + 0x38);
                    local_b38 = FUN_00120310(auStack_a28,(ulong)uVar24);
                    *(long *)(__dest + 0x1ae) = local_b38;
                    if (local_b38 == 0) {
                      __dest[0x4b] = 0;
                      goto LAB_001016b0;
                    }
                  }
                  DAT_0448301c = 1;
                  DAT_047ec218 = 0;
                  if (__dest[0x4b] != 0) {
                    uVar29 = 0;
                    do {
                      *(undefined8 *)(*(long *)(__dest + 0x6e) + (ulong)uVar29 * 0x1c0 + 0x10) = 0;
                      uVar19 = (ulong)uVar29;
                      lVar14 = (long)*(int *)(*(long *)(__dest + 0x32) + (ulong)uVar29 * 4);
                      uVar24 = *(uint *)(*(long *)(__dest + 0x7a) + lVar14 * 4);
                      if ((uVar24 & 0x90000000) != 0 && DAT_047ec0f8 != (code *)0x0) {
                        uVar4 = uVar24 & 0xffff;
                        uVar12 = ((uint)(*(int *)(*(long *)(__dest + 0x78) + lVar14 * 4) * 5) >> 2)
                                 + 0xff & 0x7fffff00;
                        lVar14 = ((ulong)(uVar24 >> 0x1d) & 1) + 1;
                        uVar24 = uVar4;
                        if ((local_724 != 0) && (local_720 != 0)) {
                          uVar24 = (uint)(((double)uVar4 * (double)local_724 *
                                          (double)(long)(int)local_c4) /
                                         ((double)(int)local_720 * (double)(long)local_c8));
                        }
                        if (0x3e7ff < uVar24) {
                          uVar24 = 0x3e800;
                        }
                        if (uVar12 <= uVar4 * (int)lVar14 * 4) {
                          if (DAT_047ec2a0 != 0) {
                            FUN_001209d0(&DAT_047ec328);
                          }
                          iVar11 = (*DAT_047ec0f8)(*(long *)(__dest + 0x6e) + uVar19 * 0x1c0,uVar24,
                                                   lVar14,__dest[8],__dest);
                          if (DAT_047ec2a0 != 0) {
                            FUN_00120750(&DAT_047ec328);
                          }
                          if (iVar11 != 0) {
                            *(uint *)(*(long *)(__dest + 0x6e) + uVar19 * 0x1c0 + 0x30) = uVar4;
                            lVar20 = *(long *)(__dest + 0x6e);
                            piVar23 = (int *)(lVar20 + uVar19 * 0x1c0 + 0x40);
                            if (*piVar23 == 0) {
                              *piVar23 = -1;
                              lVar20 = *(long *)(__dest + 0x6e);
                            }
                            lVar18 = uVar19 * 0x1c0;
                            *(uint *)(lVar20 + lVar18 + 0xc) = uVar12;
                            *(long *)(*(long *)(__dest + 0x6e) + lVar18 + 0x10) = local_b38;
                            lVar20 = *(long *)(__dest + 0x6e) + lVar18;
                            local_b38 = local_b38 + (ulong)*(uint *)(lVar20 + 0xc);
                            uVar4 = 0x2ee - *(int *)(lVar20 + 0x48);
                            *(ulong *)(lVar20 + 0x18) =
                                 *(long *)(lVar20 + 0x10) + (ulong)*(uint *)(lVar20 + 0xc);
                            *(undefined8 *)(*(long *)(__dest + 0x6e) + lVar18) =
                                 ((undefined8 *)(*(long *)(__dest + 0x6e) + lVar18))[2];
                            *(undefined8 *)(*(long *)(__dest + 0x6e) + lVar18 + 0x28) =
                                 *(undefined8 *)(*(long *)(__dest + 0x6e) + lVar18 + 0x10);
                            *(uint *)(*(long *)(__dest + 0x6e) + lVar18 + 0x58) =
                                 (uint)((lVar14 * (ulong)uVar24 *
                                         (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) >> 2 &
                                        0x1fffffffffffffff) / 0x7d) & 0xffffffc0;
                            piVar23 = (int *)(*(long *)(__dest + 0x6e) + lVar18 + 0x58);
                            iVar11 = *(int *)(*(long *)(__dest + 0x6e) + lVar18 + 0xc);
                            if (iVar11 - *piVar23 < 0x10) {
                              *piVar23 = iVar11 + -0x10;
                            }
                            uVar24 = *(uint *)(*(long *)(__dest + 0x7a) +
                                              (long)*(int *)(*(long *)(__dest + 0x32) + uVar19 * 4)
                                              * 4);
                            if ((*(byte *)((long)__dest + 0x22) >> 2 & 1) == 0) {
                              uVar10 = (uVar24 & 0x90000000) == 0x10000000;
                            }
                            else {
                              uVar10 = 4;
                            }
                            uVar21 = FUN_00103a50(local_b38,uVar24 & 0xffff,lVar14,uVar10);
                            *(undefined8 *)(*(long *)(__dest + 0x6e) + uVar19 * 0x1c0 + 0x20) =
                                 uVar21;
                            if (DAT_047ec2a0 != 0) {
                              FUN_001209d0(&DAT_047ec328);
                            }
                            if (*(long *)(*(long *)(__dest + 0x6e) + uVar19 * 0x1c0 + 0x20) == 0) {
                              (**(code **)(*(long *)(__dest + 0x6e) + uVar19 * 0x1c0 + 0x1a8))();
                              *(undefined8 *)(*(long *)(__dest + 0x6e) + uVar19 * 0x1c0 + 0x10) = 0;
                            }
                            if (DAT_047ec2a0 != 0) {
                              FUN_00120750(&DAT_047ec328);
                            }
                            uVar24 = 0;
                            if (__dest[0x19d] << 2 != 0) {
                              uVar24 = (uint)(__dest[0x19c] * 3) / (uint)(__dest[0x19d] << 2);
                            }
                            local_b38 = local_b38 + (ulong)local_7b8[uVar19];
                            *(uint *)(*(long *)(__dest + 0x6e) + uVar19 * 0x1c0 + 0x50) =
                                 __dest[2] - uVar24;
                          }
                        }
                      }
                      lVar14 = *(long *)(__dest + 0x6e);
                      piVar23 = (int *)(lVar14 + uVar19 * 0x1c0 + 0x4c);
                      if (*piVar23 == 0) {
                        *piVar23 = 0x10000;
                        lVar14 = *(long *)(__dest + 0x6e);
                      }
                      if (*(long *)(lVar14 + uVar19 * 0x1c0 + 0x10) == 0) {
                        iVar11 = __dest[0x4b];
                        __dest[0x4b] = iVar11 + -1;
                        memmove((void *)(*(long *)(__dest + 0x32) + uVar19 * 4),
                                (void *)(*(long *)(__dest + 0x32) + (ulong)(uVar29 + 1) * 4),
                                (ulong)(((iVar11 + -1) - uVar29) * 4));
                      }
                      else {
                        uVar29 = uVar29 + 1;
                      }
                      uVar24 = __dest[0x4b];
                    } while (uVar29 < uVar24);
                    if (uVar24 != 0) {
                      __dest[0x10] = 1;
                      if (DAT_047ec2a0 != 0) {
                        FUN_001209d0(&DAT_047ec328);
                        uVar24 = __dest[0x4b];
                      }
                      DAT_047ec0f0 = DAT_047ec0f0 + uVar24;
                      if (DAT_047ec2a0 != 0) {
                        FUN_00120750(&DAT_047ec328);
                      }
                      if (*(int *)(*(long *)(__dest + 0x6e) + 0x5c) < 1) {
                        iVar11 = FUN_001206d0(__dest + 0x148,1);
                        if (iVar11 == 0) {
                          *(undefined4 *)(*(long *)(__dest + 0x6e) + 0x5c) = 1;
                        }
                        else {
                          if (DAT_047ec4b8 == 0) {
                            DAT_04483020 = 0xd;
                          }
                          if (DAT_047ec2a0 != 0) {
                            FUN_001209d0(&DAT_047ec328);
                          }
                          if (DAT_047ec4c0 == 0) {
                            DAT_047ec4c8 = 0;
                            iVar11 = FUN_00120a50(&DAT_047ec4d0,0,0x4000);
                            if (iVar11 != 0) {
                              lVar14 = FUN_00120300(0);
                              *(long *)(__dest + 0x38) = lVar14 + *(long *)(__dest + 0x38) + 0x8000;
                              uVar21 = FUN_00120310(0,0x8000);
                              DAT_047ec550 = uVar21;
                              uVar16 = FUN_001203c0(3,2);
                              iVar11 = FUN_00120520(&DAT_047ec558,&LAB_00103090,0,0x8000,uVar21,
                                                    uVar16,0,"Bink Snd");
                              if (iVar11 != 0) {
                                DAT_047ec4c4 = DAT_047ec4c4 + 1;
                                bVar1 = true;
                                DAT_047ec4c0 = 1;
                                goto LAB_00101f08;
                              }
                              FUN_0011f610(DAT_047ec550);
                              DAT_047ec550 = 0;
                              FUN_00120aa0(&DAT_047ec4d0);
                            }
                            bVar1 = false;
                          }
                          else {
                            DAT_047ec4c4 = DAT_047ec4c4 + 1;
                            bVar1 = true;
                          }
LAB_00101f08:
                          if (DAT_047ec2a0 != 0) {
                            FUN_00120750(&DAT_047ec328);
                          }
                          if (bVar1) {
                            FUN_00103030(__dest);
                            puVar28 = __dest + 0x75;
                          }
                          else {
                            FUN_00120720(__dest + 0x148);
                            puVar28 = (undefined4 *)(*(long *)(__dest + 0x6e) + 0x5c);
                          }
                          *puVar28 = 1;
                          if (*(int *)(*(long *)(__dest + 0x6e) + 0x5c) < 0) {
                            uVar29 = -*(int *)(*(long *)(__dest + 0x6e) + 0x5c);
                            if (uVar29 < DAT_04483020) {
                              DAT_04483020 = uVar29;
                            }
                          }
                        }
                      }
                      else if (*(int *)(*(long *)(__dest + 0x6e) + 0x5c) == 2) {
                        FUN_001206d0(__dest + 0x148,1);
                        FUN_00103030(__dest);
                        __dest[0x75] = 1;
                      }
                    }
                  }
                  goto LAB_001016c0;
                }
                if (0 < (int)uVar19) goto LAB_0010161c;
                goto LAB_0010163c;
              }
LAB_001016b0:
              DAT_0448301c = 1;
              DAT_047ec218 = 0;
LAB_001016c0:
              *(undefined1 **)(__dest + 0x96) = &LAB_00102f60;
              *(undefined1 **)(__dest + 0x98) = &LAB_00103290;
              *(undefined1 **)(__dest + 0x9c) = &LAB_00102f80;
              *(undefined1 **)(__dest + 0x94) = &LAB_00103270;
              *(undefined1 **)(__dest + 0x9a) = &LAB_001032b0;
              if (((*(byte *)((long)__dest + 0x23) >> 3 & 1) != 0) ||
                 (*(long *)(__dest + 0x7e) != 0)) goto LAB_00101d4c;
              iVar11 = FUN_001206d0(__dest + 0x118,2);
              if (iVar11 != 0) {
                if (DAT_047ec2a0 != 0) {
                  FUN_001209d0(&DAT_047ec3a8);
                }
                if (DAT_047ec42c == 0) {
                  DAT_047ec75c = 0;
                  iVar11 = FUN_00120a50(&DAT_047ec430,0,0x4000);
                  if (iVar11 != 0) {
                    lVar14 = FUN_00120300(0);
                    *(long *)(__dest + 0x38) = lVar14 + *(long *)(__dest + 0x38) + 0x8000;
                    uVar21 = FUN_00120310(0,0x8000);
                    DAT_047ec760 = uVar21;
                    uVar16 = FUN_001203c0(3,1);
                    iVar11 = FUN_00120520(&DAT_047ec768,&LAB_00103300,0,0x8000,uVar21,uVar16,0,
                                          "Bink IO");
                    if (iVar11 != 0) {
                      DAT_047ec42c = 1;
                      goto joined_r0x00101d1c;
                    }
                    FUN_0011f610(DAT_047ec760);
                    DAT_047ec760 = 0;
                    FUN_00120aa0(&DAT_047ec430);
                  }
                  bVar7 = false;
                  bVar1 = false;
                }
                else {
joined_r0x00101d1c:
                  bVar7 = true;
                  bVar1 = true;
                  DAT_047ec758 = DAT_047ec758 + 1;
                }
                if (DAT_047ec2a0 != 0) {
                  FUN_00120750(&DAT_047ec3a8);
                  bVar1 = bVar7;
                }
                if (bVar1) {
                  if (((uint)__dest[8] >> 0x1b & 1) == 0) {
                    FUN_00103030(__dest);
                    __dest[0x75] = 1;
                  }
                  goto LAB_00101d4c;
                }
                FUN_00120720(__dest + 0x118);
              }
              __dest[8] = __dest[8] | 0x8000000;
LAB_00101d4c:
              iVar11 = FUN_001206d0(__dest + 0xe8,2);
              if (iVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(0,0x101d60);
                (*pcVar9)();
              }
              DAT_047ec298 = __dest;
              if (*(long *)(__dest + 0x7e) == 0) {
                if (((param_3 | (uint)__dest[8] >> 6 ^ 0xffffffff) >> 0x15 & 1) == 0) {
                  do {
                    lVar14 = (**(code **)(__dest + 0x8c))(puVar27);
                  } while (lVar14 != 0);
                }
                if (DAT_047ec42c != 0) {
                  FUN_00120bc0(&DAT_047ec430,1);
                }
              }
              *(undefined8 *)(__dest + 0x44) = 0xf0000000;
              FUN_00102c80(__dest,1);
              if (((__dest[0x4b] != 0) && (DAT_047ec4c0 != 0)) &&
                 (*(int *)(*(long *)(__dest + 0x6e) + 0x5c) < 1)) {
                FUN_00120bc0(&DAT_047ec4d0,1);
              }
              uVar13 = FUN_00120240(&DAT_047ec4b0,1);
              __dest[0x74] = uVar13;
              return __dest;
            }
            lVar14 = (**(code **)(__dest + 0x88))(puVar27);
            uVar19 = *(ulong *)(__dest + 0x34);
            *(long *)(__dest + 0x36) = lVar14;
            if (uVar19 <= lVar14 + 0x40000U) {
              *(ulong *)(__dest + 0x36) = uVar19 + 0x10;
            }
            if ((param_3 >> 0xd & 1) == 0) {
              FUN_001202a0(auStack_a28,__dest + 0x1a8,__dest[10] + 0x500);
              lVar20 = *(long *)(__dest + 0x36);
              lVar14 = FUN_00120300(auStack_a28);
              *(long *)(__dest + 0x38) = lVar14 + lVar20 + *(long *)(__dest + 0x38);
              lVar14 = FUN_00120310(auStack_a28,lVar20);
              *(long *)(__dest + 0x178) = lVar14;
              if (lVar14 != 0) {
                (**(code **)(__dest + 0x8a))
                          (puVar27,lVar14,*(undefined8 *)(__dest + 0x36),
                           *(long *)(__dest + 0x34) + 8,iVar11);
                goto LAB_00101514;
              }
            }
            else {
              lVar18 = uVar19 - (**(ulong **)(__dest + 0x72) & 0xfffffffffffffffc);
              lVar14 = lVar18 + 0x408;
              lVar20 = FUN_00120300(auStack_a28);
              *(long *)(__dest + 0x38) = *(long *)(__dest + 0x38) + lVar20 + lVar14;
              lVar14 = FUN_00120310(auStack_a28,lVar14);
              *(long *)(__dest + 0x7e) = lVar14;
              if (lVar14 != 0) {
                __dest[8] = __dest[8] | 0x8000000;
                (**(code **)(__dest + 0x8a))(puVar27,0,0,*(long *)(__dest + 0x34) + 8,iVar11);
                (**(code **)(__dest + 0x84))
                          (puVar27,**(ulong **)(__dest + 0x72) & 0xfffffffffffffffc,
                           *(undefined8 *)(__dest + 0x7e),lVar18 + 8);
                if (DAT_047ec2a0 != 0) {
                  FUN_001209d0(&DAT_047ec3a8);
                }
                (**(code **)(__dest + 0x8e))(puVar27);
                if (DAT_047ec2a0 != 0) {
                  FUN_00120750(&DAT_047ec3a8);
                }
                __dest[0xba] = 0;
                goto LAB_00101514;
              }
            }
            if (*(long *)(__dest + 0x2c) != 0) {
              FUN_0011f610();
            }
          }
          DAT_047ec100 = 0x4f;
          lVar14 = 1;
          do {
            (&DAT_047ec100)[lVar14] = "Out of memory."[lVar14];
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 != 0xf);
        }
      }
      FUN_0011f610((long)__dest - (ulong)(uint)__dest[-1]);
      goto joined_r0x00100974;
    }
  }
  else {
    lVar14 = local_668 + 0xfd8;
    lVar20 = FUN_00120300(auStack_a28);
    local_658 = lVar20 + lVar14 + local_658;
    lVar14 = FUN_00120310(auStack_a28,lVar14);
    if (lVar14 != 0) {
      puVar27 = (undefined4 *)(lVar14 + 0x500U & 0xffffffffffffff00);
      puVar27[-1] = (int)puVar27 - (int)lVar14;
      memcpy(puVar27,&local_738,0x6d0);
      *(undefined4 **)(puVar27 + 0x7e) = puVar27 + 0x1b4;
      puVar27[8] = puVar27[8] | 0x8002000;
      puVar28 = puVar27 + 0x84;
      *(undefined4 **)(puVar27 + 0x92) = puVar27;
      (**(code **)(puVar27 + 0x8a))(puVar28,0,0,*(long *)(puVar27 + 0x34) + 8,0);
      (**(code **)(puVar27 + 0x84))
                (puVar28,0,*(undefined8 *)(puVar27 + 0x7e),*(long *)(puVar27 + 0x34) + 8);
      if (DAT_047ec2a0 != 0) {
        FUN_001209d0(&DAT_047ec3a8);
      }
      (**(code **)(puVar27 + 0x8e))(puVar28);
      if (DAT_047ec2a0 != 0) {
        FUN_00120750(&DAT_047ec3a8);
      }
      puVar27[0xba] = 0;
      return puVar27;
    }
  }
  DAT_047ec100 = 0x4f;
  lVar14 = 1;
  do {
    (&DAT_047ec100)[lVar14] = "Out of memory."[lVar14];
    lVar14 = lVar14 + 1;
  } while ((int)lVar14 != 0xf);
joined_r0x00100974:
  if ((param_3 >> 0x1a & 1) == 0) {
    if (DAT_047ec2a0 != 0) {
      FUN_001209d0(&DAT_047ec3a8);
    }
    (*local_500)(local_528);
    if (DAT_047ec2a0 != 0) {
      FUN_00120750(&DAT_047ec3a8);
    }
  }
  return (undefined4 *)0x0;
LAB_0010161c:
  uVar25 = 0;
  while (puVar28[uVar25] != puVar28[uVar19]) {
    uVar25 = uVar25 + 1;
    if (uVar19 == uVar25) goto LAB_0010163c;
  }
  goto LAB_00101608;
}


