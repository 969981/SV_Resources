/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033cda00; name: FUN_033cda00
 */


void FUN_033cda00(long *param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float __x;
  float fVar22;
  float afStack_1b0 [4];
  long local_1a0;
  ulong local_198;
  ulong local_190;
  float local_188;
  uint local_184 [11];
  undefined *local_158 [4];
  undefined *local_138;
  undefined *puStack_130;
  undefined *local_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined *local_108;
  undefined *local_100 [4];
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  
  if (((param_3 & 1) == 0) || (param_2 != 1)) {
    if (param_2 == 1) {
      uVar3 = param_3 >> 1;
      if (uVar3 * -0x55555555 < 0x55555556) {
        iVar4 = 1;
        iVar6 = 1;
        uVar5 = (ulong)uVar3;
        do {
          uVar9 = uVar5 / 3;
          uVar17 = uVar5 / 3;
          iVar6 = iVar6 * 3;
          iVar4 = iVar4 + 1;
          uVar5 = uVar9;
        } while ((uint)((int)uVar17 * -0x55555555) < 0x55555556);
      }
      else {
        iVar4 = 1;
        uVar9 = (ulong)uVar3;
        iVar6 = 1;
      }
      if ((uVar9 & 3) == 0) {
        iVar10 = 0;
        uVar5 = uVar9;
        do {
          uVar9 = uVar5 >> 2;
          iVar10 = iVar10 + 1;
          iVar6 = iVar6 << 2;
          uVar17 = uVar5 & 0xc;
          uVar5 = uVar9;
        } while (uVar17 == 0);
      }
      else {
        iVar10 = 0;
      }
      if ((uint)((int)uVar9 * -0x33333333) < 0x33333334) {
        iVar8 = 0;
        uVar5 = uVar9;
        do {
          uVar9 = uVar5 / 5;
          uVar17 = uVar5 / 5;
          iVar6 = iVar6 * 5;
          iVar8 = iVar8 + 1;
          uVar5 = uVar9;
        } while ((uint)((int)uVar17 * -0x33333333) < 0x33333334);
      }
      else {
        iVar8 = 0;
      }
      bVar1 = iVar6 << (ulong)(iVar10 != 0 && (uVar9 & 1) == 0) == uVar3;
      iVar10 = iVar10 + iVar4;
    }
    else {
      if (param_3 * -0x55555555 < 0x55555556) {
        iVar4 = 0;
        iVar6 = 1;
        uVar5 = (ulong)param_3;
        do {
          uVar9 = uVar5 / 3;
          uVar17 = uVar5 / 3;
          iVar6 = iVar6 * 3;
          iVar4 = iVar4 + 1;
          uVar5 = uVar9;
        } while ((uint)((int)uVar17 * -0x55555555) < 0x55555556);
      }
      else {
        iVar4 = 0;
        iVar6 = 1;
        uVar9 = (ulong)param_3;
      }
      if ((uVar9 & 3) == 0) {
        iVar10 = 0;
        uVar5 = uVar9;
        do {
          uVar9 = uVar5 >> 2;
          iVar10 = iVar10 + 1;
          iVar6 = iVar6 << 2;
          uVar17 = uVar5 & 0xc;
          uVar5 = uVar9;
        } while (uVar17 == 0);
      }
      else {
        iVar10 = 0;
      }
      if ((uint)((int)uVar9 * -0x33333333) < 0x33333334) {
        iVar8 = 0;
        uVar5 = uVar9;
        do {
          uVar9 = uVar5 / 5;
          uVar17 = uVar5 / 5;
          iVar6 = iVar6 * 5;
          iVar8 = iVar8 + 1;
          uVar5 = uVar9;
        } while ((uint)((int)uVar17 * -0x33333333) < 0x33333334);
      }
      else {
        iVar8 = 0;
      }
      bVar1 = iVar6 << (ulong)(iVar10 != 0 && (uVar9 & 1) == 0) == param_3;
      iVar10 = iVar10 + iVar4;
    }
    uVar3 = iVar10 + iVar8 + (uint)!bVar1;
    if (uVar3 != 0) {
      *(uint *)(param_1 + 5) = uVar3;
      lVar11 = (long)afStack_1b0 - ((ulong)uVar3 * 4 + 0xf & 0x7fffffff0);
      *(uint *)((long)param_1 + 0x2c) = param_3;
      *(int *)(param_1 + 6) = param_2;
      FUN_033cd3b0(lVar11);
      FUN_033cd650(param_1,lVar11);
      if ((int)param_1[5] == 0) {
        bVar1 = true;
        uVar3 = 0;
      }
      else {
        lVar7 = *param_1;
        uVar5 = 0;
        uVar9 = (ulong)(uint)((int)param_1[5] << 3);
        iVar4 = 1;
        do {
          uVar3 = (int)uVar9 + 0xfU & 0xfffffff0;
          uVar9 = (ulong)uVar3;
          *(ulong *)(lVar7 + uVar5 * 8) = uVar9 + lVar7;
          switch(*(undefined4 *)(lVar11 + uVar5 * 4)) {
          case 0:
            uVar2 = *(uint *)((long)param_1 + 0x2c) >> ((int)param_1[6] == 1);
            goto LAB_033cdd18;
          case 1:
          case 5:
            iVar4 = iVar4 << 3;
            break;
          case 2:
          case 6:
            uVar9 = (ulong)(uVar3 + iVar4 * 0x10);
            iVar4 = iVar4 * 3;
            break;
          case 3:
          case 7:
          case 9:
            uVar9 = (ulong)(uVar3 + iVar4 * 0x18);
            iVar4 = iVar4 << 2;
            break;
          case 4:
          case 8:
            uVar9 = (ulong)(uVar3 + iVar4 * 0x20);
            iVar4 = iVar4 * 5;
            break;
          case 10:
            uVar2 = *(uint *)((long)param_1 + 0x2c);
LAB_033cdd18:
            uVar9 = (ulong)(uVar3 + uVar2 * 8);
          }
          uVar3 = *(uint *)(param_1 + 5);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
        bVar1 = uVar3 == 0;
      }
      uVar2 = *(uint *)((long)param_1 + 0x2c);
      iVar4 = (int)param_1[6];
      if (!bVar1) {
        local_198 = (ulong)(uVar2 >> (iVar4 == 1));
        fVar22 = 6.2831855 / (float)local_198;
        uVar17 = local_198 & 0xfffffffe;
        local_190 = uVar17;
        uVar5 = 0;
        uVar2 = 1;
        local_188 = fVar22;
        local_1a0 = lVar11;
        uVar9 = local_198;
        do {
          uVar3 = *(uint *)(lVar11 + uVar5 * 4);
          uVar12 = uVar9;
          if (uVar3 < 0xb) {
            lVar7 = *(long *)(*param_1 + uVar5 * 8);
            uVar15 = (uint)local_198;
            switch(uVar3) {
            case 0:
              uVar3 = 0;
              if (uVar2 != 0) {
                uVar3 = uVar15 / uVar2;
              }
              uVar13 = 0;
              if (uVar3 != 0) {
                uVar13 = (uint)uVar9 / uVar3;
              }
              uVar12 = (ulong)uVar13;
              if (uVar15 != 0) {
                if (uVar15 == 1) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = 0;
                  pfVar14 = (float *)(lVar7 + 8);
                  do {
                    fVar20 = fVar22 * (float)(uVar9 & 0xffffffff);
                    fVar19 = cosf(fVar20);
                    fVar20 = sinf(fVar20);
                    pfVar14[-2] = fVar19;
                    pfVar14[-1] = -fVar20;
                    fVar20 = fVar22 * (float)((int)uVar9 + 1);
                    fVar19 = cosf(fVar20);
                    fVar20 = sinf(fVar20);
                    uVar9 = uVar9 + 2;
                    *pfVar14 = fVar19;
                    pfVar14[1] = -fVar20;
                    pfVar14 = pfVar14 + 4;
                  } while (uVar17 != uVar9);
                }
                if ((local_198 & 1) != 0) {
                  fVar20 = fVar22 * (float)(uVar9 & 0xffffffff);
                  fVar19 = cosf(fVar20);
                  fVar20 = sinf(fVar20);
                  pfVar14 = (float *)(lVar7 + uVar9 * 8);
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                }
              }
              uVar2 = uVar3 * uVar2;
              break;
            default:
              uVar2 = uVar2 << 3;
              uVar12 = uVar9 >> 3;
              break;
            case 2:
            case 6:
              uVar12 = uVar9 / 3;
              if (uVar2 != 0) {
                uVar3 = 0;
                uVar17 = 0;
                do {
                  fVar21 = fVar22 * (float)uVar3;
                  uVar18 = uVar17 >> 1;
                  fVar19 = cosf(fVar21);
                  fVar20 = sinf(fVar21);
                  pfVar14 = (float *)(lVar7 + (uVar17 & 0xfffffffe) * 8);
                  pfVar14[1] = -fVar20;
                  *pfVar14 = fVar19;
                  fVar19 = cosf(fVar21 + fVar21);
                  fVar20 = sinf(fVar21 + fVar21);
                  uVar17 = uVar17 + 2;
                  pfVar14 = (float *)(lVar7 + ((uVar18 & 0x7fffffff) << 4 | 8));
                  uVar3 = uVar3 + (int)(uVar9 / 3);
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                } while ((ulong)uVar2 * 2 != uVar17);
              }
              uVar2 = uVar2 * 3;
              uVar17 = local_190;
              break;
            case 3:
            case 7:
              uVar12 = uVar9 >> 2;
              if (uVar2 != 0) {
                uVar3 = 0;
                uVar9 = 0;
                do {
                  fVar21 = fVar22 * (float)uVar3;
                  fVar19 = cosf(fVar21);
                  fVar20 = sinf(fVar21);
                  pfVar14 = (float *)(lVar7 + (uVar9 & 0xffffffff) * 8);
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                  fVar19 = cosf(fVar21 + fVar21);
                  fVar20 = sinf(fVar21 + fVar21);
                  pfVar14 = (float *)(lVar7 + (ulong)((int)uVar9 + 1) * 8);
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                  fVar19 = cosf(fVar21 * 3.0);
                  fVar20 = sinf(fVar21 * 3.0);
                  pfVar14 = (float *)(lVar7 + (ulong)((int)uVar9 + 2) * 8);
                  uVar9 = uVar9 + 3;
                  uVar3 = uVar3 + (int)uVar12;
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                } while ((ulong)uVar2 * 2 + (ulong)uVar2 != uVar9);
              }
              uVar2 = uVar2 << 2;
              break;
            case 4:
            case 8:
              uVar12 = uVar9 / 5;
              if (uVar2 != 0) {
                uVar3 = 0;
                uVar17 = 0;
                do {
                  fVar21 = fVar22 * (float)uVar3;
                  uVar18 = uVar17 >> 2;
                  fVar19 = cosf(fVar21);
                  fVar20 = sinf(fVar21);
                  fVar22 = local_188;
                  pfVar14 = (float *)(lVar7 + (uVar17 & 0xfffffffc) * 8);
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                  fVar19 = cosf(fVar21 + fVar21);
                  fVar20 = sinf(fVar21 + fVar21);
                  pfVar14 = (float *)(lVar7 + ((uVar18 & 0x3fffffff) << 5 | 8));
                  pfVar14[1] = -fVar20;
                  *pfVar14 = fVar19;
                  fVar19 = cosf(fVar21 * 3.0);
                  fVar20 = sinf(fVar21 * 3.0);
                  pfVar14 = (float *)(lVar7 + ((uVar18 & 0x3fffffff) << 5 | 0x10));
                  pfVar14[1] = -fVar20;
                  *pfVar14 = fVar19;
                  fVar19 = cosf(fVar21 * 4.0);
                  fVar20 = sinf(fVar21 * 4.0);
                  uVar17 = uVar17 + 4;
                  pfVar14 = (float *)(lVar7 + ((uVar18 & 0x3fffffff) << 5 | 0x18));
                  uVar3 = uVar3 + (int)(uVar9 / 5);
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                } while ((ulong)uVar2 * 4 != uVar17);
              }
              uVar2 = uVar2 * 5;
              uVar17 = local_190;
              break;
            case 9:
              uVar3 = (uint)uVar9 >> 2;
              uVar12 = (ulong)uVar3;
              uVar15 = uVar2 >> 1;
              if (uVar15 != 0) {
                uVar16 = 1;
                uVar13 = 5;
                do {
                  fVar21 = fVar22 * (float)(uVar16 - 1);
                  __x = fVar22 * (float)uVar16;
                  fVar22 = cosf(fVar21);
                  fVar19 = sinf(fVar21);
                  pfVar14 = (float *)(lVar7 + (ulong)(uVar13 - 5) * 8);
                  *pfVar14 = fVar22;
                  pfVar14[1] = -fVar19;
                  fVar22 = cosf(__x);
                  fVar19 = sinf(__x);
                  pfVar14 = (float *)(lVar7 + (ulong)(uVar13 - 4) * 8);
                  *pfVar14 = fVar22;
                  pfVar14[1] = -fVar19;
                  fVar19 = cosf(fVar21 + fVar21);
                  fVar22 = local_188;
                  fVar20 = sinf(fVar21 + fVar21);
                  pfVar14 = (float *)(lVar7 + (ulong)(uVar13 - 3) * 8);
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                  fVar19 = cosf(__x + __x);
                  fVar20 = sinf(__x + __x);
                  pfVar14 = (float *)(lVar7 + (ulong)(uVar13 - 2) * 8);
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                  fVar19 = cosf(fVar21 * 3.0);
                  fVar20 = sinf(fVar21 * 3.0);
                  pfVar14 = (float *)(lVar7 + (ulong)(uVar13 - 1) * 8);
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                  fVar19 = cosf(__x * 3.0);
                  fVar20 = sinf(__x * 3.0);
                  pfVar14 = (float *)(lVar7 + (ulong)uVar13 * 8);
                  uVar16 = uVar16 + uVar3 * 2;
                  uVar13 = uVar13 + 6;
                  uVar15 = uVar15 - 1;
                  *pfVar14 = fVar19;
                  pfVar14[1] = -fVar20;
                } while (uVar15 != 0);
              }
              uVar2 = uVar2 << 2;
              lVar11 = local_1a0;
              uVar17 = local_190;
              break;
            case 10:
              if (uVar15 != 0) {
                fVar19 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x2c));
                if (uVar15 == 1) {
                  uVar9 = 0;
                  fVar20 = fVar19;
                }
                else {
                  uVar9 = 0;
                  pfVar14 = (float *)(lVar7 + 8);
                  afStack_1b0[3] = fVar19;
                  do {
                    fVar20 = (float)(uVar9 & 0xffffffff) * 6.2831855 * (1.0 / fVar19);
                    fVar22 = cosf(fVar20);
                    fVar20 = sinf(fVar20);
                    pfVar14[-2] = fVar22 * 0.5;
                    pfVar14[-1] = fVar20 * -0.5;
                    fVar20 = (float)((int)uVar9 + 1) * 6.2831855 * (1.0 / fVar19);
                    fVar22 = cosf(fVar20);
                    fVar20 = sinf(fVar20);
                    uVar9 = uVar9 + 2;
                    *pfVar14 = fVar22 * 0.5;
                    pfVar14[1] = fVar20 * -0.5;
                    pfVar14 = pfVar14 + 4;
                    fVar20 = afStack_1b0[3];
                    fVar22 = local_188;
                  } while (uVar17 != uVar9);
                }
                if ((local_198 & 1) != 0) {
                  fVar20 = ((float)(uVar9 & 0xffffffff) * 6.2831855) / fVar20;
                  fVar19 = cosf(fVar20);
                  fVar20 = sinf(fVar20);
                  pfVar14 = (float *)(lVar7 + uVar9 * 8);
                  *pfVar14 = fVar19 * 0.5;
                  pfVar14[1] = fVar20 * -0.5;
                }
              }
            }
          }
          uVar3 = *(uint *)(param_1 + 5);
          uVar5 = uVar5 + 1;
          uVar9 = uVar12;
        } while (uVar5 < uVar3);
        uVar2 = *(uint *)((long)param_1 + 0x2c);
        iVar4 = (int)param_1[6];
      }
      local_184[0] = 1;
      local_184[1] = 8;
      local_184[2] = 3;
      local_184[3] = 4;
      local_184[4] = 5;
      local_184[5] = 8;
      local_184[6] = 3;
      local_184[7] = 4;
      local_184[8] = 5;
      local_184[9] = 4;
      local_184[10] = 1;
      local_100[0] = PTR_LAB_047e6a28;
      local_100[1] = PTR_LAB_047e6a30;
      local_100[2] = PTR_LAB_047e6a38;
      local_100[3] = PTR_LAB_047e6a40;
      local_e0 = PTR_LAB_047e6a48;
      puStack_d8 = PTR_LAB_047e6a50;
      local_d0 = PTR_LAB_047e6a58;
      puStack_c8 = PTR_LAB_047e6a60;
      local_c0 = PTR_LAB_047e6a68;
      puStack_b8 = PTR_LAB_047e6a70;
      local_b0 = PTR_LAB_047e6a78;
      local_158[0] = PTR_LAB_047e6a88;
      local_158[1] = PTR_LAB_047e6a80;
      local_158[2] = PTR_LAB_047e6a90;
      local_158[3] = PTR_LAB_047e6a98;
      local_138 = PTR_LAB_047e6aa0;
      puStack_130 = PTR_LAB_047e6aa8;
      local_128 = PTR_LAB_047e6ab0;
      puStack_120 = PTR_LAB_047e6ab8;
      local_118 = PTR_LAB_047e6ac0;
      puStack_110 = PTR_LAB_047e6ac8;
      local_108 = PTR_LAB_047e6ad0;
      if (uVar3 != 0) {
        uVar2 = uVar2 >> (iVar4 == 1);
        uVar5 = 0;
        uVar3 = uVar2;
        do {
          uVar15 = *(uint *)(lVar11 + uVar5 * 4);
          *(undefined **)(param_1[3] + uVar5 * 8) = local_100[uVar15];
          *(undefined **)(param_1[4] + uVar5 * 8) = local_158[uVar15];
          uVar15 = local_184[uVar15];
          uVar13 = 0;
          if (uVar15 != 0) {
            uVar13 = uVar3 / uVar15;
          }
          *(uint *)(param_1[1] + uVar5 * 4) = uVar13;
          uVar3 = 0;
          if (uVar15 != 0) {
            uVar3 = uVar2 / uVar15;
          }
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = uVar3 / uVar13;
          }
          *(uint *)(param_1[2] + uVar5 * 4) = uVar15;
          uVar5 = uVar5 + 1;
          uVar3 = uVar13;
        } while (uVar5 < *(uint *)(param_1 + 5));
      }
    }
  }
  return;
}


