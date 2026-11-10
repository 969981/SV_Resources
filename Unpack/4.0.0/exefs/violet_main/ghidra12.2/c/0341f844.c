/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341f844; name: FUN_0341f844
 */


long * FUN_0341f844(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (*(uint *)(param_1 + 0x58) == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar13 = *(long **)(param_1 + 0x50);
    plVar2 = plVar13 + *(uint *)(param_1 + 0x58);
    fVar20 = 3.4028235e+38;
    plVar11 = (long *)0x0;
    do {
      uVar4 = *(uint *)(*plVar13 + 0x80);
      if (uVar4 != 0) {
        plVar14 = *(long **)(*plVar13 + 0x78);
        plVar15 = plVar14 + (ulong)uVar4 * 0x12;
        plVar12 = plVar11;
        do {
          plVar11 = plVar12;
          if (plVar14[(ulong)((int)plVar14[0x10] - 1) + 8] != param_1) {
            uVar4 = *(uint *)(param_2 + 0x90);
            if (uVar4 != 0) {
              pfVar16 = (float *)*plVar14;
              iVar5 = 0;
              lVar19 = *(long *)(param_2 + 0x88);
              uVar7 = *(ulong *)(pfVar16 + 0x1a);
LAB_0341f8bc:
              iVar1 = iVar5 + (uVar4 >> 1);
              lVar8 = (long)iVar1;
              uVar10 = *(ulong *)(lVar19 + (long)iVar1 * 0x90);
              if (uVar10 != uVar7) goto code_r0x0341f8d4;
              if (*(char *)(lVar19 + lVar8 * 0x90 + 0x21) != '\0') {
                lVar19 = *(long *)(*(long *)(param_2 + 8) + 0x40);
                fVar26 = pfVar16[0xc];
                fVar23 = *(float *)(lVar19 + 0x7c) - pfVar16[1];
                fVar22 = *(float *)(lVar19 + 0x78) - *pfVar16;
                fVar24 = *(float *)(lVar19 + 0x80) - pfVar16[2];
                fVar25 = pfVar16[3] * fVar22 + fVar23 * pfVar16[4] + fVar24 * pfVar16[5];
                fVar21 = -fVar26;
                if ((-fVar26 <= fVar25) && (fVar21 = fVar26, fVar25 <= fVar26)) {
                  fVar21 = fVar25;
                }
                fVar23 = pfVar16[6] * fVar22 + fVar23 * pfVar16[7] + fVar24 * pfVar16[8];
                fVar24 = pfVar16[0xd];
                fVar22 = -fVar24;
                if ((-fVar24 <= fVar23) && (fVar22 = fVar24, fVar23 <= fVar24)) {
                  fVar22 = fVar23;
                }
                fVar23 = (*pfVar16 + pfVar16[3] * fVar21 + pfVar16[6] * fVar22) -
                         *(float *)(lVar19 + 0x78);
                fVar24 = (pfVar16[1] + pfVar16[4] * fVar21 + pfVar16[7] * fVar22) -
                         *(float *)(lVar19 + 0x7c);
                fVar21 = (pfVar16[2] + pfVar16[5] * fVar21 + pfVar16[8] * fVar22) -
                         *(float *)(lVar19 + 0x80);
                fVar21 = SQRT(fVar23 * fVar23 + fVar24 * fVar24 + fVar21 * fVar21);
                goto LAB_0341f9b8;
              }
              uVar4 = *(uint *)(lVar19 + lVar8 * 0x90 + 0x30);
              if (uVar4 != 0) {
                lVar6 = (ulong)uVar4 * 0x94;
                uVar7 = lVar6 - 0x94;
                lVar8 = *(long *)(lVar19 + lVar8 * 0x90 + 0x28);
                uVar4 = ((uint)(uVar7 / 0x94) & 0x1ffffff) + 1;
                lVar19 = lVar8;
                if ((uVar4 & 3) == 0) {
                  lVar18 = 0;
                  fVar21 = 3.4028235e+38;
                }
                else {
                  lVar9 = -((ulong)uVar4 & 3);
                  lVar17 = 0;
                  fVar22 = 3.4028235e+38;
                  do {
                    fVar21 = (float)NEON_fminnm(*(float *)(lVar19 + 0x80),fVar22);
                    lVar18 = lVar19;
                    if (fVar22 <= *(float *)(lVar19 + 0x80)) {
                      lVar18 = lVar17;
                    }
                    lVar19 = lVar19 + 0x94;
                    bVar3 = lVar9 != -1;
                    lVar9 = lVar9 + 1;
                    lVar17 = lVar18;
                    fVar22 = fVar21;
                  } while (bVar3);
                }
                if (0x1bb < uVar7) {
                  do {
                    fVar22 = (float)NEON_fminnm(*(float *)(lVar19 + 0x80),fVar21);
                    lVar9 = lVar19;
                    if (fVar21 <= *(float *)(lVar19 + 0x80)) {
                      lVar9 = lVar18;
                    }
                    fVar21 = (float)NEON_fminnm(*(float *)(lVar19 + 0x114),fVar22);
                    lVar18 = lVar19 + 0x94;
                    if (fVar22 <= *(float *)(lVar19 + 0x114)) {
                      lVar18 = lVar9;
                    }
                    fVar22 = (float)NEON_fminnm(*(float *)(lVar19 + 0x1a8),fVar21);
                    pfVar16 = (float *)(lVar19 + 0x23c);
                    lVar9 = lVar19 + 0x128;
                    if (fVar21 <= *(float *)(lVar19 + 0x1a8)) {
                      lVar9 = lVar18;
                    }
                    fVar21 = (float)NEON_fminnm(*pfVar16,fVar22);
                    lVar18 = lVar19 + 0x1bc;
                    lVar19 = lVar19 + 0x250;
                    if (fVar22 <= *pfVar16) {
                      lVar18 = lVar9;
                    }
                  } while (lVar8 + lVar6 != lVar19);
                }
                if (lVar18 == 0) goto LAB_0341f8e8;
                fVar21 = *(float *)(lVar18 + 0x80);
                goto LAB_0341f9b8;
              }
            }
LAB_0341f8e8:
            fVar21 = *(float *)(param_2 + 0x48);
LAB_0341f9b8:
            fVar21 = *(float *)((long)plVar14 + 0x84) + fVar21;
            bVar3 = fVar20 <= fVar21;
            fVar20 = (float)NEON_fminnm(fVar21,fVar20);
            plVar11 = plVar14;
            if (bVar3) {
              plVar11 = plVar12;
            }
          }
          plVar14 = plVar14 + 0x12;
          plVar12 = plVar11;
        } while (plVar14 != plVar15);
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
  return plVar11;
code_r0x0341f8d4:
  if (uVar10 < uVar7) {
    iVar5 = iVar1 + 1;
  }
  uVar4 = uVar4 - (uVar10 < uVar7) >> 1;
  if (uVar4 == 0) goto LAB_0341f8e8;
  goto LAB_0341f8bc;
}


