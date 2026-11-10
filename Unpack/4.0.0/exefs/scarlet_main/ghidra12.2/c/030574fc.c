/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030574fc; name: FUN_030574fc
 */


void FUN_030574fc(long param_1,int param_2,int param_3,undefined8 *param_4,
                 undefined1 (*param_5) [12],undefined8 *param_6,long *param_7)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar43 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  
  if (param_2 < param_3) {
    pauVar1 = (undefined1 (*) [12])(param_1 + 0x10);
    fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    uVar4 = *(undefined8 *)*pauVar1;
    fVar21 = (float)((ulong)uVar4 >> 0x20);
    fVar30 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
    uVar7 = *(undefined8 *)*param_5;
    fVar26 = (float)((ulong)uVar7 >> 0x20);
    auVar35._12_4_ = fVar20;
    auVar35._0_12_ = *pauVar1;
    auVar43._12_4_ = fVar20;
    auVar43._0_12_ = *pauVar1;
    auVar35 = NEON_ext(auVar35,auVar43,8,1);
    auVar5._12_4_ = fVar30;
    auVar5._0_12_ = *param_5;
    auVar6._12_4_ = fVar30;
    auVar6._0_12_ = *param_5;
    auVar43 = NEON_ext(auVar5,auVar6,8,1);
    fVar39 = *(float *)(param_6 + 5);
    fVar40 = *(float *)((long)param_6 + 0x2c);
    fVar33 = *(float *)(param_6 + 4);
    fVar37 = *(float *)((long)param_6 + 0x24);
    uVar58 = param_6[7];
    uVar55 = param_6[6];
    uVar47 = param_6[1];
    uVar46 = *param_6;
    uVar50 = param_6[3];
    uVar48 = param_6[2];
    uVar34 = NEON_ext(uVar4,auVar35._0_8_,4,1);
    uVar42 = NEON_ext(uVar7,auVar43._0_8_,4,1);
    fVar14 = (float)uVar4 * (float)uVar42 - (float)uVar7 * (float)uVar34;
    fVar16 = fVar21 * (float)((ulong)uVar42 >> 0x20) - fVar26 * (float)((ulong)uVar34 >> 0x20);
    fVar18 = (float)*(undefined8 *)(param_1 + 0x18) * (float)uVar7 -
             (float)*(undefined8 *)(*param_5 + 8) * (float)uVar4;
    fVar21 = fVar20 * fVar26 - fVar30 * fVar21;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar14;
    auVar2._8_4_ = fVar18;
    auVar2._12_4_ = fVar21;
    auVar3._4_4_ = fVar16;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = fVar18;
    auVar3._12_4_ = fVar21;
    auVar35 = NEON_ext(auVar2,auVar3,4,1);
    auVar52._0_8_ = auVar35._0_8_;
    auVar52._8_4_ = fVar14;
    fVar14 = -((float)*param_4 * auVar35._0_4_ + (float)((ulong)*param_4 >> 0x20) * auVar35._4_4_ +
              (float)param_4[1] * fVar14);
    auVar52._12_4_ = fVar14;
    auVar53 = auVar52;
    do {
      lVar12 = (long)param_2;
      lVar13 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18);
      fVar21 = (float)uVar46;
      fVar16 = (float)((ulong)uVar46 >> 0x20);
      fVar18 = (float)uVar47;
      fVar20 = (float)((ulong)uVar47 >> 0x20);
      fVar26 = (float)uVar48;
      fVar30 = (float)((ulong)uVar48 >> 0x20);
      fVar49 = (float)uVar50;
      fVar51 = (float)((ulong)uVar50 >> 0x20);
      fVar54 = (float)uVar55;
      fVar56 = (float)((ulong)uVar55 >> 0x20);
      fVar57 = (float)uVar58;
      fVar59 = (float)((ulong)uVar58 >> 0x20);
      if ((*(byte *)(lVar13 + (long)param_2 * 0x90 + 0x80) >> 4 & 1) != 0) {
        puVar10 = (undefined8 *)(lVar13 + lVar12 * 0x90);
        fVar27 = (float)puVar10[1];
        fVar22 = (float)*puVar10;
        fVar24 = (float)((ulong)*puVar10 >> 0x20);
        fVar28 = (float)puVar10[3];
        fVar23 = (float)puVar10[2];
        fVar25 = (float)((ulong)puVar10[2] >> 0x20);
        fVar15 = fVar33 * fVar27 + fVar26 * fVar24 + fVar54 + fVar21 * fVar22;
        fVar17 = fVar37 * fVar27 + fVar30 * fVar24 + fVar56 + fVar16 * fVar22;
        fVar19 = fVar39 * fVar27 + fVar49 * fVar24 + fVar57 + fVar18 * fVar22;
        fVar22 = fVar40 * fVar27 + fVar51 * fVar24 + fVar59 + fVar20 * fVar22;
        fVar24 = (fVar33 * fVar28 + fVar26 * fVar25 + fVar54 + fVar21 * fVar23) - fVar15;
        fVar27 = (fVar37 * fVar28 + fVar30 * fVar25 + fVar56 + fVar16 * fVar23) - fVar17;
        fVar29 = (fVar39 * fVar28 + fVar49 * fVar25 + fVar57 + fVar18 * fVar23) - fVar19;
        fVar31 = auVar53._0_4_ * fVar24;
        fVar36 = auVar53._4_4_ * fVar27;
        fVar38 = auVar53._8_4_ * fVar29;
        fVar32 = fVar31 + fVar36 + fVar38;
        if (1.1920929e-07 < fVar32 * fVar32) {
          fVar41 = auVar53._0_4_ * fVar15;
          fVar44 = auVar53._4_4_ * fVar17;
          fVar45 = auVar53._8_4_ * fVar19;
          iVar9 = (int)param_7[1];
          lVar11 = (long)iVar9;
          fVar32 = -(fVar14 + fVar45 + fVar41 + fVar44) / fVar32;
          fVar31 = -(fVar14 + fVar45 + fVar41 + fVar44) / (fVar31 + fVar36 + fVar38);
          if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) <= iVar9) {
            FUN_03058574(param_7,lVar11 + 1);
            iVar9 = (int)param_7[1];
          }
          *(int *)(param_7 + 1) = (int)(lVar11 + 1);
          puVar10 = (undefined8 *)(*param_7 + (long)iVar9 * 0x30);
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[1] = CONCAT44(fVar22 + ((fVar40 * fVar28 +
                                          fVar51 * fVar25 + fVar59 + fVar20 * fVar23) - fVar22) *
                                         fVar31,fVar19 + fVar29 * fVar32);
          *puVar10 = CONCAT44(fVar17 + fVar27 * fVar31,fVar15 + fVar24 * fVar32);
          uVar8 = FUN_0307878c(lVar13 + lVar12 * 0x90 + 0x70,*(undefined8 *)(param_1 + 0x100),
                               (long)puVar10 + 0x14);
          *(undefined4 *)(puVar10 + 2) = uVar8;
          iVar9 = *(int *)(*(long *)(param_1 + 0xf8) + 0x38);
          lVar11 = *(long *)(*(long *)(param_1 + 0xf8) + 0x28) + (long)(iVar9 * param_2) * 4;
          puVar10[3] = lVar11;
          puVar10[4] = lVar11 + (long)iVar9 * 4;
          auVar53._8_8_ = auVar52._8_8_;
          auVar53._0_8_ = auVar52._0_8_;
        }
      }
      lVar13 = lVar13 + lVar12 * 0x90;
      param_2 = param_2 + 1;
      fVar19 = (float)*(undefined8 *)(lVar13 + 0x38);
      fVar17 = (float)*(undefined8 *)(lVar13 + 0x30);
      fVar27 = (float)((ulong)*(undefined8 *)(lVar13 + 0x30) >> 0x20);
      fVar31 = (float)*(undefined8 *)(lVar13 + 0x48);
      fVar23 = (float)*(undefined8 *)(lVar13 + 0x40);
      fVar28 = (float)((ulong)*(undefined8 *)(lVar13 + 0x40) >> 0x20);
      fVar25 = fVar33 * fVar31;
      fVar29 = fVar37 * fVar31;
      fVar32 = fVar39 * fVar31;
      fVar31 = fVar40 * fVar31;
      fVar22 = *(float *)(lVar13 + 0x60);
      fVar15 = *(float *)(lVar13 + 100);
      fVar24 = *(float *)(lVar13 + 0x68);
      fVar36 = (float)*(undefined8 *)(lVar13 + 0x50);
      fVar38 = (float)((ulong)*(undefined8 *)(lVar13 + 0x50) >> 0x20);
      fVar41 = (float)*(undefined8 *)(lVar13 + 0x58);
      uVar47 = CONCAT44(fVar40 * fVar19 + fVar20 * fVar17 + fVar51 * fVar27,
                        fVar39 * fVar19 + fVar18 * fVar17 + fVar49 * fVar27);
      uVar46 = CONCAT44(fVar37 * fVar19 + fVar16 * fVar17 + fVar30 * fVar27,
                        fVar33 * fVar19 + fVar21 * fVar17 + fVar26 * fVar27);
      fVar17 = fVar33 * fVar24;
      fVar27 = fVar37 * fVar24;
      fVar19 = fVar39 * fVar24;
      fVar24 = fVar40 * fVar24;
      fVar33 = fVar33 * fVar41 + fVar21 * fVar36 + fVar26 * fVar38;
      fVar37 = fVar37 * fVar41 + fVar16 * fVar36 + fVar30 * fVar38;
      fVar39 = fVar39 * fVar41 + fVar18 * fVar36 + fVar49 * fVar38;
      fVar40 = fVar40 * fVar41 + fVar20 * fVar36 + fVar51 * fVar38;
      uVar50 = CONCAT44(fVar31 + fVar20 * fVar23 + fVar51 * fVar28,
                        fVar32 + fVar18 * fVar23 + fVar49 * fVar28);
      uVar48 = CONCAT44(fVar29 + fVar16 * fVar23 + fVar30 * fVar28,
                        fVar25 + fVar21 * fVar23 + fVar26 * fVar28);
      uVar55 = CONCAT44(fVar27 + fVar30 * fVar15 + fVar56 + fVar16 * fVar22,
                        fVar17 + fVar26 * fVar15 + fVar54 + fVar21 * fVar22);
      uVar58 = CONCAT44(fVar24 + fVar51 * fVar15 + fVar59 + fVar20 * fVar22,
                        fVar19 + fVar49 * fVar15 + fVar57 + fVar18 * fVar22);
    } while (param_3 != param_2);
  }
  return;
}


