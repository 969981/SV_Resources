/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dfdad4; name: FUN_00dfdad4
 */


void FUN_00dfdad4(float param_1,long *param_2,long param_3,byte *param_4,byte *param_5,byte *param_6
                 )

{
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [12];
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar7 = *param_2;
  bVar1 = *param_4;
  puVar6 = &DAT_cbf29ce484222645;
  puVar8 = &DAT_cbf29ce484222645;
  if (bVar1 != 0) {
    puVar8 = &DAT_cbf29ce484222645;
    do {
      param_4 = param_4 + 1;
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *param_4;
    } while (bVar1 != 0);
  }
  puVar9 = *(undefined1 **)(lVar7 + 0xf0);
  auVar17 = NEON_fmov(0x3f800000,4);
  auVar16 = auVar17._0_12_;
  if (puVar9 != (undefined1 *)0x0) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar8);
    }
    else {
      puVar11 = puVar8;
      if (puVar9 <= puVar8) {
        uVar2 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar8 / (ulong)puVar9;
        }
        puVar11 = puVar8 + -(uVar2 * (long)puVar9);
      }
    }
    plVar12 = *(long **)(*(long *)(lVar7 + 0xe8) + (long)puVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar12[1] == puVar8) {
            if ((undefined1 *)plVar12[2] == puVar8) goto LAB_00dfdc10;
          }
          else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar9 + -1)) != puVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          puVar13 = (undefined1 *)plVar12[1];
          if (puVar13 == puVar8) {
            if ((undefined1 *)plVar12[2] == puVar8) goto LAB_00dfdc10;
          }
          else {
            if (puVar9 <= puVar13) {
              uVar10 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar13 / (ulong)puVar9;
              }
              puVar13 = puVar13 + -(uVar10 * (long)puVar9);
            }
            if (puVar13 != puVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_00dfdc14:
  fVar18 = auVar16._4_4_;
  fVar15 = auVar16._0_4_;
  fVar19 = auVar16._8_4_;
  fVar23 = 1.0;
  fVar20 = 1.0;
  if (fVar15 <= 1.1) {
    fVar20 = fVar15;
  }
  fVar21 = 1.0;
  if (fVar18 <= 1.1) {
    fVar21 = fVar18;
  }
  bVar1 = *param_5;
  fVar22 = 1.0;
  if (fVar19 <= 1.1) {
    fVar22 = fVar19;
  }
  puVar8 = &DAT_cbf29ce484222645;
  if (bVar1 != 0) {
    puVar8 = &DAT_cbf29ce484222645;
    do {
      param_5 = param_5 + 1;
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *param_5;
    } while (bVar1 != 0);
  }
  puVar9 = *(undefined1 **)(lVar7 + 0x88);
  if (puVar9 != (undefined1 *)0x0) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar8);
    }
    else {
      puVar11 = puVar8;
      if (puVar9 <= puVar8) {
        uVar2 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar8 / (ulong)puVar9;
        }
        puVar11 = puVar8 + -(uVar2 * (long)puVar9);
      }
    }
    plVar12 = *(long **)(*(long *)(lVar7 + 0x80) + (long)puVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar12[1] == puVar8) {
            if ((undefined1 *)plVar12[2] == puVar8) goto LAB_00dfdd60;
          }
          else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar9 + -1)) != puVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          puVar13 = (undefined1 *)plVar12[1];
          if (puVar13 == puVar8) {
            if ((undefined1 *)plVar12[2] == puVar8) goto LAB_00dfdd60;
          }
          else {
            if (puVar9 <= puVar13) {
              uVar10 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar13 / (ulong)puVar9;
              }
              puVar13 = puVar13 + -(uVar10 * (long)puVar9);
            }
            if (puVar13 != puVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_00dfdd64:
  bVar1 = *param_6;
  fVar25 = 100.0;
  if (fVar23 <= 100.1) {
    fVar25 = fVar23;
  }
  while (bVar1 != 0) {
    param_6 = param_6 + 1;
    puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_6;
  }
  if (puVar9 != (undefined1 *)0x0) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar8 = (undefined1 *)((ulong)puVar6 & (ulong)(puVar9 + -1));
    }
    else {
      puVar8 = puVar6;
      if (puVar9 <= puVar6) {
        uVar2 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar6 / (ulong)puVar9;
        }
        puVar8 = puVar6 + -(uVar2 * (long)puVar9);
      }
    }
    plVar12 = *(long **)(*(long *)(lVar7 + 0x80) + (long)puVar8 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar12[1] == puVar6) {
            if ((undefined1 *)plVar12[2] == puVar6) goto LAB_00dfde8c;
          }
          else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar9 + -1)) != puVar8) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          puVar11 = (undefined1 *)plVar12[1];
          if (puVar11 == puVar6) {
            if ((undefined1 *)plVar12[2] == puVar6) goto LAB_00dfde8c;
          }
          else {
            if (puVar9 <= puVar11) {
              uVar10 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar11 / (ulong)puVar9;
              }
              puVar11 = puVar11 + -(uVar10 * (long)puVar9);
            }
            if (puVar11 != puVar8) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_00dfde90:
  fVar24 = 1.0;
  if (param_1 <= 1.1) {
    fVar24 = param_1;
  }
  fVar14 = 0.0;
  if (-0.1 <= fVar24) {
    fVar14 = fVar24;
  }
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (-0.1 <= fVar24) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(param_1)) {
      bVar3 = param_1 < 1.1;
      bVar4 = param_1 == 1.1;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    fVar14 = param_1;
  }
  fVar24 = 0.0;
  if (-0.1 <= fVar25) {
    fVar24 = fVar25;
  }
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (-0.1 <= fVar25) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar23)) {
      bVar3 = fVar23 < 100.1;
      bVar4 = fVar23 == 100.1;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    fVar24 = fVar23;
  }
  fVar23 = 0.0;
  if (-0.1 <= fVar22) {
    fVar23 = fVar22;
  }
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (-0.1 <= fVar22) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar19)) {
      bVar3 = fVar19 < 1.1;
      bVar4 = fVar19 == 1.1;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    fVar23 = fVar19;
  }
  fVar19 = 0.0;
  if (-0.1 <= fVar21) {
    fVar19 = fVar21;
  }
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (-0.1 <= fVar21) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar18)) {
      bVar3 = fVar18 < 1.1;
      bVar4 = fVar18 == 1.1;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    fVar19 = fVar18;
  }
  fVar18 = 0.0;
  if (-0.1 <= fVar20) {
    fVar18 = fVar20;
  }
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (-0.1 <= fVar20) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar15)) {
      bVar3 = fVar15 < 1.1;
      bVar4 = fVar15 == 1.1;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    fVar18 = fVar15;
  }
  lVar7 = *(long *)param_2[1] + param_3 * 0x10;
  *(ulong *)(lVar7 + 0x230) = CONCAT44(fVar19 * fVar24,fVar18 * fVar24);
  *(float *)(lVar7 + 0x238) = fVar23 * fVar24;
  *(float *)(lVar7 + 0x23c) = fVar14;
  *(float *)param_2[2] = fVar14 + *(float *)param_2[2];
  return;
LAB_00dfdc10:
  auVar16 = SUB1612(*(undefined1 (*) [16])(plVar12 + 6),0);
  goto LAB_00dfdc14;
LAB_00dfdd60:
  fVar23 = *(float *)(plVar12 + 6);
  goto LAB_00dfdd64;
LAB_00dfde8c:
  param_1 = *(float *)(plVar12 + 6);
  goto LAB_00dfde90;
}


