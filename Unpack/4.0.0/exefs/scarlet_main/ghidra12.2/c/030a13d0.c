/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a13d0; name: FUN_030a13d0
 */


void FUN_030a13d0(long *param_1,long param_2,uint param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  float *pfVar17;
  int iVar18;
  long *plVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  *(uint *)(param_1 + 4) = param_3;
  lVar22 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(param_3 >> 0x16) * 0x100);
  param_3 = param_3 & 0x3fffff;
  lVar12 = *(long *)(lVar22 + 0x20);
  uVar13 = param_3 - *(int *)(lVar12 + 0x20);
  if ((int)param_3 < *(int *)(lVar12 + 0x20)) {
    if (*(int *)(lVar12 + 0x98) == 0) {
      uVar13 = param_3;
    }
    else {
      uVar13 = *(uint *)(*(long *)(lVar12 + 0x90) + (ulong)param_3 * 4);
      if (uVar13 == 0xffffffff) {
        piVar23 = (int *)(*(long *)(lVar12 + 0x18) + (ulong)param_3 * 0x10);
        goto LAB_030a1450;
      }
    }
    lVar12 = *(long *)(lVar12 + 0xb0);
  }
  else {
    lVar12 = *(long *)(lVar12 + 0xd0);
  }
  piVar23 = (int *)(lVar12 + (long)(int)uVar13 * 0x10);
LAB_030a1450:
  sVar10 = (short)piVar23[2];
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (int)sVar10) {
    FUN_030a1958(param_1,(long)(int)sVar10);
    sVar10 = (short)piVar23[2];
  }
  if (0 < sVar10) {
    iVar11 = 0;
    do {
      iVar18 = iVar11 + *piVar23;
      lVar12 = *(long *)(lVar22 + 0x20);
      if (iVar18 < *(int *)(lVar12 + 0x30)) {
        lVar21 = *(long *)(lVar12 + 0x28);
        iVar20 = iVar18;
        if (*(int *)(lVar12 + 0x78) != 0) {
          iVar20 = *(int *)(*(long *)(lVar12 + 0x70) + (long)iVar18 * 4);
        }
        if (iVar20 != -1) {
          plVar19 = (long *)(lVar12 + 0xc0);
          iVar18 = iVar20;
          goto LAB_030a14dc;
        }
      }
      else {
        plVar19 = (long *)(lVar12 + 0xe0);
        iVar18 = iVar18 - *(int *)(lVar12 + 0x30);
LAB_030a14dc:
        lVar21 = *plVar19;
      }
      iVar20 = *(int *)(lVar21 + (long)iVar18 * 0x14);
      iVar18 = *(int *)(lVar12 + 0x40);
      lVar21 = 0x38;
      if (iVar18 <= iVar20) {
        lVar21 = 0xf0;
      }
      fVar25 = *(float *)(lVar22 + 0x60);
      fVar27 = *(float *)(lVar22 + 100);
      fVar29 = *(float *)(lVar22 + 0x68);
      fVar30 = *(float *)(lVar22 + 0x6c);
      fVar6 = *(float *)(lVar22 + 0x70);
      fVar7 = *(float *)(lVar22 + 0x74);
      fVar8 = *(float *)(lVar22 + 0x78);
      fVar9 = *(float *)(lVar22 + 0x7c);
      uVar34 = *(undefined8 *)(lVar22 + 0x88);
      uVar33 = *(undefined8 *)(lVar22 + 0x80);
      uVar36 = *(undefined8 *)(lVar22 + 0x98);
      uVar35 = *(undefined8 *)(lVar22 + 0x90);
      iVar2 = 0;
      if (iVar18 <= iVar20) {
        iVar2 = iVar18;
      }
      puVar3 = (undefined8 *)(*(long *)(lVar12 + lVar21) + (long)(iVar20 - iVar2) * 0x10);
      fVar28 = (float)puVar3[1];
      uVar5 = *puVar3;
      fVar24 = (float)uVar5;
      fVar26 = (float)((ulong)uVar5 >> 0x20);
      lVar12 = param_1[1];
      *(int *)(param_1 + 1) = (int)lVar12 + 1;
      pfVar15 = (float *)(*param_1 + (long)(int)lVar12 * 0x14);
      iVar11 = iVar11 + 1;
      fVar25 = (float)uVar35 + (float)uVar33 * fVar28 + fVar25 * fVar24 + fVar6 * fVar26;
      fVar27 = (float)((ulong)uVar35 >> 0x20) +
               (float)((ulong)uVar33 >> 0x20) * fVar28 + fVar27 * fVar24 + fVar7 * fVar26;
      fVar29 = (float)uVar36 + (float)uVar34 * fVar28 + fVar29 * fVar24 + fVar8 * fVar26;
      fVar30 = (float)((ulong)uVar36 >> 0x20) +
               (float)((ulong)uVar34 >> 0x20) * fVar28 + fVar30 * fVar24 + fVar9 * fVar26;
      auVar31._0_4_ = fVar25 * *param_4;
      auVar31._4_4_ = fVar27 * param_4[1];
      auVar31._8_4_ = fVar29 * param_4[2];
      auVar31._12_4_ = fVar30 * param_4[3];
      auVar32 = NEON_ext(auVar31,auVar31,8,1);
      *pfVar15 = auVar31._0_4_ + auVar31._4_4_ + auVar32._0_4_;
      fVar25 = fVar25 * *param_5;
      fVar27 = fVar27 * param_5[1];
      fVar29 = fVar29 * param_5[2];
      fVar30 = fVar30 * param_5[3];
      auVar32._4_4_ = fVar27;
      auVar32._0_4_ = fVar25;
      auVar32._8_4_ = fVar29;
      auVar32._12_4_ = fVar30;
      auVar4._4_4_ = fVar27;
      auVar4._0_4_ = fVar25;
      auVar4._8_4_ = fVar29;
      auVar4._12_4_ = fVar30;
      auVar32 = NEON_ext(auVar32,auVar4,8,1);
      pfVar15[1] = fVar25 + fVar27 + auVar32._0_4_;
    } while (iVar11 < (short)piVar23[2]);
  }
  uVar14 = (ulong)*(uint *)(param_1 + 1);
  param_1[2] = 0x7f7fffee7f7fffee;
  param_1[3] = -0x80001100800012;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    lVar12 = 0;
    uVar16 = 0;
    do {
      uVar1 = uVar16 + 1;
      lVar22 = 0;
      if (uVar1 != (uVar14 & 0xffffffff)) {
        lVar22 = uVar16 + 1;
      }
      pfVar17 = (float *)(*param_1 + lVar22 * 0x14);
      pfVar15 = (float *)(*param_1 + lVar12);
      fVar27 = *pfVar15;
      fVar25 = fVar27 - *pfVar17;
      pfVar15[2] = fVar25;
      pfVar15[2] = -(pfVar15[1] - pfVar17[1]);
      pfVar15[3] = fVar25;
      fVar29 = (float)*(undefined8 *)(pfVar15 + 2);
      fVar30 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
      fVar25 = fVar29 * fVar29 + fVar30 * fVar30;
      uVar33 = 0;
      if (fVar25 != 0.0) {
        uVar33 = CONCAT44(fVar30 / SQRT(fVar29 * fVar29 + fVar30 * fVar30),fVar29 / SQRT(fVar25));
      }
      *(undefined8 *)(pfVar15 + 2) = uVar33;
      lVar12 = lVar12 + 0x14;
      pfVar15[4] = -(fVar27 * (float)uVar33 + pfVar15[1] * pfVar15[3]);
      fVar25 = *(float *)(param_1 + 2);
      if (fVar27 <= *(float *)(param_1 + 2)) {
        fVar25 = fVar27;
      }
      *(float *)(param_1 + 2) = fVar25;
      fVar25 = *(float *)((long)param_1 + 0x14);
      if (pfVar15[1] <= *(float *)((long)param_1 + 0x14)) {
        fVar25 = pfVar15[1];
      }
      *(float *)((long)param_1 + 0x14) = fVar25;
      fVar25 = *(float *)(param_1 + 3);
      if (*(float *)(param_1 + 3) <= *pfVar15) {
        fVar25 = *pfVar15;
      }
      *(float *)(param_1 + 3) = fVar25;
      uVar14 = (ulong)(int)param_1[1];
      fVar25 = *(float *)((long)param_1 + 0x1c);
      if (*(float *)((long)param_1 + 0x1c) <= pfVar15[1]) {
        fVar25 = pfVar15[1];
      }
      *(float *)((long)param_1 + 0x1c) = fVar25;
      uVar16 = uVar1;
    } while ((long)uVar1 < (long)uVar14);
  }
  return;
}


