/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dfcf5c; name: FUN_00dfcf5c
 */


void FUN_00dfcf5c(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  long *plVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [12];
  float fVar23;
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long local_d8;
  long *plStack_d0;
  undefined4 *local_c8;
  undefined4 local_bc;
  byte local_b8 [64];
  long local_78;
  
  lVar18 = *(long *)(param_1 + 0x30);
  FUN_00c41540(lVar18);
  local_78 = lVar18 + 0x7c;
  uVar10 = *(ulong *)(param_2 + 0x88);
  fVar28 = 1.0;
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & 0x62f9c80d3c6933ea;
    }
    else if (uVar10 < 0x62f9c80d3c6933eb) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = 0x62f9c80d3c6933ea / uVar10;
      }
      uVar13 = 0x62f9c80d3c6933ea - uVar13 * uVar10;
    }
    else {
      uVar13 = 0x62f9c80d3c6933ea;
    }
    plVar16 = *(long **)(*(long *)(param_2 + 0x80) + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0x62f9c80d3c6933ea) {
            if (plVar16[2] == 0x62f9c80d3c6933ea) goto LAB_00dfd09c;
          }
          else if ((plVar16[1] & uVar10 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0x62f9c80d3c6933ea) {
            if (plVar16[2] == 0x62f9c80d3c6933ea) goto LAB_00dfd09c;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar2 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_00dfd0a0:
  fVar24 = 100.0;
  if (fVar28 <= 100.1) {
    fVar24 = fVar28;
  }
  fVar20 = 0.0;
  if (-0.1 <= fVar24) {
    fVar20 = fVar24;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar24) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar28)) {
      bVar6 = fVar28 < 100.1;
      bVar7 = fVar28 == 100.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar20 = fVar28;
  }
  uVar10 = *(ulong *)(param_2 + 0xf0);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & 0xa9467a944c3c2678;
    }
    else if (uVar10 < 0xa9467a944c3c2679) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = 0xa9467a944c3c2678 / uVar10;
      }
      uVar13 = 0xa9467a944c3c2678 - uVar13 * uVar10;
    }
    else {
      uVar13 = 0xa9467a944c3c2678;
    }
    plVar16 = *(long **)(*(long *)(param_2 + 0xe8) + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0xa9467a944c3c2678) {
            if (plVar16[2] == -0x56b9856bb3c3d988) goto LAB_00dfd1e8;
          }
          else if ((plVar16[1] & uVar10 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0xa9467a944c3c2678) {
            if (plVar16[2] == -0x56b9856bb3c3d988) goto LAB_00dfd1e8;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar2 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_00dfd29c:
  puVar5 = PTR_s_Color_047dcf48;
  uVar10 = 0;
LAB_00dfd2e4:
  snprintf((char *)local_b8,0x40,"%s%d",PTR_s_Intensity_047e0fe8,uVar10 & 0xffffffff);
  puVar9 = &DAT_cbf29ce484222645;
  if (local_b8[0] != 0) {
    puVar9 = &DAT_cbf29ce484222645;
    pbVar15 = (byte *)((ulong)local_b8 | 1);
    bVar1 = local_b8[0];
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar1 != 0);
  }
  puVar11 = *(undefined1 **)(param_2 + 0x88);
  fVar28 = 1.0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & (ulong)puVar9);
    }
    else {
      puVar14 = puVar9;
      if (puVar11 <= puVar9) {
        uVar13 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar13 = (ulong)puVar9 / (ulong)puVar11;
        }
        puVar14 = puVar9 + -(uVar13 * (long)puVar11);
      }
    }
    fVar28 = 1.0;
    plVar16 = *(long **)(*(long *)(param_2 + 0x80) + (long)puVar14 * 8);
    if (plVar16 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
      fVar28 = 1.0;
      if (plVar16 != (long *)0x0) {
        if (uVar12 < 2) {
          do {
            if ((undefined1 *)plVar16[1] == puVar9) {
              if ((undefined1 *)plVar16[2] == puVar9) goto LAB_00dfd428;
            }
            else if ((undefined1 *)((ulong)plVar16[1] & (ulong)(puVar11 + -1)) != puVar14) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            puVar17 = (undefined1 *)plVar16[1];
            if (puVar17 == puVar9) {
              if ((undefined1 *)plVar16[2] == puVar9) goto LAB_00dfd428;
            }
            else {
              if (puVar11 <= puVar17) {
                uVar12 = 0;
                if (puVar11 != (undefined1 *)0x0) {
                  uVar12 = (ulong)puVar17 / (ulong)puVar11;
                }
                puVar17 = puVar17 + -(uVar12 * (long)puVar11);
              }
              if (puVar17 != puVar14) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        fVar28 = 1.0;
      }
    }
  }
  goto LAB_00dfd42c;
LAB_00dfd09c:
  fVar28 = *(float *)(plVar16 + 6);
  goto LAB_00dfd0a0;
LAB_00dfd1e8:
  fVar28 = *(float *)(plVar16 + 6);
  fVar24 = *(float *)((long)plVar16 + 0x34);
  fVar23 = *(float *)(plVar16 + 7);
  fVar26 = *(float *)((long)plVar16 + 0x3c);
  fVar27 = 1.0;
  if (fVar26 <= 1.1) {
    fVar27 = fVar26;
  }
  fVar25 = 0.0;
  if (-0.1 <= fVar27) {
    fVar25 = fVar27;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar27) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar26)) {
      bVar6 = fVar26 < 1.1;
      bVar7 = fVar26 == 1.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar25 = fVar26;
  }
  fVar26 = 1.0;
  if (fVar23 <= 1.1) {
    fVar26 = fVar23;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar26) {
    fVar27 = fVar26;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar26) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar23)) {
      bVar6 = fVar23 < 1.1;
      bVar7 = fVar23 == 1.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar27 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar24 <= 1.1) {
    fVar23 = fVar24;
  }
  fVar26 = 0.0;
  if (-0.1 <= fVar23) {
    fVar26 = fVar23;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar23) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar24)) {
      bVar6 = fVar24 < 1.1;
      bVar7 = fVar24 == 1.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar26 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar28 <= 1.1) {
    fVar24 = fVar28;
  }
  fVar23 = 0.0;
  if (-0.1 <= fVar24) {
    fVar23 = fVar24;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar24) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar28)) {
      bVar6 = fVar28 < 1.1;
      bVar7 = fVar28 == 1.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar23 = fVar28;
  }
  auVar22._0_8_ = CONCAT44(fVar20 * fVar26,fVar20 * fVar23);
  auVar22._8_4_ = fVar20 * fVar27;
  auVar22._12_4_ = fVar20 * fVar25;
  *(undefined8 *)(lVar18 + 0x21c) = auVar22._0_8_;
  auVar22 = NEON_ext(auVar22,auVar22,8,1);
  *(long *)(lVar18 + 0x224) = auVar22._0_8_;
  goto LAB_00dfd29c;
LAB_00dfd428:
  fVar28 = *(float *)(plVar16 + 6);
LAB_00dfd42c:
  fVar24 = 100.0;
  if (fVar28 <= 100.1) {
    fVar24 = fVar28;
  }
  fVar20 = 0.0;
  if (-0.1 <= fVar24) {
    fVar20 = fVar24;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar24) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar28)) {
      bVar6 = fVar28 < 100.1;
      bVar7 = fVar28 == 100.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar20 = fVar28;
  }
  snprintf((char *)local_b8,0x40,"%s%d",puVar5,uVar10 & 0xffffffff);
  puVar9 = &DAT_cbf29ce484222645;
  if (local_b8[0] != 0) {
    puVar9 = &DAT_cbf29ce484222645;
    pbVar15 = (byte *)((ulong)local_b8 | 1);
    bVar1 = local_b8[0];
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar1 != 0);
  }
  puVar11 = *(undefined1 **)(param_2 + 0xf0);
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & (ulong)puVar9);
    }
    else {
      puVar14 = puVar9;
      if (puVar11 <= puVar9) {
        uVar13 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar13 = (ulong)puVar9 / (ulong)puVar11;
        }
        puVar14 = puVar9 + -(uVar13 * (long)puVar11);
      }
    }
    plVar16 = *(long **)(*(long *)(param_2 + 0xe8) + (long)puVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar16[1] == puVar9) {
            if ((undefined1 *)plVar16[2] == puVar9) goto LAB_00dfd58c;
          }
          else if ((undefined1 *)((ulong)plVar16[1] & (ulong)(puVar11 + -1)) != puVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          puVar17 = (undefined1 *)plVar16[1];
          if (puVar17 == puVar9) {
            if ((undefined1 *)plVar16[2] == puVar9) goto LAB_00dfd58c;
          }
          else {
            if (puVar11 <= puVar17) {
              uVar12 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar17 / (ulong)puVar11;
              }
              puVar17 = puVar17 + -(uVar12 * (long)puVar11);
            }
            if (puVar17 != puVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_00dfd5a8:
  uVar10 = uVar10 + 1;
  if (uVar10 == 8) goto code_r0x00dfd5b4;
  goto LAB_00dfd2e4;
LAB_00dfd58c:
  lVar18 = local_78 + uVar10 * 0x10;
  auVar19._0_8_ =
       CONCAT44(*(float *)((long)plVar16 + 0x34) * fVar20,*(float *)(plVar16 + 6) * fVar20);
  auVar19._8_4_ = *(float *)(plVar16 + 7) * fVar20;
  auVar19._12_4_ = *(float *)((long)plVar16 + 0x3c) * fVar20;
  auVar22 = NEON_ext(auVar19,auVar19,8,1);
  *(undefined8 *)(lVar18 + 0x1b0) = auVar19._0_8_;
  *(long *)(lVar18 + 0x1b8) = auVar22._0_8_;
  goto LAB_00dfd5a8;
LAB_00dfd774:
  auVar21 = SUB1612(*(undefined1 (*) [16])(plVar16 + 6),0);
  goto LAB_00dfd778;
LAB_00dfd8f0:
  fVar24 = *(float *)(plVar16 + 6);
  goto LAB_00dfd8f4;
LAB_00dfda38:
  fVar28 = *(float *)(plVar16 + 6);
  goto LAB_00dfda3c;
code_r0x00dfd5b4:
  plStack_d0 = &local_78;
  local_c8 = &local_bc;
  fVar28 = 1.0;
  local_bc = 0;
  local_d8 = param_2;
  FUN_00dfdad4(ZEXT816(0x3f800000),&local_d8,0,PTR_s_LightMapColor_047e0ff0,
               PTR_s_LightMapIntensity_047e0ff8,PTR_s_LightMapWeight_047e1000);
  uVar10 = 0;
  FUN_00dfdad4(ZEXT816(0),&local_d8,1,PTR_s_LightMapColor1_047e1008,
               PTR_s_LightMapIntensity1_047e1010,PTR_s_LightMapWeight1_047e1018);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar10;
  FUN_00dfdad4(auVar3 << 0x40,&local_d8,2,PTR_s_LightMapColor2_047e1020,
               PTR_s_LightMapIntensity2_047e1028,PTR_s_LightMapWeight2_047e1030);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  FUN_00dfdad4(auVar4 << 0x40,&local_d8,3,PTR_s_LightMapColor3_047e1038,
               PTR_s_LightMapIntensity3_047e1040,PTR_s_LightMapWeight3_047e1048);
  uVar10 = *(ulong *)(param_2 + 0xf0);
  auVar22 = NEON_fmov(0x3f800000,4);
  auVar21 = auVar22._0_12_;
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & 0x3a289a12d3e36266;
    }
    else if (uVar10 < 0x3a289a12d3e36267) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = 0x3a289a12d3e36266 / uVar10;
      }
      uVar13 = 0x3a289a12d3e36266 - uVar13 * uVar10;
    }
    else {
      uVar13 = 0x3a289a12d3e36266;
    }
    plVar16 = *(long **)(*(long *)(param_2 + 0xe8) + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0x3a289a12d3e36266) {
            if (plVar16[2] == 0x3a289a12d3e36266) goto LAB_00dfd774;
          }
          else if ((plVar16[1] & uVar10 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0x3a289a12d3e36266) {
            if (plVar16[2] == 0x3a289a12d3e36266) goto LAB_00dfd774;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar2 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_00dfd778:
  fVar23 = auVar21._8_4_;
  fVar20 = auVar21._4_4_;
  fVar24 = 1.0;
  if (fVar23 <= 1.1) {
    fVar24 = fVar23;
  }
  fVar26 = 0.0;
  if (-0.1 <= fVar24) {
    fVar26 = fVar24;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar24) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar23)) {
      bVar6 = fVar23 < 1.1;
      bVar7 = fVar23 == 1.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar26 = fVar23;
  }
  fVar24 = 1.0;
  if (fVar20 <= 1.1) {
    fVar24 = fVar20;
  }
  fVar23 = 0.0;
  if (-0.1 <= fVar24) {
    fVar23 = fVar24;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar24) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar20)) {
      bVar6 = fVar20 < 1.1;
      bVar7 = fVar20 == 1.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar23 = fVar20;
  }
  fVar20 = auVar21._0_4_;
  fVar24 = 1.0;
  if (fVar20 <= 1.1) {
    fVar24 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar24) {
    fVar27 = fVar24;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar24) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar20)) {
      bVar6 = fVar20 < 1.1;
      bVar7 = fVar20 == 1.1;
      bVar8 = false;
    }
  }
  uVar10 = *(ulong *)(param_2 + 0x88);
  if (bVar7 || bVar6 != bVar8) {
    fVar27 = fVar20;
  }
  fVar24 = 0.0;
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & 0x4ff92b63a2416df4;
    }
    else if (uVar10 < 0x4ff92b63a2416df5) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = 0x4ff92b63a2416df4 / uVar10;
      }
      uVar13 = 0x4ff92b63a2416df4 - uVar13 * uVar10;
    }
    else {
      uVar13 = 0x4ff92b63a2416df4;
    }
    fVar24 = 0.0;
    plVar16 = *(long **)(*(long *)(param_2 + 0x80) + uVar13 * 8);
    if (plVar16 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
      fVar24 = 0.0;
      if (plVar16 != (long *)0x0) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x4ff92b63a2416df4) {
              if (plVar16[2] == 0x4ff92b63a2416df4) goto LAB_00dfd8f0;
            }
            else if ((plVar16[1] & uVar10 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x4ff92b63a2416df4) {
              if (plVar16[2] == 0x4ff92b63a2416df4) goto LAB_00dfd8f0;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar2 = 0;
                if (uVar10 != 0) {
                  uVar2 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar2 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        fVar24 = 0.0;
      }
    }
  }
LAB_00dfd8f4:
  fVar20 = 1.0;
  if (fVar24 <= 1.1) {
    fVar20 = fVar24;
  }
  fVar25 = 0.0;
  if (-0.1 <= fVar20) {
    fVar25 = fVar20;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar20) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar24)) {
      bVar6 = fVar24 < 1.1;
      bVar7 = fVar24 == 1.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar25 = fVar24;
  }
  *(float *)(local_78 + 0x270) = fVar27;
  *(float *)(local_78 + 0x274) = fVar23;
  *(float *)(local_78 + 0x278) = fVar26;
  *(float *)(local_78 + 0x27c) = fVar25;
  uVar10 = *(ulong *)(param_2 + 0x88);
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & 0x7e215831cb876920;
    }
    else if (uVar10 < 0x7e215831cb876921) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = 0x7e215831cb876920 / uVar10;
      }
      uVar13 = 0x7e215831cb876920 - uVar13 * uVar10;
    }
    else {
      uVar13 = 0x7e215831cb876920;
    }
    plVar16 = *(long **)(*(long *)(param_2 + 0x80) + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0x7e215831cb876920) {
            if (plVar16[2] == 0x7e215831cb876920) goto LAB_00dfda38;
          }
          else if ((plVar16[1] & uVar10 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0x7e215831cb876920) {
            if (plVar16[2] == 0x7e215831cb876920) goto LAB_00dfda38;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar2 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_00dfda3c:
  fVar24 = 100.0;
  if (fVar28 <= 100.1) {
    fVar24 = fVar28;
  }
  fVar20 = 0.0;
  if (-0.1 <= fVar24) {
    fVar20 = fVar24;
  }
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if (-0.1 <= fVar24) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar28)) {
      bVar6 = fVar28 < 100.1;
      bVar7 = fVar28 == 100.1;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar20 = fVar28;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  *(float *)(local_78 + 0x280) = fVar20;
  return;
}


