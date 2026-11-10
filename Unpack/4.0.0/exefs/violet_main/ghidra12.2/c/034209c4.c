/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034209c4; name: FUN_034209c4
 */


void FUN_034209c4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint local_12c;
  undefined1 local_120 [8];
  float local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  
  lVar16 = *(long *)(*(long *)(param_4 + 8) + 0x40);
  fVar1 = *(float *)(lVar16 + 0x78);
  fVar2 = *(float *)(lVar16 + 0x7c);
  lVar18 = *(long *)(*(long *)(param_4 + 8) + 0x68);
  fVar3 = *(float *)(lVar16 + 0x80);
  local_b8 = fVar1;
  fStack_b4 = fVar2;
  local_b0 = fVar3;
  FUN_03420fe0(param_1,param_2,lVar16);
  uVar9 = (ulong)*(uint *)(param_1 + 0x58);
  uVar22 = 0;
  if (*(uint *)(param_1 + 0x58) != 0) {
    lVar14 = 0;
    plVar12 = *(long **)(param_1 + 0x50);
    do {
      pfVar17 = *(float **)((long)plVar12 + lVar14);
      if (*(long *)(pfVar17 + 0x1a) == *(long *)(param_4 + 0x58)) {
        if ((pfVar17 != (float *)0x0) && (pfVar17[0x16] != 0.0)) {
          lVar14 = (ulong)(uint)pfVar17[0x16] << 3;
          plVar10 = *(long **)(pfVar17 + 0x14);
          goto LAB_03420a8c;
        }
        break;
      }
      lVar14 = lVar14 + 8;
    } while (uVar9 * 8 != lVar14);
  }
  goto LAB_03420fa0;
  while (lVar14 = lVar14 + -8, plVar10 = plVar10 + 1, lVar14 != 0) {
LAB_03420a8c:
    lVar19 = *plVar10;
    if (*(long *)(lVar19 + 0x70) != *(long *)(param_1 + 0x70)) {
      if (lVar19 != 0) {
        plVar10 = plVar12;
        do {
          pfVar5 = (float *)*plVar10;
          if ((((pfVar5 != pfVar17) || (*(long *)(param_4 + 0x68) != *(long *)(param_1 + 0x70))) &&
              (*(char *)(pfVar5 + 0x198) != '\0')) && (pfVar5[0x16] != 0.0)) {
            lVar14 = (ulong)(uint)pfVar5[0x16] << 3;
            plVar15 = *(long **)(pfVar5 + 0x14);
            do {
              if (*(long *)(*plVar15 + 0x70) == *(long *)(lVar19 + 0x70)) {
                if (*plVar15 != 0) {
                  local_c8 = CONCAT44(fStack_b4,local_b8);
                  local_c0 = local_b0;
                  uVar22 = FUN_03424778(uVar22,pfVar5,*(undefined8 *)(param_1 + 0x70),lVar18,
                                        &local_c8);
                  plVar12 = *(long **)(param_1 + 0x50);
                  uVar9 = (ulong)*(uint *)(param_1 + 0x58);
                }
                break;
              }
              lVar14 = lVar14 + -8;
              plVar15 = plVar15 + 1;
            } while (lVar14 != 0);
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar12 + uVar9);
        local_e8 = CONCAT44(fStack_b4,local_b8);
        local_e0 = local_b0;
        FUN_03423ba8(&local_d8,pfVar17,&local_e8);
        fVar27 = *(float *)(param_4 + 0x98);
        fVar20 = 1.0 - fVar27;
        fVar4 = fVar20;
        if (*(long *)(param_4 + 0x68) != *(long *)(param_1 + 0x70)) {
          fVar4 = fVar27;
        }
        if (*(int *)(param_1 + 0x58) != 0) {
          plVar12 = *(long **)(param_1 + 0x50);
          local_12c = 1;
          fVar24 = local_d0 * fVar27;
          do {
            pfVar5 = (float *)*plVar12;
            if (*(char *)(pfVar5 + 0x198) == '\0') {
LAB_03420cd0:
              if (*(long *)(pfVar5 + 0x2a) != 0) {
                pfVar5[0x2c] = 0.0;
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
                pfVar5[0x2a] = 0.0;
                pfVar5[0x2b] = 0.0;
                pfVar5[0x2d] = 0.0;
              }
            }
            else {
              if (pfVar5[0x16] != 0.0) {
                lVar14 = (ulong)(uint)pfVar5[0x16] << 3;
                plVar10 = *(long **)(pfVar5 + 0x14);
                do {
                  if (*(long *)(*plVar10 + 0x70) == *(long *)(lVar19 + 0x70)) {
                    if (*plVar10 != 0) {
                      if (pfVar17 == pfVar5) {
                        if (*(long *)(param_1 + 0x70) != *(long *)(param_4 + 0x68)) {
                          local_f0 = local_d0;
                          puVar8 = local_f8;
                          pfVar5 = pfVar17;
                          fVar26 = fVar27;
                          goto LAB_03420e34;
                        }
                        fVar23 = fVar2 - pfVar17[1];
                        fVar21 = fVar1 - *pfVar17;
                        fVar25 = fVar3 - pfVar17[2];
                        fVar30 = pfVar17[3] * fVar21 + fVar23 * pfVar17[4] + fVar25 * pfVar17[5];
                        fVar31 = pfVar17[0xc];
                        fVar26 = -fVar31;
                        if ((-fVar31 <= fVar30) && (fVar26 = fVar31, fVar30 <= fVar31)) {
                          fVar26 = fVar30;
                        }
                        fVar23 = pfVar17[6] * fVar21 + fVar23 * pfVar17[7] + fVar25 * pfVar17[8];
                        fVar25 = pfVar17[0xd];
                        fVar21 = -fVar25;
                        if ((-fVar25 <= fVar23) && (fVar21 = fVar25, fVar23 <= fVar25)) {
                          fVar21 = fVar23;
                        }
                        fVar30 = *pfVar17 + pfVar17[3] * fVar26 + pfVar17[6] * fVar21;
                        fVar31 = pfVar17[1] + pfVar17[4] * fVar26 + pfVar17[7] * fVar21;
                        fVar28 = pfVar17[2] + pfVar17[5] * fVar26 + pfVar17[8] * fVar21;
                        fVar26 = fVar1 - fVar30;
                        fVar21 = fVar2 - fVar31;
                        fVar25 = fVar3 - fVar28;
                        fVar23 = SQRT(fVar26 * fVar26 + fVar21 * fVar21 + fVar25 * fVar25);
                        if (fVar23 <= 0.0) {
                          fVar26 = pfVar5[9];
                          fVar21 = pfVar5[10];
                          fVar23 = pfVar5[0xb];
                          if ((((pfVar17[0x16] != 0.0) && (pfVar17[0x16] != 1.4013e-45)) &&
                              (**(long **)(pfVar17 + 0x14) != param_1)) &&
                             ((*(long **)(pfVar17 + 0x14))[1] == param_1)) {
                            fVar26 = -fVar26;
                            fVar21 = -fVar21;
                            fVar23 = -fVar23;
                          }
                        }
                        else {
                          fVar23 = 1.0 / fVar23;
                          fVar26 = fVar23 * fVar26;
                          fVar21 = fVar23 * fVar21;
                          fVar23 = fVar23 * fVar25;
                        }
                        fVar29 = pfVar5[0xe];
                        fVar25 = (float)FUN_034239b8(pfVar17,&local_b8);
                        local_110 = *(undefined8 *)(param_1 + 0x24);
                        local_108 = *(undefined4 *)(param_1 + 0x2c);
                        local_104 = (undefined4)*(undefined8 *)(param_1 + 0x18);
                        uStack_100._0_4_ =
                             (undefined4)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
                        puVar7 = (undefined8 *)FUN_034ebdd8(param_3,1,1);
                        if (puVar7 != (undefined8 *)0x0) {
                          fVar25 = fVar25 * -15.915494 + 100.0;
                          uVar11 = *(undefined8 *)(*(long *)(lVar16 + 8) + 0x78);
                          puVar7[1] = CONCAT44(local_104,local_108);
                          puVar7[2] = uStack_100;
                          *puVar7 = local_110;
                          puVar7[0xc] = uVar11;
                          *(undefined8 *)((long)puVar7 + 0x3c) = 0;
                          *(undefined8 *)((long)puVar7 + 0x44) = 0;
                          *(float *)(puVar7 + 4) = fVar24 + fVar20 * (fVar28 + fVar23 * fVar29);
                          *(float *)(puVar7 + 3) =
                               local_d8 * fVar27 + fVar20 * (fVar30 + fVar26 * fVar29);
                          *(float *)((long)puVar7 + 0x1c) =
                               fStack_d4 * fVar27 + fVar20 * (fVar31 + fVar21 * fVar29);
                          *(float *)((long)puVar7 + 0x4c) = fVar25;
                          *(float *)(puVar7 + 10) = fVar25;
                          *(undefined4 *)(puVar7 + 0xb) = 0xffffffff;
                          *(uint *)((long)puVar7 + 0x5c) = local_12c & 0xff;
                          FUN_03447c20(lVar16,*(undefined8 *)(param_2 + 0x28),puVar7);
                          FUN_034211b4(0,param_1,param_2,9,param_3);
                        }
                      }
                      else {
                        puVar8 = local_120;
                        local_118 = local_d0;
                        fVar26 = fVar4 * fVar4 * fVar4;
LAB_03420e34:
                        FUN_03421358(fVar26,param_1,param_2,pfVar5,local_12c,lVar16,param_3,puVar8);
                      }
                      local_12c = local_12c + 1;
                      goto LAB_03420cf8;
                    }
                    break;
                  }
                  lVar14 = lVar14 + -8;
                  plVar10 = plVar10 + 1;
                } while (lVar14 != 0);
                if (*(char *)(pfVar5 + 0x198) == '\0') goto LAB_03420cd0;
              }
              if (pfVar5[0x2c] == 0.0) goto LAB_03420cd0;
              lVar14 = *(long *)(param_1 + 0x70);
              if (pfVar5[0x16] != 0.0) {
                lVar13 = (ulong)(uint)pfVar5[0x16] << 3;
                plVar10 = *(long **)(pfVar5 + 0x14);
                do {
                  lVar6 = *plVar10;
                  if (*(long *)(lVar6 + 0x70) != lVar14) goto LAB_03420c8c;
                  lVar13 = lVar13 + -8;
                  plVar10 = plVar10 + 1;
                } while (lVar13 != 0);
              }
              lVar6 = 0;
LAB_03420c8c:
              if (((*(long *)(lVar6 + 0x70) ==
                    *(long *)(*(long *)(*(long *)(lVar18 + 8) + 0x58) + 0x68)) ||
                  (lVar13 = FUN_0341f844(lVar6,lVar18), lVar13 == 0)) ||
                 (*(long *)(*(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x80) - 1) * 8 + 0x40) +
                           0x70) != lVar14)) goto LAB_03420cd0;
            }
LAB_03420cf8:
            plVar12 = plVar12 + 1;
          } while (plVar12 !=
                   (long *)(*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 8));
        }
        uVar22 = (ulong)*(uint *)(lVar19 + 0x9c);
      }
      break;
    }
  }
LAB_03420fa0:
  FUN_03421594(uVar22,param_1,param_2,param_3,lVar16);
  return;
}


