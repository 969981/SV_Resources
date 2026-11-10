/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fe300; name: FUN_003fe300
 */


uint FUN_003fe300(undefined8 param_1,long param_2,long *param_3,undefined8 *param_4,
                 undefined8 param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  undefined1 *puVar23;
  ulong uVar24;
  undefined1 *puVar25;
  ulong uVar26;
  void *__s;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  long local_e0;
  uint local_d4;
  ulong local_d0;
  long *local_c8;
  int local_bc;
  ulong local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  uint local_9c;
  long local_98;
  int *local_90;
  uint local_88;
  uint uStack_84;
  undefined8 local_80;
  int *local_78;
  uint local_70;
  uint uStack_6c;
  undefined8 local_68;
  
  iVar2 = FUN_003ec640(param_4);
  if (iVar2 == 0) {
    FUN_004806c0(3,0x7c,0x66,"external/openssl/crypto/bn/bn_exp.c",0x266);
    return 0;
  }
  iVar2 = (int)param_3[1];
  if (iVar2 == 0) {
    iVar2 = FUN_003ec570(param_4,1);
    if (iVar2 == 0) {
      uVar22 = FUN_003eb9f0(param_1,1);
      return uVar22;
    }
    FUN_003eb9f0(param_1,0);
    return 1;
  }
  uVar22 = *(uint *)(param_4 + 1);
  uVar26 = (ulong)uVar22;
  FUN_003ed410(param_5);
  lVar16 = param_6;
  if ((param_6 == 0) &&
     ((lVar16 = FUN_003ecc70(), lVar16 == 0 ||
      (iVar3 = FUN_003ecd40(lVar16,param_4,param_5), iVar3 == 0)))) {
    __s = (void *)0x0;
    iVar2 = 0;
    puVar6 = (undefined1 *)0x0;
    uVar22 = 0;
  }
  else {
    local_98 = lVar16;
    if (*(int *)(param_2 + 0x10) == 0) {
      iVar3 = FUN_003ebf10(param_2,param_4);
      lVar4 = param_2;
      if (-1 < iVar3) goto LAB_003fe37c;
LAB_003fe3a8:
      if (iVar2 < 0x1e) {
        if (iVar2 < 10) {
          if (iVar2 < 3) {
            local_9c = 3;
            if (iVar2 < 1) {
              local_9c = 1;
            }
          }
          else {
            local_9c = 4;
          }
        }
        else {
          local_9c = 5;
        }
      }
      else {
        local_9c = 6;
      }
      uVar11 = 1 << (ulong)local_9c;
      uVar10 = uVar22 * 2;
      if ((int)(uVar22 * 2) <= (int)uVar11) {
        uVar10 = uVar11;
      }
      uVar10 = uVar10 + (uVar22 << (ulong)local_9c);
      uVar24 = (ulong)uVar10 << 2;
      uVar21 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar24;
      lVar16 = (ulong)uVar10 << 0x22;
      lVar5 = lVar16 + 0x4000000000 >> 0x20;
      local_c8 = param_3;
      local_bc = iVar2;
      if ((int)uVar24 < 0xc00) {
        puVar6 = auStack_f0 + -(lVar5 + 0xfU & 0xfffffffffffffff0);
        local_a8 = (undefined1 *)0x0;
      }
      else {
        puVar6 = (undefined1 *)FUN_00452c30(lVar5,"external/openssl/crypto/bn/bn_exp.c",0x2d3);
        local_a8 = puVar6;
        if (puVar6 == (undefined1 *)0x0) goto LAB_003fe6a4;
      }
      local_b8 = (ulong)puVar6 & 0x3f;
      __s = (void *)(((ulong)puVar6 & 0xffffffffffffffc0) + 0x40);
      lVar5 = (long)(int)uVar22;
      local_e8 = param_1;
      local_b0 = puVar6;
      memset(__s,0,lVar16 >> 0x20);
      uVar24 = (ulong)uVar11;
      local_78 = (int *)((long)__s + lVar5 * 4 * uVar24);
      local_90 = local_78 + lVar5;
      local_88 = 0;
      local_70 = 0;
      local_80 = DAT_03cb5420;
      local_68 = DAT_03cb5420;
      piVar8 = (int *)*param_4;
      local_d4 = uVar11;
      uStack_84 = uVar22;
      uStack_6c = uVar22;
      if (piVar8[(int)(uVar22 - 1)] < 0) {
        *local_78 = -*piVar8;
        if (1 < (int)uVar22) {
          uVar14 = uVar26 - 1;
          if (uVar14 < 0x10) {
LAB_003fe624:
            uVar15 = 1;
          }
          else {
            lVar16 = lVar5 * uVar24 * 4;
            lVar20 = lVar16 - local_b8;
            if ((local_b0 + lVar20 + 0x44 < piVar8 + uVar26) &&
               (piVar8 + 1 < local_b0 + ((lVar16 + uVar26 * 4) - local_b8) + 0x40))
            goto LAB_003fe624;
            uVar17 = uVar14 & 0xfffffffffffffff0;
            uVar15 = uVar17 | 1;
            puVar18 = (undefined8 *)(local_b0 + lVar20 + 0x74);
            piVar12 = piVar8 + 9;
            uVar19 = uVar17;
            do {
              uVar27 = *(undefined8 *)(piVar12 + -6);
              uVar7 = *(undefined8 *)(piVar12 + -8);
              uVar29 = *(undefined8 *)(piVar12 + -2);
              uVar28 = *(undefined8 *)(piVar12 + -4);
              uVar19 = uVar19 - 0x10;
              uVar31 = *(undefined8 *)(piVar12 + 2);
              uVar30 = *(undefined8 *)piVar12;
              uVar33 = *(undefined8 *)(piVar12 + 6);
              uVar32 = *(undefined8 *)(piVar12 + 4);
              puVar18[-5] = CONCAT17(~(byte)((ulong)uVar27 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar27 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar27 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar27 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar27 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar27 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar27 >> 8),~(byte)uVar27
                                                          )))))));
              puVar18[-6] = CONCAT17(~(byte)((ulong)uVar7 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar7 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar7 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar7 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar7 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar7 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar7 >> 8),~(byte)uVar7))
                                                  )))));
              puVar18[-3] = CONCAT17(~(byte)((ulong)uVar29 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar29 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar29 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar29 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar29 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar29 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar29 >> 8),~(byte)uVar29
                                                          )))))));
              puVar18[-4] = CONCAT17(~(byte)((ulong)uVar28 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar28 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar28 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar28 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar28 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar28 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar28 >> 8),~(byte)uVar28
                                                          )))))));
              puVar18[-1] = CONCAT17(~(byte)((ulong)uVar31 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar31 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar31 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar31 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar31 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar31 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar31 >> 8),~(byte)uVar31
                                                          )))))));
              puVar18[-2] = CONCAT17(~(byte)((ulong)uVar30 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar30 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar30 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar30 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar30 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar30 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar30 >> 8),~(byte)uVar30
                                                          )))))));
              puVar18[1] = CONCAT17(~(byte)((ulong)uVar33 >> 0x38),
                                    CONCAT16(~(byte)((ulong)uVar33 >> 0x30),
                                             CONCAT15(~(byte)((ulong)uVar33 >> 0x28),
                                                      CONCAT14(~(byte)((ulong)uVar33 >> 0x20),
                                                               CONCAT13(~(byte)((ulong)uVar33 >>
                                                                               0x18),
                                                                        CONCAT12(~(byte)((ulong)
                                                  uVar33 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar33 >> 8),~(byte)uVar33
                                                          )))))));
              *puVar18 = CONCAT17(~(byte)((ulong)uVar32 >> 0x38),
                                  CONCAT16(~(byte)((ulong)uVar32 >> 0x30),
                                           CONCAT15(~(byte)((ulong)uVar32 >> 0x28),
                                                    CONCAT14(~(byte)((ulong)uVar32 >> 0x20),
                                                             CONCAT13(~(byte)((ulong)uVar32 >> 0x18)
                                                                      ,CONCAT12(~(byte)((ulong)
                                                  uVar32 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar32 >> 8),~(byte)uVar32
                                                          )))))));
              puVar18 = puVar18 + 8;
              piVar12 = piVar12 + 0x10;
            } while (uVar19 != 0);
            if (uVar14 == uVar17) goto LAB_003fe6f8;
          }
          uVar14 = uVar15;
          if ((uVar22 & 1) == 0) {
            uVar14 = uVar15 + 1;
            local_78[uVar15] = ~piVar8[uVar15];
          }
          if (~uVar15 + uVar26 != 0) {
            lVar16 = uVar26 - uVar14;
            puVar9 = (uint *)(piVar8 + uVar14 + 1);
            puVar13 = (uint *)(local_b0 + ((uVar14 * 4 + lVar5 * uVar24 * 4) - local_b8) + 0x44);
            do {
              puVar13[-1] = ~puVar9[-1];
              lVar16 = lVar16 + -2;
              *puVar13 = ~*puVar9;
              puVar9 = puVar9 + 2;
              puVar13 = puVar13 + 2;
            } while (lVar16 != 0);
          }
        }
LAB_003fe6f8:
        lVar16 = local_98;
        local_70 = uVar22;
      }
      else {
        uVar7 = FUN_003eb200();
        lVar16 = local_98;
        iVar2 = FUN_003ecc60(&local_78,uVar7,local_98,param_5);
        if (iVar2 == 0) {
          uVar22 = 0;
          puVar6 = local_a8;
          goto LAB_003fec28;
        }
      }
      iVar2 = FUN_003ecc60(&local_90,lVar4,lVar16,param_5);
      uVar26 = local_b8;
      if (iVar2 == 0) {
LAB_003fe89c:
        uVar22 = 0;
        lVar16 = local_98;
LAB_003fec24:
        puVar6 = local_a8;
      }
      else {
        uVar10 = local_70;
        if ((int)uVar22 <= (int)local_70) {
          uVar10 = uVar22;
        }
        if (0 < (int)uVar10) {
          if (uVar10 == 1) {
            lVar16 = 0;
            uVar14 = 0;
          }
          else {
            lVar16 = 0;
            uVar14 = 0;
            piVar8 = local_78 + 1;
            do {
              lVar4 = lVar16 * 4;
              lVar16 = lVar16 + uVar24 * 2;
              *(int *)((long)__s + lVar4) = piVar8[-1];
              uVar14 = uVar14 + 2;
              *(int *)(local_b0 + lVar4 + (uVar24 * 4 - local_b8) + 0x40) = *piVar8;
              piVar8 = piVar8 + 2;
            } while (((ulong)uVar10 & 0xfffffffe) != uVar14);
          }
          if ((uVar10 & 1) != 0) {
            *(int *)((long)__s + lVar16 * 4) = local_78[uVar14];
          }
        }
        uVar10 = local_88;
        if ((int)uVar22 <= (int)local_88) {
          uVar10 = uVar22;
        }
        if (0 < (int)uVar10) {
          if (uVar10 == 1) {
            uVar14 = 0;
            lVar16 = 1;
          }
          else {
            uVar14 = 0;
            lVar16 = 0x11;
            piVar8 = local_90 + 1;
            do {
              lVar4 = lVar16 * 4;
              uVar14 = uVar14 + 2;
              *(int *)(local_b0 + (lVar4 - local_b8)) = piVar8[-1];
              lVar16 = lVar16 + uVar24 * 2;
              *(int *)(local_b0 + lVar4 + (uVar24 * 4 - local_b8)) = *piVar8;
              piVar8 = piVar8 + 2;
            } while (((ulong)uVar10 & 0xfffffffe) != uVar14);
            lVar16 = lVar16 + -0x10;
          }
          if ((uVar10 & 1) != 0) {
            *(int *)((long)__s + lVar16 * 4) = local_90[uVar14];
          }
        }
        local_e0 = param_6;
        local_d0 = uVar21;
        if (1 < local_9c) {
          iVar2 = FUN_003ec7a0(&local_78,&local_90,&local_90,local_98,param_5);
          uVar21 = local_d0;
          param_6 = local_e0;
          if (iVar2 == 0) goto LAB_003fe89c;
          uVar10 = local_70;
          if ((int)uVar22 <= (int)local_70) {
            uVar10 = uVar22;
          }
          lVar16 = uVar24 * 4;
          if (0 < (int)uVar10) {
            if (uVar10 == 1) {
              uVar21 = 0;
              lVar4 = 2;
            }
            else {
              uVar21 = 0;
              lVar4 = 0x12;
              piVar8 = local_78 + 1;
              do {
                lVar5 = lVar4 * 4;
                uVar21 = uVar21 + 2;
                *(int *)(local_b0 + (lVar5 - uVar26)) = piVar8[-1];
                lVar4 = lVar4 + uVar24 * 2;
                *(int *)(local_b0 + lVar5 + (lVar16 - uVar26)) = *piVar8;
                piVar8 = piVar8 + 2;
              } while (((ulong)uVar10 & 0xfffffffe) != uVar21);
              lVar4 = lVar4 + -0x10;
            }
            if ((uVar10 & 1) != 0) {
              *(int *)((long)__s + lVar4 * 4) = local_78[uVar21];
            }
          }
          uVar21 = 3;
          uVar10 = local_d4;
          if (local_d4 < 5) {
            uVar10 = 4;
          }
          lVar4 = (long)local_b0 - uVar26;
          puVar6 = local_b0 + (lVar16 - uVar26) + 0x4c;
          puVar23 = local_b0 + (uVar24 * 8 - uVar26) + 0x4c;
          puVar25 = local_b0 + (uVar24 * 0xc - uVar26) + 0x4c;
          local_b0 = (undefined1 *)(lVar4 + 0x40);
          do {
            iVar2 = FUN_003ec7a0(&local_78,&local_90,&local_78,local_98,param_5);
            if (iVar2 == 0) {
              uVar22 = 0;
              param_6 = local_e0;
              lVar16 = local_98;
              goto LAB_003fec20;
            }
            uVar11 = local_70;
            if ((int)uVar22 <= (int)local_70) {
              uVar11 = uVar22;
            }
            uVar26 = (ulong)uVar11;
            if (0 < (int)uVar11) {
              uVar14 = uVar26 & 3;
              if (uVar26 - 1 < 3) {
                uVar15 = 0;
                uVar26 = uVar21;
              }
              else {
                lVar5 = 0;
                uVar15 = 0;
                piVar8 = local_78 + 2;
                do {
                  lVar20 = lVar5 * 4;
                  lVar5 = lVar5 + lVar16;
                  *(int *)(lVar4 + lVar20 + 0x4c) = piVar8[-2];
                  *(int *)(puVar6 + lVar20) = piVar8[-1];
                  *(int *)(puVar23 + lVar20) = *piVar8;
                  piVar12 = piVar8 + 1;
                  uVar15 = uVar15 + 4;
                  piVar8 = piVar8 + 4;
                  *(int *)(puVar25 + lVar20) = *piVar12;
                } while ((uVar26 & 0xfffffffc) != uVar15);
                uVar26 = uVar21 + lVar5;
              }
              if ((uVar11 & 3) != 0) {
                piVar8 = (int *)(local_b0 + uVar26 * 4);
                piVar12 = local_78 + uVar15;
                do {
                  *piVar8 = *piVar12;
                  uVar14 = uVar14 - 1;
                  piVar8 = piVar8 + uVar24;
                  piVar12 = piVar12 + 1;
                } while (uVar14 != 0);
              }
            }
            uVar21 = uVar21 + 1;
            puVar25 = puVar25 + 4;
            puVar23 = puVar23 + 4;
            puVar6 = puVar6 + 4;
            lVar4 = lVar4 + 4;
          } while (uVar21 != uVar10);
        }
        lVar16 = local_98;
        uVar21 = local_d0;
        param_6 = local_e0;
        iVar3 = local_bc * 0x20 + -1;
        iVar2 = 0;
        if (local_9c != 0) {
          iVar2 = iVar3 / (int)local_9c;
        }
        uVar10 = (iVar3 - iVar2 * local_9c) + 1;
        iVar3 = local_bc * 0x20 - uVar10;
        iVar2 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar2 = iVar3;
        }
        if (iVar3 < -0x1f) {
          uVar11 = 0;
        }
        else {
          iVar2 = iVar2 >> 5;
          if (iVar2 < (int)local_c8[1]) {
            uVar1 = iVar3 % 0x20;
            uVar11 = *(uint *)(*local_c8 + (long)iVar2 * 4);
            if (uVar1 != 0) {
              uVar11 = uVar11 >> (ulong)(uVar1 & 0x1f);
              if ((int)((long)iVar2 + 1) < (int)local_c8[1]) {
                uVar11 = *(int *)(*local_c8 + ((long)iVar2 + 1) * 4) << (ulong)(-uVar1 & 0x1f) |
                         uVar11;
              }
            }
          }
          else {
            uVar11 = 0;
          }
        }
        iVar2 = FUN_003fecb0(&local_78,uVar22,__s,uVar11 & ~(-1 << (ulong)(uVar10 & 0x1f)));
        if (iVar2 != 0) {
          uVar10 = local_d4 - 1;
          do {
            uVar11 = local_9c;
            if (iVar3 < 1) {
              iVar2 = FUN_003ecb60(local_e8,&local_78,lVar16,param_5);
              uVar22 = (uint)(iVar2 != 0);
LAB_003fec20:
              uVar21 = local_d0;
              goto LAB_003fec24;
            }
            do {
              iVar2 = FUN_003ec7a0(&local_78,&local_78,&local_78,lVar16,param_5);
              uVar21 = local_d0;
              if (iVar2 == 0) {
                uVar22 = 0;
                goto LAB_003fec20;
              }
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            iVar3 = iVar3 - local_9c;
            iVar2 = iVar3 + 0x1f;
            if (-1 < iVar3) {
              iVar2 = iVar3;
            }
            if (iVar3 < -0x1f) {
LAB_003febb4:
              uVar11 = 0;
            }
            else {
              iVar2 = iVar2 >> 5;
              if ((int)local_c8[1] <= iVar2) goto LAB_003febb4;
              uVar1 = iVar3 % 0x20;
              uVar11 = *(uint *)(*local_c8 + (long)iVar2 * 4);
              if (uVar1 != 0) {
                uVar11 = uVar11 >> (ulong)(uVar1 & 0x1f);
                if ((int)((long)iVar2 + 1) < (int)local_c8[1]) {
                  uVar11 = *(int *)(*local_c8 + ((long)iVar2 + 1) * 4) << (ulong)(-uVar1 & 0x1f) |
                           uVar11;
                }
              }
            }
            iVar2 = FUN_003fecb0(&local_90,uVar22,__s,uVar11 & uVar10,local_9c);
          } while ((iVar2 != 0) &&
                  (iVar2 = FUN_003ec7a0(&local_78,&local_78,&local_90,lVar16,param_5), iVar2 != 0));
        }
        uVar22 = 0;
        puVar6 = local_a8;
      }
    }
    else {
LAB_003fe37c:
      lVar4 = FUN_003ed5c0(param_5);
      if (lVar4 == 0) {
        uVar21 = 0;
LAB_003fe6a4:
        uVar22 = 0;
        puVar6 = (undefined1 *)0x0;
        __s = (void *)0x0;
        lVar16 = local_98;
      }
      else {
        iVar3 = FUN_003f0870(lVar4,param_2,param_4,param_5);
        if (iVar3 != 0) goto LAB_003fe3a8;
        uVar22 = 0;
        puVar6 = (undefined1 *)0x0;
        uVar21 = 0;
        __s = (void *)0x0;
        lVar16 = local_98;
      }
    }
LAB_003fec28:
    iVar2 = (int)uVar21;
    if (param_6 != 0) goto LAB_003fec34;
  }
  FUN_003eccf0(lVar16);
LAB_003fec34:
  if (__s != (void *)0x0) {
    FUN_00453300(__s,(long)iVar2);
    FUN_00452f80(puVar6,"external/openssl/crypto/bn/bn_exp.c",0x463);
  }
  FUN_003ed530(param_5);
  return uVar22;
}


