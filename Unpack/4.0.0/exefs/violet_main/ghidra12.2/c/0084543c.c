/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0084543c; name: FUN_0084543c
 */


void FUN_0084543c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  undefined1 auVar8 [12];
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  float fVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  byte bVar19;
  byte *pbVar20;
  long lVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  float fVar29;
  undefined1 auVar31 [16];
  float fVar30;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined8 uVar35;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  if (((int)param_1[1] != 0) && ((char)param_3[8] != '\0')) {
    uVar57 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    auVar31 = *(undefined1 (*) [16])(param_1 + 2);
    auVar52 = *(undefined1 (*) [16])(param_1 + 4);
    fVar41 = (auVar31._0_4_ - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    fVar44 = (auVar31._4_4_ - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    fVar46 = (auVar31._8_4_ - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    fVar48 = (auVar31._12_4_ - *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
    auVar36._0_4_ = *(float *)(param_3 + 6) * (auVar52._0_4_ - *(float *)(param_3 + 2));
    auVar36._4_4_ =
         *(float *)((long)param_3 + 0x34) * (auVar52._4_4_ - *(float *)((long)param_3 + 0x14));
    auVar36._8_4_ = *(float *)(param_3 + 7) * (auVar52._8_4_ - *(float *)(param_3 + 3));
    auVar36._12_4_ =
         *(float *)((long)param_3 + 0x3c) * (auVar52._12_4_ - *(float *)((long)param_3 + 0x1c));
    auVar37._4_4_ = fVar44;
    auVar37._0_4_ = fVar41;
    auVar37._8_4_ = fVar46;
    auVar37._12_4_ = fVar48;
    auVar51 = NEON_fmin(auVar37,auVar36,4);
    auVar33._4_4_ = fVar44;
    auVar33._0_4_ = fVar41;
    auVar33._8_4_ = fVar46;
    auVar33._12_4_ = fVar48;
    auVar37 = NEON_fmax(auVar33,auVar36,4);
    uVar35 = NEON_fmaxp(auVar51._0_8_,auVar51._0_8_,4);
    uVar35 = NEON_fmax(CONCAT44(auVar51._8_4_,auVar51._8_4_),uVar35,4);
    uVar50 = NEON_fminp(auVar37._0_8_,auVar37._0_8_,4);
    uVar50 = NEON_fmin(CONCAT44(auVar37._8_4_,auVar37._8_4_),uVar50,4);
    uVar35 = NEON_fmax(uVar35,uVar57,4);
    uVar50 = NEON_fmin(uVar50,*(undefined8 *)(*(long *)(*param_3 + 0xd8) + 0x10),4);
    if ((float)uVar35 <= (float)uVar50) {
      auVar37 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x1e0);
      fVar41 = auVar37._0_4_;
      lVar15 = param_2[1];
      uVar17 = 0;
      pbVar20 = (byte *)(*param_1 + (long)param_1);
LAB_0084554c:
      while( true ) {
        uVar16 = (uint)uVar17;
        if (-1 < (char)pbVar20[3]) break;
        uVar17 = (long)(int)uVar16 + 1;
        fVar44 = auVar52._0_4_;
        fVar29 = auVar31._0_4_;
        fVar46 = auVar52._4_4_;
        fVar42 = auVar31._4_4_;
        fVar48 = auVar52._8_4_;
        fVar30 = auVar31._8_4_;
        uVar2 = ((ulong)pbVar20[4] << 1 | ((ulong)pbVar20[3] & 0x7f) << 9) + (long)(int)uVar16;
        pbVar3 = (byte *)((long)param_1 + uVar2 * 5 + *param_1);
        pbVar20 = (byte *)((long)param_1 + uVar17 * 5 + *param_1);
        bVar9 = *pbVar20 >> 4;
        bVar10 = pbVar20[1] >> 4;
        bVar19 = pbVar20[1] & 0xf;
        bVar11 = *pbVar3 >> 4;
        fVar34 = (fVar44 - fVar29) * fVar41;
        fVar39 = (fVar46 - fVar42) * auVar37._4_4_;
        fVar40 = (fVar48 - fVar30) * fVar41;
        bVar12 = pbVar20[2] >> 4;
        bVar13 = pbVar3[1] >> 4;
        bVar4 = pbVar3[2] & 0xf;
        bVar7 = pbVar3[2] >> 4;
        bVar5 = pbVar3[1] & 0xf;
        fVar58 = fVar42 + (float)(byte)(bVar10 * bVar10) * fVar39;
        fVar55 = fVar29 + (float)(byte)(bVar9 * bVar9) * fVar34;
        fVar29 = fVar29 + (float)(byte)(bVar11 * bVar11) * fVar34;
        fVar59 = fVar30 + (float)(byte)(bVar12 * bVar12) * fVar40;
        bVar9 = pbVar20[2] & 0xf;
        bVar10 = *pbVar20 & 0xf;
        fVar42 = fVar42 + (float)(byte)(bVar13 * bVar13) * fVar39;
        fVar56 = fVar46 - (float)(byte)(bVar19 * bVar19) * fVar39;
        fVar60 = fVar48 - (float)(byte)(bVar9 * bVar9) * fVar40;
        bVar19 = *pbVar3 & 0xf;
        fVar61 = fVar44 - (float)(byte)(bVar10 * bVar10) * fVar34;
        fVar44 = fVar44 - (float)(byte)(bVar19 * bVar19) * fVar34;
        fVar30 = fVar30 + (float)(byte)(bVar7 * bVar7) * fVar40;
        fVar46 = fVar46 - (float)(byte)(bVar5 * bVar5) * fVar39;
        fVar48 = fVar48 - (float)(byte)(bVar4 * bVar4) * fVar40;
        bVar19 = false;
        if ((char)param_3[8] == '\0') {
LAB_00845964:
          if (bVar19 != 3) goto LAB_00845974;
LAB_008459a0:
          iVar23 = (int)param_2[1];
          lVar21 = (long)iVar23;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar23) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar21 + 1);
            iVar23 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar21 + 1);
          puVar18 = (undefined8 *)(*param_2 + (long)iVar23 * 0x30);
          puVar18[1] = (ulong)(uint)fVar30;
          *puVar18 = CONCAT44(fVar42,fVar29);
          puVar18[3] = (ulong)(uint)fVar48;
          puVar18[2] = CONCAT44(fVar46,fVar44);
          *(int *)(puVar18 + 4) = (int)uVar2;
          uVar17 = uVar17 & 0xffffffff;
          auVar31._4_4_ = fVar58;
          auVar31._0_4_ = fVar55;
          auVar31._8_4_ = fVar59;
          auVar31._12_4_ = 0;
          auVar52._4_4_ = fVar56;
          auVar52._0_4_ = fVar61;
          auVar52._8_4_ = fVar60;
          auVar52._12_4_ = 0;
        }
        else {
          fVar34 = *(float *)(param_3 + 2);
          fVar39 = *(float *)((long)param_3 + 0x14);
          fVar40 = *(float *)(param_3 + 3);
          fVar14 = *(float *)((long)param_3 + 0x1c);
          fVar47 = (float)param_3[7];
          fVar49 = (float)((ulong)param_3[7] >> 0x20);
          fVar43 = (float)param_3[6];
          fVar45 = (float)((ulong)param_3[6] >> 0x20);
          auVar38._0_4_ = fVar43 * (fVar61 - fVar34);
          auVar38._4_4_ = fVar45 * (fVar56 - fVar39);
          auVar38._8_4_ = fVar47 * (fVar60 - fVar40);
          auVar38._12_4_ = fVar49 * (0.0 - fVar14);
          auVar32._0_4_ = (fVar55 - fVar34) * fVar43;
          auVar32._4_4_ = (fVar58 - fVar39) * fVar45;
          auVar32._8_4_ = (fVar59 - fVar40) * fVar47;
          auVar32._12_4_ = (0.0 - fVar14) * fVar49;
          auVar52 = NEON_fmin(auVar32,auVar38,4);
          auVar33 = NEON_fmax(auVar32,auVar38,4);
          uVar35 = NEON_fmaxp(auVar52._0_8_,auVar52._0_8_,4);
          uVar50 = NEON_fmax(CONCAT44(auVar52._8_4_,auVar52._8_4_),uVar35,4);
          uVar35 = NEON_fminp(auVar33._0_8_,auVar33._0_8_,4);
          uVar35 = NEON_fmin(CONCAT44(auVar33._8_4_,auVar33._8_4_),uVar35,4);
          uVar50 = NEON_fmax(uVar50,uVar57,4);
          uVar54 = *(undefined8 *)(*(long *)(*param_3 + 0xd8) + 0x10);
          auVar53._0_4_ = fVar43 * (fVar29 - fVar34);
          auVar53._4_4_ = fVar45 * (fVar42 - fVar39);
          auVar53._8_4_ = fVar47 * (fVar30 - fVar40);
          auVar53._12_4_ = fVar49 * (0.0 - fVar14);
          uVar35 = NEON_fmin(uVar35,uVar54,4);
          auVar51._0_4_ = fVar43 * (fVar44 - fVar34);
          auVar51._4_4_ = fVar45 * (fVar46 - fVar39);
          auVar51._8_4_ = fVar47 * (fVar48 - fVar40);
          auVar51._12_4_ = fVar49 * (0.0 - fVar14);
          auVar52 = NEON_fmin(auVar53,auVar51,4);
          bVar19 = (float)uVar50 <= (float)uVar35;
          auVar33 = NEON_fmax(auVar53,auVar51,4);
          uVar35 = NEON_fmaxp(auVar52._0_8_,auVar52._0_8_,4);
          uVar50 = NEON_fmax(CONCAT44(auVar52._8_4_,auVar52._8_4_),uVar35,4);
          uVar35 = NEON_fminp(auVar33._0_8_,auVar33._0_8_,4);
          uVar35 = NEON_fmin(CONCAT44(auVar33._8_4_,auVar33._8_4_),uVar35,4);
          uVar50 = NEON_fmax(uVar50,uVar57,4);
          uVar35 = NEON_fmin(uVar35,uVar54,4);
          if ((float)uVar35 < (float)uVar50) goto LAB_00845964;
          bVar19 = bVar19 | 2;
          if (bVar19 == 3) goto LAB_008459a0;
LAB_00845974:
          if (bVar19 == 2) {
            auVar31._4_4_ = fVar42;
            auVar31._0_4_ = fVar29;
            auVar31._8_4_ = fVar30;
            auVar31._12_4_ = 0;
            auVar52._4_4_ = fVar46;
            auVar52._0_4_ = fVar44;
            auVar52._8_4_ = fVar48;
            auVar52._12_4_ = 0;
            uVar17 = uVar2 & 0xffffffff;
            pbVar20 = pbVar3;
          }
          else {
            if (bVar19 != 1) goto LAB_008456ec;
            auVar31._4_4_ = fVar58;
            auVar31._0_4_ = fVar55;
            auVar31._8_4_ = fVar59;
            auVar31._12_4_ = 0;
            auVar52._4_4_ = fVar56;
            auVar52._0_4_ = fVar61;
            auVar52._8_4_ = fVar60;
            auVar52._12_4_ = 0;
          }
        }
      }
      lVar21 = *param_3;
      lVar24 = *(long *)(lVar21 + 0xa8);
      if (lVar24 == 0) {
LAB_008455b8:
        lVar28 = *(long *)(lVar21 + 0x50);
        lVar27 = (long)(param_1 + 8) + (ulong)CONCAT11(pbVar20[3],pbVar20[4]) * 0x60 + param_1[8];
        lVar25 = *(long *)(lVar28 + 0x40);
        lVar24 = lVar25 + lVar28 + 0x40;
        lVar1 = 0;
        if (lVar25 != 0) {
          lVar1 = lVar24;
        }
        iVar23 = (int)(lVar27 - lVar1 >> 5) * -0x55555555;
        if ((*(int *)(lVar21 + 0x94) != iVar23) || (*(int *)(lVar21 + 0x98) != iVar23)) {
          lVar24 = lVar24 + (long)iVar23 * 0x60;
          *(long *)(lVar21 + 0x60) = lVar24;
          *(int *)(lVar21 + 0x94) = iVar23;
          *(int *)(lVar21 + 0x98) = iVar23;
          lVar25 = *(long *)(lVar28 + 0x70);
          lVar1 = 0;
          if (lVar25 != 0) {
            lVar1 = lVar25 + lVar28 + 0x70;
          }
          *(ulong *)(lVar21 + 0x70) = lVar1 + (ulong)*(uint *)(lVar24 + 0x48) * 4;
          lVar25 = *(long *)(lVar28 + 0x80);
          lVar1 = 0;
          if (lVar25 != 0) {
            lVar1 = lVar25 + lVar28 + 0x80;
          }
          *(ulong *)(lVar21 + 0x78) = lVar1 + (ulong)*(byte *)(lVar24 + 0x5b) * 0x80000;
          lVar25 = *(long *)(lVar28 + 0x60);
          lVar1 = 0;
          if (lVar25 != 0) {
            lVar1 = lVar25 + lVar28 + 0x60;
          }
          lVar1 = lVar1 + (ulong)*(uint *)(lVar24 + 0x4c) * 2;
          *(long *)(lVar21 + 0x80) = lVar1;
          lVar26 = *(long *)(lVar28 + 0x90);
          lVar25 = 0;
          if (lVar26 != 0) {
            lVar25 = lVar26 + lVar28 + 0x90;
          }
          *(ulong *)(lVar21 + 0x88) = lVar25 + (ulong)*(uint *)(lVar24 + 0x54) * 4;
          *(uint *)(lVar21 + 0x90) = (uint)*(byte *)(lVar24 + 0x58);
          lVar26 = *(long *)(lVar28 + 0x50);
          lVar25 = 0;
          if (lVar26 != 0) {
            lVar25 = lVar26 + lVar28 + 0x50;
          }
          *(ulong *)(lVar21 + 0x68) = lVar25 + (ulong)*(uint *)(lVar24 + 0x50) * 4;
          uVar35 = *(undefined8 *)(lVar24 + 0x30);
          *(undefined8 *)(lVar21 + 0x38) = *(undefined8 *)(lVar24 + 0x38);
          *(undefined8 *)(lVar21 + 0x30) = uVar35;
          auVar8 = *(undefined1 (*) [12])(lVar24 + 0x3c);
          *(ulong *)(lVar21 + 0x48) = (ulong)auVar8._8_4_;
          *(long *)(lVar21 + 0x40) = auVar8._0_8_;
          *(ulong *)(lVar21 + 0x80) = lVar1 + (ulong)*(byte *)(lVar24 + 0x58) * -2;
        }
        FUN_00845a04(lVar27,param_2,param_3);
      }
      else {
        lVar27 = *(long *)(lVar24 + 0x20);
        lVar1 = 0;
        if (lVar27 != 0) {
          lVar1 = lVar27 + lVar24 + 0x20;
        }
        lVar28 = *(long *)(lVar1 + 0x48);
        lVar27 = 0;
        if (lVar28 != 0) {
          lVar27 = lVar28 + lVar1 + 0x48;
        }
        uVar6 = uVar16 + 0x1f;
        if (-1 < (int)uVar16) {
          uVar6 = uVar16;
        }
        if ((*(uint *)(lVar24 + 0x28 +
                      (long)((int)uVar6 >> 5) * 4 +
                      (long)(*(int *)(lVar27 + 0x68) << 3) * 4 + *(long *)(lVar24 + 0x28)) >>
             (ulong)(uVar16 & 0x1f) & 1) != 0) goto LAB_008455b8;
      }
LAB_008456ec:
      if ((int)lVar15 < (int)param_2[1]) {
        iVar23 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar23;
        pauVar22 = (undefined1 (*) [16])(*param_2 + (long)iVar23 * 0x30);
        uVar17 = (ulong)*(int *)pauVar22[2];
        auVar31 = *pauVar22;
        auVar52 = pauVar22[1];
        pbVar20 = (byte *)((long)param_1 + uVar17 * 5 + *param_1);
        goto LAB_0084554c;
      }
    }
  }
  return;
}


