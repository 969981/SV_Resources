/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0114e2cc; name: FUN_0114e2cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0114e2cc(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined4 uVar16;
  ulong uVar17;
  float fVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar32;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  
  lVar1 = param_1[1];
  auVar20._8_8_ = _UNK_03caa988;
  auVar20._0_8_ = _DAT_03caa980;
  uVar10 = *(ulong *)(*param_1 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x26aa3c04e6427d61;
    }
    else if (uVar10 < 0x26aa3c04e6427d62) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x26aa3c04e6427d61 / uVar10;
      }
      uVar12 = 0x26aa3c04e6427d61 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x26aa3c04e6427d61;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x26aa3c04e6427d61) {
            if (plVar13[2] == 0x26aa3c04e6427d61) goto LAB_0114e400;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x26aa3c04e6427d61) {
            if (plVar13[2] == 0x26aa3c04e6427d61) goto LAB_0114e400;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114e404:
  *(long *)(param_2 + 0xb00) = auVar20._0_8_;
  auVar20 = NEON_ext(auVar20,auVar20,8,1);
  *(long *)(param_2 + 0xb08) = auVar20._0_8_;
  auVar38._8_8_ = _UNK_03cac168;
  auVar38._0_8_ = _DAT_03cac160;
  uVar10 = *(ulong *)(*param_1 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x71226f8c265f80bd;
    }
    else if (uVar10 < 0x71226f8c265f80be) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x71226f8c265f80bd / uVar10;
      }
      uVar12 = 0x71226f8c265f80bd - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x71226f8c265f80bd;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x71226f8c265f80bd) {
            if (plVar13[2] == 0x71226f8c265f80bd) goto LAB_0114e51c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x71226f8c265f80bd) {
            if (plVar13[2] == 0x71226f8c265f80bd) goto LAB_0114e51c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114e520:
  *(long *)(param_2 + 0xb10) = auVar38._0_8_;
  auVar20 = NEON_ext(auVar38,auVar38,8,1);
  uVar8 = 0x3f4ccccd;
  *(long *)(param_2 + 0xb18) = auVar20._0_8_;
  uVar10 = *(ulong *)(*param_1 + 0x88);
  uVar16 = uVar8;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x5cdce1e9a262f495;
    }
    else if (uVar10 < 0x5cdce1e9a262f496) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x5cdce1e9a262f495 / uVar10;
      }
      uVar12 = 0x5cdce1e9a262f495 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x5cdce1e9a262f495;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x5cdce1e9a262f495) {
            if (plVar13[2] == 0x5cdce1e9a262f495) goto LAB_0114e648;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x5cdce1e9a262f495) {
            if (plVar13[2] == 0x5cdce1e9a262f495) goto LAB_0114e648;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114e64c:
  *(undefined4 *)(param_2 + 0xb1c) = uVar16;
  uVar10 = *(ulong *)(*param_1 + 0xf0);
  auVar20 = ZEXT816(0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8eb78055957a21df;
    }
    else if (uVar10 < 0x8eb78055957a21e0) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8eb78055957a21df / uVar10;
      }
      uVar12 = 0x8eb78055957a21df - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8eb78055957a21df;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x8eb78055957a21df) {
            if (plVar13[2] == -0x71487faa6a85de21) goto LAB_0114e758;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x8eb78055957a21df) {
            if (plVar13[2] == -0x71487faa6a85de21) goto LAB_0114e758;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114e75c:
  *(long *)(param_2 + 0xb50) = auVar20._0_8_;
  auVar20 = NEON_ext(auVar20,auVar20,8,1);
  *(long *)(param_2 + 0xb58) = auVar20._0_8_;
  auVar33._8_8_ = _UNK_03cab4a8;
  auVar33._0_8_ = _DAT_03cab4a0;
  uVar10 = *(ulong *)(*param_1 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x12400da2c29aa38f;
    }
    else if (uVar10 < 0x12400da2c29aa390) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x12400da2c29aa38f / uVar10;
      }
      uVar12 = 0x12400da2c29aa38f - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x12400da2c29aa38f;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x12400da2c29aa38f) {
            if (plVar13[2] == 0x12400da2c29aa38f) goto LAB_0114e874;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x12400da2c29aa38f) {
            if (plVar13[2] == 0x12400da2c29aa38f) goto LAB_0114e874;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114e878:
  *(long *)(param_2 + 0xb60) = auVar33._0_8_;
  auVar20 = NEON_ext(auVar33,auVar33,8,1);
  *(long *)(param_2 + 0xb68) = auVar20._0_8_;
  uVar10 = *(ulong *)(*param_1 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x99d9582ae9c19837;
    }
    else if (uVar10 < 0x99d9582ae9c19838) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x99d9582ae9c19837 / uVar10;
      }
      uVar12 = 0x99d9582ae9c19837 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x99d9582ae9c19837;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x99d9582ae9c19837) {
            if (plVar13[2] == -0x6626a7d5163e67c9) goto LAB_0114e988;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x99d9582ae9c19837) {
            if (plVar13[2] == -0x6626a7d5163e67c9) goto LAB_0114e988;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114e98c:
  *(undefined4 *)(param_2 + 0xb6c) = uVar8;
  uVar10 = *(ulong *)(*param_1 + 0x88);
  fVar48 = 1.0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x54e47409c3e11009;
    }
    else if (uVar10 < 0x54e47409c3e1100a) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x54e47409c3e11009 / uVar10;
      }
      uVar12 = 0x54e47409c3e11009 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x54e47409c3e11009;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x54e47409c3e11009) {
            if (plVar13[2] == 0x54e47409c3e11009) goto LAB_0114ea98;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x54e47409c3e11009) {
            if (plVar13[2] == 0x54e47409c3e11009) goto LAB_0114ea98;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114ea9c:
  fVar47 = 6.36e+06 / fVar48;
  *(float *)(param_2 + 0xaf0) = fVar47;
  fVar48 = 6.42e+06 / fVar48;
  *(float *)(param_2 + 0xafc) = fVar48 * fVar48;
  fVar22 = fVar48 * fVar48 - fVar47 * fVar47;
  *(float *)(param_2 + 0xaf8) = fVar47 * fVar47;
  *(float *)(param_2 + 0xaf4) = fVar48;
  fVar18 = SQRT(fVar22);
  if (NAN(fVar18)) {
    fVar18 = sqrtf(fVar22);
  }
  *(float *)(param_2 + 0xae8) = fVar18;
  *(float *)(param_2 + 0xaec) = fVar48 - fVar47;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x9a39754aae9e223d;
    }
    else if (uVar10 < 0x9a39754aae9e223e) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x9a39754aae9e223d / uVar10;
      }
      uVar12 = 0x9a39754aae9e223d - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x9a39754aae9e223d;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x9a39754aae9e223d) {
            if (plVar13[2] == -0x65c68ab55161ddc3) goto LAB_0114ebf4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x9a39754aae9e223d) {
            if (plVar13[2] == -0x65c68ab55161ddc3) goto LAB_0114ebf4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0114ec08:
      if (uVar10 == 0) goto LAB_0114ee1c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xaa9bade72f53877d;
    }
    else if (uVar10 < 0xaa9bade72f53877e) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xaa9bade72f53877d / uVar10;
      }
      uVar12 = 0xaa9bade72f53877d - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xaa9bade72f53877d;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xaa9bade72f53877d) {
            if (plVar13[2] == -0x55645218d0ac7883) goto LAB_0114ed04;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xaa9bade72f53877d) {
            if (plVar13[2] == -0x55645218d0ac7883) goto LAB_0114ed04;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0114ed14:
      if (uVar10 == 0) goto LAB_0114ee1c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x6bf224d8721e8d1b;
    }
    else if (uVar10 < 0x6bf224d8721e8d1c) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x6bf224d8721e8d1b / uVar10;
      }
      uVar12 = 0x6bf224d8721e8d1b - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x6bf224d8721e8d1b;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x6bf224d8721e8d1b) {
            if (plVar13[2] == 0x6bf224d8721e8d1b) goto LAB_0114ee10;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x6bf224d8721e8d1b) {
            if (plVar13[2] == 0x6bf224d8721e8d1b) goto LAB_0114ee10;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114ee1c:
  uVar4 = _UNK_03caaa78;
  uVar3 = _DAT_03caaa70;
  auVar20 = *(undefined1 (*) [16])(lVar9 + 0x60);
  fVar48 = auVar20._0_4_;
  auVar24._0_4_ = -fVar48;
  fVar18 = auVar20._4_4_;
  fVar32 = -fVar18;
  fVar22 = auVar20._8_4_;
  auVar23._8_4_ = -fVar22;
  fVar47 = auVar20._12_4_;
  fVar41 = (float)_UNK_03caa5c8;
  uVar11 = (ulong)_UNK_03caa5c8 >> 0x20;
  fVar39 = (float)_DAT_03caa5c0;
  uVar10 = (ulong)_DAT_03caa5c0 >> 0x20;
  auVar34._4_4_ = fVar22;
  auVar34._0_4_ = fVar22;
  auVar34._8_4_ = fVar22;
  auVar34._12_4_ = fVar22;
  auVar20 = NEON_ext(auVar34,auVar20,0xc,1);
  auVar37._4_4_ = fVar18;
  auVar37._0_4_ = fVar18;
  auVar37._8_4_ = fVar18;
  auVar37._12_4_ = fVar18;
  fVar43 = (float)_DAT_03cab640;
  fVar44 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar45 = (float)_UNK_03cab648;
  fVar46 = (float)((ulong)_UNK_03cab648 >> 0x20);
  auVar38 = NEON_ext(auVar37,auVar20,0xc,1);
  auVar23._4_4_ = auVar23._8_4_;
  auVar23._0_4_ = auVar23._8_4_;
  auVar23._12_4_ = auVar23._8_4_;
  auVar24._4_12_ = auVar23._4_12_;
  auVar26._0_8_ = auVar24._0_8_;
  auVar26._8_4_ = fVar32;
  auVar26._12_4_ = auVar23._8_4_;
  auVar25._8_8_ = auVar26._8_8_;
  auVar25._4_4_ = auVar23._8_4_;
  auVar25._0_4_ = auVar24._0_4_;
  auVar27._0_12_ = auVar25._0_12_;
  auVar27._12_4_ = auVar23._8_4_;
  fVar40 = (float)_DAT_03caa700;
  uVar12 = (ulong)_DAT_03caa700 >> 0x20;
  fVar42 = (float)_UNK_03caa708;
  uVar14 = (ulong)_UNK_03caa708 >> 0x20;
  *(undefined4 *)(param_2 + 0xb4c) = 0x3f800000;
  fVar40 = fVar39 * fVar47 + fVar48 * fVar43 * 0.0 + fVar40 * auVar38._0_4_ * fVar43 +
           (float)uVar3 * auVar20._0_4_;
  fVar18 = (float)uVar10 * fVar47 + fVar18 * fVar44 * 0.0 + (float)uVar12 * auVar38._4_4_ * fVar44 +
           (float)((ulong)uVar3 >> 0x20) * auVar20._4_4_;
  fVar22 = fVar41 * fVar47 + fVar22 * fVar45 * 0.0 + fVar42 * auVar38._8_4_ * fVar45 +
           (float)uVar4 * auVar20._8_4_;
  fVar42 = (float)uVar11 * fVar47 + fVar48 * fVar46 * 0.0 + (float)uVar14 * auVar38._12_4_ * fVar46
           + (float)((ulong)uVar4 >> 0x20) * auVar20._12_4_;
  auVar21._4_4_ = fVar22;
  auVar21._0_4_ = fVar22;
  auVar21._8_4_ = fVar22;
  auVar21._12_4_ = fVar22;
  auVar33 = NEON_ext(auVar27,auVar27,8,1);
  auVar36._4_4_ = fVar18;
  auVar36._0_4_ = fVar40;
  auVar36._8_4_ = fVar22;
  auVar36._12_4_ = fVar42;
  auVar20 = NEON_ext(auVar21,auVar36,0xc,1);
  auVar35._4_4_ = fVar18;
  auVar35._0_4_ = fVar18;
  auVar35._8_4_ = fVar18;
  auVar35._12_4_ = fVar18;
  fVar48 = auVar33._0_4_;
  auVar28._4_12_ = auVar27._4_12_;
  auVar28._0_4_ = fVar48;
  auVar30._0_8_ = auVar28._0_8_;
  auVar30._8_4_ = auVar33._8_4_;
  auVar30._12_4_ = auVar23._8_4_;
  auVar29._8_8_ = auVar30._8_8_;
  auVar29._4_4_ = auVar24._0_4_;
  auVar29._0_4_ = fVar48;
  auVar31._0_12_ = auVar29._0_12_;
  auVar31._12_4_ = fVar32;
  auVar36 = NEON_ext(auVar35,auVar20,0xc,1);
  auVar38 = NEON_ext(auVar31,auVar33,8,1);
  auVar38 = NEON_ext(auVar38,auVar38,0xc,1);
  *(float *)(param_2 + 0xb40) =
       -((auVar24._0_4_ * fVar42 + fVar47 * fVar40 * fVar43 + auVar38._0_4_ * auVar36._0_4_ * fVar43
         ) - auVar20._0_4_ * fVar48);
  *(float *)(param_2 + 0xb44) =
       -((fVar32 * fVar42 + fVar47 * fVar18 * fVar44 + auVar38._4_4_ * auVar36._4_4_ * fVar44) -
        auVar20._4_4_ * auVar33._4_4_);
  *(float *)(param_2 + 0xb48) =
       -((auVar23._8_4_ * fVar42 + fVar47 * fVar22 * fVar45 + auVar38._8_4_ * auVar36._8_4_ * fVar45
         ) - auVar20._8_4_ * auVar33._8_4_);
  uVar10 = *(ulong *)(*param_1 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xffb6e7da76bfcf23;
    }
    else if (uVar10 < 0xffb6e7da76bfcf24) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xffb6e7da76bfcf23 / uVar10;
      }
      uVar12 = 0xffb6e7da76bfcf23 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xffb6e7da76bfcf23;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xffb6e7da76bfcf23) {
            if (plVar13[2] == -0x491825894030dd) goto LAB_0114eff4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xffb6e7da76bfcf23) {
            if (plVar13[2] == -0x491825894030dd) goto LAB_0114eff4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114f044:
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x9aac9fd8f9a8fae7;
    }
    else if (uVar10 < 0x9aac9fd8f9a8fae8) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x9aac9fd8f9a8fae7 / uVar10;
      }
      uVar12 = 0x9aac9fd8f9a8fae7 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x9aac9fd8f9a8fae7;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x9aac9fd8f9a8fae7) {
            if (plVar13[2] == -0x6553602706570519) goto LAB_0114f148;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x9aac9fd8f9a8fae7) {
            if (plVar13[2] == -0x6553602706570519) goto LAB_0114f148;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114f2a4:
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xbe43cc0fb3947351;
    }
    else if (uVar10 < 0xbe43cc0fb3947352) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xbe43cc0fb3947351 / uVar10;
      }
      uVar12 = 0xbe43cc0fb3947351 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xbe43cc0fb3947351;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xbe43cc0fb3947351) {
            if (plVar13[2] == -0x41bc33f04c6b8caf) goto LAB_0114f3a4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xbe43cc0fb3947351) {
            if (plVar13[2] == -0x41bc33f04c6b8caf) goto LAB_0114f3a4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0114f3f8:
      if (uVar10 == 0) goto LAB_0114f870;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xbc692a6d5da66181;
    }
    else if (uVar10 < 0xbc692a6d5da66182) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xbc692a6d5da66181 / uVar10;
      }
      uVar12 = 0xbc692a6d5da66181 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xbc692a6d5da66181;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xbc692a6d5da66181) {
            if (plVar13[2] == -0x4396d592a2599e7f) goto LAB_0114f4f4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xbc692a6d5da66181) {
            if (plVar13[2] == -0x4396d592a2599e7f) goto LAB_0114f4f4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0114f504:
      if (uVar10 == 0) goto LAB_0114f870;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x34e59fd8cec38ff;
    }
    else if (uVar10 < 0x34e59fd8cec3900) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x34e59fd8cec38ff / uVar10;
      }
      uVar12 = 0x34e59fd8cec38ff - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x34e59fd8cec38ff;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x34e59fd8cec38ff) {
            if (plVar13[2] == 0x34e59fd8cec38ff) goto LAB_0114f600;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x34e59fd8cec38ff) {
            if (plVar13[2] == 0x34e59fd8cec38ff) goto LAB_0114f600;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0114f654:
      if (uVar10 == 0) goto LAB_0114f870;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x94b5a16936dfabe0;
    }
    else if (uVar10 < 0x94b5a16936dfabe1) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x94b5a16936dfabe0 / uVar10;
      }
      uVar12 = 0x94b5a16936dfabe0 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x94b5a16936dfabe0;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      uVar14 = uVar10 - 1;
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x94b5a16936dfabe0) {
            if (plVar13[2] == -0x6b4a5e96c9205420) goto LAB_0114f748;
          }
          else if ((plVar13[1] & uVar14) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar13[1];
          if (uVar17 == 0x94b5a16936dfabe0) {
            if (plVar13[2] == -0x6b4a5e96c9205420) goto LAB_0114f748;
          }
          else {
            if (uVar10 <= uVar17) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar17 / uVar10;
              }
              uVar17 = uVar17 - uVar2 * uVar10;
            }
            if (uVar17 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_0114f870;
LAB_0114e400:
  auVar20 = *(undefined1 (*) [16])(plVar13 + 6);
  goto LAB_0114e404;
LAB_0114e51c:
  auVar38 = *(undefined1 (*) [16])(plVar13 + 6);
  goto LAB_0114e520;
LAB_0114e648:
  uVar16 = (undefined4)plVar13[6];
  goto LAB_0114e64c;
LAB_0114e758:
  auVar20 = *(undefined1 (*) [16])(plVar13 + 6);
  goto LAB_0114e75c;
LAB_0114e874:
  auVar33 = *(undefined1 (*) [16])(plVar13 + 6);
  goto LAB_0114e878;
LAB_0114e988:
  uVar8 = (undefined4)plVar13[6];
  goto LAB_0114e98c;
LAB_0114ea98:
  fVar48 = *(float *)(plVar13 + 6);
  goto LAB_0114ea9c;
LAB_0114ebf4:
  *(float *)(param_2 + 0xb34) = *(float *)(plVar13 + 6) - fVar47;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0114ec08;
LAB_0114ed04:
  *(int *)(param_2 + 0xb3c) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0114ed14;
LAB_0114ee10:
  if (0.0 < *(float *)(plVar13 + 6)) {
    *(float *)(param_2 + 0xb40) = -*(float *)(lVar1 + 0xe8);
    *(float *)(param_2 + 0xb44) = -*(float *)(lVar1 + 0xec);
    *(float *)(param_2 + 0xb48) = -*(float *)(lVar1 + 0xf0);
    goto LAB_0114f044;
  }
  goto LAB_0114ee1c;
LAB_0114eff4:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = sinf(fVar48);
  fVar47 = sinf(fVar18);
  *(float *)(param_2 + 0xb40) = fVar22 * fVar47;
  fVar22 = cosf(fVar18);
  *(float *)(param_2 + 0xb44) = fVar22;
  fVar48 = cosf(fVar48);
  fVar18 = sinf(fVar18);
  *(float *)(param_2 + 0xb48) = fVar48 * fVar18;
  goto LAB_0114f044;
LAB_0114f148:
  fVar22 = *(float *)(plVar13 + 6);
  fVar47 = *(float *)((long)plVar13 + 0x34);
  fVar32 = *(float *)(plVar13 + 7);
  fVar18 = 1.0;
  fVar48 = fVar18;
  if (fVar32 <= 1.1) {
    fVar48 = fVar32;
  }
  fVar40 = 0.0;
  if (-0.1 <= fVar48) {
    fVar40 = fVar48;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar48) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar32)) {
      bVar5 = fVar32 < 1.1;
      bVar6 = fVar32 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar40 = fVar32;
  }
  fVar48 = fVar18;
  if (fVar47 <= 1.1) {
    fVar48 = fVar47;
  }
  fVar32 = 0.0;
  if (-0.1 <= fVar48) {
    fVar32 = fVar48;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar48) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar47)) {
      bVar5 = fVar47 < 1.1;
      bVar6 = fVar47 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar32 = fVar47;
  }
  if (fVar22 <= 1.1) {
    fVar18 = fVar22;
  }
  fVar48 = 0.0;
  if (-0.1 <= fVar18) {
    fVar48 = fVar18;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar18) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar22)) {
      bVar5 = fVar22 < 1.1;
      bVar6 = fVar22 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar48 = fVar22;
  }
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar32 <= 0.0405) {
    fVar32 = fVar32 / 12.92;
  }
  else {
    fVar32 = powf((fVar32 + 0.055) / 1.055,2.4);
  }
  if (fVar40 <= 0.0405) {
    fVar40 = fVar40 / 12.92;
  }
  else {
    fVar40 = powf((fVar40 + 0.055) / 1.055,2.4);
  }
  *(float *)(param_2 + 0xd00) = fVar48;
  *(float *)(param_2 + 0xd04) = fVar32;
  *(float *)(param_2 + 0xd08) = fVar40;
  *(undefined4 *)(param_2 + 0xd0c) = 0;
  lVar9 = *param_1;
  goto LAB_0114f2a4;
LAB_0114f3a4:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = 1000.0;
  if (fVar48 <= 1000.1) {
    fVar18 = fVar48;
  }
  fVar22 = 0.0;
  if (-0.1 <= fVar18) {
    fVar22 = fVar18;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar18) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar48)) {
      bVar5 = fVar48 < 1000.1;
      bVar6 = fVar48 == 1000.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar22 = fVar48;
  }
  *(float *)(param_2 + 0xadc) = fVar22;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0114f3f8;
LAB_0114f4f4:
  *(int *)(param_2 + 0xae0) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0114f504;
LAB_0114f600:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = 100.0;
  if (fVar48 <= 100.1) {
    fVar18 = fVar48;
  }
  fVar22 = 0.0;
  if (-0.1 <= fVar18) {
    fVar22 = fVar18;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar18) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar48)) {
      bVar5 = fVar48 < 100.1;
      bVar6 = fVar48 == 100.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar22 = fVar48;
  }
  *(float *)(param_2 + 0xb4c) = fVar22;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0114f654;
LAB_0114f800:
  fVar22 = *(float *)(plVar15 + 6);
  fVar47 = *(float *)(plVar13 + 6) * 1.5707964;
  fVar48 = sinf(fVar22 * 3.1415927);
  fVar18 = cosf(fVar47);
  *(float *)(param_2 + 0xbd0) = fVar48 * fVar18;
  fVar48 = sinf(fVar47);
  *(float *)(param_2 + 0xbd4) = -fVar48;
  fVar48 = cosf(fVar22 * 3.1415927);
  fVar18 = cosf(fVar47);
  *(float *)(param_2 + 0xbd8) = fVar48 * fVar18;
  lVar9 = *param_1;
  goto LAB_0114f870;
LAB_0114f970:
  uVar16 = *(undefined4 *)((long)plVar13 + 0x34);
  lVar9 = plVar13[7];
  *(int *)(param_2 + 0xbc0) = (int)plVar13[6];
  *(undefined4 *)(param_2 + 0xbc4) = uVar16;
  *(int *)(param_2 + 0xbc8) = (int)lVar9;
  lVar9 = *param_1;
  goto LAB_0114f984;
LAB_0114fa84:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = 50.0;
  if (fVar48 <= 50.1) {
    fVar18 = fVar48;
  }
  fVar22 = 0.0;
  if (-0.1 <= fVar18) {
    fVar22 = fVar18;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar18) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar48)) {
      bVar5 = fVar48 < 50.1;
      bVar6 = fVar48 == 50.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar22 = fVar48;
  }
  *(float *)(param_2 + 0xbcc) = fVar22;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0114fad8;
LAB_0114fbd4:
  *(float *)(param_2 + 0xbdc) = *(float *)(plVar13 + 6) * 0.01;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0114fbf4;
LAB_0114fcf0:
  *(int *)(param_2 + 0xbec) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0114fd00;
LAB_0114fdfc:
  *(int *)(param_2 + 0xbfc) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0114fe0c;
LAB_0114ff00:
  if (uVar11 < 2) {
    uVar12 = uVar14 & 0x5f940c38d632918b;
  }
  else if (uVar10 < 0x5f940c38d632918c) {
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = 0x5f940c38d632918b / uVar10;
    }
    uVar12 = 0x5f940c38d632918b - uVar12 * uVar10;
  }
  else {
    uVar12 = 0x5f940c38d632918b;
  }
  plVar15 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
  if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
    if (uVar11 < 2) {
      do {
        if (plVar15[1] == 0x5f940c38d632918b) {
          if (plVar15[2] == 0x5f940c38d632918b) goto LAB_0114ffb8;
        }
        else if ((plVar15[1] & uVar14) != uVar12) break;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar15[1];
        if (uVar11 == 0x5f940c38d632918b) {
          if (plVar15[2] == 0x5f940c38d632918b) goto LAB_0114ffb8;
        }
        else {
          if (uVar10 <= uVar11) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar14 * uVar10;
          }
          if (uVar11 != uVar12) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  goto LAB_0115002c;
LAB_0114ffb8:
  fVar22 = *(float *)(plVar15 + 6);
  fVar47 = *(float *)(plVar13 + 6) * 1.5707964;
  fVar48 = sinf(fVar22 * 3.1415927);
  fVar18 = cosf(fVar47);
  *(float *)(param_2 + 0xbe0) = fVar48 * fVar18;
  fVar48 = sinf(fVar47);
  *(float *)(param_2 + 0xbe4) = -fVar48;
  fVar48 = cosf(fVar22 * 3.1415927);
  fVar18 = cosf(fVar47);
  *(float *)(param_2 + 0xbe8) = fVar48 * fVar18;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0115002c;
LAB_01150128:
  *(int *)(param_2 + 0xb5c) = (int)plVar13[6];
  lVar9 = *param_1;
  goto LAB_01150134;
LAB_01150234:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = *(float *)(plVar13 + 7);
  fVar47 = *(float *)((long)plVar13 + 0x3c);
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar18 <= 0.0405) {
    fVar18 = fVar18 / 12.92;
  }
  else {
    fVar18 = powf((fVar18 + 0.055) / 1.055,2.4);
  }
  if (fVar22 <= 0.0405) {
    fVar22 = fVar22 / 12.92;
  }
  else {
    fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  *(float *)(param_2 + 0xb70) = fVar48 * fVar47;
  *(float *)(param_2 + 0xb78) = fVar22 * fVar47;
  *(float *)(param_2 + 0xb74) = fVar18 * fVar47;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  goto LAB_01150344;
LAB_01150440:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = *(float *)(plVar13 + 7);
  fVar47 = *(float *)((long)plVar13 + 0x3c);
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar18 <= 0.0405) {
    fVar18 = fVar18 / 12.92;
  }
  else {
    fVar18 = powf((fVar18 + 0.055) / 1.055,2.4);
  }
  if (fVar22 <= 0.0405) {
    fVar22 = fVar22 / 12.92;
  }
  else {
    fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  *(float *)(param_2 + 0xb80) = fVar48 * fVar47;
  *(float *)(param_2 + 0xb88) = fVar22 * fVar47;
  *(float *)(param_2 + 0xb84) = fVar18 * fVar47;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  goto LAB_01150550;
LAB_0115064c:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = *(float *)(plVar13 + 7);
  fVar47 = *(float *)((long)plVar13 + 0x3c);
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar18 <= 0.0405) {
    fVar18 = fVar18 / 12.92;
  }
  else {
    fVar18 = powf((fVar18 + 0.055) / 1.055,2.4);
  }
  if (fVar22 <= 0.0405) {
    fVar22 = fVar22 / 12.92;
  }
  else {
    fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  *(float *)(param_2 + 0xb90) = fVar48 * fVar47;
  *(float *)(param_2 + 0xb98) = fVar22 * fVar47;
  *(float *)(param_2 + 0xb94) = fVar18 * fVar47;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  goto LAB_0115075c;
LAB_01150858:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = *(float *)(plVar13 + 7);
  fVar47 = *(float *)((long)plVar13 + 0x3c);
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar18 <= 0.0405) {
    fVar18 = fVar18 / 12.92;
  }
  else {
    fVar18 = powf((fVar18 + 0.055) / 1.055,2.4);
  }
  if (fVar22 <= 0.0405) {
    fVar22 = fVar22 / 12.92;
  }
  else {
    fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  *(float *)(param_2 + 0xba0) = fVar48 * fVar47;
  *(float *)(param_2 + 0xba8) = fVar22 * fVar47;
  *(float *)(param_2 + 0xba4) = fVar18 * fVar47;
  lVar9 = *param_1;
  goto LAB_01150964;
LAB_01150a64:
  *(int *)(param_2 + 0xb7c) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01150a74;
LAB_01150b70:
  *(int *)(param_2 + 0xb8c) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01150b80;
LAB_01150c7c:
  *(int *)(param_2 + 0xb9c) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01150c8c;
LAB_01150d88:
  *(int *)(param_2 + 0xbac) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01150d98;
LAB_01150e9c:
  uVar16 = (undefined4)plVar13[6];
  goto LAB_01150ea0;
LAB_01150fb0:
  uVar16 = (undefined4)plVar13[6];
  goto LAB_01150fb4;
LAB_011510bc:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = *(float *)(plVar13 + 7);
  uVar16 = *(undefined4 *)((long)plVar13 + 0x3c);
  fVar47 = 1.0;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x2630334484874146;
    }
    else if (uVar10 < 0x2630334484874147) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x2630334484874146 / uVar10;
      }
      uVar12 = 0x2630334484874146 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x2630334484874146;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x2630334484874146) {
            if (plVar13[2] == 0x2630334484874146) goto LAB_011511c4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x2630334484874146) {
            if (plVar13[2] == 0x2630334484874146) goto LAB_011511c4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_011511c8:
  fVar32 = 10.0;
  if (fVar47 <= 10.1) {
    fVar32 = fVar47;
  }
  fVar40 = 0.0;
  if (-0.1 <= fVar32) {
    fVar40 = fVar32;
  }
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar18 <= 0.0405) {
    fVar18 = fVar18 / 12.92;
  }
  else {
    fVar18 = powf((fVar18 + 0.055) / 1.055,2.4);
  }
  if (fVar22 <= 0.0405) {
    fVar22 = fVar22 / 12.92;
  }
  else {
    fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  if (fVar47 <= 10.1 && -0.1 <= fVar32) {
    fVar40 = fVar47;
  }
  *(undefined4 *)(param_2 + 0xc0c) = uVar16;
  *(float *)(param_2 + 0xc00) = fVar40 * fVar48;
  *(float *)(param_2 + 0xc04) = fVar40 * fVar18;
  *(float *)(param_2 + 0xc08) = fVar40 * fVar22;
  lVar9 = *param_1;
  goto LAB_0115131c;
LAB_011511c4:
  fVar47 = *(float *)(plVar13 + 6);
  goto LAB_011511c8;
LAB_01151420:
  fVar18 = *(float *)(plVar13 + 6);
  fVar48 = cosf(fVar18);
  *(float *)(param_2 + 0xc10) = fVar48;
  fVar48 = sinf(fVar18);
  *(float *)(param_2 + 0xc14) = fVar48;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01151444;
LAB_01151540:
  *(int *)(param_2 + 0xc18) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01151550;
LAB_0115164c:
  *(int *)(param_2 + 0xc20) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0115165c;
LAB_01151758:
  *(int *)(param_2 + 0xc24) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01151768;
LAB_01151864:
  fVar48 = *(float *)(param_2 + 0xc28) + *(float *)(plVar13 + 6) / -300.0;
  *(float *)(param_2 + 0xc28) = fVar48;
  if (fVar48 < -1.0) {
    *(float *)(param_2 + 0xc28) = fVar48 + 1.0;
  }
  goto LAB_01151888;
LAB_0115198c:
  *(int *)(param_2 + 0xc30) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0115199c;
LAB_01151a98:
  *(int *)(param_2 + 0xc34) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01151aa8;
LAB_01151ba4:
  fVar48 = *(float *)(param_2 + 0xc38) + *(float *)(plVar13 + 6) / -300.0;
  *(float *)(param_2 + 0xc38) = fVar48;
  if (fVar48 < -1.0) {
    *(float *)(param_2 + 0xc38) = fVar48 + 1.0;
  }
  goto LAB_01151bc8;
LAB_01151ccc:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = *(float *)(plVar13 + 7);
  uVar16 = *(undefined4 *)((long)plVar13 + 0x3c);
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar18 <= 0.0405) {
    fVar18 = fVar18 / 12.92;
  }
  else {
    fVar18 = powf((fVar18 + 0.055) / 1.055,2.4);
  }
  if (fVar22 <= 0.0405) {
    fVar22 = fVar22 / 12.92;
  }
  else {
    fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  *(float *)(param_2 + 0xcd0) = fVar48;
  *(float *)(param_2 + 0xcd4) = fVar18;
  *(float *)(param_2 + 0xcd8) = fVar22;
  *(undefined4 *)(param_2 + 0xcdc) = uVar16;
  lVar9 = *param_1;
  goto LAB_01151dd4;
LAB_01151ed4:
  *(int *)(param_2 + 0xcf0) = (int)plVar13[6];
  lVar9 = *param_1;
  goto LAB_01151ee0;
LAB_01151fe0:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = *(float *)(plVar13 + 7);
  uVar16 = *(undefined4 *)((long)plVar13 + 0x3c);
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar18 <= 0.0405) {
    fVar18 = fVar18 / 12.92;
  }
  else {
    fVar18 = powf((fVar18 + 0.055) / 1.055,2.4);
  }
  if (fVar22 <= 0.0405) {
    fVar22 = fVar22 / 12.92;
  }
  else {
    fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  *(float *)(param_2 + 0xce0) = fVar48;
  *(float *)(param_2 + 0xce4) = fVar18;
  *(float *)(param_2 + 0xce8) = fVar22;
  *(undefined4 *)(param_2 + 0xcec) = uVar16;
  lVar9 = *param_1;
  goto LAB_011520e8;
LAB_011521e8:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = 20.0;
  if (fVar48 <= 20.1) {
    fVar18 = fVar48;
  }
  fVar22 = 0.0;
  if (-0.1 <= fVar18) {
    fVar22 = fVar18;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar18) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar48)) {
      bVar5 = fVar48 < 20.1;
      bVar6 = fVar48 == 20.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar22 = fVar48;
  }
  *(float *)(param_2 + 0xcf4) = fVar22;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01152238;
LAB_01152334:
  *(int *)(param_2 + 0xc40) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01152344;
LAB_01152440:
  *(int *)(param_2 + 0xc44) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01152450;
LAB_0115254c:
  *(int *)(param_2 + 0xc48) = (int)plVar13[6];
  lVar9 = *param_1;
  goto LAB_01152558;
LAB_01152658:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = *(float *)(plVar13 + 7);
  uVar16 = *(undefined4 *)((long)plVar13 + 0x3c);
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar18 <= 0.0405) {
    fVar18 = fVar18 / 12.92;
  }
  else {
    fVar18 = powf((fVar18 + 0.055) / 1.055,2.4);
  }
  if (fVar22 <= 0.0405) {
    fVar22 = fVar22 / 12.92;
  }
  else {
    fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  *(float *)(param_2 + 0xc70) = fVar48;
  *(float *)(param_2 + 0xc74) = fVar18;
  *(float *)(param_2 + 0xc78) = fVar22;
  *(undefined4 *)(param_2 + 0xc7c) = uVar16;
  lVar9 = *param_1;
  goto LAB_01152760;
LAB_01152860:
  fVar18 = *(float *)(plVar13 + 6);
  fVar48 = cosf(fVar18);
  *(float *)(param_2 + 0xc80) = fVar48;
  fVar48 = sinf(fVar18);
  *(float *)(param_2 + 0xc84) = fVar48;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01152884;
LAB_01152980:
  *(int *)(param_2 + 0xc88) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01152990;
LAB_01152a8c:
  *(int *)(param_2 + 0xc90) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01152a9c;
LAB_01152b98:
  *(int *)(param_2 + 0xc94) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01152ba8;
LAB_01152ca4:
  fVar48 = *(float *)(param_2 + 0xc98) + *(float *)(plVar13 + 6) / -300.0;
  *(float *)(param_2 + 0xc98) = fVar48;
  if (fVar48 < -1.0) {
    *(float *)(param_2 + 0xc98) = fVar48 + 1.0;
  }
  goto LAB_01152cc8;
LAB_01152dcc:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = *(float *)((long)plVar13 + 0x34);
  fVar22 = *(float *)(plVar13 + 7);
  uVar16 = *(undefined4 *)((long)plVar13 + 0x3c);
  if (fVar48 <= 0.0405) {
    fVar48 = fVar48 / 12.92;
  }
  else {
    fVar48 = powf((fVar48 + 0.055) / 1.055,2.4);
  }
  if (fVar18 <= 0.0405) {
    fVar18 = fVar18 / 12.92;
  }
  else {
    fVar18 = powf((fVar18 + 0.055) / 1.055,2.4);
  }
  if (fVar22 <= 0.0405) {
    fVar22 = fVar22 / 12.92;
  }
  else {
    fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  *(float *)(param_2 + 0xca0) = fVar48;
  *(float *)(param_2 + 0xca4) = fVar18;
  *(float *)(param_2 + 0xca8) = fVar22;
  *(undefined4 *)(param_2 + 0xcac) = uVar16;
  lVar9 = *param_1;
  goto LAB_01152ed4;
LAB_01152fd4:
  fVar18 = *(float *)(plVar13 + 6);
  fVar48 = cosf(fVar18);
  *(float *)(param_2 + 0xcb0) = fVar48;
  fVar48 = sinf(fVar18);
  *(float *)(param_2 + 0xcb4) = fVar48;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01152ff8;
LAB_011530f4:
  *(int *)(param_2 + 0xcb8) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01153104;
LAB_01153200:
  *(int *)(param_2 + 0xcc0) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01153210;
LAB_0115330c:
  *(int *)(param_2 + 0xcc4) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0115331c;
LAB_01153418:
  fVar48 = *(float *)(param_2 + 0xcc8) + *(float *)(plVar13 + 6) / -300.0;
  *(float *)(param_2 + 0xcc8) = fVar48;
  if (fVar48 < -1.0) {
    *(float *)(param_2 + 0xcc8) = fVar48 + 1.0;
  }
  goto LAB_0115343c;
LAB_01153540:
  *(int *)(param_2 + 0xc50) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01153550;
LAB_0115364c:
  *(int *)(param_2 + 0xc54) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_0115365c;
LAB_01153758:
  *(int *)(param_2 + 0xc58) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01153768;
LAB_01153864:
  *(int *)(param_2 + 0xc5c) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01153874;
LAB_01153970:
  *(float *)(param_2 + 0xc60) =
       *(float *)(param_2 + 0xc64) + *(float *)(plVar13 + 6) * *(float *)(param_2 + 0x34);
  lVar9 = *param_1;
  goto LAB_0115398c;
LAB_01153a8c:
  auVar20 = *(undefined1 (*) [16])(plVar13 + 6);
  *(long *)(param_2 + 0xdd0) = auVar20._0_8_;
  auVar20 = NEON_ext(auVar20,auVar20,8,1);
  *(long *)(param_2 + 0xdd8) = auVar20._0_8_;
  lVar9 = *param_1;
  goto LAB_01153aa0;
LAB_01153bb0:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = 1.0;
  if (fVar48 <= 1.1) {
    fVar18 = fVar48;
  }
  fVar22 = 0.0;
  if (-0.1 <= fVar18) {
    fVar22 = fVar18;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar18) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar48)) {
      bVar5 = fVar48 < 1.1;
      bVar6 = fVar48 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar22 = fVar48;
  }
  *(float *)(param_2 + 0xddc) = fVar22;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01153c00;
LAB_01153cfc:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = 100.0;
  if (fVar48 <= 100.1) {
    fVar18 = fVar48;
  }
  fVar22 = 0.0;
  if (-0.1 <= fVar18) {
    fVar22 = fVar18;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar18) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar48)) {
      bVar5 = fVar48 < 100.1;
      bVar6 = fVar48 == 100.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar22 = fVar48;
  }
  *(float *)(param_2 + 0xde0) = fVar22;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01153d50;
LAB_01153e40:
  fVar48 = *(float *)(plVar13 + 6);
  fVar18 = 100.0;
  if (fVar48 <= 100.1) {
    fVar18 = fVar48;
  }
  fVar22 = 0.0;
  if (-0.1 <= fVar18) {
    fVar22 = fVar18;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar18) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar48)) {
      bVar5 = fVar48 < 100.1;
      bVar6 = fVar48 == 100.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar22 = fVar48;
  }
  *(float *)(param_2 + 0xde8) = fVar22;
  goto LAB_01153e8c;
LAB_01153fac:
  *(int *)(param_2 + 0xde8) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01153fbc;
LAB_011540c0:
  fVar48 = *(float *)(plVar13 + 6);
  goto LAB_011540c4;
LAB_0115420c:
  uVar16 = (undefined4)plVar13[6];
  *(undefined4 *)(param_2 + 0xd40) = uVar16;
  *(undefined4 *)(param_2 + 0xd50) = uVar16;
  *(undefined4 *)(param_2 + 0xd60) = uVar16;
  *(undefined4 *)(param_2 + 0xd70) = uVar16;
  *(undefined4 *)(param_2 + 0xd80) = uVar16;
  *(undefined4 *)(param_2 + 0xd90) = uVar16;
  *(undefined4 *)(param_2 + 0xda0) = uVar16;
  *(undefined4 *)(param_2 + 0xdb0) = uVar16;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01154238;
LAB_01154334:
  *(float *)(param_2 + 0xd20) = 1.0 / *(float *)(plVar13 + 6);
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01154348;
LAB_01154444:
  *(float *)(param_2 + 0xd24) = 1.0 / *(float *)(plVar13 + 6);
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_01154458;
LAB_01154564:
  fVar48 = *(float *)(plVar13 + 6);
  if (uVar11 < 2) {
    uVar12 = uVar14 & 0x656030e321270063;
  }
  else if (uVar10 < 0x656030e321270064) {
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = 0x656030e321270063 / uVar10;
    }
    uVar12 = 0x656030e321270063 - uVar12 * uVar10;
  }
  else {
    uVar12 = 0x656030e321270063;
  }
  plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
  if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
    if (uVar11 < 2) {
      do {
        if (plVar13[1] == 0x656030e321270063) {
          if (plVar13[2] == 0x656030e321270063) goto LAB_0115461c;
        }
        else if ((plVar13[1] & uVar14) != uVar12) break;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar13[1];
        if (uVar11 == 0x656030e321270063) {
          if (plVar13[2] == 0x656030e321270063) goto LAB_0115461c;
        }
        else {
          if (uVar10 <= uVar11) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar14 * uVar10;
          }
          if (uVar11 != uVar12) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_01154620:
  fVar18 = sinf(fVar48 * 3.1415927);
  *(double *)(lVar1 + 200) =
       *(double *)(lVar1 + 200) + *(double *)(lVar1 + 0xc0) * (double)(fVar22 * fVar18 * 0.005);
  fVar48 = cosf(fVar48 * 3.1415927);
  *(double *)(lVar1 + 0xd0) =
       *(double *)(lVar1 + 0xd0) + *(double *)(lVar1 + 0xc0) * (double)(fVar22 * fVar48 * 0.005);
  dVar19 = fmod(*(double *)(lVar1 + 200),10000.0);
  *(double *)(lVar1 + 200) = dVar19;
  dVar19 = fmod(*(double *)(lVar1 + 0xd0),10000.0);
  *(double *)(lVar1 + 0xd0) = dVar19;
  *(float *)(param_2 + 0xd28) = (float)*(double *)(lVar1 + 200);
  *(float *)(param_2 + 0xd2c) = (float)*(double *)(lVar1 + 0xd0);
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_011546d0;
LAB_0115461c:
  fVar22 = *(float *)(plVar13 + 6);
  goto LAB_01154620;
LAB_011547c4:
  if (0.0 < *(float *)(plVar13 + 6)) {
    if (uVar11 < 2) {
      uVar12 = uVar14 & 0x51c737df93a11e6a;
    }
    else if (uVar10 < 0x51c737df93a11e6b) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x51c737df93a11e6a / uVar10;
      }
      uVar12 = 0x51c737df93a11e6a - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x51c737df93a11e6a;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0)) {
LAB_01154eb8:
      uVar16 = 0;
    }
    else if (uVar11 < 2) {
      do {
        if (plVar13[1] == 0x51c737df93a11e6a) {
          if (plVar13[2] == 0x51c737df93a11e6a) goto LAB_01154d88;
        }
        else if ((plVar13[1] & uVar14) != uVar12) goto LAB_01154eb8;
        plVar13 = (long *)*plVar13;
        uVar16 = 0;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar13[1];
        if (uVar11 == 0x51c737df93a11e6a) {
          if (plVar13[2] == 0x51c737df93a11e6a) goto LAB_01154d88;
        }
        else {
          if (uVar10 <= uVar11) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar14 * uVar10;
          }
          if (uVar11 != uVar12) goto LAB_01154eb8;
        }
        plVar13 = (long *)*plVar13;
        uVar16 = 0;
      } while (plVar13 != (long *)0x0);
    }
    goto LAB_01154d8c;
  }
  goto LAB_011547d0;
LAB_01154d88:
  uVar16 = (undefined4)plVar13[6];
LAB_01154d8c:
  *(undefined4 *)(param_2 + 0xd28) = uVar16;
  uVar10 = *(ulong *)(*param_1 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x51c736df93a11cb7;
    }
    else if (uVar10 < 0x51c736df93a11cb8) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x51c736df93a11cb7 / uVar10;
      }
      uVar12 = 0x51c736df93a11cb7 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x51c736df93a11cb7;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x51c736df93a11cb7) {
            if (plVar13[2] == 0x51c736df93a11cb7) goto LAB_01154e9c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_01154eb0;
          plVar13 = (long *)*plVar13;
          uVar16 = 0;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x51c736df93a11cb7) {
            if (plVar13[2] == 0x51c736df93a11cb7) goto LAB_01154e9c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) goto LAB_01154eb0;
          }
          plVar13 = (long *)*plVar13;
          uVar16 = 0;
        } while (plVar13 != (long *)0x0);
      }
      goto LAB_01154ea0;
    }
  }
LAB_01154eb0:
  uVar16 = 0;
  goto LAB_01154ea0;
LAB_01154e9c:
  uVar16 = (undefined4)plVar13[6];
LAB_01154ea0:
  *(undefined4 *)(param_2 + 0xd2c) = uVar16;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_011547d0;
LAB_011548cc:
  *(int *)(param_2 + 0xd30) = (int)plVar13[6];
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  goto LAB_011548dc;
LAB_0114f748:
  if (uVar11 < 2) {
    uVar12 = uVar14 & 0x735c0b561f22cf55;
  }
  else if (uVar10 < 0x735c0b561f22cf56) {
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = 0x735c0b561f22cf55 / uVar10;
    }
    uVar12 = 0x735c0b561f22cf55 - uVar12 * uVar10;
  }
  else {
    uVar12 = 0x735c0b561f22cf55;
  }
  plVar15 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
  if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
    if (uVar11 < 2) {
      do {
        if (plVar15[1] == 0x735c0b561f22cf55) {
          if (plVar15[2] == 0x735c0b561f22cf55) goto LAB_0114f800;
        }
        else if ((plVar15[1] & uVar14) != uVar12) break;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar15[1];
        if (uVar11 == 0x735c0b561f22cf55) {
          if (plVar15[2] == 0x735c0b561f22cf55) goto LAB_0114f800;
        }
        else {
          if (uVar10 <= uVar11) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar14 * uVar10;
          }
          if (uVar11 != uVar12) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
LAB_0114f870:
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x860d0e803a5f60a2;
    }
    else if (uVar10 < 0x860d0e803a5f60a3) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x860d0e803a5f60a2 / uVar10;
      }
      uVar12 = 0x860d0e803a5f60a2 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x860d0e803a5f60a2;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x860d0e803a5f60a2) {
            if (plVar13[2] == -0x79f2f17fc5a09f5e) goto LAB_0114f970;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x860d0e803a5f60a2) {
            if (plVar13[2] == -0x79f2f17fc5a09f5e) goto LAB_0114f970;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0114f984:
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x767994d8bedd81e0;
    }
    else if (uVar10 < 0x767994d8bedd81e1) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x767994d8bedd81e0 / uVar10;
      }
      uVar12 = 0x767994d8bedd81e0 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x767994d8bedd81e0;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x767994d8bedd81e0) {
            if (plVar13[2] == 0x767994d8bedd81e0) goto LAB_0114fa84;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x767994d8bedd81e0) {
            if (plVar13[2] == 0x767994d8bedd81e0) goto LAB_0114fa84;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0114fad8:
      if (uVar10 == 0) goto LAB_01150134;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xd8a89fdd33c90a02;
    }
    else if (uVar10 < 0xd8a89fdd33c90a03) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xd8a89fdd33c90a02 / uVar10;
      }
      uVar12 = 0xd8a89fdd33c90a02 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xd8a89fdd33c90a02;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xd8a89fdd33c90a02) {
            if (plVar13[2] == -0x27576022cc36f5fe) goto LAB_0114fbd4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xd8a89fdd33c90a02) {
            if (plVar13[2] == -0x27576022cc36f5fe) goto LAB_0114fbd4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0114fbf4:
      if (uVar10 == 0) goto LAB_01150134;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x4e07c174f648479a;
    }
    else if (uVar10 < 0x4e07c174f648479b) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x4e07c174f648479a / uVar10;
      }
      uVar12 = 0x4e07c174f648479a - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x4e07c174f648479a;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x4e07c174f648479a) {
            if (plVar13[2] == 0x4e07c174f648479a) goto LAB_0114fcf0;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x4e07c174f648479a) {
            if (plVar13[2] == 0x4e07c174f648479a) goto LAB_0114fcf0;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0114fd00:
      if (uVar10 == 0) goto LAB_01150134;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xdd4f5dabc3ce1d38;
    }
    else if (uVar10 < 0xdd4f5dabc3ce1d39) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xdd4f5dabc3ce1d38 / uVar10;
      }
      uVar12 = 0xdd4f5dabc3ce1d38 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xdd4f5dabc3ce1d38;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xdd4f5dabc3ce1d38) {
            if (plVar13[2] == -0x22b0a2543c31e2c8) goto LAB_0114fdfc;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xdd4f5dabc3ce1d38) {
            if (plVar13[2] == -0x22b0a2543c31e2c8) goto LAB_0114fdfc;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0114fe0c:
      if (uVar10 == 0) goto LAB_01150134;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x92fa5217b3ed6866;
    }
    else if (uVar10 < 0x92fa5217b3ed6867) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x92fa5217b3ed6866 / uVar10;
      }
      uVar12 = 0x92fa5217b3ed6866 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x92fa5217b3ed6866;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      uVar14 = uVar10 - 1;
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x92fa5217b3ed6866) {
            if (plVar13[2] == -0x6d05ade84c12979a) goto LAB_0114ff00;
          }
          else if ((plVar13[1] & uVar14) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar13[1];
          if (uVar17 == 0x92fa5217b3ed6866) {
            if (plVar13[2] == -0x6d05ade84c12979a) goto LAB_0114ff00;
          }
          else {
            if (uVar10 <= uVar17) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar17 / uVar10;
              }
              uVar17 = uVar17 - uVar2 * uVar10;
            }
            if (uVar17 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0115002c:
      if (uVar10 == 0) goto LAB_01150134;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xfed76bd3fb5e2d53;
    }
    else if (uVar10 < 0xfed76bd3fb5e2d54) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xfed76bd3fb5e2d53 / uVar10;
      }
      uVar12 = 0xfed76bd3fb5e2d53 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xfed76bd3fb5e2d53;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xfed76bd3fb5e2d53) {
            if (plVar13[2] == -0x128942c04a1d2ad) goto LAB_01150128;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xfed76bd3fb5e2d53) {
            if (plVar13[2] == -0x128942c04a1d2ad) goto LAB_01150128;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01150134:
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8ab91871f14ce6a2;
    }
    else if (uVar10 < 0x8ab91871f14ce6a3) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8ab91871f14ce6a2 / uVar10;
      }
      uVar12 = 0x8ab91871f14ce6a2 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8ab91871f14ce6a2;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x8ab91871f14ce6a2) {
            if (plVar13[2] == -0x7546e78e0eb3195e) goto LAB_01150234;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x8ab91871f14ce6a2) {
            if (plVar13[2] == -0x7546e78e0eb3195e) goto LAB_01150234;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01150344:
      if (uVar10 == 0) goto LAB_01150964;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8ab91971f14ce855;
    }
    else if (uVar10 < 0x8ab91971f14ce856) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8ab91971f14ce855 / uVar10;
      }
      uVar12 = 0x8ab91971f14ce855 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8ab91971f14ce855;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x8ab91971f14ce855) {
            if (plVar13[2] == -0x7546e68e0eb317ab) goto LAB_01150440;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x8ab91971f14ce855) {
            if (plVar13[2] == -0x7546e68e0eb317ab) goto LAB_01150440;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01150550:
      if (uVar10 == 0) goto LAB_01150964;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8ab91671f14ce33c;
    }
    else if (uVar10 < 0x8ab91671f14ce33d) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8ab91671f14ce33c / uVar10;
      }
      uVar12 = 0x8ab91671f14ce33c - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8ab91671f14ce33c;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x8ab91671f14ce33c) {
            if (plVar13[2] == -0x7546e98e0eb31cc4) goto LAB_0115064c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x8ab91671f14ce33c) {
            if (plVar13[2] == -0x7546e98e0eb31cc4) goto LAB_0115064c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0115075c:
      if (uVar10 == 0) goto LAB_01150964;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8ab91771f14ce4ef;
    }
    else if (uVar10 < 0x8ab91771f14ce4f0) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8ab91771f14ce4ef / uVar10;
      }
      uVar12 = 0x8ab91771f14ce4ef - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8ab91771f14ce4ef;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x8ab91771f14ce4ef) {
            if (plVar13[2] == -0x7546e88e0eb31b11) goto LAB_01150858;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x8ab91771f14ce4ef) {
            if (plVar13[2] == -0x7546e88e0eb31b11) goto LAB_01150858;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01150964:
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 == 0) {
LAB_01154520:
    uVar16 = 0x3f800000;
  }
  else {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8ba88afe19b8072d;
    }
    else if (uVar10 < 0x8ba88afe19b8072e) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8ba88afe19b8072d / uVar10;
      }
      uVar12 = 0x8ba88afe19b8072d - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8ba88afe19b8072d;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x8ba88afe19b8072d) {
            if (plVar13[2] == -0x74577501e647f8d3) goto LAB_01150a64;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x8ba88afe19b8072d) {
            if (plVar13[2] == -0x74577501e647f8d3) goto LAB_01150a64;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01150a74:
      if (uVar10 == 0) goto LAB_01154520;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8ba889fe19b8057a;
    }
    else if (uVar10 < 0x8ba889fe19b8057b) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8ba889fe19b8057a / uVar10;
      }
      uVar12 = 0x8ba889fe19b8057a - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8ba889fe19b8057a;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x8ba889fe19b8057a) {
            if (plVar13[2] == -0x74577601e647fa86) goto LAB_01150b70;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x8ba889fe19b8057a) {
            if (plVar13[2] == -0x74577601e647fa86) goto LAB_01150b70;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01150b80:
      if (uVar10 == 0) goto LAB_01154520;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8ba888fe19b803c7;
    }
    else if (uVar10 < 0x8ba888fe19b803c8) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8ba888fe19b803c7 / uVar10;
      }
      uVar12 = 0x8ba888fe19b803c7 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8ba888fe19b803c7;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x8ba888fe19b803c7) {
            if (plVar13[2] == -0x74577701e647fc39) goto LAB_01150c7c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x8ba888fe19b803c7) {
            if (plVar13[2] == -0x74577701e647fc39) goto LAB_01150c7c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01150c8c:
      if (uVar10 == 0) goto LAB_01154520;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8ba887fe19b80214;
    }
    else if (uVar10 < 0x8ba887fe19b80215) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8ba887fe19b80214 / uVar10;
      }
      uVar12 = 0x8ba887fe19b80214 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8ba887fe19b80214;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x8ba887fe19b80214) {
            if (plVar13[2] == -0x74577801e647fdec) goto LAB_01150d88;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x8ba887fe19b80214) {
            if (plVar13[2] == -0x74577801e647fdec) goto LAB_01150d88;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01150d98:
      if (uVar10 == 0) goto LAB_01154520;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x5909b93b5fd482c4;
    }
    else if (uVar10 < 0x5909b93b5fd482c5) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x5909b93b5fd482c4 / uVar10;
      }
      uVar12 = 0x5909b93b5fd482c4 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x5909b93b5fd482c4;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_01154520;
    if (uVar11 < 2) {
      do {
        if (plVar13[1] == 0x5909b93b5fd482c4) {
          if (plVar13[2] == 0x5909b93b5fd482c4) goto LAB_01150e9c;
        }
        else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_01154520;
        plVar13 = (long *)*plVar13;
        uVar16 = 0x3f800000;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar13[1];
        if (uVar11 == 0x5909b93b5fd482c4) {
          if (plVar13[2] == 0x5909b93b5fd482c4) goto LAB_01150e9c;
        }
        else {
          if (uVar10 <= uVar11) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar14 * uVar10;
          }
          if (uVar11 != uVar12) goto LAB_01154520;
        }
        plVar13 = (long *)*plVar13;
        uVar16 = 0x3f800000;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_01150ea0:
  *(undefined4 *)(param_2 + 0xbb0) = uVar16;
  uVar10 = *(ulong *)(*param_1 + 0x88);
  if (uVar10 == 0) {
LAB_01154530:
    uVar16 = 0x3f800000;
  }
  else {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x57ba7ec92d64e02a;
    }
    else if (uVar10 < 0x57ba7ec92d64e02b) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x57ba7ec92d64e02a / uVar10;
      }
      uVar12 = 0x57ba7ec92d64e02a - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x57ba7ec92d64e02a;
    }
    plVar13 = *(long **)(*(long *)(*param_1 + 0x80) + uVar12 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_01154530;
    if (uVar11 < 2) {
      do {
        if (plVar13[1] == 0x57ba7ec92d64e02a) {
          if (plVar13[2] == 0x57ba7ec92d64e02a) goto LAB_01150fb0;
        }
        else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_01154530;
        plVar13 = (long *)*plVar13;
        uVar16 = 0x3f800000;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar13[1];
        if (uVar11 == 0x57ba7ec92d64e02a) {
          if (plVar13[2] == 0x57ba7ec92d64e02a) goto LAB_01150fb0;
        }
        else {
          if (uVar10 <= uVar11) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar14 * uVar10;
          }
          if (uVar11 != uVar12) goto LAB_01154530;
        }
        plVar13 = (long *)*plVar13;
        uVar16 = 0x3f800000;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_01150fb4:
  *(undefined4 *)(param_2 + 0xbb4) = uVar16;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x9a33038f1f30c194;
    }
    else if (uVar10 < 0x9a33038f1f30c195) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x9a33038f1f30c194 / uVar10;
      }
      uVar12 = 0x9a33038f1f30c194 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x9a33038f1f30c194;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x9a33038f1f30c194) {
            if (plVar13[2] == -0x65ccfc70e0cf3e6c) goto LAB_011510bc;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x9a33038f1f30c194) {
            if (plVar13[2] == -0x65ccfc70e0cf3e6c) goto LAB_011510bc;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0115131c:
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x498092b661eb6682;
    }
    else if (uVar10 < 0x498092b661eb6683) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x498092b661eb6682 / uVar10;
      }
      uVar12 = 0x498092b661eb6682 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x498092b661eb6682;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x498092b661eb6682) {
            if (plVar13[2] == 0x498092b661eb6682) goto LAB_01151420;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x498092b661eb6682) {
            if (plVar13[2] == 0x498092b661eb6682) goto LAB_01151420;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01151444:
      if (uVar10 == 0) goto LAB_01151888;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x7f7aef9cf004c4ae;
    }
    else if (uVar10 < 0x7f7aef9cf004c4af) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x7f7aef9cf004c4ae / uVar10;
      }
      uVar12 = 0x7f7aef9cf004c4ae - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x7f7aef9cf004c4ae;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x7f7aef9cf004c4ae) {
            if (plVar13[2] == 0x7f7aef9cf004c4ae) goto LAB_01151540;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x7f7aef9cf004c4ae) {
            if (plVar13[2] == 0x7f7aef9cf004c4ae) goto LAB_01151540;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01151550:
      if (uVar10 == 0) goto LAB_01151888;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xaf28057d18c9ed7b;
    }
    else if (uVar10 < 0xaf28057d18c9ed7c) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xaf28057d18c9ed7b / uVar10;
      }
      uVar12 = 0xaf28057d18c9ed7b - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xaf28057d18c9ed7b;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xaf28057d18c9ed7b) {
            if (plVar13[2] == -0x50d7fa82e7361285) goto LAB_0115164c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xaf28057d18c9ed7b) {
            if (plVar13[2] == -0x50d7fa82e7361285) goto LAB_0115164c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0115165c:
      if (uVar10 == 0) goto LAB_01151888;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xaf28067d18c9ef2e;
    }
    else if (uVar10 < 0xaf28067d18c9ef2f) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xaf28067d18c9ef2e / uVar10;
      }
      uVar12 = 0xaf28067d18c9ef2e - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xaf28067d18c9ef2e;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xaf28067d18c9ef2e) {
            if (plVar13[2] == -0x50d7f982e73610d2) goto LAB_01151758;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xaf28067d18c9ef2e) {
            if (plVar13[2] == -0x50d7f982e73610d2) goto LAB_01151758;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01151768:
      if (uVar10 == 0) goto LAB_01151888;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xc003540f7f42f6ec;
    }
    else if (uVar10 < 0xc003540f7f42f6ed) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xc003540f7f42f6ec / uVar10;
      }
      uVar12 = 0xc003540f7f42f6ec - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xc003540f7f42f6ec;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xc003540f7f42f6ec) {
            if (plVar13[2] == -0x3ffcabf080bd0914) goto LAB_01151864;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xc003540f7f42f6ec) {
            if (plVar13[2] == -0x3ffcabf080bd0914) goto LAB_01151864;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01151888:
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x44f4774c6cc7d057;
    }
    else if (uVar10 < 0x44f4774c6cc7d058) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x44f4774c6cc7d057 / uVar10;
      }
      uVar12 = 0x44f4774c6cc7d057 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x44f4774c6cc7d057;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x44f4774c6cc7d057) {
            if (plVar13[2] == 0x44f4774c6cc7d057) goto LAB_0115198c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x44f4774c6cc7d057) {
            if (plVar13[2] == 0x44f4774c6cc7d057) goto LAB_0115198c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0115199c:
      if (uVar10 == 0) goto LAB_01151bc8;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x450f854c6cdeafd9;
    }
    else if (uVar10 < 0x450f854c6cdeafda) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x450f854c6cdeafd9 / uVar10;
      }
      uVar12 = 0x450f854c6cdeafd9 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x450f854c6cdeafd9;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x450f854c6cdeafd9) {
            if (plVar13[2] == 0x450f854c6cdeafd9) goto LAB_01151a98;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x450f854c6cdeafd9) {
            if (plVar13[2] == 0x450f854c6cdeafd9) goto LAB_01151a98;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01151aa8:
      if (uVar10 == 0) goto LAB_01151bc8;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x5f100bb9a048d698;
    }
    else if (uVar10 < 0x5f100bb9a048d699) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x5f100bb9a048d698 / uVar10;
      }
      uVar12 = 0x5f100bb9a048d698 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x5f100bb9a048d698;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x5f100bb9a048d698) {
            if (plVar13[2] == 0x5f100bb9a048d698) goto LAB_01151ba4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x5f100bb9a048d698) {
            if (plVar13[2] == 0x5f100bb9a048d698) goto LAB_01151ba4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01151bc8:
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x2b555548487f6dc1;
    }
    else if (uVar10 < 0x2b555548487f6dc2) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x2b555548487f6dc1 / uVar10;
      }
      uVar12 = 0x2b555548487f6dc1 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x2b555548487f6dc1;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x2b555548487f6dc1) {
            if (plVar13[2] == 0x2b555548487f6dc1) goto LAB_01151ccc;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x2b555548487f6dc1) {
            if (plVar13[2] == 0x2b555548487f6dc1) goto LAB_01151ccc;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01151dd4:
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xdd05df995e7cf08f;
    }
    else if (uVar10 < 0xdd05df995e7cf090) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xdd05df995e7cf08f / uVar10;
      }
      uVar12 = 0xdd05df995e7cf08f - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xdd05df995e7cf08f;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xdd05df995e7cf08f) {
            if (plVar13[2] == -0x22fa2066a1830f71) goto LAB_01151ed4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xdd05df995e7cf08f) {
            if (plVar13[2] == -0x22fa2066a1830f71) goto LAB_01151ed4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01151ee0:
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x6e29df0470f42139;
    }
    else if (uVar10 < 0x6e29df0470f4213a) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x6e29df0470f42139 / uVar10;
      }
      uVar12 = 0x6e29df0470f42139 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x6e29df0470f42139;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x6e29df0470f42139) {
            if (plVar13[2] == 0x6e29df0470f42139) goto LAB_01151fe0;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x6e29df0470f42139) {
            if (plVar13[2] == 0x6e29df0470f42139) goto LAB_01151fe0;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_011520e8:
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x415fd6d631a9db67;
    }
    else if (uVar10 < 0x415fd6d631a9db68) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x415fd6d631a9db67 / uVar10;
      }
      uVar12 = 0x415fd6d631a9db67 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x415fd6d631a9db67;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x415fd6d631a9db67) {
            if (plVar13[2] == 0x415fd6d631a9db67) goto LAB_011521e8;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x415fd6d631a9db67) {
            if (plVar13[2] == 0x415fd6d631a9db67) goto LAB_011521e8;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01152238:
      if (uVar10 == 0) goto LAB_01152558;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x536697a27e1957a;
    }
    else if (uVar10 < 0x536697a27e1957b) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x536697a27e1957a / uVar10;
      }
      uVar12 = 0x536697a27e1957a - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x536697a27e1957a;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x536697a27e1957a) {
            if (plVar13[2] == 0x536697a27e1957a) goto LAB_01152334;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x536697a27e1957a) {
            if (plVar13[2] == 0x536697a27e1957a) goto LAB_01152334;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01152344:
      if (uVar10 == 0) goto LAB_01152558;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x552537a27f9ead0;
    }
    else if (uVar10 < 0x552537a27f9ead1) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x552537a27f9ead0 / uVar10;
      }
      uVar12 = 0x552537a27f9ead0 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x552537a27f9ead0;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x552537a27f9ead0) {
            if (plVar13[2] == 0x552537a27f9ead0) goto LAB_01152440;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x552537a27f9ead0) {
            if (plVar13[2] == 0x552537a27f9ead0) goto LAB_01152440;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01152450:
      if (uVar10 == 0) goto LAB_01152558;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x182be8d1f49019e4;
    }
    else if (uVar10 < 0x182be8d1f49019e5) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x182be8d1f49019e4 / uVar10;
      }
      uVar12 = 0x182be8d1f49019e4 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x182be8d1f49019e4;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x182be8d1f49019e4) {
            if (plVar13[2] == 0x182be8d1f49019e4) goto LAB_0115254c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x182be8d1f49019e4) {
            if (plVar13[2] == 0x182be8d1f49019e4) goto LAB_0115254c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01152558:
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xdc9f8e50b499cd1;
    }
    else if (uVar10 < 0xdc9f8e50b499cd2) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xdc9f8e50b499cd1 / uVar10;
      }
      uVar12 = 0xdc9f8e50b499cd1 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xdc9f8e50b499cd1;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xdc9f8e50b499cd1) {
            if (plVar13[2] == 0xdc9f8e50b499cd1) goto LAB_01152658;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xdc9f8e50b499cd1) {
            if (plVar13[2] == 0xdc9f8e50b499cd1) goto LAB_01152658;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01152760:
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x55e765c7f0abc6c7;
    }
    else if (uVar10 < 0x55e765c7f0abc6c8) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x55e765c7f0abc6c7 / uVar10;
      }
      uVar12 = 0x55e765c7f0abc6c7 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x55e765c7f0abc6c7;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x55e765c7f0abc6c7) {
            if (plVar13[2] == 0x55e765c7f0abc6c7) goto LAB_01152860;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x55e765c7f0abc6c7) {
            if (plVar13[2] == 0x55e765c7f0abc6c7) goto LAB_01152860;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01152884:
      if (uVar10 == 0) goto LAB_01152cc8;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb903a10536081f5;
    }
    else if (uVar10 < 0xb903a10536081f6) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xb903a10536081f5 / uVar10;
      }
      uVar12 = 0xb903a10536081f5 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xb903a10536081f5;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xb903a10536081f5) {
            if (plVar13[2] == 0xb903a10536081f5) goto LAB_01152980;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xb903a10536081f5) {
            if (plVar13[2] == 0xb903a10536081f5) goto LAB_01152980;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01152990:
      if (uVar10 == 0) goto LAB_01152cc8;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xd4e11906da13478f;
    }
    else if (uVar10 < 0xd4e11906da134790) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xd4e11906da13478f / uVar10;
      }
      uVar12 = 0xd4e11906da13478f - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xd4e11906da13478f;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xd4e11906da13478f) {
            if (plVar13[2] == -0x2b1ee6f925ecb871) goto LAB_01152a8c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xd4e11906da13478f) {
            if (plVar13[2] == -0x2b1ee6f925ecb871) goto LAB_01152a8c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01152a9c:
      if (uVar10 == 0) goto LAB_01152cc8;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x9c33f8e3ca6cf2c6;
    }
    else if (uVar10 < 0x9c33f8e3ca6cf2c7) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x9c33f8e3ca6cf2c6 / uVar10;
      }
      uVar12 = 0x9c33f8e3ca6cf2c6 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x9c33f8e3ca6cf2c6;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x9c33f8e3ca6cf2c6) {
            if (plVar13[2] == -0x63cc071c35930d3a) goto LAB_01152b98;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x9c33f8e3ca6cf2c6) {
            if (plVar13[2] == -0x63cc071c35930d3a) goto LAB_01152b98;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01152ba8:
      if (uVar10 == 0) goto LAB_01152cc8;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb791cfa2772818fb;
    }
    else if (uVar10 < 0xb791cfa2772818fc) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xb791cfa2772818fb / uVar10;
      }
      uVar12 = 0xb791cfa2772818fb - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xb791cfa2772818fb;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xb791cfa2772818fb) {
            if (plVar13[2] == -0x486e305d88d7e705) goto LAB_01152ca4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xb791cfa2772818fb) {
            if (plVar13[2] == -0x486e305d88d7e705) goto LAB_01152ca4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01152cc8:
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xdc9f5e50b4997b8;
    }
    else if (uVar10 < 0xdc9f5e50b4997b9) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xdc9f5e50b4997b8 / uVar10;
      }
      uVar12 = 0xdc9f5e50b4997b8 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xdc9f5e50b4997b8;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xdc9f5e50b4997b8) {
            if (plVar13[2] == 0xdc9f5e50b4997b8) goto LAB_01152dcc;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xdc9f5e50b4997b8) {
            if (plVar13[2] == 0xdc9f5e50b4997b8) goto LAB_01152dcc;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01152ed4:
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x55e766c7f0abc87a;
    }
    else if (uVar10 < 0x55e766c7f0abc87b) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x55e766c7f0abc87a / uVar10;
      }
      uVar12 = 0x55e766c7f0abc87a - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x55e766c7f0abc87a;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x55e766c7f0abc87a) {
            if (plVar13[2] == 0x55e766c7f0abc87a) goto LAB_01152fd4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x55e766c7f0abc87a) {
            if (plVar13[2] == 0x55e766c7f0abc87a) goto LAB_01152fd4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01152ff8:
      if (uVar10 == 0) goto LAB_0115343c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb90371053607cdc;
    }
    else if (uVar10 < 0xb90371053607cdd) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xb90371053607cdc / uVar10;
      }
      uVar12 = 0xb90371053607cdc - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xb90371053607cdc;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xb90371053607cdc) {
            if (plVar13[2] == 0xb90371053607cdc) goto LAB_011530f4;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xb90371053607cdc) {
            if (plVar13[2] == 0xb90371053607cdc) goto LAB_011530f4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01153104:
      if (uVar10 == 0) goto LAB_0115343c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xd4e11a06da134942;
    }
    else if (uVar10 < 0xd4e11a06da134943) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xd4e11a06da134942 / uVar10;
      }
      uVar12 = 0xd4e11a06da134942 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xd4e11a06da134942;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xd4e11a06da134942) {
            if (plVar13[2] == -0x2b1ee5f925ecb6be) goto LAB_01153200;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xd4e11a06da134942) {
            if (plVar13[2] == -0x2b1ee5f925ecb6be) goto LAB_01153200;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01153210:
      if (uVar10 == 0) goto LAB_0115343c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x9c33f7e3ca6cf113;
    }
    else if (uVar10 < 0x9c33f7e3ca6cf114) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x9c33f7e3ca6cf113 / uVar10;
      }
      uVar12 = 0x9c33f7e3ca6cf113 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x9c33f7e3ca6cf113;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x9c33f7e3ca6cf113) {
            if (plVar13[2] == -0x63cc081c35930eed) goto LAB_0115330c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x9c33f7e3ca6cf113) {
            if (plVar13[2] == -0x63cc081c35930eed) goto LAB_0115330c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0115331c:
      if (uVar10 == 0) goto LAB_0115343c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb791d0a277281aae;
    }
    else if (uVar10 < 0xb791d0a277281aaf) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xb791d0a277281aae / uVar10;
      }
      uVar12 = 0xb791d0a277281aae - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xb791d0a277281aae;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xb791d0a277281aae) {
            if (plVar13[2] == -0x486e2f5d88d7e552) goto LAB_01153418;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xb791d0a277281aae) {
            if (plVar13[2] == -0x486e2f5d88d7e552) goto LAB_01153418;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0115343c:
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x7297f1128f020581;
    }
    else if (uVar10 < 0x7297f1128f020582) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x7297f1128f020581 / uVar10;
      }
      uVar12 = 0x7297f1128f020581 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x7297f1128f020581;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x7297f1128f020581) {
            if (plVar13[2] == 0x7297f1128f020581) goto LAB_01153540;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x7297f1128f020581) {
            if (plVar13[2] == 0x7297f1128f020581) goto LAB_01153540;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01153550:
      if (uVar10 == 0) goto LAB_0115398c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x7297ee128f020068;
    }
    else if (uVar10 < 0x7297ee128f020069) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x7297ee128f020068 / uVar10;
      }
      uVar12 = 0x7297ee128f020068 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x7297ee128f020068;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x7297ee128f020068) {
            if (plVar13[2] == 0x7297ee128f020068) goto LAB_0115364c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x7297ee128f020068) {
            if (plVar13[2] == 0x7297ee128f020068) goto LAB_0115364c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_0115365c:
      if (uVar10 == 0) goto LAB_0115398c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x7798da85d9d3ca5b;
    }
    else if (uVar10 < 0x7798da85d9d3ca5c) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x7798da85d9d3ca5b / uVar10;
      }
      uVar12 = 0x7798da85d9d3ca5b - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x7798da85d9d3ca5b;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x7798da85d9d3ca5b) {
            if (plVar13[2] == 0x7798da85d9d3ca5b) goto LAB_01153758;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x7798da85d9d3ca5b) {
            if (plVar13[2] == 0x7798da85d9d3ca5b) goto LAB_01153758;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01153768:
      if (uVar10 == 0) goto LAB_0115398c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x194d5e95a5bddaed;
    }
    else if (uVar10 < 0x194d5e95a5bddaee) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x194d5e95a5bddaed / uVar10;
      }
      uVar12 = 0x194d5e95a5bddaed - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x194d5e95a5bddaed;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x194d5e95a5bddaed) {
            if (plVar13[2] == 0x194d5e95a5bddaed) goto LAB_01153864;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x194d5e95a5bddaed) {
            if (plVar13[2] == 0x194d5e95a5bddaed) goto LAB_01153864;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01153874:
      if (uVar10 == 0) goto LAB_0115398c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xd4b158500eeee23b;
    }
    else if (uVar10 < 0xd4b158500eeee23c) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xd4b158500eeee23b / uVar10;
      }
      uVar12 = 0xd4b158500eeee23b - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xd4b158500eeee23b;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xd4b158500eeee23b) {
            if (plVar13[2] == -0x2b4ea7aff1111dc5) goto LAB_01153970;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xd4b158500eeee23b) {
            if (plVar13[2] == -0x2b4ea7aff1111dc5) goto LAB_01153970;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0115398c:
  uVar10 = *(ulong *)(lVar9 + 0xf0);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x6b190977a31b803b;
    }
    else if (uVar10 < 0x6b190977a31b803c) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x6b190977a31b803b / uVar10;
      }
      uVar12 = 0x6b190977a31b803b - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x6b190977a31b803b;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0xe8) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x6b190977a31b803b) {
            if (plVar13[2] == 0x6b190977a31b803b) goto LAB_01153a8c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x6b190977a31b803b) {
            if (plVar13[2] == 0x6b190977a31b803b) goto LAB_01153a8c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01153aa0:
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb81f6d21a334e592;
    }
    else if (uVar10 < 0xb81f6d21a334e593) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xb81f6d21a334e592 / uVar10;
      }
      uVar12 = 0xb81f6d21a334e592 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xb81f6d21a334e592;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xb81f6d21a334e592) {
            if (plVar13[2] == -0x47e092de5ccb1a6e) goto LAB_01153bb0;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xb81f6d21a334e592) {
            if (plVar13[2] == -0x47e092de5ccb1a6e) goto LAB_01153bb0;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01153c00:
      if (uVar10 == 0) goto LAB_01153e8c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xf35fa1cdef28d47;
    }
    else if (uVar10 < 0xf35fa1cdef28d48) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xf35fa1cdef28d47 / uVar10;
      }
      uVar12 = 0xf35fa1cdef28d47 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xf35fa1cdef28d47;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xf35fa1cdef28d47) {
            if (plVar13[2] == 0xf35fa1cdef28d47) goto LAB_01153cfc;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xf35fa1cdef28d47) {
            if (plVar13[2] == 0xf35fa1cdef28d47) goto LAB_01153cfc;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01153d50:
      if (uVar10 == 0) goto LAB_01153e8c;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb252743aae10bdb2;
    }
    else {
      uVar12 = 0xb252743aae10bdb2;
      if (uVar10 < 0xb252743aae10bdb3) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xb252743aae10bdb2 / uVar10;
        }
        uVar12 = 0xb252743aae10bdb2 - uVar12 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xb252743aae10bdb2) {
            if (plVar13[2] == -0x4dad8bc551ef424e) goto LAB_01153e40;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xb252743aae10bdb2) {
            if (plVar13[2] == -0x4dad8bc551ef424e) goto LAB_01153e40;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01153e8c:
  *(undefined8 *)(param_2 + 0xdc0) = 0x3e9374bd3cc49ba6;
  *(undefined8 *)(param_2 + 0xdc8) = 0x4225e354405d2f1b;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 == 0) {
LAB_01154528:
    fVar48 = 0.0;
  }
  else {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb252743aae10bdb2;
    }
    else {
      uVar12 = 0xb252743aae10bdb2;
      if (uVar10 < 0xb252743aae10bdb3) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xb252743aae10bdb2 / uVar10;
        }
        uVar12 = 0xb252743aae10bdb2 - uVar12 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xb252743aae10bdb2) {
            if (plVar13[2] == -0x4dad8bc551ef424e) goto LAB_01153fac;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xb252743aae10bdb2) {
            if (plVar13[2] == -0x4dad8bc551ef424e) goto LAB_01153fac;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01153fbc:
      if (uVar10 == 0) goto LAB_01154528;
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8c60c4b47d4c7e30;
    }
    else if (uVar10 < 0x8c60c4b47d4c7e31) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8c60c4b47d4c7e30 / uVar10;
      }
      uVar12 = 0x8c60c4b47d4c7e30 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8c60c4b47d4c7e30;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_01154528;
    if (uVar11 < 2) {
      do {
        if (plVar13[1] == 0x8c60c4b47d4c7e30) {
          if (plVar13[2] == -0x739f3b4b82b381d0) goto LAB_011540c0;
        }
        else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_01154528;
        plVar13 = (long *)*plVar13;
        fVar48 = 0.0;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar13[1];
        if (uVar11 == 0x8c60c4b47d4c7e30) {
          if (plVar13[2] == -0x739f3b4b82b381d0) goto LAB_011540c0;
        }
        else {
          if (uVar10 <= uVar11) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar14 * uVar10;
          }
          if (uVar11 != uVar12) goto LAB_01154528;
        }
        plVar13 = (long *)*plVar13;
        fVar48 = 0.0;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_011540c4:
  fVar22 = 1.0;
  fVar18 = 1.0;
  if (fVar48 <= 1.1) {
    fVar18 = fVar48;
  }
  fVar47 = 0.0;
  if (-0.1 <= fVar18) {
    fVar47 = fVar18;
  }
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (-0.1 <= fVar18) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar48)) {
      bVar5 = fVar48 < 1.1;
      bVar6 = fVar48 == 1.1;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    fVar47 = fVar48;
  }
  *(float *)(param_2 + 0xdec) = fVar47;
  lVar9 = *param_1;
  uVar10 = *(ulong *)(lVar9 + 0x88);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xf7aa94fb7f6e6b8c;
    }
    else if (uVar10 < 0xf7aa94fb7f6e6b8d) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xf7aa94fb7f6e6b8c / uVar10;
      }
      uVar12 = 0xf7aa94fb7f6e6b8c - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xf7aa94fb7f6e6b8c;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xf7aa94fb7f6e6b8c) {
            if (plVar13[2] == -0x8556b0480919474) goto LAB_0115420c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xf7aa94fb7f6e6b8c) {
            if (plVar13[2] == -0x8556b0480919474) goto LAB_0115420c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01154238:
      if (uVar10 == 0) {
        return;
      }
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb76a7165c05e372d;
    }
    else if (uVar10 < 0xb76a7165c05e372e) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xb76a7165c05e372d / uVar10;
      }
      uVar12 = 0xb76a7165c05e372d - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xb76a7165c05e372d;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xb76a7165c05e372d) {
            if (plVar13[2] == -0x48958e9a3fa1c8d3) goto LAB_01154334;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xb76a7165c05e372d) {
            if (plVar13[2] == -0x48958e9a3fa1c8d3) goto LAB_01154334;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01154348:
      if (uVar10 == 0) {
        return;
      }
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb76a6e65c05e3214;
    }
    else if (uVar10 < 0xb76a6e65c05e3215) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xb76a6e65c05e3214 / uVar10;
      }
      uVar12 = 0xb76a6e65c05e3214 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xb76a6e65c05e3214;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xb76a6e65c05e3214) {
            if (plVar13[2] == -0x4895919a3fa1cdec) goto LAB_01154444;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xb76a6e65c05e3214) {
            if (plVar13[2] == -0x4895919a3fa1cdec) goto LAB_01154444;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_01154458:
      if (uVar10 == 0) {
        return;
      }
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x32ed471aac21563f;
    }
    else if (uVar10 < 0x32ed471aac215640) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x32ed471aac21563f / uVar10;
      }
      uVar12 = 0x32ed471aac21563f - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x32ed471aac21563f;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      uVar14 = uVar10 - 1;
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x32ed471aac21563f) {
            if (plVar13[2] == 0x32ed471aac21563f) goto LAB_01154564;
          }
          else if ((plVar13[1] & uVar14) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar13[1];
          if (uVar17 == 0x32ed471aac21563f) {
            if (plVar13[2] == 0x32ed471aac21563f) goto LAB_01154564;
          }
          else {
            if (uVar10 <= uVar17) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar17 / uVar10;
              }
              uVar17 = uVar17 - uVar2 * uVar10;
            }
            if (uVar17 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_011546d0:
      if (uVar10 == 0) {
        return;
      }
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xcb4178d2a7f96044;
    }
    else if (uVar10 < 0xcb4178d2a7f96045) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xcb4178d2a7f96044 / uVar10;
      }
      uVar12 = 0xcb4178d2a7f96044 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xcb4178d2a7f96044;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      uVar14 = uVar10 - 1;
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xcb4178d2a7f96044) {
            if (plVar13[2] == -0x34be872d58069fbc) goto LAB_011547c4;
          }
          else if ((plVar13[1] & uVar14) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar13[1];
          if (uVar17 == 0xcb4178d2a7f96044) {
            if (plVar13[2] == -0x34be872d58069fbc) goto LAB_011547c4;
          }
          else {
            if (uVar10 <= uVar17) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar17 / uVar10;
              }
              uVar17 = uVar17 - uVar2 * uVar10;
            }
            if (uVar17 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_011547d0:
      if (uVar10 == 0) {
        return;
      }
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x3c5b676a9b999b0b;
    }
    else if (uVar10 < 0x3c5b676a9b999b0c) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x3c5b676a9b999b0b / uVar10;
      }
      uVar12 = 0x3c5b676a9b999b0b - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x3c5b676a9b999b0b;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0x3c5b676a9b999b0b) {
            if (plVar13[2] == 0x3c5b676a9b999b0b) goto LAB_011548cc;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0x3c5b676a9b999b0b) {
            if (plVar13[2] == 0x3c5b676a9b999b0b) goto LAB_011548cc;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_011548dc:
      if (uVar10 == 0) {
        return;
      }
    }
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xde303ece9e0fdfd3;
    }
    else if (uVar10 < 0xde303ece9e0fdfd4) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xde303ece9e0fdfd3 / uVar10;
      }
      uVar12 = 0xde303ece9e0fdfd3 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xde303ece9e0fdfd3;
    }
    plVar13 = *(long **)(*(long *)(lVar9 + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 0xde303ece9e0fdfd3) {
            if (plVar13[2] == -0x21cfc13161f0202d) goto LAB_011549d8;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) {
            return;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 0xde303ece9e0fdfd3) {
            if (plVar13[2] == -0x21cfc13161f0202d) {
LAB_011549d8:
              *(int *)(param_2 + 0xd34) = (int)plVar13[6];
              return;
            }
          }
          else {
            if (uVar10 <= uVar11) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar14 * uVar10;
            }
            if (uVar11 != uVar12) {
              return;
            }
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  return;
}


