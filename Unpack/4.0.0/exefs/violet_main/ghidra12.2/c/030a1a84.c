/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a1a84; name: FUN_030a1a84
 */


void FUN_030a1a84(float param_1,long *param_2,long *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  iVar10 = (int)param_3[1];
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < iVar10 << 1) {
    FUN_0309f65c(param_2,PTR_PTR_047d1a50);
  }
  puVar8 = PTR_PTR_047d1a50;
  lVar12 = *param_3;
  iVar16 = iVar10 + -1;
  pfVar1 = (float *)(lVar12 + (long)iVar16 * 8);
  pfVar2 = (float *)(lVar12 + (long)(iVar10 + -2) * 8);
  fVar21 = pfVar1[1] - pfVar2[1];
  fVar19 = *pfVar1 - *pfVar2;
  fVar18 = fVar19 * fVar19 + fVar21 * fVar21;
  if (fVar18 == 0.0) {
    fVar18 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  else {
    fVar18 = SQRT(fVar18);
    fVar20 = fVar19 / fVar18;
    fVar21 = fVar21 / SQRT(fVar19 * fVar19 + fVar21 * fVar21);
  }
  if ((int)param_3[1] < 1) {
    return;
  }
  fVar19 = 3.1415927 / (float)param_4;
  iVar10 = (int)(ABS(fVar19) * 1.2732395) + 1;
  bVar7 = (byte)iVar10 & 0xfe;
  uVar3 = (int)(ABS(fVar19) * 1.2732395) + 1U & 0xfffffffe;
  uVar4 = (int)(ABS(fVar19) * 1.2732395) + 1U & 0xfffffffe;
  uVar5 = (int)(ABS(fVar19) * 1.2732395) + 1U & 0xfffffffe;
  auVar29[8] = (char)uVar4;
  auVar29._0_8_ =
       CONCAT17((char)(uVar3 >> 0x18),
                CONCAT16((char)(uVar3 >> 0x10),
                         CONCAT15((char)(uVar3 >> 8),CONCAT14((char)uVar3,iVar10)))) &
       0xfffffffffffffffe;
  auVar29[9] = (char)(uVar4 >> 8);
  auVar29[10] = (char)(uVar4 >> 0x10);
  auVar29[0xb] = (char)(uVar4 >> 0x18);
  auVar29[0xc] = (char)uVar5;
  auVar29[0xd] = (char)(uVar5 >> 8);
  auVar29[0xe] = (char)(uVar5 >> 0x10);
  auVar29[0xf] = (char)(uVar5 >> 0x18);
  auVar29 = NEON_scvtf(auVar29,4);
  fVar22 = auVar29._0_4_;
  fVar24 = auVar29._4_4_;
  fVar25 = auVar29._8_4_;
  fVar27 = auVar29._12_4_;
  fVar22 = ABS(fVar19) + fVar22 * -0.78515625 + fVar22 * -0.00024187565 + fVar22 * -3.774895e-08;
  fVar24 = ABS(fVar19) + fVar24 * -0.78515625 + fVar24 * -0.00024187565 + fVar24 * -3.774895e-08;
  fVar25 = ABS(fVar19) + fVar25 * -0.78515625 + fVar25 * -0.00024187565 + fVar25 * -3.774895e-08;
  fVar19 = ABS(fVar19) + fVar27 * -0.78515625 + fVar27 * -0.00024187565 + fVar27 * -3.774895e-08;
  fVar27 = fVar22 * fVar22;
  fVar31 = fVar24 * fVar24;
  fVar32 = fVar25 * fVar25;
  fVar33 = fVar19 * fVar19;
  auVar29 = NEON_fmov(0x3f800000,4);
  auVar23._0_4_ =
       fVar22 + fVar22 * fVar27 * (fVar27 * (fVar27 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar23._4_4_ =
       fVar24 + fVar24 * fVar31 * (fVar31 * (fVar31 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar23._8_4_ =
       fVar25 + fVar25 * fVar32 * (fVar32 * (fVar32 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar23._12_4_ =
       fVar19 + fVar19 * fVar33 * (fVar33 * (fVar33 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar30._0_4_ = -(uint)((bVar7 + 2 & 2) == 0);
  auVar30._4_4_ = -(uint)(((char)uVar3 + 2U & 2) == 0);
  auVar30._8_4_ = -(uint)(((char)uVar4 + 2U & 2) == 0);
  auVar30._12_4_ = -(uint)(((char)uVar5 + 2U & 2) == 0);
  auVar6._4_4_ = fVar31 * fVar31 * (fVar31 * (fVar31 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar31 * -0.5 + auVar29._4_4_;
  auVar6._0_4_ = fVar27 * fVar27 * (fVar27 * (fVar27 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar27 * -0.5 + auVar29._0_4_;
  auVar6._8_4_ = fVar32 * fVar32 * (fVar32 * (fVar32 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar32 * -0.5 + auVar29._8_4_;
  auVar6._12_4_ =
       fVar33 * fVar33 * (fVar33 * (fVar33 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
       fVar33 * -0.5 + auVar29._12_4_;
  auVar29 = NEON_fmin(auVar23 ^ (auVar23 ^ auVar6) & ~auVar30,auVar29,4);
  fVar19 = 1.0 / (float)CONCAT13((byte)(((uint)(1 - bVar7 & 4) << 0x1d) >> 0x18) ^ auVar29[3],
                                 auVar29._0_3_);
  fVar19 = fVar19 * fVar19;
  lVar17 = 0;
  do {
    fVar26 = 0.0;
    fVar37 = 0.0;
    pfVar1 = (float *)(lVar12 + (long)iVar16 * 8);
    fVar22 = *pfVar1;
    fVar24 = pfVar1[1];
    pfVar1 = (float *)(lVar12 + lVar17 * 8);
    fVar33 = *pfVar1 - fVar22;
    fVar25 = pfVar1[1] - fVar24;
    fVar32 = fVar33 * fVar33 + fVar25 * fVar25;
    fVar35 = 0.0;
    fVar27 = fVar26;
    fVar31 = fVar37;
    if (fVar32 != 0.0) {
      fVar35 = SQRT(fVar32);
      fVar27 = fVar33 / fVar35;
      fVar31 = fVar25 / SQRT(fVar33 * fVar33 + fVar25 * fVar25);
    }
    fVar25 = fVar20 * fVar31 - fVar21 * fVar27;
    if (fVar25 <= 0.0001) {
      if (-0.0001 <= fVar25) {
        if (0.0 < fVar20 * fVar27 + fVar21 * fVar31) {
          fVar22 = fVar22 - fVar21 * param_1;
          goto LAB_030a20a8;
        }
        iVar10 = 1;
        fVar18 = -fVar31;
        fVar25 = fVar27;
        do {
          fVar39 = fVar25;
          fVar33 = fVar18;
          iVar16 = iVar10;
          fVar28 = fVar20 + fVar33;
          fVar34 = fVar21 + fVar39;
          fVar32 = fVar28 * fVar28 + fVar34 * fVar34;
          iVar10 = iVar16 * 2;
          fVar18 = fVar26;
          fVar25 = fVar37;
          if (fVar32 != 0.0) {
            fVar18 = fVar28 / SQRT(fVar32);
            fVar25 = fVar34 / SQRT(fVar28 * fVar28 + fVar34 * fVar34);
          }
          fVar32 = 1.0 / (fVar20 * fVar25 - fVar21 * fVar18);
          fVar34 = (fVar18 - fVar20) * fVar32;
          fVar36 = (fVar25 - fVar21) * fVar32;
          fVar28 = fVar34 * fVar34 + fVar36 * fVar36;
        } while (fVar19 < fVar28);
        if (0 < iVar16) {
          iVar16 = (int)param_2[1];
          fVar21 = (fVar33 - fVar18) * fVar32;
          fVar32 = (fVar39 - fVar25) * fVar32;
          fVar28 = 1.0 / fVar28;
          fVar18 = (fVar21 * fVar34 + fVar32 * fVar36) * fVar28;
          fVar28 = (fVar32 * fVar34 - fVar21 * fVar36) * fVar28;
          lVar12 = 0;
          do {
            fVar21 = fVar34 * param_1;
            iVar14 = (int)lVar12;
            if (iVar16 + lVar12 < (long)((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
              iVar11 = iVar16 + iVar14;
            }
            else {
              FUN_0309f65c(param_2,puVar8,iVar16 + lVar12 + 1);
              iVar11 = (int)param_2[1];
            }
            fVar20 = fVar28 * fVar34;
            pfVar1 = (float *)(*param_2 + (long)iVar11 * 8);
            fVar34 = fVar18 * fVar34 - fVar28 * fVar36;
            *pfVar1 = fVar21 + fVar22;
            pfVar1[1] = fVar36 * param_1 + fVar24;
            lVar12 = lVar12 + 1;
            *(int *)(param_2 + 1) = iVar16 + iVar14 + 1;
            fVar36 = fVar18 * fVar36 + fVar20;
          } while ((int)lVar12 < iVar10);
        }
        iVar10 = 1;
        fVar21 = fVar27;
        fVar20 = fVar31;
        do {
          fVar33 = fVar20;
          fVar32 = fVar21;
          iVar16 = iVar10;
          fVar18 = fVar32 - fVar31;
          fVar26 = fVar27 + fVar33;
          fVar25 = fVar18 * fVar18 + fVar26 * fVar26;
          fVar21 = 0.0;
          fVar20 = 0.0;
          iVar10 = iVar16 * 2;
          if (fVar25 != 0.0) {
            fVar21 = fVar18 / SQRT(fVar25);
            fVar20 = fVar26 / SQRT(fVar18 * fVar18 + fVar26 * fVar26);
          }
          fVar25 = 1.0 / (-fVar31 * fVar20 - fVar27 * fVar21);
          fVar37 = (fVar31 + fVar21) * fVar25;
          fVar39 = (fVar20 - fVar27) * fVar25;
          fVar26 = fVar37 * fVar37 + fVar39 * fVar39;
        } while (fVar19 < fVar26);
        fVar18 = fVar35;
        if (0 < iVar16) {
          iVar16 = (int)param_2[1];
          fVar21 = (fVar32 - fVar21) * fVar25;
          fVar25 = (fVar33 - fVar20) * fVar25;
          fVar26 = 1.0 / fVar26;
          fVar20 = (fVar21 * fVar37 + fVar25 * fVar39) * fVar26;
          fVar26 = (fVar25 * fVar37 - fVar21 * fVar39) * fVar26;
          lVar12 = 0;
          do {
            fVar21 = fVar37 * param_1;
            iVar14 = (int)lVar12;
            if (iVar16 + lVar12 < (long)((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
              iVar11 = iVar16 + iVar14;
            }
            else {
              FUN_0309f65c(param_2,puVar8,iVar16 + lVar12 + 1);
              iVar11 = (int)param_2[1];
            }
            fVar18 = fVar26 * fVar37;
            pfVar1 = (float *)(*param_2 + (long)iVar11 * 8);
            fVar37 = fVar20 * fVar37 - fVar26 * fVar39;
            *pfVar1 = fVar21 + fVar22;
            pfVar1[1] = fVar39 * param_1 + fVar24;
            lVar12 = lVar12 + 1;
            *(int *)(param_2 + 1) = iVar16 + iVar14 + 1;
            fVar39 = fVar20 * fVar39 + fVar18;
            fVar18 = fVar35;
          } while ((int)lVar12 < iVar10);
        }
      }
      else {
        fVar18 = (fVar27 - fVar20) * (1.0 / fVar25);
        fVar25 = (fVar31 - fVar21) * (1.0 / fVar25);
        if (fVar18 * fVar18 + fVar25 * fVar25 <= fVar19) {
          fVar22 = fVar18 * param_1 + fVar22;
          fVar20 = fVar25;
LAB_030a20a8:
          iVar10 = (int)param_2[1];
          lVar12 = (long)iVar10;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar10) {
            FUN_0309f65c(param_2,puVar8,lVar12 + 1);
            iVar10 = (int)param_2[1];
          }
          pfVar1 = (float *)(*param_2 + (long)iVar10 * 8);
          *pfVar1 = fVar22;
          pfVar1[1] = fVar20 * param_1 + fVar24;
          *(int *)(param_2 + 1) = (int)(lVar12 + 1);
          fVar18 = fVar35;
        }
        else {
          iVar10 = 1;
          fVar25 = fVar27;
          fVar32 = fVar31;
          do {
            fVar39 = fVar32;
            fVar33 = fVar25;
            iVar16 = iVar10;
            fVar28 = fVar20 + fVar33;
            fVar34 = fVar21 + fVar39;
            fVar18 = fVar28 * fVar28 + fVar34 * fVar34;
            iVar10 = iVar16 * 2;
            fVar25 = fVar26;
            fVar32 = fVar37;
            if (fVar18 != 0.0) {
              fVar25 = fVar28 / SQRT(fVar18);
              fVar32 = fVar34 / SQRT(fVar28 * fVar28 + fVar34 * fVar34);
            }
            fVar28 = 1.0 / (fVar20 * fVar32 - fVar21 * fVar25);
            fVar36 = (fVar25 - fVar20) * fVar28;
            fVar38 = (fVar32 - fVar21) * fVar28;
            fVar34 = fVar36 * fVar36 + fVar38 * fVar38;
          } while (fVar19 < fVar34);
          fVar18 = fVar35;
          if (0 < iVar16) {
            iVar16 = (int)param_2[1];
            fVar21 = (fVar33 - fVar25) * fVar28;
            fVar28 = (fVar39 - fVar32) * fVar28;
            fVar34 = 1.0 / fVar34;
            fVar20 = (fVar21 * fVar36 + fVar28 * fVar38) * fVar34;
            fVar34 = (fVar28 * fVar36 - fVar21 * fVar38) * fVar34;
            lVar12 = 0;
            do {
              fVar21 = fVar36 * param_1;
              iVar14 = (int)lVar12;
              if (iVar16 + lVar12 < (long)((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
                iVar11 = iVar16 + iVar14;
              }
              else {
                FUN_0309f65c(param_2,puVar8,iVar16 + lVar12 + 1);
                iVar11 = (int)param_2[1];
              }
              fVar18 = fVar34 * fVar36;
              pfVar1 = (float *)(*param_2 + (long)iVar11 * 8);
              fVar36 = fVar20 * fVar36 - fVar34 * fVar38;
              *pfVar1 = fVar21 + fVar22;
              pfVar1[1] = fVar38 * param_1 + fVar24;
              lVar12 = lVar12 + 1;
              *(int *)(param_2 + 1) = iVar16 + iVar14 + 1;
              fVar38 = fVar20 * fVar38 + fVar18;
              fVar18 = fVar35;
            } while ((int)lVar12 < iVar10);
          }
        }
      }
    }
    else {
      fVar32 = (fVar27 - fVar20) * (param_1 / fVar25);
      fVar25 = (fVar31 - fVar21) * (param_1 / fVar25);
      fVar33 = fVar27 * fVar32 + fVar31 * fVar25;
      bVar9 = false;
      if ((fVar33 < fVar18 + -0.0001) && (bVar9 = false, !NAN(fVar33) && !NAN(fVar35 + -0.0001))) {
        bVar9 = fVar33 < fVar35 + -0.0001;
      }
      if (bVar9) {
        iVar10 = (int)param_2[1];
        lVar12 = (long)iVar10;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar10) {
          FUN_0309f65c(param_2,puVar8,lVar12 + 1);
          iVar10 = (int)param_2[1];
        }
        pfVar1 = (float *)(*param_2 + (long)iVar10 * 8);
        *pfVar1 = fVar32 + fVar22;
        pfVar1[1] = fVar25 + fVar24;
        *(int *)(param_2 + 1) = (int)(lVar12 + 1);
        fVar18 = fVar35 - fVar33;
      }
      else {
        iVar10 = (int)param_2[1];
        lVar12 = (long)iVar10;
        uVar15 = lVar12 + 1;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar10) {
          FUN_0309f65c(param_2,puVar8,uVar15);
          iVar10 = (int)param_2[1];
        }
        pfVar1 = (float *)(*param_2 + (long)iVar10 * 8);
        *pfVar1 = fVar22 - fVar21 * param_1;
        pfVar1[1] = fVar20 * param_1 + fVar24;
        uVar13 = lVar12 + 2;
        *(int *)(param_2 + 1) = (int)uVar15;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar15) {
          FUN_0309f65c(param_2,puVar8,uVar13);
          uVar15 = (ulong)*(uint *)(param_2 + 1);
        }
        pfVar1 = (float *)(*param_2 + (long)(int)uVar15 * 8);
        *pfVar1 = fVar22;
        pfVar1[1] = fVar24;
        *(int *)(param_2 + 1) = (int)uVar13;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar13) {
          FUN_0309f65c(param_2,puVar8,lVar12 + 3);
          uVar13 = (ulong)*(uint *)(param_2 + 1);
        }
        pfVar1 = (float *)(*param_2 + (long)(int)uVar13 * 8);
        *pfVar1 = fVar22 - fVar31 * param_1;
        pfVar1[1] = fVar27 * param_1 + fVar24;
        *(int *)(param_2 + 1) = (int)(lVar12 + 3);
        fVar18 = fVar35;
      }
    }
    if ((long)(int)param_3[1] <= lVar17 + 1) {
      return;
    }
    iVar16 = (int)lVar17;
    lVar12 = *param_3;
    lVar17 = lVar17 + 1;
    fVar20 = fVar27;
    fVar21 = fVar31;
  } while( true );
}


