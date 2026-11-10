/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e8e50; name: FUN_034e8e50
 */


void FUN_034e8e50(uint *param_1,long param_2,long *param_3,long *param_4,long *param_5,long *param_6
                 )

{
  bool bVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint *puVar20;
  float *pfVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  uVar15 = *param_1;
  if (uVar15 != 2) {
    uVar19 = 2;
    uVar26 = 1;
    uVar28 = 0;
    do {
      uVar3 = uVar28 + 1;
      if (uVar3 < uVar15 - 1) {
        pfVar6 = (float *)(param_2 + uVar28 * 8);
        pfVar7 = (float *)(param_2 + ((long)(uVar28 << 0x20) >> 0x1d));
        uVar23 = (ulong)uVar19;
        uVar27 = uVar26;
        do {
          uVar4 = uVar27 + 1;
          if (uVar4 < uVar15) {
            pfVar8 = (float *)(param_2 + uVar27 * 8);
            pfVar9 = (float *)(param_2 + ((long)(uVar27 << 0x20) >> 0x1d));
            uVar24 = uVar23;
            do {
              uVar17 = (ulong)(uVar15 - 1);
              fVar29 = *pfVar7;
              pfVar10 = (float *)(param_2 + ((long)(uVar24 << 0x20) >> 0x1d));
              fVar30 = pfVar7[1];
              plVar11 = param_6;
              plVar13 = param_4;
              if (uVar24 != uVar17 && (uVar28 != uVar17 && uVar27 != uVar17)) {
                plVar11 = param_5;
                plVar13 = param_3;
              }
              fVar31 = (fVar29 - *pfVar10) * (pfVar9[1] - fVar30) +
                       (*pfVar9 - fVar29) * (pfVar10[1] - fVar30);
              if (fVar31 != 0.0) {
                uVar25 = (uint)uVar27;
                uVar22 = (uint)uVar24;
                uVar12 = uVar22;
                uVar14 = uVar25;
                if (0.0 <= fVar31) {
                  uVar12 = uVar25;
                  uVar14 = uVar22;
                }
                if (uVar15 != 0) {
                  pfVar10 = (float *)(param_2 + (long)(int)uVar12 * 8);
                  pfVar2 = (float *)(param_2 + (long)(int)uVar14 * 8);
                  uVar17 = 0;
                  bVar1 = false;
                  pfVar21 = (float *)(param_2 + 4);
                  do {
                    if (((uVar14 != uVar17) && (uVar28 != uVar17)) && (uVar12 != uVar17)) {
                      fVar31 = pfVar21[-1];
                      fVar32 = *pfVar21;
                      fVar35 = *pfVar10;
                      fVar37 = pfVar10[1];
                      fVar33 = fVar31 * fVar31 + fVar32 * fVar32;
                      fVar36 = (fVar35 * fVar35 - fVar33) + fVar37 * fVar37;
                      fVar38 = *pfVar2;
                      fVar41 = pfVar2[1];
                      fVar34 = (fVar29 * fVar29 + fVar30 * fVar30) - fVar33;
                      fVar33 = (fVar38 * fVar38 - fVar33) + fVar41 * fVar41;
                      bVar1 = 0.01 < (fVar36 * (fVar30 - fVar32) * (fVar38 - fVar31) +
                                      (fVar41 - fVar32) * fVar34 * (fVar35 - fVar31) +
                                     fVar33 * (fVar37 - fVar32) * (fVar29 - fVar31)) -
                                     (fVar34 * (fVar37 - fVar32) * (fVar38 - fVar31) +
                                      (fVar41 - fVar32) * fVar36 * (fVar29 - fVar31) +
                                     fVar33 * (fVar35 - fVar31) * (fVar30 - fVar32));
                    }
                    uVar17 = uVar17 + 1;
                  } while ((uVar17 < uVar15) && (pfVar21 = pfVar21 + 2, !bVar1));
                  if (bVar1) goto LAB_034e9298;
                }
                if ((plVar13 != (long *)0x0) && (*(uint *)(plVar13 + 1) != 0)) {
                  lVar18 = (ulong)*(uint *)(plVar13 + 1) * 0x18;
                  bVar1 = false;
                  puVar20 = (uint *)(*plVar13 + 8);
                  do {
                    lVar18 = lVar18 + -0x18;
                    if ((uVar28 == puVar20[-2]) && (uVar27 == puVar20[-1])) {
                      bVar1 = (bool)(bVar1 | uVar24 == *puVar20);
                    }
                  } while ((lVar18 != 0) && (puVar20 = puVar20 + 6, !bVar1));
                  if (bVar1) goto LAB_034e9298;
                }
                uVar12 = *(uint *)(plVar11 + 1);
                uVar15 = *(uint *)((long)plVar11 + 0xc);
                if (uVar12 < uVar15) {
LAB_034e9150:
                  if (uVar12 < uVar15) {
                    uVar15 = *(uint *)(plVar11 + 1);
                    *(uint *)(plVar11 + 1) = uVar15 + 1;
                    puVar16 = (undefined4 *)(*plVar11 + (ulong)uVar15 * 0x18);
                  }
                  else {
                    puVar16 = (undefined4 *)0x0;
                  }
                }
                else {
                  iVar5 = uVar15 + (uVar15 >> 1);
                  if (uVar15 == 0) {
                    iVar5 = 1;
                  }
                  uVar15 = iVar5 + uVar15;
                  lVar18 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,*plVar11,(ulong)uVar15 * 0x18);
                  if (lVar18 != 0) {
                    *plVar11 = lVar18;
                    *(uint *)((long)plVar11 + 0xc) = uVar15;
                    goto LAB_034e9150;
                  }
                  puVar16 = (undefined4 *)0x0;
                }
                *puVar16 = (int)uVar28;
                puVar16[1] = uVar25;
                puVar16[2] = uVar22;
                fVar29 = *pfVar6;
                fVar30 = pfVar6[1];
                fVar31 = *pfVar8;
                fVar33 = pfVar8[1];
                pfVar10 = (float *)(param_2 + uVar24 * 8);
                fVar35 = *pfVar10;
                fVar37 = pfVar10[1];
                fVar39 = fVar31 * fVar31 + fVar33 * fVar33;
                fVar40 = fVar35 * fVar35 + fVar37 * fVar37;
                fVar38 = ((fVar33 * fVar29 + fVar35 * (fVar30 - fVar33)) - fVar37 * fVar29) +
                         fVar31 * (fVar37 - fVar30);
                fVar41 = fVar29 * fVar29 + fVar30 * fVar30;
                fVar34 = (fVar33 * fVar41 - fVar39 * fVar30) + fVar37 * (fVar39 - fVar41) +
                         (fVar30 - fVar33) * fVar40;
                fVar32 = (fVar41 * fVar31 + fVar35 * (fVar39 - fVar41)) - fVar40 * fVar31;
                fVar36 = fVar32 + fVar29 * (fVar40 - fVar39);
                puVar16[3] = fVar34 / (fVar38 + fVar38);
                puVar16[4] = (-((fVar40 - fVar39) * fVar29) - fVar32) / (fVar38 + fVar38);
                puVar16[5] = (fVar34 * fVar34 +
                              fVar38 * 4.0 *
                              ((fVar37 * fVar41 * fVar31 + fVar35 * fVar39 * fVar30 +
                               fVar33 * fVar29 * fVar40) -
                              (fVar33 * fVar41 * fVar35 + fVar39 * fVar37 * fVar29 +
                              fVar30 * fVar40 * fVar31)) + fVar36 * fVar36) /
                             (fVar38 * 4.0 * fVar38) + 0.05;
                uVar15 = *param_1;
              }
LAB_034e9298:
              uVar24 = uVar24 + 1;
            } while ((uint)uVar24 < uVar15);
          }
          uVar23 = uVar23 + 1;
          uVar27 = uVar4;
        } while (uVar4 < uVar15 - 1);
      }
      uVar19 = uVar19 + 1;
      uVar26 = uVar26 + 1;
      uVar28 = uVar3;
    } while (uVar3 < uVar15 - 2);
  }
  return;
}


