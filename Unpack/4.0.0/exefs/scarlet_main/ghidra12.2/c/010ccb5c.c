/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ccb5c; name: FUN_010ccb5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010ccb5c(long *param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined1 local_f3;
  undefined2 uStack_f2;
  long local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  lVar10 = *param_1;
  param_1 = param_1 + 1;
  lVar12 = *param_1;
  uVar11 = *(ulong *)(lVar12 + 0x88);
  if (uVar11 == 0) goto LAB_010cd190;
  uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar13 < 2) {
    uVar16 = uVar11 - 1 & 0x44b34656e5a1e1f7;
  }
  else if (uVar11 < 0x44b34656e5a1e1f8) {
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = 0x44b34656e5a1e1f7 / uVar11;
    }
    uVar16 = 0x44b34656e5a1e1f7 - uVar16 * uVar11;
  }
  else {
    uVar16 = 0x44b34656e5a1e1f7;
  }
  plVar14 = *(long **)(*(long *)(lVar12 + 0x80) + uVar16 * 8);
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    uVar15 = uVar11 - 1;
    if (uVar13 < 2) {
      do {
        if (plVar14[1] == 0x44b34656e5a1e1f7) {
          if (plVar14[2] == 0x44b34656e5a1e1f7) goto LAB_010ccc98;
        }
        else if ((plVar14[1] & uVar15) != uVar16) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar17 = plVar14[1];
        if (uVar17 == 0x44b34656e5a1e1f7) {
          if (plVar14[2] == 0x44b34656e5a1e1f7) goto LAB_010ccc98;
        }
        else {
          if (uVar11 <= uVar17) {
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = uVar17 / uVar11;
            }
            uVar17 = uVar17 - uVar3 * uVar11;
          }
          if (uVar17 != uVar16) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    goto LAB_010ccdf0;
  }
  goto LAB_010ccdf4;
LAB_010ccc98:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 1.0;
  if (((1.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  if (uVar13 < 2) {
    uVar16 = uVar15 & 0x6c0b5b566ae36454;
  }
  else if (uVar11 < 0x6c0b5b566ae36455) {
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = 0x6c0b5b566ae36454 / uVar11;
    }
    uVar16 = 0x6c0b5b566ae36454 - uVar16 * uVar11;
  }
  else {
    uVar16 = 0x6c0b5b566ae36454;
  }
  plVar14 = *(long **)(*(long *)(lVar12 + 0x80) + uVar16 * 8);
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar14[1] == 0x6c0b5b566ae36454) {
          if (plVar14[2] == 0x6c0b5b566ae36454) goto LAB_010ccda4;
        }
        else if ((plVar14[1] & uVar15) != uVar16) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar13 = plVar14[1];
        if (uVar13 == 0x6c0b5b566ae36454) {
          if (plVar14[2] == 0x6c0b5b566ae36454) goto LAB_010ccda4;
        }
        else {
          if (uVar11 <= uVar13) {
            uVar15 = 0;
            if (uVar11 != 0) {
              uVar15 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar15 * uVar11;
          }
          if (uVar13 != uVar16) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_010ccdf0:
  if (uVar11 != 0) {
LAB_010ccdf4:
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x173ee12172cc7935;
    }
    else if (uVar11 < 0x173ee12172cc7936) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x173ee12172cc7935 / uVar11;
      }
      uVar16 = 0x173ee12172cc7935 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x173ee12172cc7935;
    }
    plVar14 = *(long **)(*(long *)(lVar12 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x173ee12172cc7935) {
            if (plVar14[2] == 0x173ee12172cc7935) goto LAB_010cceec;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x173ee12172cc7935) {
            if (plVar14[2] == 0x173ee12172cc7935) goto LAB_010cceec;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010ccf50:
      if (uVar11 == 0) goto LAB_010cd190;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x67636b6fd0116193;
    }
    else if (uVar11 < 0x67636b6fd0116194) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x67636b6fd0116193 / uVar11;
      }
      uVar16 = 0x67636b6fd0116193 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x67636b6fd0116193;
    }
    plVar14 = *(long **)(*(long *)(lVar12 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      uVar15 = uVar11 - 1;
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x67636b6fd0116193) {
            if (plVar14[2] == 0x67636b6fd0116193) goto LAB_010cd044;
          }
          else if ((plVar14[1] & uVar15) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar14[1];
          if (uVar17 == 0x67636b6fd0116193) {
            if (plVar14[2] == 0x67636b6fd0116193) goto LAB_010cd044;
          }
          else {
            if (uVar11 <= uVar17) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar17 / uVar11;
              }
              uVar17 = uVar17 - uVar3 * uVar11;
            }
            if (uVar17 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_010cd190;
LAB_010ccda4:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = 5.0;
  if (fVar20 <= 5.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 5.1;
      bVar6 = fVar20 == 5.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(lVar10 + 0x80) = local_a4;
  *(float *)(lVar10 + 0x84) = fVar27;
  lVar12 = *param_1;
  uVar11 = *(ulong *)(lVar12 + 0x88);
  goto LAB_010ccdf0;
LAB_010cceec:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 2.0;
  if (((2.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  *(float *)(lVar10 + 0x88) = local_a4;
  lVar12 = *param_1;
  uVar11 = *(ulong *)(lVar12 + 0x88);
  goto LAB_010ccf50;
LAB_010cd044:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 1.0;
  if (((1.1 < local_a4) || (fVar20 = local_a4, local_a4 < -1.1)) &&
     (local_a4 = -1.0, -1.1 <= fVar20)) {
    local_a4 = fVar20;
  }
  if (uVar13 < 2) {
    uVar16 = uVar15 & 0xa3e290d7c5634fe3;
  }
  else if (uVar11 < 0xa3e290d7c5634fe4) {
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = 0xa3e290d7c5634fe3 / uVar11;
    }
    uVar16 = 0xa3e290d7c5634fe3 - uVar16 * uVar11;
  }
  else {
    uVar16 = 0xa3e290d7c5634fe3;
  }
  plVar14 = *(long **)(*(long *)(lVar12 + 0x80) + uVar16 * 8);
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar14[1] == 0xa3e290d7c5634fe3) {
          if (plVar14[2] == -0x5c1d6f283a9cb01d) goto LAB_010cd150;
        }
        else if ((plVar14[1] & uVar15) != uVar16) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar13 = plVar14[1];
        if (uVar13 == 0xa3e290d7c5634fe3) {
          if (plVar14[2] == -0x5c1d6f283a9cb01d) goto LAB_010cd150;
        }
        else {
          if (uVar11 <= uVar13) {
            uVar15 = 0;
            if (uVar11 != 0) {
              uVar15 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar15 * uVar11;
          }
          if (uVar13 != uVar16) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_010cd190:
  fVar23 = *(float *)(lVar10 + 0x84);
  fVar20 = 0.0;
  fVar29 = fVar23 * 0.299;
  fVar33 = fVar23 * 0.587;
  fVar36 = fVar23 * 0.114;
  fVar23 = *(float *)(lVar10 + 0x80) + (0.0 - *(float *)(lVar10 + 0x80)) * fVar23;
  fVar27 = *(float *)(lVar10 + 0x88);
  fVar47 = (float)_DAT_03caa980;
  fVar48 = (float)((ulong)_DAT_03caa980 >> 0x20);
  fVar49 = (float)_UNK_03caa988;
  fVar50 = (float)((ulong)_UNK_03caa988 >> 0x20);
  fVar24 = fVar27 * -0.169;
  fVar39 = fVar27 * -0.331;
  fVar40 = fVar27 * 0.5;
  fVar42 = fVar27 * -0.419;
  fVar28 = fVar27 * -0.081;
  fVar38 = fVar27 * 0.0 + *(float *)(lVar10 + 0x8c);
  fVar41 = fVar27 * 0.0 + *(float *)(lVar10 + 0x90);
  fVar43 = (float)_DAT_03cab3f0;
  fVar44 = (float)((ulong)_DAT_03cab3f0 >> 0x20);
  fVar45 = (float)_UNK_03cab3f8;
  fVar46 = (float)((ulong)_UNK_03cab3f8 >> 0x20);
  fVar19 = (float)_DAT_03cabfd0;
  fVar34 = (float)((ulong)_DAT_03cabfd0 >> 0x20);
  fVar25 = (float)_UNK_03cabfd8;
  fVar26 = (float)((ulong)_UNK_03cabfd8 >> 0x20);
  fVar27 = (float)_DAT_03cabe50;
  fVar21 = (float)((ulong)_DAT_03cabe50 >> 0x20);
  fVar51 = (float)_UNK_03cabe58;
  fVar52 = (float)((ulong)_UNK_03cabe58 >> 0x20);
  fVar30 = fVar47 * fVar29 + fVar43 * fVar24 + fVar19 * fVar40 + fVar27 * 0.0;
  fVar31 = fVar48 * fVar29 + fVar44 * fVar24 + fVar34 * fVar40 + fVar21 * 0.0;
  uVar32 = CONCAT44(fVar50 * fVar29 + fVar46 * fVar24 + fVar26 * fVar40 + fVar52 * 0.0,
                    fVar49 * fVar29 + fVar45 * fVar24 + fVar25 * fVar40 + fVar51 * 0.0);
  fVar24 = fVar47 * fVar33 + fVar43 * fVar39 + fVar19 * fVar42 + fVar27 * 0.0;
  fVar29 = fVar48 * fVar33 + fVar44 * fVar39 + fVar34 * fVar42 + fVar21 * 0.0;
  uVar35 = CONCAT44(fVar50 * fVar33 + fVar46 * fVar39 + fVar26 * fVar42 + fVar52 * 0.0,
                    fVar49 * fVar33 + fVar45 * fVar39 + fVar25 * fVar42 + fVar51 * 0.0);
  fVar33 = fVar47 * fVar36 + fVar43 * fVar40 + fVar19 * fVar28 + fVar27 * 0.0;
  fVar39 = fVar48 * fVar36 + fVar44 * fVar40 + fVar34 * fVar28 + fVar21 * 0.0;
  uVar37 = CONCAT44(fVar50 * fVar36 + fVar46 * fVar40 + fVar26 * fVar28 + fVar52 * 0.0,
                    fVar49 * fVar36 + fVar45 * fVar40 + fVar25 * fVar28 + fVar51 * 0.0);
  fVar27 = fVar47 * fVar23 + fVar43 * fVar38 + fVar19 * fVar41 + fVar27;
  fVar21 = fVar48 * fVar23 + fVar44 * fVar38 + fVar34 * fVar41 + fVar21;
  uVar22 = CONCAT44(fVar50 * fVar23 + fVar46 * fVar38 + fVar26 * fVar41 + fVar52,
                    fVar49 * fVar23 + fVar45 * fVar38 + fVar25 * fVar41 + fVar51);
  *(undefined8 *)(lVar10 + 0x48) = uVar32;
  *(ulong *)(lVar10 + 0x40) = CONCAT44(fVar31,fVar30);
  *(undefined8 *)(lVar10 + 0x58) = uVar35;
  *(ulong *)(lVar10 + 0x50) = CONCAT44(fVar29,fVar24);
  *(undefined8 *)(lVar10 + 0x68) = uVar37;
  *(ulong *)(lVar10 + 0x60) = CONCAT44(fVar39,fVar33);
  *(undefined8 *)(lVar10 + 0x78) = uVar22;
  *(ulong *)(lVar10 + 0x70) = CONCAT44(fVar21,fVar27);
  *(undefined8 *)(param_2 + 0x108) = uVar32;
  *(ulong *)(param_2 + 0x100) = CONCAT44(fVar31,fVar30);
  *(undefined8 *)(param_2 + 0x118) = uVar35;
  *(ulong *)(param_2 + 0x110) = CONCAT44(fVar29,fVar24);
  *(undefined8 *)(param_2 + 0x128) = uVar37;
  *(ulong *)(param_2 + 0x120) = CONCAT44(fVar39,fVar33);
  *(undefined8 *)(param_2 + 0x138) = uVar22;
  *(ulong *)(param_2 + 0x130) = CONCAT44(fVar21,fVar27);
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xe3026796c03c2402;
    }
    else if (uVar11 < 0xe3026796c03c2403) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xe3026796c03c2402 / uVar11;
      }
      uVar16 = 0xe3026796c03c2402 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xe3026796c03c2402;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xe3026796c03c2402) {
            if (plVar14[2] == -0x1cfd98693fc3dbfe) goto LAB_010cd3a8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xe3026796c03c2402) {
            if (plVar14[2] == -0x1cfd98693fc3dbfe) goto LAB_010cd3a8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cd408:
      if (uVar11 == 0) goto LAB_010cd9a0;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xb32127682c6356aa;
    }
    else if (uVar11 < 0xb32127682c6356ab) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xb32127682c6356aa / uVar11;
      }
      uVar16 = 0xb32127682c6356aa - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xb32127682c6356aa;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xb32127682c6356aa) {
            if (plVar14[2] == -0x4cded897d39ca956) goto LAB_010cd504;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xb32127682c6356aa) {
            if (plVar14[2] == -0x4cded897d39ca956) goto LAB_010cd504;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cd564:
      if (uVar11 == 0) goto LAB_010cd9a0;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xb0de87ea48074fb;
    }
    else if (uVar11 < 0xb0de87ea48074fc) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xb0de87ea48074fb / uVar11;
      }
      uVar16 = 0xb0de87ea48074fb - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xb0de87ea48074fb;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xb0de87ea48074fb) {
            if (plVar14[2] == 0xb0de87ea48074fb) goto LAB_010cd660;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xb0de87ea48074fb) {
            if (plVar14[2] == 0xb0de87ea48074fb) goto LAB_010cd660;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cd674:
      if (uVar11 == 0) goto LAB_010cd9a0;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xa62a02f19af84c7c;
    }
    else if (uVar11 < 0xa62a02f19af84c7d) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xa62a02f19af84c7c / uVar11;
      }
      uVar16 = 0xa62a02f19af84c7c - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xa62a02f19af84c7c;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xa62a02f19af84c7c) {
            if (plVar14[2] == -0x59d5fd0e6507b384) goto LAB_010cd770;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xa62a02f19af84c7c) {
            if (plVar14[2] == -0x59d5fd0e6507b384) goto LAB_010cd770;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cd784:
      if (uVar11 == 0) goto LAB_010cd9a0;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1dd86e3c8ff8c978;
    }
    else if (uVar11 < 0x1dd86e3c8ff8c979) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1dd86e3c8ff8c978 / uVar11;
      }
      uVar16 = 0x1dd86e3c8ff8c978 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1dd86e3c8ff8c978;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1dd86e3c8ff8c978) {
            if (plVar14[2] == 0x1dd86e3c8ff8c978) goto LAB_010cd880;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1dd86e3c8ff8c978) {
            if (plVar14[2] == 0x1dd86e3c8ff8c978) goto LAB_010cd880;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cd894:
      if (uVar11 == 0) goto LAB_010cd9a0;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x5154ad77435bc5e1;
    }
    else if (uVar11 < 0x5154ad77435bc5e2) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x5154ad77435bc5e1 / uVar11;
      }
      uVar16 = 0x5154ad77435bc5e1 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x5154ad77435bc5e1;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x5154ad77435bc5e1) {
            if (plVar14[2] == 0x5154ad77435bc5e1) goto LAB_010cd990;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x5154ad77435bc5e1) {
            if (plVar14[2] == 0x5154ad77435bc5e1) goto LAB_010cd990;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cd9a0:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd12534fb0aa3d924;
    }
    else if (uVar11 < 0xd12534fb0aa3d925) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd12534fb0aa3d924 / uVar11;
      }
      uVar16 = 0xd12534fb0aa3d924 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd12534fb0aa3d924;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd12534fb0aa3d924) {
            if (plVar14[2] == -0x2edacb04f55c26dc) goto LAB_010cdaa0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd12534fb0aa3d924) {
            if (plVar14[2] == -0x2edacb04f55c26dc) goto LAB_010cdaa0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cdb38:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1c866ca494067876;
    }
    else if (uVar11 < 0x1c866ca494067877) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1c866ca494067876 / uVar11;
      }
      uVar16 = 0x1c866ca494067876 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1c866ca494067876;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1c866ca494067876) {
            if (plVar14[2] == 0x1c866ca494067876) goto LAB_010cdc38;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1c866ca494067876) {
            if (plVar14[2] == 0x1c866ca494067876) goto LAB_010cdc38;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cdc44:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd12535fb0aa3dad7;
    }
    else if (uVar11 < 0xd12535fb0aa3dad8) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd12535fb0aa3dad7 / uVar11;
      }
      uVar16 = 0xd12535fb0aa3dad7 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd12535fb0aa3dad7;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd12535fb0aa3dad7) {
            if (plVar14[2] == -0x2edaca04f55c2529) goto LAB_010cdd44;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd12535fb0aa3dad7) {
            if (plVar14[2] == -0x2edaca04f55c2529) goto LAB_010cdd44;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cdddc:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1c866da494067a29;
    }
    else if (uVar11 < 0x1c866da494067a2a) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1c866da494067a29 / uVar11;
      }
      uVar16 = 0x1c866da494067a29 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1c866da494067a29;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1c866da494067a29) {
            if (plVar14[2] == 0x1c866da494067a29) goto LAB_010cdedc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1c866da494067a29) {
            if (plVar14[2] == 0x1c866da494067a29) goto LAB_010cdedc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cdee8:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd12536fb0aa3dc8a;
    }
    else if (uVar11 < 0xd12536fb0aa3dc8b) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd12536fb0aa3dc8a / uVar11;
      }
      uVar16 = 0xd12536fb0aa3dc8a - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd12536fb0aa3dc8a;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd12536fb0aa3dc8a) {
            if (plVar14[2] == -0x2edac904f55c2376) goto LAB_010cdfe8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd12536fb0aa3dc8a) {
            if (plVar14[2] == -0x2edac904f55c2376) goto LAB_010cdfe8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ce080:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1c866aa494067510;
    }
    else if (uVar11 < 0x1c866aa494067511) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1c866aa494067510 / uVar11;
      }
      uVar16 = 0x1c866aa494067510 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1c866aa494067510;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1c866aa494067510) {
            if (plVar14[2] == 0x1c866aa494067510) goto LAB_010ce180;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1c866aa494067510) {
            if (plVar14[2] == 0x1c866aa494067510) goto LAB_010ce180;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ce18c:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd12537fb0aa3de3d;
    }
    else if (uVar11 < 0xd12537fb0aa3de3e) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd12537fb0aa3de3d / uVar11;
      }
      uVar16 = 0xd12537fb0aa3de3d - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd12537fb0aa3de3d;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd12537fb0aa3de3d) {
            if (plVar14[2] == -0x2edac804f55c21c3) goto LAB_010ce28c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd12537fb0aa3de3d) {
            if (plVar14[2] == -0x2edac804f55c21c3) goto LAB_010ce28c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ce324:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1c866ba4940676c3;
    }
    else if (uVar11 < 0x1c866ba4940676c4) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1c866ba4940676c3 / uVar11;
      }
      uVar16 = 0x1c866ba4940676c3 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1c866ba4940676c3;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1c866ba4940676c3) {
            if (plVar14[2] == 0x1c866ba4940676c3) goto LAB_010ce424;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1c866ba4940676c3) {
            if (plVar14[2] == 0x1c866ba4940676c3) goto LAB_010ce424;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ce430:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd12530fb0aa3d258;
    }
    else if (uVar11 < 0xd12530fb0aa3d259) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd12530fb0aa3d258 / uVar11;
      }
      uVar16 = 0xd12530fb0aa3d258 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd12530fb0aa3d258;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd12530fb0aa3d258) {
            if (plVar14[2] == -0x2edacf04f55c2da8) goto LAB_010ce530;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd12530fb0aa3d258) {
            if (plVar14[2] == -0x2edacf04f55c2da8) goto LAB_010ce530;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ce5c8:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1c8670a494067f42;
    }
    else if (uVar11 < 0x1c8670a494067f43) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1c8670a494067f42 / uVar11;
      }
      uVar16 = 0x1c8670a494067f42 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1c8670a494067f42;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1c8670a494067f42) {
            if (plVar14[2] == 0x1c8670a494067f42) goto LAB_010ce6c8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1c8670a494067f42) {
            if (plVar14[2] == 0x1c8670a494067f42) goto LAB_010ce6c8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ce6d4:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd12531fb0aa3d40b;
    }
    else if (uVar11 < 0xd12531fb0aa3d40c) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd12531fb0aa3d40b / uVar11;
      }
      uVar16 = 0xd12531fb0aa3d40b - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd12531fb0aa3d40b;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd12531fb0aa3d40b) {
            if (plVar14[2] == -0x2edace04f55c2bf5) goto LAB_010ce7d4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd12531fb0aa3d40b) {
            if (plVar14[2] == -0x2edace04f55c2bf5) goto LAB_010ce7d4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ce86c:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1c8671a4940680f5;
    }
    else if (uVar11 < 0x1c8671a4940680f6) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1c8671a4940680f5 / uVar11;
      }
      uVar16 = 0x1c8671a4940680f5 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1c8671a4940680f5;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1c8671a4940680f5) {
            if (plVar14[2] == 0x1c8671a4940680f5) goto LAB_010ce96c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1c8671a4940680f5) {
            if (plVar14[2] == 0x1c8671a4940680f5) goto LAB_010ce96c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ce978:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd12532fb0aa3d5be;
    }
    else if (uVar11 < 0xd12532fb0aa3d5bf) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd12532fb0aa3d5be / uVar11;
      }
      uVar16 = 0xd12532fb0aa3d5be - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd12532fb0aa3d5be;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd12532fb0aa3d5be) {
            if (plVar14[2] == -0x2edacd04f55c2a42) goto LAB_010cea78;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd12532fb0aa3d5be) {
            if (plVar14[2] == -0x2edacd04f55c2a42) goto LAB_010cea78;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ceb10:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1c866ea494067bdc;
    }
    else if (uVar11 < 0x1c866ea494067bdd) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1c866ea494067bdc / uVar11;
      }
      uVar16 = 0x1c866ea494067bdc - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1c866ea494067bdc;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1c866ea494067bdc) {
            if (plVar14[2] == 0x1c866ea494067bdc) goto LAB_010cec10;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1c866ea494067bdc) {
            if (plVar14[2] == 0x1c866ea494067bdc) goto LAB_010cec10;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cec1c:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd12533fb0aa3d771;
    }
    else if (uVar11 < 0xd12533fb0aa3d772) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd12533fb0aa3d771 / uVar11;
      }
      uVar16 = 0xd12533fb0aa3d771 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd12533fb0aa3d771;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd12533fb0aa3d771) {
            if (plVar14[2] == -0x2edacc04f55c288f) goto LAB_010ced1c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd12533fb0aa3d771) {
            if (plVar14[2] == -0x2edacc04f55c288f) goto LAB_010ced1c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cedb4:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1c866fa494067d8f;
    }
    else if (uVar11 < 0x1c866fa494067d90) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1c866fa494067d8f / uVar11;
      }
      uVar16 = 0x1c866fa494067d8f - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1c866fa494067d8f;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1c866fa494067d8f) {
            if (plVar14[2] == 0x1c866fa494067d8f) goto LAB_010ceeb4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1c866fa494067d8f) {
            if (plVar14[2] == 0x1c866fa494067d8f) goto LAB_010ceeb4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010ceec0:
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 == 0) {
LAB_010d6ca4:
    fVar23 = 1.0;
  }
  else {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x8b324e1f694d5754;
    }
    else if (uVar11 < 0x8b324e1f694d5755) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x8b324e1f694d5754 / uVar11;
      }
      uVar16 = 0x8b324e1f694d5754 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x8b324e1f694d5754;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x8b324e1f694d5754) {
            if (plVar14[2] == -0x74cdb1e096b2a8ac) goto LAB_010cefc8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x8b324e1f694d5754) {
            if (plVar14[2] == -0x74cdb1e096b2a8ac) goto LAB_010cefc8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cefdc:
      if (uVar11 == 0) goto LAB_010d6ca4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1fc2b099c5c487a0;
    }
    else if (uVar11 < 0x1fc2b099c5c487a1) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1fc2b099c5c487a0 / uVar11;
      }
      uVar16 = 0x1fc2b099c5c487a0 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1fc2b099c5c487a0;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1fc2b099c5c487a0) {
            if (plVar14[2] == 0x1fc2b099c5c487a0) goto LAB_010cf0d8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1fc2b099c5c487a0) {
            if (plVar14[2] == 0x1fc2b099c5c487a0) goto LAB_010cf0d8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cf138:
      if (uVar11 == 0) goto LAB_010d6ca4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x221a6f6ddbbb59d7;
    }
    else if (uVar11 < 0x221a6f6ddbbb59d8) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x221a6f6ddbbb59d7 / uVar11;
      }
      uVar16 = 0x221a6f6ddbbb59d7 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x221a6f6ddbbb59d7;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x221a6f6ddbbb59d7) {
            if (plVar14[2] == 0x221a6f6ddbbb59d7) goto LAB_010cf234;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x221a6f6ddbbb59d7) {
            if (plVar14[2] == 0x221a6f6ddbbb59d7) goto LAB_010cf234;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cf248:
      if (uVar11 == 0) goto LAB_010d6ca4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xa639ae62a7245281;
    }
    else if (uVar11 < 0xa639ae62a7245282) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xa639ae62a7245281 / uVar11;
      }
      uVar16 = 0xa639ae62a7245281 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xa639ae62a7245281;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xa639ae62a7245281) {
            if (plVar14[2] == -0x59c6519d58dbad7f) goto LAB_010cf344;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xa639ae62a7245281) {
            if (plVar14[2] == -0x59c6519d58dbad7f) goto LAB_010cf344;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cf3a4:
      if (uVar11 == 0) goto LAB_010d6ca4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x30a733607634d215;
    }
    else if (uVar11 < 0x30a733607634d216) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x30a733607634d215 / uVar11;
      }
      uVar16 = 0x30a733607634d215 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x30a733607634d215;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x30a733607634d215) {
            if (plVar14[2] == 0x30a733607634d215) goto LAB_010cf4a0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x30a733607634d215) {
            if (plVar14[2] == 0x30a733607634d215) goto LAB_010cf4a0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cf500:
      if (uVar11 == 0) goto LAB_010d6ca4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x92ca7a8db907e0f3;
    }
    else if (uVar11 < 0x92ca7a8db907e0f4) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x92ca7a8db907e0f3 / uVar11;
      }
      uVar16 = 0x92ca7a8db907e0f3 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x92ca7a8db907e0f3;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x92ca7a8db907e0f3) {
            if (plVar14[2] == -0x6d35857246f81f0d) goto LAB_010cf5fc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x92ca7a8db907e0f3) {
            if (plVar14[2] == -0x6d35857246f81f0d) goto LAB_010cf5fc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cf65c:
      if (uVar11 == 0) goto LAB_010d6ca4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x2a12cad2b4ed1be0;
    }
    else if (uVar11 < 0x2a12cad2b4ed1be1) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x2a12cad2b4ed1be0 / uVar11;
      }
      uVar16 = 0x2a12cad2b4ed1be0 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x2a12cad2b4ed1be0;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_010d6ca4;
    if (uVar13 < 2) {
      fVar23 = 1.0;
      do {
        if (plVar14[1] == 0x2a12cad2b4ed1be0) {
          if (plVar14[2] == 0x2a12cad2b4ed1be0) goto LAB_010cf760;
        }
        else if ((plVar14[1] & uVar11 - 1) != uVar16) goto LAB_010d6ca4;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    else {
      fVar23 = 1.0;
      do {
        uVar13 = plVar14[1];
        if (uVar13 == 0x2a12cad2b4ed1be0) {
          if (plVar14[2] == 0x2a12cad2b4ed1be0) goto LAB_010cf760;
        }
        else {
          if (uVar11 <= uVar13) {
            uVar15 = 0;
            if (uVar11 != 0) {
              uVar15 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar15 * uVar11;
          }
          if (uVar13 != uVar16) goto LAB_010d6ca4;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_010cf7a0:
  plVar14 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  local_100 = 2.0247294e+36;
  uStack_fc = 0x448e64fd;
  uStack_f8 = SUB84(PTR_s_ExposureAdjust_047e11c0,0);
  uStack_f4 = (undefined1)((ulong)PTR_s_ExposureAdjust_047e11c0 >> 0x20);
  local_f3 = (undefined1)((ulong)PTR_s_ExposureAdjust_047e11c0 >> 0x28);
  uStack_f2 = (undefined2)((ulong)PTR_s_ExposureAdjust_047e11c0 >> 0x30);
  local_f0 = 0x1f;
  local_e8 = (long *)0x0;
  uVar11 = (**(code **)(*plVar14 + 0x38))(plVar14,&local_100,&local_a4);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if ((uVar11 & 1) != 0) {
    *(float *)(param_2 + 0x28c) = local_a4 + fVar23;
  }
  uVar11 = *(ulong *)(*param_1 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1cd334a34d1f252a;
    }
    else if (uVar11 < 0x1cd334a34d1f252b) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1cd334a34d1f252a / uVar11;
      }
      uVar16 = 0x1cd334a34d1f252a - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1cd334a34d1f252a;
    }
    plVar14 = *(long **)(*(long *)(*param_1 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1cd334a34d1f252a) {
            if (plVar14[2] == 0x1cd334a34d1f252a) goto LAB_010cf904;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1cd334a34d1f252a) {
            if (plVar14[2] == 0x1cd334a34d1f252a) goto LAB_010cf904;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cf95c:
  fVar23 = *(float *)(param_2 + 0x28c);
  if (fVar23 <= 0.0001) {
    fVar23 = 0.0001;
  }
  *(float *)(param_2 + 0xe38) = 1.0 / fVar23;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc9fad057a2c34351;
    }
    else if (uVar11 < 0xc9fad057a2c34352) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc9fad057a2c34351 / uVar11;
      }
      uVar16 = 0xc9fad057a2c34351 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc9fad057a2c34351;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc9fad057a2c34351) {
            if (plVar14[2] == -0x36052fa85d3cbcaf) goto LAB_010cfa7c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc9fad057a2c34351) {
            if (plVar14[2] == -0x36052fa85d3cbcaf) goto LAB_010cfa7c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cfa90:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xe6fd2031c62c8ef4;
    }
    else if (uVar11 < 0xe6fd2031c62c8ef5) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xe6fd2031c62c8ef4 / uVar11;
      }
      uVar16 = 0xe6fd2031c62c8ef4 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xe6fd2031c62c8ef4;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xe6fd2031c62c8ef4) {
            if (plVar14[2] == -0x1902dfce39d3710c) goto LAB_010cfb90;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xe6fd2031c62c8ef4) {
            if (plVar14[2] == -0x1902dfce39d3710c) goto LAB_010cfb90;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cfba0:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc309d36d4ed286be;
    }
    else if (uVar11 < 0xc309d36d4ed286bf) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc309d36d4ed286be / uVar11;
      }
      uVar16 = 0xc309d36d4ed286be - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc309d36d4ed286be;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc309d36d4ed286be) {
            if (plVar14[2] == -0x3cf62c92b12d7942) goto LAB_010cfca0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc309d36d4ed286be) {
            if (plVar14[2] == -0x3cf62c92b12d7942) goto LAB_010cfca0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010cfcb4:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 == 0) {
LAB_010d6fcc:
    local_a4 = 1.0;
  }
  else {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x9b34fd5ec09a1aef;
    }
    else if (uVar11 < 0x9b34fd5ec09a1af0) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x9b34fd5ec09a1aef / uVar11;
      }
      uVar16 = 0x9b34fd5ec09a1aef - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x9b34fd5ec09a1aef;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x9b34fd5ec09a1aef) {
            if (plVar14[2] == -0x64cb02a13f65e511) goto LAB_010cfdb4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x9b34fd5ec09a1aef) {
            if (plVar14[2] == -0x64cb02a13f65e511) goto LAB_010cfdb4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cfdc8:
      if (uVar11 == 0) goto LAB_010d6fcc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xb9e8f418667e6ab9;
    }
    else if (uVar11 < 0xb9e8f418667e6aba) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xb9e8f418667e6ab9 / uVar11;
      }
      uVar16 = 0xb9e8f418667e6ab9 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xb9e8f418667e6ab9;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xb9e8f418667e6ab9) {
            if (plVar14[2] == -0x46170be799819547) goto LAB_010cfecc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xb9e8f418667e6ab9) {
            if (plVar14[2] == -0x46170be799819547) goto LAB_010cfecc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010cff44:
      if (uVar11 == 0) goto LAB_010d6fcc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x925ee7fee0f1e336;
    }
    else if (uVar11 < 0x925ee7fee0f1e337) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x925ee7fee0f1e336 / uVar11;
      }
      uVar16 = 0x925ee7fee0f1e336 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x925ee7fee0f1e336;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x925ee7fee0f1e336) {
            if (plVar14[2] == -0x6da118011f0e1cca) goto LAB_010d0040;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x925ee7fee0f1e336) {
            if (plVar14[2] == -0x6da118011f0e1cca) goto LAB_010d0040;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d00a0:
      local_a4 = 1.0;
      if (uVar11 == 0) goto LAB_010d01b0;
    }
    local_a4 = 1.0;
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x93ef53e3a2189598;
    }
    else if (uVar11 < 0x93ef53e3a2189599) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x93ef53e3a2189598 / uVar11;
      }
      uVar16 = 0x93ef53e3a2189598 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x93ef53e3a2189598;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x93ef53e3a2189598) {
            if (plVar14[2] == -0x6c10ac1c5de76a68) goto LAB_010d01a4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x93ef53e3a2189598) {
            if (plVar14[2] == -0x6c10ac1c5de76a68) goto LAB_010d01a4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d01b0:
  fVar23 = 10.0;
  if (((10.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) &&
     (local_a4 = 0.0, -0.1 <= fVar23)) {
    local_a4 = fVar23;
  }
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xb5778272f020c7;
    }
    else if (uVar11 < 0xb5778272f020c8) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xb5778272f020c7 / uVar11;
      }
      uVar16 = 0xb5778272f020c7 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xb5778272f020c7;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xb5778272f020c7) {
            if (plVar14[2] == 0xb5778272f020c7) goto LAB_010d02f8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xb5778272f020c7) {
            if (plVar14[2] == 0xb5778272f020c7) goto LAB_010d02f8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d03a0:
      if (uVar11 == 0) goto LAB_010d109c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x10696d7ffdebd19b;
    }
    else if (uVar11 < 0x10696d7ffdebd19c) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x10696d7ffdebd19b / uVar11;
      }
      uVar16 = 0x10696d7ffdebd19b - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x10696d7ffdebd19b;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x10696d7ffdebd19b) {
            if (plVar14[2] == 0x10696d7ffdebd19b) goto LAB_010d049c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x10696d7ffdebd19b) {
            if (plVar14[2] == 0x10696d7ffdebd19b) goto LAB_010d049c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d0540:
      if (uVar11 == 0) goto LAB_010d109c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x10696c7ffdebcfe8;
    }
    else if (uVar11 < 0x10696c7ffdebcfe9) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x10696c7ffdebcfe8 / uVar11;
      }
      uVar16 = 0x10696c7ffdebcfe8 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x10696c7ffdebcfe8;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x10696c7ffdebcfe8) {
            if (plVar14[2] == 0x10696c7ffdebcfe8) goto LAB_010d063c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x10696c7ffdebcfe8) {
            if (plVar14[2] == 0x10696c7ffdebcfe8) goto LAB_010d063c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d06e0:
      if (uVar11 == 0) goto LAB_010d109c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x10696f7ffdebd501;
    }
    else if (uVar11 < 0x10696f7ffdebd502) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x10696f7ffdebd501 / uVar11;
      }
      uVar16 = 0x10696f7ffdebd501 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x10696f7ffdebd501;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x10696f7ffdebd501) {
            if (plVar14[2] == 0x10696f7ffdebd501) goto LAB_010d07dc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x10696f7ffdebd501) {
            if (plVar14[2] == 0x10696f7ffdebd501) goto LAB_010d07dc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d0880:
      if (uVar11 == 0) goto LAB_010d109c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x10696e7ffdebd34e;
    }
    else if (uVar11 < 0x10696e7ffdebd34f) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x10696e7ffdebd34e / uVar11;
      }
      uVar16 = 0x10696e7ffdebd34e - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x10696e7ffdebd34e;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x10696e7ffdebd34e) {
            if (plVar14[2] == 0x10696e7ffdebd34e) goto LAB_010d097c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x10696e7ffdebd34e) {
            if (plVar14[2] == 0x10696e7ffdebd34e) goto LAB_010d097c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d0a20:
      if (uVar11 == 0) goto LAB_010d109c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1069717ffdebd867;
    }
    else if (uVar11 < 0x1069717ffdebd868) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1069717ffdebd867 / uVar11;
      }
      uVar16 = 0x1069717ffdebd867 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1069717ffdebd867;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1069717ffdebd867) {
            if (plVar14[2] == 0x1069717ffdebd867) goto LAB_010d0b1c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1069717ffdebd867) {
            if (plVar14[2] == 0x1069717ffdebd867) goto LAB_010d0b1c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d0bc0:
      if (uVar11 == 0) goto LAB_010d109c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1069707ffdebd6b4;
    }
    else if (uVar11 < 0x1069707ffdebd6b5) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1069707ffdebd6b4 / uVar11;
      }
      uVar16 = 0x1069707ffdebd6b4 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1069707ffdebd6b4;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1069707ffdebd6b4) {
            if (plVar14[2] == 0x1069707ffdebd6b4) goto LAB_010d0cbc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1069707ffdebd6b4) {
            if (plVar14[2] == 0x1069707ffdebd6b4) goto LAB_010d0cbc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d0d60:
      if (uVar11 == 0) goto LAB_010d109c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1069737ffdebdbcd;
    }
    else if (uVar11 < 0x1069737ffdebdbce) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1069737ffdebdbcd / uVar11;
      }
      uVar16 = 0x1069737ffdebdbcd - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1069737ffdebdbcd;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1069737ffdebdbcd) {
            if (plVar14[2] == 0x1069737ffdebdbcd) goto LAB_010d0e5c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1069737ffdebdbcd) {
            if (plVar14[2] == 0x1069737ffdebdbcd) goto LAB_010d0e5c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d0f00:
      if (uVar11 == 0) goto LAB_010d109c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1069727ffdebda1a;
    }
    else if (uVar11 < 0x1069727ffdebda1b) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1069727ffdebda1a / uVar11;
      }
      uVar16 = 0x1069727ffdebda1a - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1069727ffdebda1a;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1069727ffdebda1a) {
            if (plVar14[2] == 0x1069727ffdebda1a) goto LAB_010d0ffc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1069727ffdebda1a) {
            if (plVar14[2] == 0x1069727ffdebda1a) goto LAB_010d0ffc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d109c:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 == 0) {
LAB_010d6fbc:
    fVar23 = 0.0;
LAB_010d1844:
    fVar21 = 1.0 / (1.0 - fVar23);
    fVar27 = fVar20 * 0.01;
  }
  else {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x11f56a7beb995209;
    }
    else if (uVar11 < 0x11f56a7beb99520a) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x11f56a7beb995209 / uVar11;
      }
      uVar16 = 0x11f56a7beb995209 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x11f56a7beb995209;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x11f56a7beb995209) {
            if (plVar14[2] == 0x11f56a7beb995209) goto LAB_010d119c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x11f56a7beb995209) {
            if (plVar14[2] == 0x11f56a7beb995209) goto LAB_010d119c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d1200:
      if (uVar11 == 0) goto LAB_010d6fbc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x35f1021a5237592b;
    }
    else if (uVar11 < 0x35f1021a5237592c) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x35f1021a5237592b / uVar11;
      }
      uVar16 = 0x35f1021a5237592b - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x35f1021a5237592b;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x35f1021a5237592b) {
            if (plVar14[2] == 0x35f1021a5237592b) goto LAB_010d12fc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x35f1021a5237592b) {
            if (plVar14[2] == 0x35f1021a5237592b) goto LAB_010d12fc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d1360:
      if (uVar11 == 0) goto LAB_010d6fbc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xa7dfbf36f71ce130;
    }
    else if (uVar11 < 0xa7dfbf36f71ce131) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xa7dfbf36f71ce130 / uVar11;
      }
      uVar16 = 0xa7dfbf36f71ce130 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xa7dfbf36f71ce130;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xa7dfbf36f71ce130) {
            if (plVar14[2] == -0x582040c908e31ed0) goto LAB_010d145c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xa7dfbf36f71ce130) {
            if (plVar14[2] == -0x582040c908e31ed0) goto LAB_010d145c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d14c0:
      if (uVar11 == 0) goto LAB_010d6fbc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x9ec97b2acb7da6bd;
    }
    else if (uVar11 < 0x9ec97b2acb7da6be) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x9ec97b2acb7da6bd / uVar11;
      }
      uVar16 = 0x9ec97b2acb7da6bd - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x9ec97b2acb7da6bd;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x9ec97b2acb7da6bd) {
            if (plVar14[2] == -0x613684d534825943) goto LAB_010d15bc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x9ec97b2acb7da6bd) {
            if (plVar14[2] == -0x613684d534825943) goto LAB_010d15bc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d1628:
      fVar23 = 0.0;
      if (uVar11 == 0) goto LAB_010d1844;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x10634bf941e9f9e1;
    }
    else if (uVar11 < 0x10634bf941e9f9e2) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x10634bf941e9f9e1 / uVar11;
      }
      uVar16 = 0x10634bf941e9f9e1 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x10634bf941e9f9e1;
    }
    fVar23 = 0.0;
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x10634bf941e9f9e1) {
            if (plVar14[2] == 0x10634bf941e9f9e1) goto LAB_010d172c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x10634bf941e9f9e1) {
            if (plVar14[2] == 0x10634bf941e9f9e1) goto LAB_010d172c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
LAB_010d1730:
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x713acbba0cef5037;
    }
    else if (uVar11 < 0x713acbba0cef5038) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x713acbba0cef5037 / uVar11;
      }
      uVar16 = 0x713acbba0cef5037 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x713acbba0cef5037;
    }
    fVar27 = 0.0;
    fVar20 = 0.0;
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if (plVar14 != (long *)0x0) {
      plVar14 = (long *)*plVar14;
      fVar20 = 0.0;
      if (plVar14 != (long *)0x0) {
        if (uVar13 < 2) {
          do {
            if (plVar14[1] == 0x713acbba0cef5037) {
              if (plVar14[2] == 0x713acbba0cef5037) goto LAB_010d1834;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar14[1];
            if (uVar13 == 0x713acbba0cef5037) {
              if (plVar14[2] == 0x713acbba0cef5037) goto LAB_010d1834;
            }
            else {
              if (uVar11 <= uVar13) {
                uVar15 = 0;
                if (uVar11 != 0) {
                  uVar15 = uVar13 / uVar11;
                }
                uVar13 = uVar13 - uVar15 * uVar11;
              }
              if (uVar13 != uVar16) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        fVar20 = 0.0;
      }
    }
LAB_010d1838:
    fVar21 = 1.0;
    if (fVar23 < 1.0) goto LAB_010d1844;
  }
  *(float *)(param_2 + 0x380) = fVar21 * fVar27 * 1.029;
  *(float *)(param_2 + 900) = fVar21 * fVar27 * 0.5935999;
  *(float *)(param_2 + 0x388) = fVar23;
  *(undefined4 *)(param_2 + 0x38c) = 0;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x3a83ccb1fa6d5a14;
    }
    else if (uVar11 < 0x3a83ccb1fa6d5a15) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x3a83ccb1fa6d5a14 / uVar11;
      }
      uVar16 = 0x3a83ccb1fa6d5a14 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x3a83ccb1fa6d5a14;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x3a83ccb1fa6d5a14) {
            if (plVar14[2] == 0x3a83ccb1fa6d5a14) goto LAB_010d199c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x3a83ccb1fa6d5a14) {
            if (plVar14[2] == 0x3a83ccb1fa6d5a14) goto LAB_010d199c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d1a44:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xdbb03f68f258ef1e;
    }
    else if (uVar11 < 0xdbb03f68f258ef1f) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xdbb03f68f258ef1e / uVar11;
      }
      uVar16 = 0xdbb03f68f258ef1e - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xdbb03f68f258ef1e;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xdbb03f68f258ef1e) {
            if (plVar14[2] == -0x244fc0970da710e2) goto LAB_010d1b40;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xdbb03f68f258ef1e) {
            if (plVar14[2] == -0x244fc0970da710e2) goto LAB_010d1b40;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d1be8:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xe64cb18de2185b37;
    }
    else if (uVar11 < 0xe64cb18de2185b38) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xe64cb18de2185b37 / uVar11;
      }
      uVar16 = 0xe64cb18de2185b37 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xe64cb18de2185b37;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xe64cb18de2185b37) {
            if (plVar14[2] == -0x19b34e721de7a4c9) goto LAB_010d1ce4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xe64cb18de2185b37) {
            if (plVar14[2] == -0x19b34e721de7a4c9) goto LAB_010d1ce4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d1d8c:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x9ef53ed6d547097b;
    }
    else if (uVar11 < 0x9ef53ed6d547097c) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x9ef53ed6d547097b / uVar11;
      }
      uVar16 = 0x9ef53ed6d547097b - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x9ef53ed6d547097b;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x9ef53ed6d547097b) {
            if (plVar14[2] == -0x610ac1292ab8f685) goto LAB_010d1e88;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x9ef53ed6d547097b) {
            if (plVar14[2] == -0x610ac1292ab8f685) goto LAB_010d1e88;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d1f30:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc6b3aad9d3c0cb8f;
    }
    else if (uVar11 < 0xc6b3aad9d3c0cb90) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc6b3aad9d3c0cb8f / uVar11;
      }
      uVar16 = 0xc6b3aad9d3c0cb8f - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc6b3aad9d3c0cb8f;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc6b3aad9d3c0cb8f) {
            if (plVar14[2] == -0x394c55262c3f3471) goto LAB_010d202c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc6b3aad9d3c0cb8f) {
            if (plVar14[2] == -0x394c55262c3f3471) goto LAB_010d202c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d20d4:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1bcd15e8246d2fd7;
    }
    else if (uVar11 < 0x1bcd15e8246d2fd8) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1bcd15e8246d2fd7 / uVar11;
      }
      uVar16 = 0x1bcd15e8246d2fd7 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1bcd15e8246d2fd7;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1bcd15e8246d2fd7) {
            if (plVar14[2] == 0x1bcd15e8246d2fd7) goto LAB_010d21d0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1bcd15e8246d2fd7) {
            if (plVar14[2] == 0x1bcd15e8246d2fd7) goto LAB_010d21d0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d2278:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xb99fc66bdbdbc7b1;
    }
    else if (uVar11 < 0xb99fc66bdbdbc7b2) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xb99fc66bdbdbc7b1 / uVar11;
      }
      uVar16 = 0xb99fc66bdbdbc7b1 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xb99fc66bdbdbc7b1;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xb99fc66bdbdbc7b1) {
            if (plVar14[2] == -0x466039942424384f) goto LAB_010d2374;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xb99fc66bdbdbc7b1) {
            if (plVar14[2] == -0x466039942424384f) goto LAB_010d2374;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d241c:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x9e476ec75352de14;
    }
    else if (uVar11 < 0x9e476ec75352de15) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x9e476ec75352de14 / uVar11;
      }
      uVar16 = 0x9e476ec75352de14 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x9e476ec75352de14;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x9e476ec75352de14) {
            if (plVar14[2] == -0x61b89138acad21ec) goto LAB_010d2518;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x9e476ec75352de14) {
            if (plVar14[2] == -0x61b89138acad21ec) goto LAB_010d2518;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d25c0:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x30ecb5ef643da610;
    }
    else if (uVar11 < 0x30ecb5ef643da611) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x30ecb5ef643da610 / uVar11;
      }
      uVar16 = 0x30ecb5ef643da610 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x30ecb5ef643da610;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x30ecb5ef643da610) {
            if (plVar14[2] == 0x30ecb5ef643da610) goto LAB_010d26bc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x30ecb5ef643da610) {
            if (plVar14[2] == 0x30ecb5ef643da610) goto LAB_010d26bc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d2764:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x428d38b3ab3b069c;
    }
    else if (uVar11 < 0x428d38b3ab3b069d) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x428d38b3ab3b069c / uVar11;
      }
      uVar16 = 0x428d38b3ab3b069c - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x428d38b3ab3b069c;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x428d38b3ab3b069c) {
            if (plVar14[2] == 0x428d38b3ab3b069c) goto LAB_010d2860;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x428d38b3ab3b069c) {
            if (plVar14[2] == 0x428d38b3ab3b069c) goto LAB_010d2860;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d2908:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x21e762667989a99e;
    }
    else if (uVar11 < 0x21e762667989a99f) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x21e762667989a99e / uVar11;
      }
      uVar16 = 0x21e762667989a99e - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x21e762667989a99e;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x21e762667989a99e) {
            if (plVar14[2] == 0x21e762667989a99e) goto LAB_010d2a04;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x21e762667989a99e) {
            if (plVar14[2] == 0x21e762667989a99e) goto LAB_010d2a04;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d2aac:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x9a58b9018df08bb7;
    }
    else if (uVar11 < 0x9a58b9018df08bb8) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x9a58b9018df08bb7 / uVar11;
      }
      uVar16 = 0x9a58b9018df08bb7 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x9a58b9018df08bb7;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x9a58b9018df08bb7) {
            if (plVar14[2] == -0x65a746fe720f7449) goto LAB_010d2ba8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x9a58b9018df08bb7) {
            if (plVar14[2] == -0x65a746fe720f7449) goto LAB_010d2ba8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d2c50:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xbd332dde2fa3bda0;
    }
    else if (uVar11 < 0xbd332dde2fa3bda1) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xbd332dde2fa3bda0 / uVar11;
      }
      uVar16 = 0xbd332dde2fa3bda0 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xbd332dde2fa3bda0;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xbd332dde2fa3bda0) {
            if (plVar14[2] == -0x42ccd221d05c4260) goto LAB_010d2d4c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xbd332dde2fa3bda0) {
            if (plVar14[2] == -0x42ccd221d05c4260) goto LAB_010d2d4c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d2df4:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x42a65bca47bd4e4c;
    }
    else if (uVar11 < 0x42a65bca47bd4e4d) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x42a65bca47bd4e4c / uVar11;
      }
      uVar16 = 0x42a65bca47bd4e4c - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x42a65bca47bd4e4c;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x42a65bca47bd4e4c) {
            if (plVar14[2] == 0x42a65bca47bd4e4c) goto LAB_010d2ef0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x42a65bca47bd4e4c) {
            if (plVar14[2] == 0x42a65bca47bd4e4c) goto LAB_010d2ef0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d2f98:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x8fc7e131d67abad8;
    }
    else if (uVar11 < 0x8fc7e131d67abad9) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x8fc7e131d67abad8 / uVar11;
      }
      uVar16 = 0x8fc7e131d67abad8 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x8fc7e131d67abad8;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x8fc7e131d67abad8) {
            if (plVar14[2] == -0x70381ece29854528) goto LAB_010d3094;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x8fc7e131d67abad8) {
            if (plVar14[2] == -0x70381ece29854528) goto LAB_010d3094;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d313c:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x51d0741159d61b17;
    }
    else if (uVar11 < 0x51d0741159d61b18) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x51d0741159d61b17 / uVar11;
      }
      uVar16 = 0x51d0741159d61b17 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x51d0741159d61b17;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x51d0741159d61b17) {
            if (plVar14[2] == 0x51d0741159d61b17) goto LAB_010d3238;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x51d0741159d61b17) {
            if (plVar14[2] == 0x51d0741159d61b17) goto LAB_010d3238;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d32e0:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x47fe224c65a9f911;
    }
    else if (uVar11 < 0x47fe224c65a9f912) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x47fe224c65a9f911 / uVar11;
      }
      uVar16 = 0x47fe224c65a9f911 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x47fe224c65a9f911;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x47fe224c65a9f911) {
            if (plVar14[2] == 0x47fe224c65a9f911) goto LAB_010d33dc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x47fe224c65a9f911) {
            if (plVar14[2] == 0x47fe224c65a9f911) goto LAB_010d33dc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d3484:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc0941940ea766b02;
    }
    else if (uVar11 < 0xc0941940ea766b03) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc0941940ea766b02 / uVar11;
      }
      uVar16 = 0xc0941940ea766b02 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc0941940ea766b02;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc0941940ea766b02) {
            if (plVar14[2] == -0x3f6be6bf158994fe) goto LAB_010d3580;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc0941940ea766b02) {
            if (plVar14[2] == -0x3f6be6bf158994fe) goto LAB_010d3580;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d3628:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x5b30fac3417e23ee;
    }
    else if (uVar11 < 0x5b30fac3417e23ef) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x5b30fac3417e23ee / uVar11;
      }
      uVar16 = 0x5b30fac3417e23ee - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x5b30fac3417e23ee;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x5b30fac3417e23ee) {
            if (plVar14[2] == 0x5b30fac3417e23ee) goto LAB_010d3724;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x5b30fac3417e23ee) {
            if (plVar14[2] == 0x5b30fac3417e23ee) goto LAB_010d3724;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d37cc:
      if (uVar11 == 0) goto LAB_010d396c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc56d782cfeac42ba;
    }
    else if (uVar11 < 0xc56d782cfeac42bb) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc56d782cfeac42ba / uVar11;
      }
      uVar16 = 0xc56d782cfeac42ba - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc56d782cfeac42ba;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc56d782cfeac42ba) {
            if (plVar14[2] == -0x3a9287d30153bd46) goto LAB_010d38c8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc56d782cfeac42ba) {
            if (plVar14[2] == -0x3a9287d30153bd46) goto LAB_010d38c8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d396c:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xe5b652360f093ae8;
    }
    else if (uVar11 < 0xe5b652360f093ae9) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xe5b652360f093ae8 / uVar11;
      }
      uVar16 = 0xe5b652360f093ae8 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xe5b652360f093ae8;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xe5b652360f093ae8) {
            if (plVar14[2] == -0x1a49adc9f0f6c518) goto LAB_010d3a6c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xe5b652360f093ae8) {
            if (plVar14[2] == -0x1a49adc9f0f6c518) goto LAB_010d3a6c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d3ad4:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x30efd4045d8cef66;
    }
    else if (uVar11 < 0x30efd4045d8cef67) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x30efd4045d8cef66 / uVar11;
      }
      uVar16 = 0x30efd4045d8cef66 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x30efd4045d8cef66;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x30efd4045d8cef66) {
            if (plVar14[2] == 0x30efd4045d8cef66) goto LAB_010d3bd0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x30efd4045d8cef66) {
            if (plVar14[2] == 0x30efd4045d8cef66) goto LAB_010d3bd0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d3c38:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xab5d175ee48e3bed;
    }
    else if (uVar11 < 0xab5d175ee48e3bee) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xab5d175ee48e3bed / uVar11;
      }
      uVar16 = 0xab5d175ee48e3bed - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xab5d175ee48e3bed;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xab5d175ee48e3bed) {
            if (plVar14[2] == -0x54a2e8a11b71c413) goto LAB_010d3d34;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xab5d175ee48e3bed) {
            if (plVar14[2] == -0x54a2e8a11b71c413) goto LAB_010d3d34;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d3d9c:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x884d03d721d2dd43;
    }
    else if (uVar11 < 0x884d03d721d2dd44) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x884d03d721d2dd43 / uVar11;
      }
      uVar16 = 0x884d03d721d2dd43 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x884d03d721d2dd43;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x884d03d721d2dd43) {
            if (plVar14[2] == -0x77b2fc28de2d22bd) goto LAB_010d3e98;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x884d03d721d2dd43) {
            if (plVar14[2] == -0x77b2fc28de2d22bd) goto LAB_010d3e98;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d3f0c:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x55d73ae37c99bdd5;
    }
    else if (uVar11 < 0x55d73ae37c99bdd6) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x55d73ae37c99bdd5 / uVar11;
      }
      uVar16 = 0x55d73ae37c99bdd5 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x55d73ae37c99bdd5;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x55d73ae37c99bdd5) {
            if (plVar14[2] == 0x55d73ae37c99bdd5) goto LAB_010d4008;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x55d73ae37c99bdd5) {
            if (plVar14[2] == 0x55d73ae37c99bdd5) goto LAB_010d4008;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d4060:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xdef700cd3da8a13c;
    }
    else if (uVar11 < 0xdef700cd3da8a13d) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xdef700cd3da8a13c / uVar11;
      }
      uVar16 = 0xdef700cd3da8a13c - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xdef700cd3da8a13c;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xdef700cd3da8a13c) {
            if (plVar14[2] == -0x2108ff32c2575ec4) goto LAB_010d415c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xdef700cd3da8a13c) {
            if (plVar14[2] == -0x2108ff32c2575ec4) goto LAB_010d415c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d4170:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x986f754a328c9398;
    }
    else if (uVar11 < 0x986f754a328c9399) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x986f754a328c9398 / uVar11;
      }
      uVar16 = 0x986f754a328c9398 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x986f754a328c9398;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x986f754a328c9398) {
            if (plVar14[2] == -0x67908ab5cd736c68) goto LAB_010d426c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x986f754a328c9398) {
            if (plVar14[2] == -0x67908ab5cd736c68) goto LAB_010d426c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d4280:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x986f764a328c954b;
    }
    else if (uVar11 < 0x986f764a328c954c) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x986f764a328c954b / uVar11;
      }
      uVar16 = 0x986f764a328c954b - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x986f764a328c954b;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x986f764a328c954b) {
            if (plVar14[2] == -0x679089b5cd736ab5) goto LAB_010d437c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x986f764a328c954b) {
            if (plVar14[2] == -0x679089b5cd736ab5) goto LAB_010d437c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d4390:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xb2a6ff2c6946fa00;
    }
    else if (uVar11 < 0xb2a6ff2c6946fa01) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xb2a6ff2c6946fa00 / uVar11;
      }
      uVar16 = 0xb2a6ff2c6946fa00 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xb2a6ff2c6946fa00;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xb2a6ff2c6946fa00) {
            if (plVar14[2] == -0x4d5900d396b90600) goto LAB_010d448c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xb2a6ff2c6946fa00) {
            if (plVar14[2] == -0x4d5900d396b90600) goto LAB_010d448c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d44a0:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x2b7d89c7b7e84870;
    }
    else if (uVar11 < 0x2b7d89c7b7e84871) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x2b7d89c7b7e84870 / uVar11;
      }
      uVar16 = 0x2b7d89c7b7e84870 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x2b7d89c7b7e84870;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x2b7d89c7b7e84870) {
            if (plVar14[2] == 0x2b7d89c7b7e84870) goto LAB_010d459c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x2b7d89c7b7e84870) {
            if (plVar14[2] == 0x2b7d89c7b7e84870) goto LAB_010d459c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d45b0:
      if (uVar11 == 0) goto LAB_010d46bc;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x77c72e2430d997be;
    }
    else if (uVar11 < 0x77c72e2430d997bf) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x77c72e2430d997be / uVar11;
      }
      uVar16 = 0x77c72e2430d997be - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x77c72e2430d997be;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x77c72e2430d997be) {
            if (plVar14[2] == 0x77c72e2430d997be) goto LAB_010d46ac;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x77c72e2430d997be) {
            if (plVar14[2] == 0x77c72e2430d997be) goto LAB_010d46ac;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d46bc:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x8a89a26b91b541ff;
    }
    else if (uVar11 < 0x8a89a26b91b54200) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x8a89a26b91b541ff / uVar11;
      }
      uVar16 = 0x8a89a26b91b541ff - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x8a89a26b91b541ff;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x8a89a26b91b541ff) {
            if (plVar14[2] == -0x75765d946e4abe01) goto LAB_010d47bc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x8a89a26b91b541ff) {
            if (plVar14[2] == -0x75765d946e4abe01) goto LAB_010d47bc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d4860:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xcdaa395c39c12b69;
    }
    else if (uVar11 < 0xcdaa395c39c12b6a) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xcdaa395c39c12b69 / uVar11;
      }
      uVar16 = 0xcdaa395c39c12b69 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xcdaa395c39c12b69;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xcdaa395c39c12b69) {
            if (plVar14[2] == -0x3255c6a3c63ed497) goto LAB_010d4960;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xcdaa395c39c12b69) {
            if (plVar14[2] == -0x3255c6a3c63ed497) goto LAB_010d4960;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d49c4:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xdb70bc08c50fd8e1;
    }
    else if (uVar11 < 0xdb70bc08c50fd8e2) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xdb70bc08c50fd8e1 / uVar11;
      }
      uVar16 = 0xdb70bc08c50fd8e1 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xdb70bc08c50fd8e1;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xdb70bc08c50fd8e1) {
            if (plVar14[2] == -0x248f43f73af0271f) goto LAB_010d4ac0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xdb70bc08c50fd8e1) {
            if (plVar14[2] == -0x248f43f73af0271f) goto LAB_010d4ac0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d4b28:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x4e5879615ac8470b;
    }
    else if (uVar11 < 0x4e5879615ac8470c) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x4e5879615ac8470b / uVar11;
      }
      uVar16 = 0x4e5879615ac8470b - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x4e5879615ac8470b;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x4e5879615ac8470b) {
            if (plVar14[2] == 0x4e5879615ac8470b) goto LAB_010d4c24;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x4e5879615ac8470b) {
            if (plVar14[2] == 0x4e5879615ac8470b) goto LAB_010d4c24;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d4c58:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x4da08d6b6f21c307;
    }
    else if (uVar11 < 0x4da08d6b6f21c308) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x4da08d6b6f21c307 / uVar11;
      }
      uVar16 = 0x4da08d6b6f21c307 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x4da08d6b6f21c307;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x4da08d6b6f21c307) {
            if (plVar14[2] == 0x4da08d6b6f21c307) goto LAB_010d4d54;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x4da08d6b6f21c307) {
            if (plVar14[2] == 0x4da08d6b6f21c307) goto LAB_010d4d54;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d4d68:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xf393c8a467bf788b;
    }
    else if (uVar11 < 0xf393c8a467bf788c) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xf393c8a467bf788b / uVar11;
      }
      uVar16 = 0xf393c8a467bf788b - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xf393c8a467bf788b;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xf393c8a467bf788b) {
            if (plVar14[2] == -0xc6c375b98408775) goto LAB_010d4e64;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xf393c8a467bf788b) {
            if (plVar14[2] == -0xc6c375b98408775) goto LAB_010d4e64;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d4ec8:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x54b5fadd04ea2aca;
    }
    else if (uVar11 < 0x54b5fadd04ea2acb) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x54b5fadd04ea2aca / uVar11;
      }
      uVar16 = 0x54b5fadd04ea2aca - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x54b5fadd04ea2aca;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x54b5fadd04ea2aca) {
            if (plVar14[2] == 0x54b5fadd04ea2aca) goto LAB_010d4fc4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x54b5fadd04ea2aca) {
            if (plVar14[2] == 0x54b5fadd04ea2aca) goto LAB_010d4fc4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d4fd8:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x9cd98f88cc1b177e;
    }
    else if (uVar11 < 0x9cd98f88cc1b177f) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x9cd98f88cc1b177e / uVar11;
      }
      uVar16 = 0x9cd98f88cc1b177e - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x9cd98f88cc1b177e;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x9cd98f88cc1b177e) {
            if (plVar14[2] == -0x6326707733e4e882) goto LAB_010d50d4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x9cd98f88cc1b177e) {
            if (plVar14[2] == -0x6326707733e4e882) goto LAB_010d50d4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d50e8:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xe58743c38749cdd3;
    }
    else if (uVar11 < 0xe58743c38749cdd4) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xe58743c38749cdd3 / uVar11;
      }
      uVar16 = 0xe58743c38749cdd3 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xe58743c38749cdd3;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xe58743c38749cdd3) {
            if (plVar14[2] == -0x1a78bc3c78b6322d) goto LAB_010d51e4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xe58743c38749cdd3) {
            if (plVar14[2] == -0x1a78bc3c78b6322d) goto LAB_010d51e4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d5248:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xcee417a6e638910a;
    }
    else if (uVar11 < 0xcee417a6e638910b) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xcee417a6e638910a / uVar11;
      }
      uVar16 = 0xcee417a6e638910a - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xcee417a6e638910a;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xcee417a6e638910a) {
            if (plVar14[2] == -0x311be85919c76ef6) goto LAB_010d5344;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xcee417a6e638910a) {
            if (plVar14[2] == -0x311be85919c76ef6) goto LAB_010d5344;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d53a8:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x512d59d57d290e75;
    }
    else if (uVar11 < 0x512d59d57d290e76) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x512d59d57d290e75 / uVar11;
      }
      uVar16 = 0x512d59d57d290e75 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x512d59d57d290e75;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x512d59d57d290e75) {
            if (plVar14[2] == 0x512d59d57d290e75) goto LAB_010d54a4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x512d59d57d290e75) {
            if (plVar14[2] == 0x512d59d57d290e75) goto LAB_010d54a4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d54b8:
      if (uVar11 == 0) goto LAB_010d55c4;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x616b0884c1175c68;
    }
    else if (uVar11 < 0x616b0884c1175c69) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x616b0884c1175c68 / uVar11;
      }
      uVar16 = 0x616b0884c1175c68 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x616b0884c1175c68;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x616b0884c1175c68) {
            if (plVar14[2] == 0x616b0884c1175c68) goto LAB_010d55b4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x616b0884c1175c68) {
            if (plVar14[2] == 0x616b0884c1175c68) goto LAB_010d55b4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d55c4:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x35ee07ef07871fe0;
    }
    else if (uVar11 < 0x35ee07ef07871fe1) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x35ee07ef07871fe0 / uVar11;
      }
      uVar16 = 0x35ee07ef07871fe0 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x35ee07ef07871fe0;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x35ee07ef07871fe0) {
            if (plVar14[2] == 0x35ee07ef07871fe0) goto LAB_010d56c4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x35ee07ef07871fe0) {
            if (plVar14[2] == 0x35ee07ef07871fe0) goto LAB_010d56c4;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d5764:
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd482d2fbe2393c1b;
    }
    else if (uVar11 < 0xd482d2fbe2393c1c) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd482d2fbe2393c1b / uVar11;
      }
      uVar16 = 0xd482d2fbe2393c1b - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd482d2fbe2393c1b;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd482d2fbe2393c1b) {
            if (plVar14[2] == -0x2b7d2d041dc6c3e5) goto LAB_010d5868;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd482d2fbe2393c1b) {
            if (plVar14[2] == -0x2b7d2d041dc6c3e5) goto LAB_010d5868;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d590c:
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x8f457f2507b3ad8e;
    }
    else if (uVar11 < 0x8f457f2507b3ad8f) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x8f457f2507b3ad8e / uVar11;
      }
      uVar16 = 0x8f457f2507b3ad8e - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x8f457f2507b3ad8e;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x8f457f2507b3ad8e) {
            if (plVar14[2] == -0x70ba80daf84c5272) goto LAB_010d5a0c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x8f457f2507b3ad8e) {
            if (plVar14[2] == -0x70ba80daf84c5272) goto LAB_010d5a0c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d5a70:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc8f6373a582bcb59;
    }
    else if (uVar11 < 0xc8f6373a582bcb5a) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc8f6373a582bcb59 / uVar11;
      }
      uVar16 = 0xc8f6373a582bcb59 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc8f6373a582bcb59;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc8f6373a582bcb59) {
            if (plVar14[2] == -0x3709c8c5a7d434a7) goto LAB_010d5b6c;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc8f6373a582bcb59) {
            if (plVar14[2] == -0x3709c8c5a7d434a7) goto LAB_010d5b6c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d5bd4:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x6621f46f7338f7fa;
    }
    else if (uVar11 < 0x6621f46f7338f7fb) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x6621f46f7338f7fa / uVar11;
      }
      uVar16 = 0x6621f46f7338f7fa - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x6621f46f7338f7fa;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x6621f46f7338f7fa) {
            if (plVar14[2] == 0x6621f46f7338f7fa) goto LAB_010d5cd0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x6621f46f7338f7fa) {
            if (plVar14[2] == 0x6621f46f7338f7fa) goto LAB_010d5cd0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d5ce4:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x40fd5e7c493e7148;
    }
    else if (uVar11 < 0x40fd5e7c493e7149) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x40fd5e7c493e7148 / uVar11;
      }
      uVar16 = 0x40fd5e7c493e7148 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x40fd5e7c493e7148;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x40fd5e7c493e7148) {
            if (plVar14[2] == 0x40fd5e7c493e7148) goto LAB_010d5de0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x40fd5e7c493e7148) {
            if (plVar14[2] == 0x40fd5e7c493e7148) goto LAB_010d5de0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d5df4:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x8b8eb8ddf6906884;
    }
    else if (uVar11 < 0x8b8eb8ddf6906885) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x8b8eb8ddf6906884 / uVar11;
      }
      uVar16 = 0x8b8eb8ddf6906884 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x8b8eb8ddf6906884;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x8b8eb8ddf6906884) {
            if (plVar14[2] == -0x74714722096f977c) goto LAB_010d5ef0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x8b8eb8ddf6906884) {
            if (plVar14[2] == -0x74714722096f977c) goto LAB_010d5ef0;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d5f04:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x9e954d6ec47724c2;
    }
    else if (uVar11 < 0x9e954d6ec47724c3) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x9e954d6ec47724c2 / uVar11;
      }
      uVar16 = 0x9e954d6ec47724c2 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x9e954d6ec47724c2;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x9e954d6ec47724c2) {
            if (plVar14[2] == -0x616ab2913b88db3e) goto LAB_010d6000;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x9e954d6ec47724c2) {
            if (plVar14[2] == -0x616ab2913b88db3e) goto LAB_010d6000;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d6014:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x73076b243823ea47;
    }
    else if (uVar11 < 0x73076b243823ea48) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x73076b243823ea47 / uVar11;
      }
      uVar16 = 0x73076b243823ea47 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x73076b243823ea47;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x73076b243823ea47) {
            if (plVar14[2] == 0x73076b243823ea47) goto LAB_010d6110;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x73076b243823ea47) {
            if (plVar14[2] == 0x73076b243823ea47) goto LAB_010d6110;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d6124:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xbd41d79757a4a106;
    }
    else if (uVar11 < 0xbd41d79757a4a107) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xbd41d79757a4a106 / uVar11;
      }
      uVar16 = 0xbd41d79757a4a106 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xbd41d79757a4a106;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xbd41d79757a4a106) {
            if (plVar14[2] == -0x42be2868a85b5efa) goto LAB_010d6220;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xbd41d79757a4a106) {
            if (plVar14[2] == -0x42be2868a85b5efa) goto LAB_010d6220;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d6234:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc2a0c7ff73ef82c9;
    }
    else if (uVar11 < 0xc2a0c7ff73ef82ca) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc2a0c7ff73ef82c9 / uVar11;
      }
      uVar16 = 0xc2a0c7ff73ef82c9 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc2a0c7ff73ef82c9;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc2a0c7ff73ef82c9) {
            if (plVar14[2] == -0x3d5f38008c107d37) goto LAB_010d6330;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc2a0c7ff73ef82c9) {
            if (plVar14[2] == -0x3d5f38008c107d37) goto LAB_010d6330;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d6344:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xcc6396fd81c99047;
    }
    else if (uVar11 < 0xcc6396fd81c99048) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xcc6396fd81c99047 / uVar11;
      }
      uVar16 = 0xcc6396fd81c99047 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xcc6396fd81c99047;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xcc6396fd81c99047) {
            if (plVar14[2] == -0x339c69027e366fb9) goto LAB_010d6440;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xcc6396fd81c99047) {
            if (plVar14[2] == -0x339c69027e366fb9) goto LAB_010d6440;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d6454:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x24311b9a564b30f9;
    }
    else if (uVar11 < 0x24311b9a564b30fa) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x24311b9a564b30f9 / uVar11;
      }
      uVar16 = 0x24311b9a564b30f9 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x24311b9a564b30f9;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x24311b9a564b30f9) {
            if (plVar14[2] == 0x24311b9a564b30f9) goto LAB_010d6550;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x24311b9a564b30f9) {
            if (plVar14[2] == 0x24311b9a564b30f9) goto LAB_010d6550;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d6564:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x67717f52069edcac;
    }
    else if (uVar11 < 0x67717f52069edcad) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x67717f52069edcac / uVar11;
      }
      uVar16 = 0x67717f52069edcac - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x67717f52069edcac;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x67717f52069edcac) {
            if (plVar14[2] == 0x67717f52069edcac) goto LAB_010d6660;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x67717f52069edcac) {
            if (plVar14[2] == 0x67717f52069edcac) goto LAB_010d6660;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d6674:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x7363c574347b4744;
    }
    else if (uVar11 < 0x7363c574347b4745) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x7363c574347b4744 / uVar11;
      }
      uVar16 = 0x7363c574347b4744 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x7363c574347b4744;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x7363c574347b4744) {
            if (plVar14[2] == 0x7363c574347b4744) goto LAB_010d6770;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x7363c574347b4744) {
            if (plVar14[2] == 0x7363c574347b4744) goto LAB_010d6770;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d679c:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xd1ca2042c4fbdf78;
    }
    else if (uVar11 < 0xd1ca2042c4fbdf79) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xd1ca2042c4fbdf78 / uVar11;
      }
      uVar16 = 0xd1ca2042c4fbdf78 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xd1ca2042c4fbdf78;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xd1ca2042c4fbdf78) {
            if (plVar14[2] == -0x2e35dfbd3b042088) goto LAB_010d6898;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xd1ca2042c4fbdf78) {
            if (plVar14[2] == -0x2e35dfbd3b042088) goto LAB_010d6898;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d68ac:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x3a92c6d20217aac6;
    }
    else if (uVar11 < 0x3a92c6d20217aac7) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x3a92c6d20217aac6 / uVar11;
      }
      uVar16 = 0x3a92c6d20217aac6 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x3a92c6d20217aac6;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x3a92c6d20217aac6) {
            if (plVar14[2] == 0x3a92c6d20217aac6) goto LAB_010d69a8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x3a92c6d20217aac6) {
            if (plVar14[2] == 0x3a92c6d20217aac6) goto LAB_010d69a8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d69bc:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x6a1fe2688fbe678d;
    }
    else if (uVar11 < 0x6a1fe2688fbe678e) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x6a1fe2688fbe678d / uVar11;
      }
      uVar16 = 0x6a1fe2688fbe678d - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x6a1fe2688fbe678d;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x6a1fe2688fbe678d) {
            if (plVar14[2] == 0x6a1fe2688fbe678d) goto LAB_010d6ab8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x6a1fe2688fbe678d) {
            if (plVar14[2] == 0x6a1fe2688fbe678d) goto LAB_010d6ab8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d6acc:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x21c4271a8f293214;
    }
    else if (uVar11 < 0x21c4271a8f293215) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x21c4271a8f293214 / uVar11;
      }
      uVar16 = 0x21c4271a8f293214 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x21c4271a8f293214;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x21c4271a8f293214) {
            if (plVar14[2] == 0x21c4271a8f293214) goto LAB_010d6bc8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x21c4271a8f293214) {
            if (plVar14[2] == 0x21c4271a8f293214) goto LAB_010d6bc8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d6bdc:
      if (uVar11 == 0) goto LAB_010d748c;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x703a7ba8130b326e;
    }
    else if (uVar11 < 0x703a7ba8130b326f) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x703a7ba8130b326e / uVar11;
      }
      uVar16 = 0x703a7ba8130b326e - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x703a7ba8130b326e;
    }
    lVar12 = *(long *)(lVar10 + 0x80);
    plVar14 = *(long **)(lVar12 + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      uVar15 = uVar11 - 1;
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x703a7ba8130b326e) {
            if (plVar14[2] == 0x703a7ba8130b326e) goto LAB_010d6cf0;
          }
          else if ((plVar14[1] & uVar15) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar14[1];
          if (uVar17 == 0x703a7ba8130b326e) {
            if (plVar14[2] == 0x703a7ba8130b326e) goto LAB_010d6cf0;
          }
          else {
            if (uVar11 <= uVar17) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar17 / uVar11;
              }
              uVar17 = uVar17 - uVar3 * uVar11;
            }
            if (uVar17 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      goto LAB_010d7384;
    }
    goto LAB_010d7388;
  }
  goto LAB_010d748c;
LAB_010cd150:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = -1.0;
  if (-1.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-1.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(lVar10 + 0x8c) = local_a4;
  *(float *)(lVar10 + 0x90) = fVar27;
  goto LAB_010cd190;
LAB_010cd3a8:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 1.0;
  if (((1.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar23)
     ) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x140) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cd408;
LAB_010cd504:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 5.0;
  if (((5.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar23)
     ) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x144) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cd564;
LAB_010cd660:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x150) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cd674;
LAB_010cd770:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x154) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cd784;
LAB_010cd880:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x15c) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cd894;
LAB_010cd990:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x160) = local_a4;
  lVar10 = *param_1;
  goto LAB_010cd9a0;
LAB_010cdaa0:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x170) = fVar21;
  *(float *)(param_2 + 0x174) = fVar24;
  *(float *)(param_2 + 0x178) = fVar19;
  *(float *)(param_2 + 0x17c) = fVar34;
  goto LAB_010cdb38;
LAB_010cdc38:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x1f0) = local_a4;
  goto LAB_010cdc44;
LAB_010cdd44:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x180) = fVar21;
  *(float *)(param_2 + 0x184) = fVar24;
  *(float *)(param_2 + 0x188) = fVar19;
  *(float *)(param_2 + 0x18c) = fVar34;
  goto LAB_010cdddc;
LAB_010cdedc:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x200) = local_a4;
  goto LAB_010cdee8;
LAB_010cdfe8:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 400) = fVar21;
  *(float *)(param_2 + 0x194) = fVar24;
  *(float *)(param_2 + 0x198) = fVar19;
  *(float *)(param_2 + 0x19c) = fVar34;
  goto LAB_010ce080;
LAB_010ce180:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x210) = local_a4;
  goto LAB_010ce18c;
LAB_010ce28c:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x1a0) = fVar21;
  *(float *)(param_2 + 0x1a4) = fVar24;
  *(float *)(param_2 + 0x1a8) = fVar19;
  *(float *)(param_2 + 0x1ac) = fVar34;
  goto LAB_010ce324;
LAB_010ce424:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x220) = local_a4;
  goto LAB_010ce430;
LAB_010ce530:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x1b0) = fVar21;
  *(float *)(param_2 + 0x1b4) = fVar24;
  *(float *)(param_2 + 0x1b8) = fVar19;
  *(float *)(param_2 + 0x1bc) = fVar34;
  goto LAB_010ce5c8;
LAB_010ce6c8:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x230) = local_a4;
  goto LAB_010ce6d4;
LAB_010ce7d4:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x1c0) = fVar21;
  *(float *)(param_2 + 0x1c4) = fVar24;
  *(float *)(param_2 + 0x1c8) = fVar19;
  *(float *)(param_2 + 0x1cc) = fVar34;
  goto LAB_010ce86c;
LAB_010ce96c:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x240) = local_a4;
  goto LAB_010ce978;
LAB_010cea78:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x1d0) = fVar21;
  *(float *)(param_2 + 0x1d4) = fVar24;
  *(float *)(param_2 + 0x1d8) = fVar19;
  *(float *)(param_2 + 0x1dc) = fVar34;
  goto LAB_010ceb10;
LAB_010cec10:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x250) = local_a4;
  goto LAB_010cec1c;
LAB_010ced1c:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x1e0) = fVar21;
  *(float *)(param_2 + 0x1e4) = fVar24;
  *(float *)(param_2 + 0x1e8) = fVar19;
  *(float *)(param_2 + 0x1ec) = fVar34;
  goto LAB_010cedb4;
LAB_010ceeb4:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x260) = local_a4;
  goto LAB_010ceec0;
LAB_010cefc8:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x274) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cefdc;
LAB_010cf0d8:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 10.0;
  if (((10.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) &&
     (local_a4 = 0.0, -0.1 <= fVar23)) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x278) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cf138;
LAB_010cf234:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x27c) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cf248;
LAB_010cf344:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 1.0;
  if (((1.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar23)
     ) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x280) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cf3a4;
LAB_010cf4a0:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 1.0;
  if (((1.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar23)
     ) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x284) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cf500;
LAB_010cf5fc:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 1.0;
  if (((1.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar23)
     ) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x288) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cf65c;
LAB_010cf760:
  fVar27 = *(float *)(plVar14 + 6);
  fVar21 = 10.0;
  if (fVar27 <= 10.1) {
    fVar21 = fVar27;
  }
  fVar23 = 0.0;
  if (-0.1 <= fVar21) {
    fVar23 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 10.1;
      bVar6 = fVar27 == 10.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar23 = fVar27;
  }
  *(float *)(param_2 + 0x28c) = fVar23;
  goto LAB_010cf7a0;
LAB_010cf904:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = 10.0;
  if (((10.1 < fVar23) || (fVar27 = fVar23, fVar23 < -0.1)) && (fVar23 = 0.0, -0.1 <= fVar27)) {
    fVar23 = fVar27;
  }
  *(float *)(param_2 + 0xe48) = fVar23;
  goto LAB_010cf95c;
LAB_010cfa7c:
  uVar4 = *(undefined4 *)((long)plVar14 + 0x34);
  lVar10 = plVar14[7];
  *(int *)(param_2 + 0x290) = (int)plVar14[6];
  *(undefined4 *)(param_2 + 0x294) = uVar4;
  *(int *)(param_2 + 0x298) = (int)lVar10;
  lVar10 = *param_1;
  goto LAB_010cfa90;
LAB_010cfb90:
  *(int *)(param_2 + 0x29c) = (int)plVar14[6];
  lVar10 = *param_1;
  goto LAB_010cfba0;
LAB_010cfca0:
  auVar18 = *(undefined1 (*) [16])(plVar14 + 6);
  *(long *)(param_2 + 0x2a0) = auVar18._0_8_;
  auVar18 = NEON_ext(auVar18,auVar18,8,1);
  *(long *)(param_2 + 0x2a8) = auVar18._0_8_;
  lVar10 = *param_1;
  goto LAB_010cfcb4;
LAB_010cfdb4:
  *(int *)(param_2 + 0x2b0) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cfdc8;
LAB_010cfecc:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = 64.0;
  if (64.1 < fVar23) {
LAB_010cff0c:
    fVar23 = 0.0;
    if (-0.1 <= fVar27) {
      fVar23 = fVar27;
    }
  }
  else {
    fVar27 = fVar23;
    if (fVar23 < -0.1) goto LAB_010cff0c;
  }
  fVar27 = fVar23 * fVar23;
  if (fVar27 <= 1.0) {
    fVar27 = 1.0;
  }
  *(float *)(param_2 + 0x2c0) = fVar23;
  *(float *)(param_2 + 0x2c4) = 1.0 / fVar27;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010cff44;
LAB_010d0040:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = 10.0;
  if (((10.1 < fVar23) || (fVar27 = fVar23, fVar23 < -0.1)) && (fVar23 = 0.0, -0.1 <= fVar27)) {
    fVar23 = fVar27;
  }
  *(float *)(param_2 + 0x2c8) = fVar23;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d00a0;
LAB_010d01a4:
  local_a4 = *(float *)(plVar14 + 6);
  goto LAB_010d01b0;
LAB_010d02f8:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  *(float *)(param_2 + 0x2e4) = fVar24;
  *(float *)(param_2 + 0x2e8) = fVar19;
  *(float *)(param_2 + 0x2ec) = local_a4 * fVar34;
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x2e0) = fVar21;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d03a0;
LAB_010d049c:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x2f0) = fVar21;
  *(float *)(param_2 + 0x2f4) = fVar24;
  *(float *)(param_2 + 0x2f8) = fVar19;
  *(float *)(param_2 + 0x2fc) = fVar34;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d0540;
LAB_010d063c:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x300) = fVar21;
  *(float *)(param_2 + 0x304) = fVar24;
  *(float *)(param_2 + 0x308) = fVar19;
  *(float *)(param_2 + 0x30c) = fVar34;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d06e0;
LAB_010d07dc:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x310) = fVar21;
  *(float *)(param_2 + 0x314) = fVar24;
  *(float *)(param_2 + 0x318) = fVar19;
  *(float *)(param_2 + 0x31c) = fVar34;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d0880;
LAB_010d097c:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 800) = fVar21;
  *(float *)(param_2 + 0x324) = fVar24;
  *(float *)(param_2 + 0x328) = fVar19;
  *(float *)(param_2 + 0x32c) = fVar34;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d0a20;
LAB_010d0b1c:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x330) = fVar21;
  *(float *)(param_2 + 0x334) = fVar24;
  *(float *)(param_2 + 0x338) = fVar19;
  *(float *)(param_2 + 0x33c) = fVar34;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d0bc0;
LAB_010d0cbc:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x340) = fVar21;
  *(float *)(param_2 + 0x344) = fVar24;
  *(float *)(param_2 + 0x348) = fVar19;
  *(float *)(param_2 + 0x34c) = fVar34;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d0d60;
LAB_010d0e5c:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x350) = fVar21;
  *(float *)(param_2 + 0x354) = fVar24;
  *(float *)(param_2 + 0x358) = fVar19;
  *(float *)(param_2 + 0x35c) = fVar34;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d0f00;
LAB_010d0ffc:
  fVar23 = *(float *)(plVar14 + 6);
  fVar27 = *(float *)((long)plVar14 + 0x34);
  fVar21 = *(float *)(plVar14 + 7);
  fVar24 = *(float *)((long)plVar14 + 0x3c);
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  *(float *)(param_2 + 0x360) = fVar21;
  *(float *)(param_2 + 0x364) = fVar24;
  *(float *)(param_2 + 0x368) = fVar19;
  *(float *)(param_2 + 0x36c) = fVar34;
  lVar10 = *param_1;
  goto LAB_010d109c;
LAB_010d119c:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 2.0;
  if (((2.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar23)
     ) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x370) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d1200;
LAB_010d12fc:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 10.0;
  if (((10.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) &&
     (local_a4 = 0.0, -0.1 <= fVar23)) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x374) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d1360;
LAB_010d145c:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 10.0;
  if (((10.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) &&
     (local_a4 = 0.0, -0.1 <= fVar23)) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x378) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d14c0;
LAB_010d15bc:
  local_a4 = *(float *)(plVar14 + 6);
  fVar23 = 200.0;
  if (((200.1 < local_a4) || (fVar23 = local_a4, local_a4 < -0.1)) &&
     (local_a4 = 0.0, -0.1 <= fVar23)) {
    local_a4 = fVar23;
  }
  *(float *)(param_2 + 0x37c) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d1628;
LAB_010d172c:
  fVar23 = *(float *)(plVar14 + 6);
  goto LAB_010d1730;
LAB_010d1834:
  fVar20 = *(float *)(plVar14 + 6);
  goto LAB_010d1838;
LAB_010d199c:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x390) = fVar27;
  *(float *)(param_2 + 0x394) = fVar21;
  *(float *)(param_2 + 0x398) = fVar24;
  *(float *)(param_2 + 0x39c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d1a44;
LAB_010d1b40:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x3a0) = fVar27;
  *(float *)(param_2 + 0x3a4) = fVar21;
  *(float *)(param_2 + 0x3a8) = fVar24;
  *(float *)(param_2 + 0x3ac) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d1be8;
LAB_010d1ce4:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x3b0) = fVar27;
  *(float *)(param_2 + 0x3b4) = fVar21;
  *(float *)(param_2 + 0x3b8) = fVar24;
  *(float *)(param_2 + 0x3bc) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d1d8c;
LAB_010d1e88:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x3c0) = fVar27;
  *(float *)(param_2 + 0x3c4) = fVar21;
  *(float *)(param_2 + 0x3c8) = fVar24;
  *(float *)(param_2 + 0x3cc) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d1f30;
LAB_010d202c:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x3d0) = fVar27;
  *(float *)(param_2 + 0x3d4) = fVar21;
  *(float *)(param_2 + 0x3d8) = fVar24;
  *(float *)(param_2 + 0x3dc) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d20d4;
LAB_010d21d0:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x3e0) = fVar27;
  *(float *)(param_2 + 0x3e4) = fVar21;
  *(float *)(param_2 + 1000) = fVar24;
  *(float *)(param_2 + 0x3ec) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d2278;
LAB_010d2374:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x3f0) = fVar27;
  *(float *)(param_2 + 0x3f4) = fVar21;
  *(float *)(param_2 + 0x3f8) = fVar24;
  *(float *)(param_2 + 0x3fc) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d241c;
LAB_010d2518:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x400) = fVar27;
  *(float *)(param_2 + 0x404) = fVar21;
  *(float *)(param_2 + 0x408) = fVar24;
  *(float *)(param_2 + 0x40c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d25c0;
LAB_010d26bc:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x410) = fVar27;
  *(float *)(param_2 + 0x414) = fVar21;
  *(float *)(param_2 + 0x418) = fVar24;
  *(float *)(param_2 + 0x41c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d2764;
LAB_010d2860:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x420) = fVar27;
  *(float *)(param_2 + 0x424) = fVar21;
  *(float *)(param_2 + 0x428) = fVar24;
  *(float *)(param_2 + 0x42c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d2908;
LAB_010d2a04:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x480) = fVar27;
  *(float *)(param_2 + 0x484) = fVar21;
  *(float *)(param_2 + 0x488) = fVar24;
  *(float *)(param_2 + 0x48c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d2aac;
LAB_010d2ba8:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x490) = fVar27;
  *(float *)(param_2 + 0x494) = fVar21;
  *(float *)(param_2 + 0x498) = fVar24;
  *(float *)(param_2 + 0x49c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d2c50;
LAB_010d2d4c:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x4a0) = fVar27;
  *(float *)(param_2 + 0x4a4) = fVar21;
  *(float *)(param_2 + 0x4a8) = fVar24;
  *(float *)(param_2 + 0x4ac) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d2df4;
LAB_010d2ef0:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x4b0) = fVar27;
  *(float *)(param_2 + 0x4b4) = fVar21;
  *(float *)(param_2 + 0x4b8) = fVar24;
  *(float *)(param_2 + 0x4bc) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d2f98;
LAB_010d3094:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x4c0) = fVar27;
  *(float *)(param_2 + 0x4c4) = fVar21;
  *(float *)(param_2 + 0x4c8) = fVar24;
  *(float *)(param_2 + 0x4cc) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d313c;
LAB_010d3238:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x430) = fVar27;
  *(float *)(param_2 + 0x434) = fVar21;
  *(float *)(param_2 + 0x438) = fVar24;
  *(float *)(param_2 + 0x43c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d32e0;
LAB_010d33dc:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x440) = fVar27;
  *(float *)(param_2 + 0x444) = fVar21;
  *(float *)(param_2 + 0x448) = fVar24;
  *(float *)(param_2 + 0x44c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d3484;
LAB_010d3580:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x450) = fVar27;
  *(float *)(param_2 + 0x454) = fVar21;
  *(float *)(param_2 + 0x458) = fVar24;
  *(float *)(param_2 + 0x45c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d3628;
LAB_010d3724:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x460) = fVar27;
  *(float *)(param_2 + 0x464) = fVar21;
  *(float *)(param_2 + 0x468) = fVar24;
  *(float *)(param_2 + 0x46c) = fVar19;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  goto LAB_010d37cc;
LAB_010d38c8:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x470) = fVar27;
  *(float *)(param_2 + 0x474) = fVar21;
  *(float *)(param_2 + 0x478) = fVar24;
  *(float *)(param_2 + 0x47c) = fVar19;
  lVar10 = *param_1;
  goto LAB_010d396c;
LAB_010d3a6c:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 1.0;
  if (((1.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x4d0) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d3ad4;
LAB_010d3bd0:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 1.0;
  if (((1.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x4d4) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d3c38;
LAB_010d3d34:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 1.0;
  if (((1.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x4d8) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d3d9c;
LAB_010d3e98:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 1.0;
  if (((1.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x4e0) = local_a4 * 0.1;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d3f0c;
LAB_010d4008:
  local_100 = 0.0;
  local_a4 = *(float *)(plVar14 + 6);
  pfVar1 = &local_100;
  if (0.0 <= *(float *)(plVar14 + 6)) {
    pfVar1 = &local_a4;
  }
  local_a0 = 1.0;
  pfVar2 = &local_a0;
  if (*pfVar1 <= 1.0) {
    pfVar2 = pfVar1;
  }
  local_a4 = *pfVar2;
  *(float *)(param_2 + 0x4e4) = local_a4 * 0.5;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d4060;
LAB_010d415c:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x4ec) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d4170;
LAB_010d426c:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x4f0) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d4280;
LAB_010d437c:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x4f4) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d4390;
LAB_010d448c:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x4f8) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d44a0;
LAB_010d459c:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x4fc) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d45b0;
LAB_010d46ac:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x500) = local_a4;
  lVar10 = *param_1;
  goto LAB_010d46bc;
LAB_010d47bc:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x510) = fVar27;
  *(float *)(param_2 + 0x514) = fVar21;
  *(float *)(param_2 + 0x518) = fVar24;
  *(float *)(param_2 + 0x51c) = fVar19;
  lVar10 = *param_1;
  goto LAB_010d4860;
LAB_010d4960:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 2.0;
  if (((2.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x51c) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d49c4;
LAB_010d4ac0:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 1.0;
  if (((1.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x528) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d4b28;
LAB_010d4c24:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x524) = (local_a4 * 3.1415927) / 180.0;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d4c58;
LAB_010d4d54:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x520) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d4d68;
LAB_010d4e64:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 10.0;
  if (((10.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) &&
     (local_a4 = 0.0, -0.1 <= fVar20)) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x530) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d4ec8;
LAB_010d4fc4:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x52c) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d4fd8;
LAB_010d50d4:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x534) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d50e8;
LAB_010d51e4:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 10.0;
  if (((10.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) &&
     (local_a4 = 0.0, -0.1 <= fVar20)) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x540) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d5248;
LAB_010d5344:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 10.0;
  if (((10.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) &&
     (local_a4 = 0.0, -0.1 <= fVar20)) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x54c) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d53a8;
LAB_010d54a4:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x544) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d54b8;
LAB_010d55b4:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x548) = local_a4;
  lVar10 = *param_1;
  goto LAB_010d55c4;
LAB_010d56c4:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x550) = fVar27;
  *(float *)(param_2 + 0x554) = fVar21;
  *(float *)(param_2 + 0x558) = fVar24;
  *(float *)(param_2 + 0x55c) = fVar19;
  goto LAB_010d5764;
LAB_010d5868:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = *(float *)((long)plVar14 + 0x34);
  fVar27 = *(float *)(plVar14 + 7);
  fVar21 = *(float *)((long)plVar14 + 0x3c);
  fVar24 = 1.0;
  if (fVar21 <= 1.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 1.1;
      bVar6 = fVar21 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 1.0;
  if (fVar27 <= 1.1) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.1;
      bVar6 = fVar27 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  *(float *)(param_2 + 0x580) = fVar27;
  *(float *)(param_2 + 0x584) = fVar21;
  *(float *)(param_2 + 0x588) = fVar24;
  *(float *)(param_2 + 0x58c) = fVar19;
  lVar10 = *param_1;
  goto LAB_010d590c;
LAB_010d5a0c:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 2.0;
  if (((2.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x5a0) = local_a4 * 0.5;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d5a70;
LAB_010d5b6c:
  local_a4 = *(float *)(plVar14 + 6);
  fVar20 = 1.0;
  if (((1.1 < local_a4) || (fVar20 = local_a4, local_a4 < -0.1)) && (local_a4 = 0.0, -0.1 <= fVar20)
     ) {
    local_a4 = fVar20;
  }
  *(float *)(param_2 + 0x5a4) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d5bd4;
LAB_010d5cd0:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5c0) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d5ce4;
LAB_010d5de0:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5c4) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d5df4;
LAB_010d5ef0:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5c8) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d5f04;
LAB_010d6000:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5cc) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d6014;
LAB_010d6110:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5d4) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d6124;
LAB_010d6220:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5d0) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d6234;
LAB_010d6330:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5d8) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d6344;
LAB_010d6440:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5dc) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d6454;
LAB_010d6550:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5e0) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d6564;
LAB_010d6660:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5e4) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d6674;
LAB_010d6770:
  local_a4 = *(float *)(plVar14 + 6);
  if (local_a4 <= 0.001) {
    local_a4 = 0.001;
  }
  local_a4 = 1.0 / local_a4;
  *(float *)(param_2 + 0x5e8) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d679c;
LAB_010d6898:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5ec) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d68ac;
LAB_010d69a8:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5f0) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d69bc;
LAB_010d6ab8:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5f4) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d6acc;
LAB_010d6bc8:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x5f8) = local_a4;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d6bdc;
LAB_010d6cf0:
  if (0.0 < *(float *)(plVar14 + 6)) {
    if (uVar13 < 2) {
      uVar16 = uVar15 & 0xdff1938f3a54ce72;
    }
    else if (uVar11 < 0xdff1938f3a54ce73) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xdff1938f3a54ce72 / uVar11;
      }
      uVar16 = 0xdff1938f3a54ce72 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xdff1938f3a54ce72;
    }
    plVar14 = *(long **)(lVar12 + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xdff1938f3a54ce72) {
            if (plVar14[2] == -0x200e6c70c5ab318e) goto LAB_010d6db0;
          }
          else if ((plVar14[1] & uVar15) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar14[1];
          if (uVar17 == 0xdff1938f3a54ce72) {
            if (plVar14[2] == -0x200e6c70c5ab318e) goto LAB_010d6db0;
          }
          else {
            if (uVar11 <= uVar17) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar17 / uVar11;
              }
              uVar17 = uVar17 - uVar3 * uVar11;
            }
            if (uVar17 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_010d7384;
LAB_010d6db0:
  fVar20 = *(float *)(plVar14 + 6);
  if (uVar13 < 2) {
    uVar16 = uVar15 & 0x1620ea5abb950667;
  }
  else if (uVar11 < 0x1620ea5abb950668) {
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = 0x1620ea5abb950667 / uVar11;
    }
    uVar16 = 0x1620ea5abb950667 - uVar16 * uVar11;
  }
  else {
    uVar16 = 0x1620ea5abb950667;
  }
  plVar14 = *(long **)(lVar12 + uVar16 * 8);
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar14[1] == 0x1620ea5abb950667) {
          if (plVar14[2] == 0x1620ea5abb950667) goto LAB_010d6e78;
        }
        else if ((plVar14[1] & uVar15) != uVar16) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar17 = plVar14[1];
        if (uVar17 == 0x1620ea5abb950667) {
          if (plVar14[2] == 0x1620ea5abb950667) goto LAB_010d6e78;
        }
        else {
          if (uVar11 <= uVar17) {
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = uVar17 / uVar11;
            }
            uVar17 = uVar17 - uVar3 * uVar11;
          }
          if (uVar17 != uVar16) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  goto LAB_010d7384;
LAB_010d6e78:
  fVar23 = *(float *)(plVar14 + 6);
  if (uVar13 < 2) {
    uVar16 = uVar15 & 0x897491005e90220c;
  }
  else if (uVar11 < 0x897491005e90220d) {
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = 0x897491005e90220c / uVar11;
    }
    uVar16 = 0x897491005e90220c - uVar16 * uVar11;
  }
  else {
    uVar16 = 0x897491005e90220c;
  }
  plVar14 = *(long **)(lVar12 + uVar16 * 8);
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar14[1] == 0x897491005e90220c) {
          if (plVar14[2] == -0x768b6effa16fddf4) goto LAB_010d6f30;
        }
        else if ((plVar14[1] & uVar15) != uVar16) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar17 = plVar14[1];
        if (uVar17 == 0x897491005e90220c) {
          if (plVar14[2] == -0x768b6effa16fddf4) goto LAB_010d6f30;
        }
        else {
          if (uVar11 <= uVar17) {
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = uVar17 / uVar11;
            }
            uVar17 = uVar17 - uVar3 * uVar11;
          }
          if (uVar17 != uVar16) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  goto LAB_010d7384;
LAB_010d6f30:
  fVar27 = *(float *)(plVar14 + 6);
  if (uVar13 < 2) {
    uVar16 = uVar15 & 0x846f63f5fbafaf71;
  }
  else if (uVar11 < 0x846f63f5fbafaf72) {
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = 0x846f63f5fbafaf71 / uVar11;
    }
    uVar16 = 0x846f63f5fbafaf71 - uVar16 * uVar11;
  }
  else {
    uVar16 = 0x846f63f5fbafaf71;
  }
  plVar14 = *(long **)(lVar12 + uVar16 * 8);
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar14[1] == 0x846f63f5fbafaf71) {
          if (plVar14[2] == -0x7b909c0a0450508f) goto LAB_010d7004;
        }
        else if ((plVar14[1] & uVar15) != uVar16) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar17 = plVar14[1];
        if (uVar17 == 0x846f63f5fbafaf71) {
          if (plVar14[2] == -0x7b909c0a0450508f) goto LAB_010d7004;
        }
        else {
          if (uVar11 <= uVar17) {
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = uVar17 / uVar11;
            }
            uVar17 = uVar17 - uVar3 * uVar11;
          }
          if (uVar17 != uVar16) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  goto LAB_010d7384;
LAB_010d7004:
  fVar21 = *(float *)(plVar14 + 6);
  if (uVar13 < 2) {
    uVar16 = uVar15 & 0xef60d15494fc5d44;
  }
  else if (uVar11 < 0xef60d15494fc5d45) {
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = 0xef60d15494fc5d44 / uVar11;
    }
    uVar16 = 0xef60d15494fc5d44 - uVar16 * uVar11;
  }
  else {
    uVar16 = 0xef60d15494fc5d44;
  }
  plVar14 = *(long **)(lVar12 + uVar16 * 8);
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar14[1] == 0xef60d15494fc5d44) {
          if (plVar14[2] == -0x109f2eab6b03a2bc) goto LAB_010d70bc;
        }
        else if ((plVar14[1] & uVar15) != uVar16) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar17 = plVar14[1];
        if (uVar17 == 0xef60d15494fc5d44) {
          if (plVar14[2] == -0x109f2eab6b03a2bc) goto LAB_010d70bc;
        }
        else {
          if (uVar11 <= uVar17) {
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = uVar17 / uVar11;
            }
            uVar17 = uVar17 - uVar3 * uVar11;
          }
          if (uVar17 != uVar16) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  goto LAB_010d7384;
LAB_010d7174:
  fVar34 = *(float *)(plVar14 + 6);
  fVar19 = 10.0;
  if (fVar34 <= 10.1) {
    fVar19 = fVar34;
  }
  fVar25 = 0.0;
  if (-0.1 <= fVar19) {
    fVar25 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar34)) {
      bVar5 = fVar34 < 10.1;
      bVar6 = fVar34 == 10.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar25 = fVar34;
  }
  fVar19 = 1.0;
  if (fVar24 <= 1.1) {
    fVar19 = fVar24;
  }
  fVar34 = 0.0;
  if (-0.1 <= fVar19) {
    fVar34 = fVar19;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar19) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar24)) {
      bVar5 = fVar24 < 1.1;
      bVar6 = fVar24 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar34 = fVar24;
  }
  fVar24 = 10.0;
  if (fVar21 <= 10.1) {
    fVar24 = fVar21;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar24) {
    fVar19 = fVar24;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar24) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar21)) {
      bVar5 = fVar21 < 10.1;
      bVar6 = fVar21 == 10.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar19 = fVar21;
  }
  fVar21 = 0.9999;
  if (fVar27 <= 1.0999) {
    fVar21 = fVar27;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar21) {
    fVar24 = fVar21;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar21) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar27)) {
      bVar5 = fVar27 < 1.0999;
      bVar6 = fVar27 == 1.0999;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar24 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar23 <= 1.1) {
    fVar27 = fVar23;
  }
  fVar21 = 0.0;
  if (-0.1 <= fVar27) {
    fVar21 = fVar27;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar27) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar23)) {
      bVar5 = fVar23 < 1.1;
      bVar6 = fVar23 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar21 = fVar23;
  }
  fVar23 = 1.0;
  if (fVar20 <= 1.1) {
    fVar23 = fVar20;
  }
  fVar27 = 0.0;
  if (-0.1 <= fVar23) {
    fVar27 = fVar23;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar23) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar5 = fVar20 < 1.1;
      bVar6 = fVar20 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar27 = fVar20;
  }
  fVar20 = powf(fVar21,2.2);
  fVar20 = fVar20 * 0.5;
  if (0.99999 < fVar24) {
    fVar24 = 0.99999;
  }
  fVar21 = (1.0 - fVar27) * fVar20;
  fVar23 = (1.0 - fVar24) * (1.0 - fVar21);
  fVar27 = exp2f(fVar19);
  local_90 = fVar27 + -1.0 + fVar20 + (1.0 - fVar21);
  fStack_8c = fVar19 * fVar34 * (local_90 + local_90);
  local_88 = fVar19 * fVar34 * 0.5;
  local_a0 = fVar20;
  fStack_9c = fVar21;
  local_98 = fVar20 + fVar23;
  fStack_94 = fVar21 + fVar23;
  fStack_84 = fVar25;
  FUN_010d9a50(&local_100,&local_a0);
  *(ulong *)(param_2 + 0x600) = CONCAT44(uStack_f8,uStack_fc);
  *(uint *)(param_2 + 0x608) = CONCAT22(uStack_f2,CONCAT11(local_f3,uStack_f4));
  *(undefined4 *)(param_2 + 0x60c) = 0;
  *(long *)(param_2 + 0x610) = local_f0;
  *(undefined4 *)(param_2 + 0x618) = (undefined4)local_e8;
  *(undefined4 *)(param_2 + 0x61c) = local_e8._4_4_;
  *(undefined4 *)(param_2 + 0x640) = local_e0;
  *(undefined4 *)(param_2 + 0x644) = uStack_dc;
  *(undefined8 *)(param_2 + 0x648) = 0;
  *(undefined8 *)(param_2 + 0x620) = local_d8;
  *(undefined4 *)(param_2 + 0x628) = local_d0;
  *(undefined4 *)(param_2 + 0x62c) = uStack_cc;
  *(undefined4 *)(param_2 + 0x650) = local_c8;
  *(undefined4 *)(param_2 + 0x654) = uStack_c4;
  *(undefined8 *)(param_2 + 0x658) = 0;
  *(undefined8 *)(param_2 + 0x630) = local_c0;
  *(undefined4 *)(param_2 + 0x638) = local_b8;
  *(undefined4 *)(param_2 + 0x63c) = uStack_b4;
  *(undefined4 *)(param_2 + 0x660) = local_b0;
  *(undefined4 *)(param_2 + 0x664) = uStack_ac;
  *(undefined8 *)(param_2 + 0x668) = 0;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d7384;
LAB_010d7480:
  local_a4 = *(float *)(plVar14 + 6);
  *(float *)(param_2 + 0x670) = local_a4;
  goto LAB_010d748c;
LAB_010d75e8:
  *(int *)(param_2 + 0x684) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d75fc;
LAB_010d76f8:
  *(int *)(param_2 + 0x688) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d770c;
LAB_010d7808:
  *(int *)(param_2 + 0x690) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d781c;
LAB_010d7918:
  *(int *)(param_2 + 0x694) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d792c;
LAB_010d7a28:
  *(int *)(param_2 + 0x698) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d7a3c;
LAB_010d7b38:
  *(int *)(param_2 + 0x69c) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d7b4c;
LAB_010d7c48:
  *(int *)(param_2 + 0x6a0) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d7c5c;
LAB_010d7d58:
  *(int *)(param_2 + 0x6a4) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d7d6c;
LAB_010d7e68:
  *(int *)(param_2 + 0x6a8) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d7e7c;
LAB_010d7f78:
  *(int *)(param_2 + 0x6ac) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d7f8c;
LAB_010d8088:
  *(int *)(param_2 + 0x6b0) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d809c;
LAB_010d8198:
  *(int *)(param_2 + 0x6b8) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d81ac;
LAB_010d82a8:
  *(int *)(param_2 + 0x6b4) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d82bc;
LAB_010d83b8:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = 10.0;
  if (((10.1 < fVar20) || (fVar23 = fVar20, fVar20 < -0.1)) && (fVar20 = 0.0, -0.1 <= fVar23)) {
    fVar20 = fVar23;
  }
  *(float *)(param_2 + 0xe30) = fVar20;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d841c;
LAB_010d8518:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = 100.0;
  if (((100.1 < fVar20) || (fVar23 = fVar20, fVar20 < -0.1)) && (fVar20 = 0.0, -0.1 <= fVar23)) {
    fVar20 = fVar23;
  }
  *(float *)(param_2 + 0xe34) = fVar20;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d8584;
LAB_010d8680:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = 100.0;
  if (((100.1 < fVar20) || (fVar23 = fVar20, fVar20 < -0.1)) && (fVar20 = 0.0, -0.1 <= fVar23)) {
    fVar20 = fVar23;
  }
  *(float *)(param_2 + 0x7c) = fVar20;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d86ec;
LAB_010d87e8:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = 1000.0;
  if (((1000.1 < fVar20) || (fVar23 = fVar20, fVar20 < -0.1)) && (fVar20 = 0.0, -0.1 <= fVar23)) {
    fVar20 = fVar23;
  }
  *(float *)(param_2 + 0x80) = fVar20;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d8854;
LAB_010d8950:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = 1000.0;
  if (((1000.1 < fVar20) || (fVar23 = fVar20, fVar20 < -0.1)) && (fVar20 = 0.0, -0.1 <= fVar23)) {
    fVar20 = fVar23;
  }
  *(float *)(param_2 + 0x84) = fVar20;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d89bc;
LAB_010d8ab8:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = 100.0;
  if (((100.1 < fVar20) || (fVar23 = fVar20, fVar20 < -0.1)) && (fVar20 = 0.0, -0.1 <= fVar23)) {
    fVar20 = fVar23;
  }
  *(float *)(param_2 + 0x8c) = fVar20;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d8b24;
LAB_010d8c20:
  fVar20 = *(float *)(plVar14 + 6);
  fVar23 = 4000.0;
  if (((4000.1 < fVar20) || (fVar23 = fVar20, fVar20 < -0.1)) && (fVar20 = 0.0, -0.1 <= fVar23)) {
    fVar20 = fVar23;
  }
  *(float *)(param_2 + 0x90) = fVar20;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d8c8c;
LAB_010d8d88:
  *(int *)(param_2 + 0x9c) = (int)plVar14[6];
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  goto LAB_010d8d9c;
LAB_010d8e98:
  *(int *)(param_2 + 0xa0) = (int)plVar14[6];
  lVar10 = *param_1;
  goto LAB_010d8ea8;
LAB_010d70bc:
  fVar24 = *(float *)(plVar14 + 6);
  if (uVar13 < 2) {
    uVar16 = uVar15 & 0x633a9b7cc81dd926;
  }
  else if (uVar11 < 0x633a9b7cc81dd927) {
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = 0x633a9b7cc81dd926 / uVar11;
    }
    uVar16 = 0x633a9b7cc81dd926 - uVar16 * uVar11;
  }
  else {
    uVar16 = 0x633a9b7cc81dd926;
  }
  plVar14 = *(long **)(lVar12 + uVar16 * 8);
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    if (uVar13 < 2) {
      do {
        if (plVar14[1] == 0x633a9b7cc81dd926) {
          if (plVar14[2] == 0x633a9b7cc81dd926) goto LAB_010d7174;
        }
        else if ((plVar14[1] & uVar15) != uVar16) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar13 = plVar14[1];
        if (uVar13 == 0x633a9b7cc81dd926) {
          if (plVar14[2] == 0x633a9b7cc81dd926) goto LAB_010d7174;
        }
        else {
          if (uVar11 <= uVar13) {
            uVar15 = 0;
            if (uVar11 != 0) {
              uVar15 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar15 * uVar11;
          }
          if (uVar13 != uVar16) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_010d7384:
  if (uVar11 != 0) {
LAB_010d7388:
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x7e8a02a959c4552f;
    }
    else if (uVar11 < 0x7e8a02a959c45530) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x7e8a02a959c4552f / uVar11;
      }
      uVar16 = 0x7e8a02a959c4552f - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x7e8a02a959c4552f;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x7e8a02a959c4552f) {
            if (plVar14[2] == 0x7e8a02a959c4552f) goto LAB_010d7480;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x7e8a02a959c4552f) {
            if (plVar14[2] == 0x7e8a02a959c4552f) goto LAB_010d7480;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d748c:
  if (((DAT_0485b5e8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0485b5e8), iVar8 != 0)) {
    uStack_f4 = 0x6d;
    local_f3 = 0;
    local_100 = (float)CONCAT31(s__dev_urandom_03c1765b._0_3_,0x18);
    uStack_fc = s__dev_urandom_03c1765b._3_4_;
    uStack_f8 = CONCAT31(0x6f646e,s__dev_urandom_03c1765b[7]);
    std::random_device::random_device((random_device *)&DAT_0485ac20,(string *)&local_100);
    lVar10 = local_f0;
    if ((((uint)local_100 & 1) != 0) && (local_f0 != 0)) {
      lVar12 = tpidr_el0;
      plVar14 = *(long **)(lVar12 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,lVar10,0,8);
      }
    }
    FUN_00100190(PTR__random_device_047dcb28,&DAT_0485ac20,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0485b5e8);
  }
  if (((DAT_0485b5f8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0485b5f8), iVar8 != 0)) {
    uVar9 = std::random_device::operator()((random_device *)&DAT_0485ac20);
    iVar8 = (int)((ulong)uVar9 * 2 + (ulong)uVar9 >> 0x20);
    DAT_0485b5f0 = uVar9 + (iVar8 + (uVar9 - iVar8 >> 1) >> 0x1e) * -0x7fffffff;
    if (DAT_0485b5f0 == 0) {
      DAT_0485b5f0 = 1;
    }
    __cxa_guard_release(&DAT_0485b5f8);
  }
  local_100 = 1.4013e-45;
  uStack_fc = 10;
  iVar8 = FUN_010d96e0(&local_100,&DAT_0485b5f0,&local_100);
  *(float *)(param_2 + 0x680) = (float)iVar8 * 0.1;
  lVar10 = *param_1;
  uVar11 = *(ulong *)(lVar10 + 0x88);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x6efba6a18962d51d;
    }
    else if (uVar11 < 0x6efba6a18962d51e) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x6efba6a18962d51d / uVar11;
      }
      uVar16 = 0x6efba6a18962d51d - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x6efba6a18962d51d;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x6efba6a18962d51d) {
            if (plVar14[2] == 0x6efba6a18962d51d) goto LAB_010d75e8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x6efba6a18962d51d) {
            if (plVar14[2] == 0x6efba6a18962d51d) goto LAB_010d75e8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d75fc:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xe24d1ad27d76c8c6;
    }
    else if (uVar11 < 0xe24d1ad27d76c8c7) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xe24d1ad27d76c8c6 / uVar11;
      }
      uVar16 = 0xe24d1ad27d76c8c6 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xe24d1ad27d76c8c6;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xe24d1ad27d76c8c6) {
            if (plVar14[2] == -0x1db2e52d8289373a) goto LAB_010d76f8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xe24d1ad27d76c8c6) {
            if (plVar14[2] == -0x1db2e52d8289373a) goto LAB_010d76f8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d770c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x531898f8abaa7d44;
    }
    else if (uVar11 < 0x531898f8abaa7d45) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x531898f8abaa7d44 / uVar11;
      }
      uVar16 = 0x531898f8abaa7d44 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x531898f8abaa7d44;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x531898f8abaa7d44) {
            if (plVar14[2] == 0x531898f8abaa7d44) goto LAB_010d7808;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x531898f8abaa7d44) {
            if (plVar14[2] == 0x531898f8abaa7d44) goto LAB_010d7808;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d781c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x80bcd2759d03aa6d;
    }
    else if (uVar11 < 0x80bcd2759d03aa6e) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x80bcd2759d03aa6d / uVar11;
      }
      uVar16 = 0x80bcd2759d03aa6d - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x80bcd2759d03aa6d;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x80bcd2759d03aa6d) {
            if (plVar14[2] == -0x7f432d8a62fc5593) goto LAB_010d7918;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x80bcd2759d03aa6d) {
            if (plVar14[2] == -0x7f432d8a62fc5593) goto LAB_010d7918;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d792c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x172823fb3bab794d;
    }
    else if (uVar11 < 0x172823fb3bab794e) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x172823fb3bab794d / uVar11;
      }
      uVar16 = 0x172823fb3bab794d - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x172823fb3bab794d;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x172823fb3bab794d) {
            if (plVar14[2] == 0x172823fb3bab794d) goto LAB_010d7a28;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x172823fb3bab794d) {
            if (plVar14[2] == 0x172823fb3bab794d) goto LAB_010d7a28;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d7a3c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x2a47cd45806336bf;
    }
    else if (uVar11 < 0x2a47cd45806336c0) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x2a47cd45806336bf / uVar11;
      }
      uVar16 = 0x2a47cd45806336bf - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x2a47cd45806336bf;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x2a47cd45806336bf) {
            if (plVar14[2] == 0x2a47cd45806336bf) goto LAB_010d7b38;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x2a47cd45806336bf) {
            if (plVar14[2] == 0x2a47cd45806336bf) goto LAB_010d7b38;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d7b4c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xcc0bf14461138d47;
    }
    else if (uVar11 < 0xcc0bf14461138d48) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xcc0bf14461138d47 / uVar11;
      }
      uVar16 = 0xcc0bf14461138d47 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xcc0bf14461138d47;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xcc0bf14461138d47) {
            if (plVar14[2] == -0x33f40ebb9eec72b9) goto LAB_010d7c48;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xcc0bf14461138d47) {
            if (plVar14[2] == -0x33f40ebb9eec72b9) goto LAB_010d7c48;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d7c5c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc0373787d7ae6073;
    }
    else if (uVar11 < 0xc0373787d7ae6074) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc0373787d7ae6073 / uVar11;
      }
      uVar16 = 0xc0373787d7ae6073 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc0373787d7ae6073;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc0373787d7ae6073) {
            if (plVar14[2] == -0x3fc8c87828519f8d) goto LAB_010d7d58;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc0373787d7ae6073) {
            if (plVar14[2] == -0x3fc8c87828519f8d) goto LAB_010d7d58;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d7d6c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x721b6e7e12cbeb97;
    }
    else if (uVar11 < 0x721b6e7e12cbeb98) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x721b6e7e12cbeb97 / uVar11;
      }
      uVar16 = 0x721b6e7e12cbeb97 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x721b6e7e12cbeb97;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x721b6e7e12cbeb97) {
            if (plVar14[2] == 0x721b6e7e12cbeb97) goto LAB_010d7e68;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x721b6e7e12cbeb97) {
            if (plVar14[2] == 0x721b6e7e12cbeb97) goto LAB_010d7e68;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d7e7c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x5d48cfbec09c590a;
    }
    else if (uVar11 < 0x5d48cfbec09c590b) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x5d48cfbec09c590a / uVar11;
      }
      uVar16 = 0x5d48cfbec09c590a - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x5d48cfbec09c590a;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x5d48cfbec09c590a) {
            if (plVar14[2] == 0x5d48cfbec09c590a) goto LAB_010d7f78;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x5d48cfbec09c590a) {
            if (plVar14[2] == 0x5d48cfbec09c590a) goto LAB_010d7f78;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d7f8c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xa39a115fa4f54daf;
    }
    else if (uVar11 < 0xa39a115fa4f54db0) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xa39a115fa4f54daf / uVar11;
      }
      uVar16 = 0xa39a115fa4f54daf - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xa39a115fa4f54daf;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xa39a115fa4f54daf) {
            if (plVar14[2] == -0x5c65eea05b0ab251) goto LAB_010d8088;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xa39a115fa4f54daf) {
            if (plVar14[2] == -0x5c65eea05b0ab251) goto LAB_010d8088;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d809c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xf93cb0e43b5eb5e3;
    }
    else if (uVar11 < 0xf93cb0e43b5eb5e4) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xf93cb0e43b5eb5e3 / uVar11;
      }
      uVar16 = 0xf93cb0e43b5eb5e3 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xf93cb0e43b5eb5e3;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xf93cb0e43b5eb5e3) {
            if (plVar14[2] == -0x6c34f1bc4a14a1d) goto LAB_010d8198;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xf93cb0e43b5eb5e3) {
            if (plVar14[2] == -0x6c34f1bc4a14a1d) goto LAB_010d8198;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d81ac:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xaaeb63521652a41b;
    }
    else if (uVar11 < 0xaaeb63521652a41c) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xaaeb63521652a41b / uVar11;
      }
      uVar16 = 0xaaeb63521652a41b - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xaaeb63521652a41b;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xaaeb63521652a41b) {
            if (plVar14[2] == -0x55149cade9ad5be5) goto LAB_010d82a8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xaaeb63521652a41b) {
            if (plVar14[2] == -0x55149cade9ad5be5) goto LAB_010d82a8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d82bc:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x6843f68f9b665ad7;
    }
    else if (uVar11 < 0x6843f68f9b665ad8) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x6843f68f9b665ad7 / uVar11;
      }
      uVar16 = 0x6843f68f9b665ad7 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x6843f68f9b665ad7;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x6843f68f9b665ad7) {
            if (plVar14[2] == 0x6843f68f9b665ad7) goto LAB_010d83b8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x6843f68f9b665ad7) {
            if (plVar14[2] == 0x6843f68f9b665ad7) goto LAB_010d83b8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d841c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x14246ad38744add6;
    }
    else if (uVar11 < 0x14246ad38744add7) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x14246ad38744add6 / uVar11;
      }
      uVar16 = 0x14246ad38744add6 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x14246ad38744add6;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x14246ad38744add6) {
            if (plVar14[2] == 0x14246ad38744add6) goto LAB_010d8518;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x14246ad38744add6) {
            if (plVar14[2] == 0x14246ad38744add6) goto LAB_010d8518;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d8584:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x4bf4f2c09f4ba969;
    }
    else if (uVar11 < 0x4bf4f2c09f4ba96a) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x4bf4f2c09f4ba969 / uVar11;
      }
      uVar16 = 0x4bf4f2c09f4ba969 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x4bf4f2c09f4ba969;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x4bf4f2c09f4ba969) {
            if (plVar14[2] == 0x4bf4f2c09f4ba969) goto LAB_010d8680;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x4bf4f2c09f4ba969) {
            if (plVar14[2] == 0x4bf4f2c09f4ba969) goto LAB_010d8680;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d86ec:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x97a329dbdac1f01e;
    }
    else if (uVar11 < 0x97a329dbdac1f01f) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x97a329dbdac1f01e / uVar11;
      }
      uVar16 = 0x97a329dbdac1f01e - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x97a329dbdac1f01e;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x97a329dbdac1f01e) {
            if (plVar14[2] == -0x685cd624253e0fe2) goto LAB_010d87e8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x97a329dbdac1f01e) {
            if (plVar14[2] == -0x685cd624253e0fe2) goto LAB_010d87e8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d8854:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc3abb2fb1c06fde7;
    }
    else if (uVar11 < 0xc3abb2fb1c06fde8) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc3abb2fb1c06fde7 / uVar11;
      }
      uVar16 = 0xc3abb2fb1c06fde7 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc3abb2fb1c06fde7;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc3abb2fb1c06fde7) {
            if (plVar14[2] == -0x3c544d04e3f90219) goto LAB_010d8950;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc3abb2fb1c06fde7) {
            if (plVar14[2] == -0x3c544d04e3f90219) goto LAB_010d8950;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d89bc:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x1bc4152f253e32a;
    }
    else if (uVar11 < 0x1bc4152f253e32b) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x1bc4152f253e32a / uVar11;
      }
      uVar16 = 0x1bc4152f253e32a - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x1bc4152f253e32a;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x1bc4152f253e32a) {
            if (plVar14[2] == 0x1bc4152f253e32a) goto LAB_010d8ab8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x1bc4152f253e32a) {
            if (plVar14[2] == 0x1bc4152f253e32a) goto LAB_010d8ab8;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d8b24:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0x3814cde20db31e82;
    }
    else if (uVar11 < 0x3814cde20db31e83) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0x3814cde20db31e82 / uVar11;
      }
      uVar16 = 0x3814cde20db31e82 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0x3814cde20db31e82;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0x3814cde20db31e82) {
            if (plVar14[2] == 0x3814cde20db31e82) goto LAB_010d8c20;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0x3814cde20db31e82) {
            if (plVar14[2] == 0x3814cde20db31e82) goto LAB_010d8c20;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d8c8c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc893e789da66f5f4;
    }
    else if (uVar11 < 0xc893e789da66f5f5) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc893e789da66f5f4 / uVar11;
      }
      uVar16 = 0xc893e789da66f5f4 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc893e789da66f5f4;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc893e789da66f5f4) {
            if (plVar14[2] == -0x376c187625990a0c) goto LAB_010d8d88;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc893e789da66f5f4) {
            if (plVar14[2] == -0x376c187625990a0c) goto LAB_010d8d88;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_010d8d9c:
      if (uVar11 == 0) goto LAB_010d8ea8;
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc573711e216dcd05;
    }
    else if (uVar11 < 0xc573711e216dcd06) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc573711e216dcd05 / uVar11;
      }
      uVar16 = 0xc573711e216dcd05 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc573711e216dcd05;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0x80) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc573711e216dcd05) {
            if (plVar14[2] == -0x3a8c8ee1de9232fb) goto LAB_010d8e98;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc573711e216dcd05) {
            if (plVar14[2] == -0x3a8c8ee1de9232fb) goto LAB_010d8e98;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_010d8ea8:
  uVar11 = *(ulong *)(lVar10 + 0xf0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar16 = uVar11 - 1 & 0xc1b255fd84002d64;
    }
    else if (uVar11 < 0xc1b255fd84002d65) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = 0xc1b255fd84002d64 / uVar11;
      }
      uVar16 = 0xc1b255fd84002d64 - uVar16 * uVar11;
    }
    else {
      uVar16 = 0xc1b255fd84002d64;
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 0xe8) + uVar16 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == 0xc1b255fd84002d64) {
            if (plVar14[2] == -0x3e4daa027bffd29c) goto LAB_010d8fa8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar16) {
            return;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == 0xc1b255fd84002d64) {
            if (plVar14[2] == -0x3e4daa027bffd29c) {
LAB_010d8fa8:
              fVar20 = *(float *)(plVar14 + 6);
              fVar23 = *(float *)((long)plVar14 + 0x34);
              fVar27 = *(float *)(plVar14 + 7);
              fVar21 = *(float *)((long)plVar14 + 0x3c);
              fVar24 = 1.0;
              if (fVar21 <= 1.1) {
                fVar24 = fVar21;
              }
              fVar19 = 0.0;
              if (-0.1 <= fVar24) {
                fVar19 = fVar24;
              }
              bVar5 = false;
              bVar6 = false;
              bVar7 = false;
              if (-0.1 <= fVar24) {
                bVar5 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar21)) {
                  bVar5 = fVar21 < 1.1;
                  bVar6 = fVar21 == 1.1;
                  bVar7 = false;
                }
              }
              if (bVar6 || bVar5 != bVar7) {
                fVar19 = fVar21;
              }
              fVar21 = 1.0;
              if (fVar27 <= 1.1) {
                fVar21 = fVar27;
              }
              fVar24 = 0.0;
              if (-0.1 <= fVar21) {
                fVar24 = fVar21;
              }
              bVar5 = false;
              bVar6 = false;
              bVar7 = false;
              if (-0.1 <= fVar21) {
                bVar5 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar27)) {
                  bVar5 = fVar27 < 1.1;
                  bVar6 = fVar27 == 1.1;
                  bVar7 = false;
                }
              }
              if (bVar6 || bVar5 != bVar7) {
                fVar24 = fVar27;
              }
              fVar27 = 1.0;
              if (fVar23 <= 1.1) {
                fVar27 = fVar23;
              }
              fVar21 = 0.0;
              if (-0.1 <= fVar27) {
                fVar21 = fVar27;
              }
              bVar5 = false;
              bVar6 = false;
              bVar7 = false;
              if (-0.1 <= fVar27) {
                bVar5 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar23)) {
                  bVar5 = fVar23 < 1.1;
                  bVar6 = fVar23 == 1.1;
                  bVar7 = false;
                }
              }
              if (bVar6 || bVar5 != bVar7) {
                fVar21 = fVar23;
              }
              fVar23 = 1.0;
              if (fVar20 <= 1.1) {
                fVar23 = fVar20;
              }
              fVar27 = 0.0;
              if (-0.1 <= fVar23) {
                fVar27 = fVar23;
              }
              bVar5 = false;
              bVar6 = false;
              bVar7 = false;
              if (-0.1 <= fVar23) {
                bVar5 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar20)) {
                  bVar5 = fVar20 < 1.1;
                  bVar6 = fVar20 == 1.1;
                  bVar7 = false;
                }
              }
              if (bVar6 || bVar5 != bVar7) {
                fVar27 = fVar20;
              }
              *(float *)(param_2 + 0xb0) = fVar27;
              *(float *)(param_2 + 0xb4) = fVar21;
              *(float *)(param_2 + 0xb8) = fVar24;
              *(float *)(param_2 + 0xbc) = fVar19;
              return;
            }
          }
          else {
            if (uVar11 <= uVar13) {
              uVar15 = 0;
              if (uVar11 != 0) {
                uVar15 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar15 * uVar11;
            }
            if (uVar13 != uVar16) {
              return;
            }
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  return;
}


