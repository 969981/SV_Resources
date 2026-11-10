/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01235fa0; name: FUN_01235fa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01235fa0(float param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong uVar10;
  float extraout_s0;
  float fVar11;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_var;
  float fVar14;
  float extraout_var_01;
  float extraout_var_02;
  float fVar15;
  float extraout_var_04;
  float extraout_var_05;
  float fVar16;
  undefined1 auVar12 [16];
  float extraout_var_00;
  float extraout_var_03;
  float extraout_var_06;
  float fVar17;
  undefined1 auVar13 [16];
  float extraout_var_07;
  float fVar18;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  
  uVar2 = *(ulong *)(param_2 + 0x160);
  fVar18 = 0.0;
  if (uVar2 != 0) {
    uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar7 = uVar2 - 1 & 0x59c600286cc89bce;
    }
    else {
      uVar7 = 0x59c600286cc89bce;
      if (uVar2 < 0x59c600286cc89bcf) {
        uVar7 = 0;
        if (uVar2 != 0) {
          uVar7 = 0x59c600286cc89bce / uVar2;
        }
        uVar7 = 0x59c600286cc89bce - uVar7 * uVar2;
      }
    }
    auVar12 = ZEXT816(0);
    plVar9 = *(long **)(*(long *)(param_2 + 0x158) + uVar7 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar9[1] == 0x59c600286cc89bce) {
            if (plVar9[2] == 0x59c600286cc89bce) goto LAB_012360d8;
          }
          else if ((plVar9[1] & uVar2 - 1) != uVar7) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == 0x59c600286cc89bce) {
            if (plVar9[2] == 0x59c600286cc89bce) goto LAB_012360d8;
          }
          else {
            if (uVar2 <= uVar10) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar10 / uVar2;
              }
              uVar10 = uVar10 - uVar1 * uVar2;
            }
            if (uVar10 != uVar7) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
    goto LAB_012360dc;
  }
  uStack_78 = 0;
  local_80 = 0;
  goto LAB_012361ac;
LAB_012360d8:
  auVar12 = *(undefined1 (*) [16])(plVar9 + 6);
LAB_012360dc:
  if (uVar4 < 2) {
    uVar7 = uVar2 - 1 & 0xdb3af3a6d40bb53c;
  }
  else {
    uVar7 = 0xdb3af3a6d40bb53c;
    if (uVar2 < 0xdb3af3a6d40bb53d) {
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar7 = 0xdb3af3a6d40bb53c / uVar2;
      }
      uVar7 = 0xdb3af3a6d40bb53c - uVar7 * uVar2;
    }
  }
  plVar9 = *(long **)(*(long *)(param_2 + 0x158) + uVar7 * 8);
  uStack_78 = auVar12._8_8_;
  local_80 = auVar12._0_8_;
  if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
    if (uVar4 < 2) {
      do {
        if (plVar9[1] == 0xdb3af3a6d40bb53c) {
          if (plVar9[2] == -0x24c50c592bf44ac4) goto LAB_012361a8;
        }
        else if ((plVar9[1] & uVar2 - 1) != uVar7) break;
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
    else {
      do {
        uVar4 = plVar9[1];
        if (uVar4 == 0xdb3af3a6d40bb53c) {
          if (plVar9[2] == -0x24c50c592bf44ac4) goto LAB_012361a8;
        }
        else {
          if (uVar2 <= uVar4) {
            uVar10 = 0;
            if (uVar2 != 0) {
              uVar10 = uVar4 / uVar2;
            }
            uVar4 = uVar4 - uVar10 * uVar2;
          }
          if (uVar4 != uVar7) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  goto LAB_012361ac;
LAB_012362e8:
  fVar18 = *(float *)(plVar9 + 6);
  goto LAB_012362ec;
LAB_012363bc:
  fVar14 = *(float *)(plVar9 + 6);
  goto LAB_012363c0;
LAB_0123648c:
  fVar15 = *(float *)(plVar9 + 6);
  goto LAB_01236490;
LAB_01236560:
  fVar14 = *(float *)(plVar9 + 6);
  goto LAB_01236564;
LAB_01236748:
  if ((char)plVar9[6] == '\0') goto LAB_01236750;
  (**(code **)*param_3)(param_3,param_2);
  fVar18 = extraout_s0_01;
  fVar14 = extraout_var_01;
  fVar16 = extraout_var_04;
  fVar17 = extraout_var_07;
  goto LAB_01236760;
LAB_012361a8:
  fVar18 = *(float *)(plVar9 + 6);
LAB_012361ac:
  (**(code **)(*param_3 + 0x10))(param_3);
  fVar11 = extraout_s0 - (float)local_80;
  fVar14 = extraout_var - (float)((ulong)local_80 >> 0x20);
  fVar15 = extraout_var_02 - (float)uStack_78;
  fVar16 = extraout_var_05 - (float)((ulong)uStack_78 >> 0x20);
  fVar11 = fVar11 * fVar11;
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  fVar16 = fVar16 * fVar16;
  auVar12._0_4_ = fVar11 + fVar14;
  auVar12._4_4_ = fVar15 + fVar16;
  auVar12._8_4_ = fVar11 + fVar14;
  auVar12._12_4_ = fVar15 + fVar16;
  auVar12 = NEON_ext(auVar12,auVar12,4,1);
  fVar11 = auVar12._0_4_ + auVar12._4_4_;
  if (fVar11 <= fVar18) {
    puVar3 = *(undefined1 **)(param_2 + 0x160);
    if (puVar3 == (undefined1 *)0x0) {
      fVar15 = 0.0;
      fVar18 = param_1 * 0.0 + 0.0;
      fVar14 = 0.0;
    }
    else {
      uVar2 = (long)puVar3 - ((ulong)puVar3 >> 1 & 0x5555555555555555);
      uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
      uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar2 < 2) {
        puVar8 = (undefined1 *)((ulong)(puVar3 + -1) & 0x659120366162e6ad);
      }
      else {
        puVar8 = &DAT_659120366162e6ad;
        if (puVar3 < (undefined1 *)0x659120366162e6ae) {
          uVar4 = 0;
          if (puVar3 != (undefined1 *)0x0) {
            uVar4 = 0x659120366162e6ad / (ulong)puVar3;
          }
          puVar8 = &DAT_659120366162e6ad + -(uVar4 * (long)puVar3);
        }
      }
      lVar6 = *(long *)(param_2 + 0x158);
      plVar9 = *(long **)(lVar6 + (long)puVar8 * 8);
      if ((plVar9 == (long *)0x0) || (plVar9 = (long *)*plVar9, plVar9 == (long *)0x0)) {
        fVar18 = param_1 * 0.0;
      }
      else {
        if (uVar2 < 2) {
          fVar18 = 0.0;
          do {
            if ((undefined1 *)plVar9[1] == &DAT_659120366162e6ad) {
              if ((undefined1 *)plVar9[2] == &DAT_659120366162e6ad) goto LAB_012362e8;
            }
            else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(puVar3 + -1)) != puVar8) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          fVar18 = 0.0;
          do {
            puVar5 = (undefined1 *)plVar9[1];
            if (puVar5 == &DAT_659120366162e6ad) {
              if ((undefined1 *)plVar9[2] == &DAT_659120366162e6ad) goto LAB_012362e8;
            }
            else {
              if (puVar3 <= puVar5) {
                uVar4 = 0;
                if (puVar3 != (undefined1 *)0x0) {
                  uVar4 = (ulong)puVar5 / (ulong)puVar3;
                }
                puVar5 = puVar5 + -(uVar4 * (long)puVar3);
              }
              if (puVar5 != puVar8) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
LAB_012362ec:
        fVar18 = fVar18 * param_1;
      }
      if (uVar2 < 2) {
        puVar8 = (undefined1 *)((ulong)(puVar3 + -1) & 0x339d4a92964bdb1a);
      }
      else {
        puVar8 = &DAT_339d4a92964bdb1a;
        if (puVar3 < (undefined1 *)0x339d4a92964bdb1b) {
          uVar4 = 0;
          if (puVar3 != (undefined1 *)0x0) {
            uVar4 = 0x339d4a92964bdb1a / (ulong)puVar3;
          }
          puVar8 = &DAT_339d4a92964bdb1a + -(uVar4 * (long)puVar3);
        }
      }
      plVar9 = *(long **)(lVar6 + (long)puVar8 * 8);
      fVar14 = 0.0;
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if (uVar2 < 2) {
          do {
            if ((undefined1 *)plVar9[1] == &DAT_339d4a92964bdb1a) {
              if ((undefined1 *)plVar9[2] == &DAT_339d4a92964bdb1a) goto LAB_012363bc;
            }
            else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(puVar3 + -1)) != puVar8) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            puVar5 = (undefined1 *)plVar9[1];
            if (puVar5 == &DAT_339d4a92964bdb1a) {
              if ((undefined1 *)plVar9[2] == &DAT_339d4a92964bdb1a) goto LAB_012363bc;
            }
            else {
              if (puVar3 <= puVar5) {
                uVar4 = 0;
                if (puVar3 != (undefined1 *)0x0) {
                  uVar4 = (ulong)puVar5 / (ulong)puVar3;
                }
                puVar5 = puVar5 + -(uVar4 * (long)puVar3);
              }
              if (puVar5 != puVar8) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
LAB_012363c0:
      if (uVar2 < 2) {
        puVar8 = (undefined1 *)((ulong)(puVar3 + -1) & 0x501df60f7e376ab8);
      }
      else {
        puVar8 = (undefined1 *)0x501df60f7e376ab8;
        if (puVar3 < (undefined1 *)0x501df60f7e376ab9) {
          uVar4 = 0;
          if (puVar3 != (undefined1 *)0x0) {
            uVar4 = 0x501df60f7e376ab8 / (ulong)puVar3;
          }
          puVar8 = (undefined1 *)(0x501df60f7e376ab8 - uVar4 * (long)puVar3);
        }
      }
      plVar9 = *(long **)(lVar6 + (long)puVar8 * 8);
      fVar15 = 0.0;
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if (uVar2 < 2) {
          do {
            if (plVar9[1] == 0x501df60f7e376ab8) {
              if (plVar9[2] == 0x501df60f7e376ab8) goto LAB_0123648c;
            }
            else if ((undefined1 *)(plVar9[1] & (ulong)(puVar3 + -1)) != puVar8) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            puVar5 = (undefined1 *)plVar9[1];
            if (puVar5 == (undefined1 *)0x501df60f7e376ab8) {
              if (plVar9[2] == 0x501df60f7e376ab8) goto LAB_0123648c;
            }
            else {
              if (puVar3 <= puVar5) {
                uVar4 = 0;
                if (puVar3 != (undefined1 *)0x0) {
                  uVar4 = (ulong)puVar5 / (ulong)puVar3;
                }
                puVar5 = puVar5 + -(uVar4 * (long)puVar3);
              }
              if (puVar5 != puVar8) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
LAB_01236490:
      if (uVar2 < 2) {
        puVar8 = (undefined1 *)((ulong)(puVar3 + -1) & 0xd5efc3ec11fbc6b3);
      }
      else {
        puVar8 = (undefined1 *)0xd5efc3ec11fbc6b3;
        if (puVar3 < (undefined1 *)0xd5efc3ec11fbc6b4) {
          uVar4 = 0;
          if (puVar3 != (undefined1 *)0x0) {
            uVar4 = 0xd5efc3ec11fbc6b3 / (ulong)puVar3;
          }
          puVar8 = (undefined1 *)(-0x2a103c13ee04394d - uVar4 * (long)puVar3);
        }
      }
      fVar18 = fVar18 + fVar14;
      plVar9 = *(long **)(lVar6 + (long)puVar8 * 8);
      fVar14 = 0.0;
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if (uVar2 < 2) {
          do {
            if (plVar9[1] == 0xd5efc3ec11fbc6b3) {
              if (plVar9[2] == -0x2a103c13ee04394d) goto LAB_01236560;
            }
            else if ((undefined1 *)(plVar9[1] & (ulong)(puVar3 + -1)) != puVar8) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            puVar5 = (undefined1 *)plVar9[1];
            if (puVar5 == (undefined1 *)0xd5efc3ec11fbc6b3) {
              if (plVar9[2] == -0x2a103c13ee04394d) goto LAB_01236560;
            }
            else {
              if (puVar3 <= puVar5) {
                uVar2 = 0;
                if (puVar3 != (undefined1 *)0x0) {
                  uVar2 = (ulong)puVar5 / (ulong)puVar3;
                }
                puVar5 = puVar5 + -(uVar2 * (long)puVar3);
              }
              if (puVar5 != puVar8) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
LAB_01236564:
    if (fVar15 <= fVar11) {
      if (fVar14 <= fVar11) {
        fVar18 = 0.0;
      }
      else if (fVar14 - fVar15 != 0.0) {
        fVar18 = fVar18 * ((fVar14 - fVar11) / (fVar14 - fVar15));
      }
    }
    nn::crypto::GenerateCryptographicallyRandomBytes(&local_70,8);
    fVar11 = nextafterf(fVar18 + fVar18,3.4028235e+38);
    uVar2 = local_70 ^ 0x82a2b175229d6a5b;
    fVar14 = nextafterf(fVar18 + fVar18,3.4028235e+38);
    fVar15 = sinf(param_1 * 3.1415927);
    uVar4 = *(ulong *)(param_2 + 0x160);
    fVar11 = ((fVar11 * (float)(local_70 + 0x82a2b175229d6a5b) * 5.421011e-20 + 0.0) - fVar18) *
             fVar15;
    fVar15 = ((fVar14 * (float)((uVar2 ^ (local_70 >> 0x28 | local_70 << 0x18) ^ uVar2 << 0x10) +
                               (uVar2 >> 0x1b | uVar2 << 0x25)) * 5.421011e-20 + 0.0) - fVar18) *
             fVar15;
    if (uVar4 != 0) {
      uVar2 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
      uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
      uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar2 < 2) {
        uVar7 = uVar4 - 1 & 0x144f8803f694cf02;
      }
      else {
        uVar7 = 0x144f8803f694cf02;
        if (uVar4 < 0x144f8803f694cf03) {
          uVar7 = 0;
          if (uVar4 != 0) {
            uVar7 = 0x144f8803f694cf02 / uVar4;
          }
          uVar7 = 0x144f8803f694cf02 - uVar7 * uVar4;
        }
      }
      plVar9 = *(long **)(*(long *)(param_2 + 0x158) + uVar7 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if (uVar2 < 2) {
          do {
            if (plVar9[1] == 0x144f8803f694cf02) {
              if (plVar9[2] == 0x144f8803f694cf02) goto LAB_01236748;
            }
            else if ((plVar9[1] & uVar4 - 1) != uVar7) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar2 = plVar9[1];
            if (uVar2 == 0x144f8803f694cf02) {
              if (plVar9[2] == 0x144f8803f694cf02) goto LAB_01236748;
            }
            else {
              if (uVar4 <= uVar2) {
                uVar10 = 0;
                if (uVar4 != 0) {
                  uVar10 = uVar2 / uVar4;
                }
                uVar2 = uVar2 - uVar10 * uVar4;
              }
              if (uVar2 != uVar7) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
LAB_01236750:
    (**(code **)(*param_3 + 8))(param_3);
    fVar18 = extraout_s0_00;
    fVar14 = extraout_var_00;
    fVar16 = extraout_var_03;
    fVar17 = extraout_var_06;
LAB_01236760:
    auVar13._0_8_ =
         CONCAT44((float)((ulong)_DAT_03cab1d0 >> 0x20) * fVar15 +
                  (float)((ulong)_DAT_03cabe60 >> 0x20) * fVar11 + fVar14,
                  (float)_DAT_03cab1d0 * fVar15 + (float)_DAT_03cabe60 * fVar11 + fVar18);
    auVar13._8_4_ = (float)_UNK_03cab1d8 * fVar15 + (float)_UNK_03cabe68 * fVar11 + fVar16;
    auVar13._12_4_ =
         (float)((ulong)_UNK_03cab1d8 >> 0x20) * fVar15 +
         (float)((ulong)_UNK_03cabe68 >> 0x20) * fVar11 + fVar17;
    uStack_68 = auVar13._8_8_;
    local_70 = auVar13._0_8_;
    (**(code **)(*param_3 + 0x18))(param_3,&local_70);
  }
  return;
}


