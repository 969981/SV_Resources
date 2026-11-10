/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033fc664; name: FUN_033fc664
 */


void FUN_033fc664(int *param_1,float *param_2,uint param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar20 = (float)param_1[7];
  fVar21 = (float)param_1[8];
  fVar19 = 1.0 / (float)param_3;
  fVar22 = (float)param_1[9];
  fVar23 = (float)param_1[10];
  fVar24 = (float)param_1[0xb];
  fVar25 = (float)param_1[0xc];
  fVar17 = (fVar23 - fVar20) * fVar19;
  fVar18 = (fVar24 - fVar21) * fVar19;
  fVar19 = (fVar25 - fVar22) * fVar19;
  uVar2 = param_1[2];
  lVar11 = *(long *)(param_1 + 4);
  uVar10 = param_1[6];
  iVar4 = uVar2 - *param_1;
  if (param_4 == (float *)0x0) {
    if (param_3 == 0) goto LAB_033fcbe4;
    do {
      uVar12 = 0;
      if (uVar2 != 0) {
        uVar12 = (uVar10 + iVar4) / uVar2;
      }
      uVar12 = (uVar10 + iVar4) - uVar12 * uVar2;
      uVar1 = uVar2 - uVar10;
      if (uVar2 - uVar12 <= uVar2 - uVar10) {
        uVar1 = uVar2 - uVar12;
      }
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      param_3 = param_3 - uVar1;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == 0) {
          uVar13 = uVar1;
        }
        else {
          fVar23 = *(float *)(lVar11 + (ulong)uVar12 * 4);
          fVar20 = fVar20 + fVar17;
          fVar21 = fVar21 + fVar18;
          fVar24 = *param_2 + fVar20 * fVar23;
          fVar22 = fVar22 + fVar19;
          uVar13 = uVar1 - 1;
          *(float *)(lVar11 + (ulong)uVar10 * 4) = fVar24;
          uVar10 = uVar10 + 1;
          *param_2 = fVar23 * fVar21 + fVar22 * fVar24;
          uVar12 = uVar12 + 1;
          param_2 = param_2 + 1;
        }
        pfVar7 = param_2;
        if (uVar1 != 1) {
          do {
            fVar24 = *(float *)(lVar11 + (ulong)uVar12 * 4);
            fVar23 = fVar21 + fVar18;
            fVar25 = *pfVar7 + (fVar20 + fVar17) * fVar24;
            fVar21 = fVar23 + fVar18;
            *(float *)(lVar11 + (ulong)uVar10 * 4) = fVar25;
            *pfVar7 = fVar24 * fVar23 + (fVar22 + fVar19) * fVar25;
            uVar1 = uVar12 + 1;
            uVar12 = uVar12 + 2;
            fVar23 = *(float *)(lVar11 + (ulong)uVar1 * 4);
            fVar20 = fVar20 + fVar17 + fVar17;
            fVar24 = pfVar7[1] + fVar20 * fVar23;
            fVar22 = fVar22 + fVar19 + fVar19;
            *(float *)(lVar11 + (ulong)(uVar10 + 1) * 4) = fVar24;
            param_2 = pfVar7 + 2;
            uVar13 = uVar13 - 2;
            uVar10 = uVar10 + 2;
            pfVar7[1] = fVar23 * fVar21 + fVar22 * fVar24;
            pfVar7 = param_2;
          } while (uVar13 != 0);
        }
      }
      uVar12 = 0;
      if (uVar2 != 0) {
        uVar12 = uVar10 / uVar2;
      }
      uVar10 = uVar10 - uVar12 * uVar2;
    } while (param_3 != 0);
  }
  else {
    if (param_3 == 0) goto LAB_033fcbe4;
    uVar12 = 0;
    if (uVar2 != 0) {
      uVar12 = (iVar4 + uVar10) / uVar2;
    }
    uVar1 = uVar2 + ~param_1[1];
    uVar12 = (iVar4 + uVar10) - uVar12 * uVar2;
    iVar3 = uVar2 - 1;
    fVar23 = (float)(uint)param_1[1];
    do {
      uVar13 = uVar1 - uVar12;
      if (iVar3 - uVar10 <= uVar1 - uVar12) {
        uVar13 = iVar3 - uVar10;
      }
      if (param_3 <= uVar13) {
        uVar13 = param_3;
      }
      pfVar7 = param_2;
      pfVar8 = param_4;
      do {
        if (((uVar12 < uVar1) && ((uint)param_1[1] <= uVar12)) && (7 < uVar13)) {
          uVar14 = iVar3 - uVar10;
          param_2 = pfVar7;
          param_4 = pfVar8;
          if (uVar14 != 0) break;
        }
        param_4 = pfVar8 + 1;
        fVar24 = (float)(uVar10 + iVar4) + fVar23 * *pfVar8;
        uVar13 = (uint)fVar24;
        uVar12 = 0;
        if (uVar2 != 0) {
          uVar12 = uVar13 / uVar2;
        }
        uVar14 = 0;
        if (uVar2 != 0) {
          uVar14 = (uVar13 + 1) / uVar2;
        }
        fVar25 = *(float *)(lVar11 + (ulong)(uVar13 - uVar12 * uVar2) * 4);
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = (uVar10 + 1) / uVar2;
        }
        uVar12 = uVar10 + iVar4 + 1;
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar12 / uVar2;
        }
        fVar21 = fVar21 + fVar18;
        fVar22 = fVar22 + fVar19;
        param_3 = param_3 - 1;
        fVar25 = fVar25 + (*(float *)(lVar11 + (ulong)((uVar13 + 1) - uVar14 * uVar2) * 4) - fVar25)
                          * (fVar24 - (float)(int)fVar24);
        fVar20 = fVar20 + fVar17;
        fVar24 = *pfVar7 + fVar20 * fVar25;
        uVar12 = uVar12 - uVar6 * uVar2;
        *(float *)(lVar11 + (ulong)uVar10 * 4) = fVar24;
        uVar10 = (uVar10 + 1) - uVar5 * uVar2;
        uVar14 = iVar3 - uVar10;
        uVar13 = uVar1 - uVar12;
        if (uVar14 <= uVar1 - uVar12) {
          uVar13 = uVar14;
        }
        if (param_3 <= uVar13) {
          uVar13 = param_3;
        }
        param_2 = pfVar7 + 1;
        *pfVar7 = fVar25 * fVar21 + fVar22 * fVar24;
        pfVar7 = param_2;
        pfVar8 = param_4;
      } while (param_3 != 0);
      uVar12 = 0;
      if (uVar2 != 0) {
        uVar12 = (uVar10 + iVar4) / uVar2;
      }
      uVar12 = (uVar10 + iVar4) - uVar12 * uVar2;
      uVar13 = uVar1 - uVar12;
      if (uVar14 <= uVar1 - uVar12) {
        uVar13 = uVar14;
      }
      if (param_3 <= uVar13) {
        uVar13 = param_3;
      }
      uVar14 = uVar13 >> 3;
      param_3 = param_3 - (uVar13 & 0xfffffff8);
      if (uVar14 != 0) {
        lVar15 = 0;
        lVar16 = 0;
        do {
          pfVar7 = param_4 + lVar15;
          fVar24 = (float)uVar12 + fVar23 * *pfVar7;
          fVar25 = *(float *)(lVar11 + (ulong)(uint)(int)fVar24 * 4);
          fVar25 = fVar25 + (*(float *)(lVar11 + (ulong)((int)fVar24 + 1) * 4) - fVar25) *
                            (fVar24 - (float)(int)fVar24);
          pfVar8 = param_2 + lVar15;
          fVar26 = *pfVar8 + (fVar20 + fVar17) * fVar25;
          fVar24 = fVar21 + fVar18 + fVar18;
          *(float *)(lVar11 + ((ulong)uVar10 + lVar15 & 0xffffffff) * 4) = fVar26;
          *pfVar8 = fVar25 * (fVar21 + fVar18) + (fVar22 + fVar19) * fVar26;
          fVar25 = (float)(uVar12 + 1) + fVar23 * pfVar7[1];
          fVar21 = *(float *)(lVar11 + (ulong)(uint)(int)fVar25 * 4);
          fVar21 = fVar21 + (*(float *)(lVar11 + (ulong)((int)fVar25 + 1) * 4) - fVar21) *
                            (fVar25 - (float)(int)fVar25);
          fVar20 = fVar20 + fVar17 + fVar17;
          fVar26 = pfVar8[1] + fVar20 * fVar21;
          fVar22 = fVar22 + fVar19 + fVar19;
          fVar25 = fVar24 + fVar18;
          iVar9 = (int)((ulong)uVar10 + lVar15);
          *(float *)(lVar11 + (ulong)(iVar9 + 1) * 4) = fVar26;
          pfVar8[1] = fVar21 * fVar24 + fVar22 * fVar26;
          fVar24 = (float)(uVar12 + 2) + fVar23 * pfVar7[2];
          fVar21 = *(float *)(lVar11 + (ulong)(uint)(int)fVar24 * 4);
          fVar21 = fVar21 + (*(float *)(lVar11 + (ulong)((int)fVar24 + 1) * 4) - fVar21) *
                            (fVar24 - (float)(int)fVar24);
          fVar20 = fVar20 + fVar17;
          fVar26 = pfVar8[2] + fVar20 * fVar21;
          fVar22 = fVar22 + fVar19;
          fVar24 = fVar25 + fVar18;
          *(float *)(lVar11 + (ulong)(iVar9 + 2) * 4) = fVar26;
          pfVar8[2] = fVar21 * fVar25 + fVar22 * fVar26;
          fVar25 = (float)(uVar12 + 3) + fVar23 * pfVar7[3];
          fVar21 = *(float *)(lVar11 + (ulong)(uint)(int)fVar25 * 4);
          fVar21 = fVar21 + (*(float *)(lVar11 + (ulong)((int)fVar25 + 1) * 4) - fVar21) *
                            (fVar25 - (float)(int)fVar25);
          fVar20 = fVar20 + fVar17;
          fVar26 = pfVar8[3] + fVar20 * fVar21;
          fVar22 = fVar22 + fVar19;
          fVar25 = fVar24 + fVar18;
          *(float *)(lVar11 + (ulong)(iVar9 + 3) * 4) = fVar26;
          pfVar8[3] = fVar21 * fVar24 + fVar22 * fVar26;
          fVar24 = (float)(uVar12 + 4) + fVar23 * pfVar7[4];
          fVar21 = *(float *)(lVar11 + (ulong)(uint)(int)fVar24 * 4);
          fVar21 = fVar21 + (*(float *)(lVar11 + (ulong)((int)fVar24 + 1) * 4) - fVar21) *
                            (fVar24 - (float)(int)fVar24);
          fVar20 = fVar20 + fVar17;
          fVar26 = pfVar8[4] + fVar20 * fVar21;
          fVar22 = fVar22 + fVar19;
          fVar24 = fVar25 + fVar18;
          *(float *)(lVar11 + (ulong)(iVar9 + 4) * 4) = fVar26;
          pfVar8[4] = fVar21 * fVar25 + fVar22 * fVar26;
          fVar25 = (float)(uVar12 + 5) + fVar23 * pfVar7[5];
          fVar21 = *(float *)(lVar11 + (ulong)(uint)(int)fVar25 * 4);
          fVar21 = fVar21 + (*(float *)(lVar11 + (ulong)((int)fVar25 + 1) * 4) - fVar21) *
                            (fVar25 - (float)(int)fVar25);
          fVar20 = fVar20 + fVar17;
          fVar26 = pfVar8[5] + fVar20 * fVar21;
          fVar22 = fVar22 + fVar19;
          fVar25 = fVar24 + fVar18;
          *(float *)(lVar11 + (ulong)(iVar9 + 5) * 4) = fVar26;
          pfVar8[5] = fVar21 * fVar24 + fVar22 * fVar26;
          fVar24 = (float)(uVar12 + 6) + fVar23 * pfVar7[6];
          fVar26 = *(float *)(lVar11 + (ulong)(uint)(int)fVar24 * 4);
          fVar26 = fVar26 + (*(float *)(lVar11 + (ulong)((int)fVar24 + 1) * 4) - fVar26) *
                            (fVar24 - (float)(int)fVar24);
          fVar20 = fVar20 + fVar17;
          fVar24 = pfVar8[6] + fVar20 * fVar26;
          fVar22 = fVar22 + fVar19;
          fVar21 = fVar25 + fVar18;
          *(float *)(lVar11 + (ulong)(iVar9 + 6) * 4) = fVar24;
          uVar13 = uVar12 + 7;
          uVar12 = uVar12 + 8;
          pfVar8[6] = fVar26 * fVar25 + fVar22 * fVar24;
          fVar24 = (float)uVar13 + fVar23 * pfVar7[7];
          fVar25 = *(float *)(lVar11 + (ulong)(uint)(int)fVar24 * 4);
          fVar25 = fVar25 + (*(float *)(lVar11 + (ulong)((int)fVar24 + 1) * 4) - fVar25) *
                            (fVar24 - (float)(int)fVar24);
          fVar20 = fVar20 + fVar17;
          fVar24 = pfVar8[7] + fVar20 * fVar25;
          fVar22 = fVar22 + fVar19;
          uVar14 = uVar14 - 1;
          lVar16 = lVar16 + -0x20;
          lVar15 = lVar15 + 8;
          *(float *)(lVar11 + (ulong)(iVar9 + 7) * 4) = fVar24;
          pfVar8[7] = fVar25 * fVar21 + fVar22 * fVar24;
        } while (uVar14 != 0);
        param_4 = (float *)((long)param_4 - lVar16);
        param_2 = (float *)((long)param_2 - lVar16);
        uVar10 = uVar10 + (int)lVar15;
      }
    } while (param_3 != 0);
  }
  fVar23 = (float)param_1[10];
  fVar24 = (float)param_1[0xb];
  fVar25 = (float)param_1[0xc];
LAB_033fcbe4:
  param_1[6] = uVar10;
  param_1[7] = (int)fVar23;
  param_1[8] = (int)fVar24;
  param_1[9] = (int)fVar25;
  return;
}


