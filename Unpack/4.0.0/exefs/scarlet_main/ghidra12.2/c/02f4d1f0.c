/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f4d1f0; name: FUN_02f4d1f0
 */


void FUN_02f4d1f0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  bool bVar30;
  undefined8 *puVar31;
  int iVar32;
  long lVar33;
  undefined8 *puVar34;
  float *pfVar35;
  undefined1 (*pauVar36) [16];
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  undefined1 auVar52 [16];
  float fVar56;
  float fVar57;
  float fVar60;
  float fVar61;
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 auVar59 [16];
  float fVar63;
  float fVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined1 local_84;
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined6 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  plVar1 = param_1 + 2;
  puVar42 = (undefined8 *)((ulong)&uStack_80 | 2);
  do {
    switch((int)param_1[1]) {
    case 0:
      fVar56 = (float)param_1[3];
      fVar46 = (float)((ulong)param_1[3] >> 0x20);
      fVar43 = (float)param_1[2];
      fVar45 = (float)((ulong)param_1[2] >> 0x20);
LAB_02f4ddf0:
      param_1[5] = CONCAT44(fVar46,fVar56);
      param_1[4] = CONCAT44(fVar45,fVar43);
      return;
    case 1:
      pfVar35 = (float *)*param_1;
      fVar47 = *pfVar35;
      fVar44 = pfVar35[1];
      fVar49 = pfVar35[3];
      fVar56 = (float)param_1[3];
      fVar46 = (float)((ulong)param_1[3] >> 0x20);
      fVar43 = (float)param_1[2];
      fVar45 = (float)((ulong)param_1[2] >> 0x20);
      fVar55 = fVar47 * fVar43;
      fVar57 = fVar44 * fVar45;
      fVar53 = pfVar35[2] * fVar56;
      fVar60 = fVar55 + fVar57 + fVar53;
      fVar53 = fVar55 + fVar57 + fVar53;
      *(float *)(param_1 + 5) = fVar56 - pfVar35[2] * fVar60;
      *(float *)((long)param_1 + 0x2c) = fVar46 - fVar49 * fVar53;
      *(float *)(param_1 + 4) = fVar43 - fVar47 * fVar60;
      *(float *)((long)param_1 + 0x24) = fVar45 - fVar44 * fVar53;
      if (fVar60 < -0.001) {
        return;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_02f4ddf0;
    case 2:
      pauVar36 = (undefined1 (*) [16])*param_1;
      fVar46 = (float)param_1[3];
      fVar43 = (float)param_1[2];
      fVar45 = (float)((ulong)param_1[2] >> 0x20);
      auVar51 = pauVar36[5];
      fVar47 = auVar51._0_4_;
      fVar44 = auVar51._4_4_;
      fVar49 = auVar51._8_4_;
      fVar55 = auVar51._12_4_;
      fVar56 = fVar47 * fVar43 + fVar44 * fVar45 + fVar49 * fVar46;
      fVar60 = fVar47 * fVar43 + fVar44 * fVar45 + fVar49 * fVar46;
      fVar57 = fVar43 - fVar47 * fVar56;
      fVar53 = fVar45 - fVar44 * fVar60;
      fVar61 = fVar46 - fVar49 * fVar56;
      fVar63 = (float)((ulong)param_1[3] >> 0x20) - fVar55 * fVar60;
      auVar50 = *pauVar36;
      fVar56 = auVar50._0_4_;
      auVar66._0_4_ = fVar56 * fVar57;
      fVar60 = auVar50._4_4_;
      auVar66._4_4_ = fVar60 * fVar53;
      auVar66._8_4_ = auVar50._8_4_ * fVar61;
      auVar66._12_4_ = auVar50._12_4_ * fVar63;
      auVar69 = NEON_ext(auVar66,auVar66,8,1);
      if (-0.001 <= auVar66._0_4_ + auVar66._4_4_ + auVar69._0_4_) {
        *(float *)(param_1 + 5) = fVar61;
        *(float *)((long)param_1 + 0x2c) = fVar63;
        *(float *)(param_1 + 4) = fVar57;
        *(float *)((long)param_1 + 0x24) = fVar53;
        uVar7 = *(undefined4 *)(pauVar36[2] + 8);
        uVar40 = *(undefined8 *)pauVar36[2];
        uVar25 = *(undefined8 *)(*pauVar36 + 8);
        uVar41 = *(undefined8 *)*pauVar36;
        uVar37 = *(undefined8 *)pauVar36[1];
        uVar39 = *(undefined8 *)(pauVar36[1] + 8);
        uVar8 = *(undefined4 *)pauVar36[3];
        uVar16 = pauVar36[3][4];
        uVar19 = *(undefined2 *)(pauVar36[3] + 8);
        uVar9 = *(undefined4 *)(pauVar36[4] + 8);
        uVar17 = pauVar36[4][0xc];
        *(undefined4 *)(pauVar36[2] + 8) = *(undefined4 *)(pauVar36[7] + 8);
        *(undefined8 *)pauVar36[2] = *(undefined8 *)pauVar36[7];
        uVar6 = *(undefined4 *)pauVar36[8];
        uVar26 = *(undefined8 *)pauVar36[5];
        uVar27 = *(undefined8 *)(pauVar36[5] + 8);
        uVar28 = *(undefined8 *)pauVar36[6];
        uVar29 = *(undefined8 *)(pauVar36[6] + 8);
        *(undefined8 *)(pauVar36[5] + 8) = uVar25;
        *(undefined8 *)pauVar36[5] = uVar41;
        *(undefined8 *)(pauVar36[6] + 8) = uVar39;
        *(undefined8 *)pauVar36[6] = uVar37;
        *(undefined4 *)pauVar36[3] = uVar6;
        uVar18 = pauVar36[8][4];
        uVar20 = *(undefined2 *)(pauVar36[8] + 8);
        *(undefined8 *)(pauVar36[3] + 0xc) = *(undefined8 *)(pauVar36[8] + 0xc);
        pauVar36[4][0xc] = pauVar36[9][0xc];
        *(undefined8 *)(*pauVar36 + 8) = uVar27;
        *(undefined8 *)*pauVar36 = uVar26;
        *(undefined8 *)(pauVar36[1] + 8) = uVar29;
        *(undefined8 *)pauVar36[1] = uVar28;
        pauVar36[3][4] = uVar18;
        *(undefined2 *)(pauVar36[3] + 8) = uVar20;
        uVar6 = *(undefined4 *)(pauVar36[9] + 8);
        *(undefined4 *)(pauVar36[4] + 4) = *(undefined4 *)(pauVar36[9] + 4);
        *(undefined4 *)(pauVar36[4] + 8) = uVar6;
        *(undefined4 *)pauVar36[8] = uVar8;
        pauVar36[8][4] = uVar16;
        *(undefined2 *)(pauVar36[8] + 8) = uVar19;
        *(undefined8 *)pauVar36[7] = uVar40;
        *(undefined4 *)(pauVar36[7] + 8) = uVar7;
        uVar6 = *(undefined4 *)(puVar42 + 1);
        *(undefined8 *)(pauVar36[8] + 0xc) = *puVar42;
        *(undefined4 *)(pauVar36[9] + 4) = uVar6;
        *(undefined4 *)(pauVar36[9] + 8) = uVar9;
        pauVar36[9][0xc] = uVar17;
        *(undefined4 *)(param_1 + 1) = 1;
        return;
      }
      auVar69 = NEON_ext(auVar50,auVar50,4,1);
      auVar51 = NEON_ext(auVar51,auVar51,4,1);
      auVar59._0_4_ = auVar51._0_4_ * fVar56 - fVar47 * auVar69._0_4_;
      auVar59._4_4_ = auVar51._4_4_ * fVar60 - fVar44 * auVar69._4_4_;
      auVar59._8_4_ = fVar47 * auVar50._8_4_ - fVar49 * fVar56;
      auVar59._12_4_ = fVar44 * auVar50._12_4_ - fVar55 * fVar60;
      auVar51 = NEON_ext(auVar59,auVar59,4,1);
      fVar60 = auVar51._0_4_;
      fVar57 = auVar51._4_4_;
      fVar56 = auVar59._0_4_ * auVar59._0_4_ + fVar60 * fVar60 + fVar57 * fVar57;
      if (fVar56 <= 1.1920929e-07) {
        *(undefined4 *)(pauVar36[4] + 8) = 2;
        *(undefined4 *)(pauVar36[9] + 8) = 2;
        fVar56 = (float)param_1[3];
        fVar43 = (float)param_1[2];
        fVar45 = (float)((ulong)param_1[2] >> 0x20);
        fVar46 = fVar47 * fVar43;
        fVar57 = fVar44 * fVar45;
        fVar53 = fVar49 * fVar56;
        fVar60 = fVar46 + fVar57 + fVar53;
        fVar53 = fVar46 + fVar57 + fVar53;
        fVar43 = fVar43 - fVar47 * fVar60;
        fVar45 = fVar45 - fVar44 * fVar53;
        fVar56 = fVar56 - fVar49 * fVar60;
        fVar46 = (float)((ulong)param_1[3] >> 0x20) - fVar55 * fVar53;
        param_1[5] = CONCAT44(fVar46,fVar56);
        param_1[4] = CONCAT44(fVar45,fVar43);
        fVar47 = *(float *)*pauVar36 * fVar43;
        fVar49 = *(float *)(*pauVar36 + 4) * fVar45;
        fVar55 = *(float *)(*pauVar36 + 8) * fVar56;
        fVar44 = fVar47 + fVar49 + fVar55;
        fVar55 = fVar47 + fVar49 + fVar55;
        fVar43 = fVar43 - *(float *)*pauVar36 * fVar44;
        fVar45 = fVar45 - *(float *)(*pauVar36 + 4) * fVar55;
        fVar56 = fVar56 - *(float *)(*pauVar36 + 8) * fVar44;
        fVar46 = fVar46 - *(float *)(*pauVar36 + 0xc) * fVar55;
      }
      else {
        fVar56 = SQRT(fVar56);
        fVar44 = SQRT(auVar59._0_4_ * auVar59._0_4_ + fVar60 * fVar60 + fVar57 * fVar57);
        fVar60 = fVar60 / fVar56;
        fVar57 = fVar57 / fVar44;
        fVar56 = auVar59._0_4_ / fVar56;
        fVar43 = fVar43 * fVar60;
        fVar45 = fVar45 * fVar57;
        fVar46 = fVar46 * fVar56;
        fVar47 = fVar46 + fVar43 + fVar45;
        fVar46 = fVar46 + fVar43 + fVar45;
        fVar43 = fVar60 * fVar47 + 0.0;
        fVar45 = fVar57 * fVar46 + 0.0;
        fVar56 = fVar56 * fVar47 + 0.0;
        fVar46 = (0.0 / fVar44) * fVar46 + 0.0;
      }
      goto LAB_02f4ddf0;
    case 3:
      puVar31 = (undefined8 *)*param_1;
      auVar51 = *(undefined1 (*) [16])(puVar31 + 0x14);
      fVar43 = *(float *)(param_1 + 2);
      fVar45 = *(float *)((long)param_1 + 0x14);
      fVar46 = *(float *)(param_1 + 3);
      fVar56 = auVar51._0_4_;
      fVar60 = auVar51._4_4_;
      fVar57 = auVar51._8_4_;
      fVar47 = fVar56 * fVar43 + fVar60 * fVar45 + fVar57 * fVar46;
      fVar44 = fVar56 * fVar43 + fVar60 * fVar45 + fVar57 * fVar46;
      fVar53 = auVar51._12_4_;
      fVar63 = fVar43 - fVar56 * fVar47;
      fVar67 = fVar45 - fVar60 * fVar44;
      auVar64._0_8_ = CONCAT44(fVar67,fVar63);
      auVar64._8_4_ = fVar46 - fVar57 * fVar47;
      auVar64._12_4_ = *(float *)((long)param_1 + 0x1c) - fVar53 * fVar44;
      fVar49 = (float)puVar31[1];
      fVar55 = (float)((ulong)puVar31[1] >> 0x20);
      fVar47 = (float)*puVar31;
      fVar44 = (float)((ulong)*puVar31 >> 0x20);
      auVar58._0_4_ = fVar47 * fVar63;
      auVar58._4_4_ = fVar44 * fVar67;
      auVar58._8_4_ = fVar49 * auVar64._8_4_;
      auVar58._12_4_ = fVar55 * auVar64._12_4_;
      auVar69 = NEON_ext(auVar58,auVar58,8,1);
      auVar50 = *(undefined1 (*) [16])(puVar31 + 10);
      fVar61 = auVar50._0_4_;
      auVar70._0_4_ = fVar61 * fVar63;
      fVar63 = auVar50._4_4_;
      auVar70._4_4_ = fVar63 * fVar67;
      fVar67 = auVar50._8_4_;
      auVar70._8_4_ = fVar67 * auVar64._8_4_;
      fVar62 = auVar50._12_4_;
      auVar70._12_4_ = fVar62 * auVar64._12_4_;
      auVar72 = NEON_ext(auVar70,auVar70,8,1);
      fVar68 = auVar72._0_4_ + auVar70._0_4_ + auVar70._4_4_;
      bVar30 = true;
      if ((-0.001 <= auVar58._0_4_ + auVar58._4_4_ + auVar69._0_4_) &&
         (bVar30 = false, !NAN(fVar68))) {
        bVar30 = fVar68 < -0.001;
      }
      if (bVar30) {
        auVar50 = NEON_ext(auVar50,auVar50,4,1);
        auVar51 = NEON_ext(auVar51,auVar51,4,1);
        auVar71._0_4_ = auVar51._0_4_ * fVar61 - fVar56 * auVar50._0_4_;
        auVar71._4_4_ = auVar51._4_4_ * fVar63 - fVar60 * auVar50._4_4_;
        auVar71._8_4_ = fVar56 * fVar67 - fVar57 * fVar61;
        auVar71._12_4_ = fVar60 * fVar62 - fVar53 * fVar63;
        auVar51 = NEON_ext(auVar71,auVar71,4,1);
        fVar48 = auVar51._0_4_;
        fVar54 = auVar51._4_4_;
        fVar68 = auVar71._0_4_ * auVar71._0_4_ + fVar48 * fVar48 + fVar54 * fVar54;
        if (fVar68 <= 1.1920929e-07) {
          *(undefined4 *)(puVar31 + 0x13) = 2;
          *(undefined4 *)(puVar31 + 0x1d) = 2;
          fVar43 = *(float *)(param_1 + 2);
          fVar45 = *(float *)((long)param_1 + 0x14);
          fVar46 = *(float *)(param_1 + 3);
          fVar47 = fVar56 * fVar43 + fVar60 * fVar45 + fVar57 * fVar46;
          fVar44 = fVar56 * fVar43 + fVar60 * fVar45 + fVar57 * fVar46;
          puVar31 = (undefined8 *)*param_1;
          fVar56 = fVar43 - fVar56 * fVar47;
          fVar60 = fVar45 - fVar60 * fVar44;
          fVar57 = fVar46 - fVar57 * fVar47;
          fVar47 = fVar61 * fVar56;
          fVar55 = fVar63 * fVar60;
          fVar68 = fVar67 * fVar57;
          fVar49 = fVar47 + fVar55 + fVar68;
          fVar68 = fVar47 + fVar55 + fVar68;
          fVar56 = fVar56 - fVar61 * fVar49;
          fVar60 = fVar60 - fVar63 * fVar68;
          fVar57 = fVar57 - fVar67 * fVar49;
          fVar53 = (*(float *)((long)param_1 + 0x1c) - fVar53 * fVar44) - fVar62 * fVar68;
          fVar49 = (float)puVar31[1];
          fVar55 = (float)((ulong)puVar31[1] >> 0x20);
          fVar47 = (float)*puVar31;
          fVar44 = (float)((ulong)*puVar31 >> 0x20);
        }
        else {
          fVar68 = SQRT(fVar68);
          fVar53 = SQRT(auVar71._0_4_ * auVar71._0_4_ + fVar48 * fVar48 + fVar54 * fVar54);
          fVar48 = fVar48 / fVar68;
          fVar54 = fVar54 / fVar53;
          fVar68 = auVar71._0_4_ / fVar68;
          fVar56 = fVar43 * fVar48;
          fVar60 = fVar45 * fVar54;
          fVar61 = fVar46 * fVar68;
          fVar57 = fVar61 + fVar56 + fVar60;
          fVar61 = fVar61 + fVar56 + fVar60;
          fVar56 = fVar48 * fVar57 + 0.0;
          fVar60 = fVar54 * fVar61 + 0.0;
          fVar57 = fVar68 * fVar57 + 0.0;
          fVar53 = (0.0 / fVar53) * fVar61 + 0.0;
        }
        auVar52._0_4_ = fVar47 * fVar56;
        auVar52._4_4_ = fVar44 * fVar60;
        auVar52._8_4_ = fVar49 * fVar57;
        auVar52._12_4_ = fVar55 * fVar53;
        auVar51 = NEON_ext(auVar52,auVar52,8,1);
        if (auVar52._0_4_ + auVar52._4_4_ + auVar51._0_4_ < -0.001) {
          auVar51 = *(undefined1 (*) [16])(puVar31 + 0x14);
          auVar69 = NEON_ext(auVar51,auVar51,8,1);
          auVar21._4_4_ = fVar44;
          auVar21._0_4_ = fVar47;
          auVar21._8_4_ = fVar49;
          auVar21._12_4_ = fVar55;
          auVar22._4_4_ = fVar44;
          auVar22._0_4_ = fVar47;
          auVar22._8_4_ = fVar49;
          auVar22._12_4_ = fVar55;
          auVar50 = NEON_ext(auVar21,auVar22,4,1);
          uVar41 = NEON_ext(auVar51._0_8_,auVar69._0_8_,4,1);
          fVar53 = auVar51._0_4_;
          fVar61 = auVar51._4_4_;
          fVar63 = auVar51._8_4_;
          auVar65._0_4_ = fVar47 * (float)uVar41 - auVar50._0_4_ * fVar53;
          auVar65._4_4_ = fVar44 * (float)((ulong)uVar41 >> 0x20) - auVar50._4_4_ * fVar61;
          auVar65._8_4_ = fVar49 * fVar53 - fVar47 * fVar63;
          auVar65._12_4_ = fVar55 * fVar61 - fVar44 * auVar51._12_4_;
          auVar50 = NEON_ext(auVar65,auVar65,4,1);
          fVar60 = auVar50._0_4_;
          fVar57 = auVar50._4_4_;
          fVar56 = fVar60 * fVar60 + fVar57 * fVar57 + auVar65._0_4_ * auVar65._0_4_;
          if (fVar56 <= 1.1920929e-07) {
            *(undefined4 *)(puVar31 + 9) = 2;
            *(undefined4 *)(puVar31 + 0x1d) = 2;
            fVar43 = fVar53 * *(float *)(param_1 + 2);
            fVar45 = fVar61 * *(float *)((long)param_1 + 0x14);
            fVar67 = fVar63 * *(float *)(param_1 + 3);
            fVar46 = fVar43 + fVar45 + fVar67;
            fVar67 = fVar43 + fVar45 + fVar67;
            puVar31 = (undefined8 *)*param_1;
            fVar43 = *(float *)(param_1 + 2) - fVar53 * fVar46;
            fVar45 = *(float *)((long)param_1 + 0x14) - fVar61 * fVar67;
            fVar56 = *(float *)(param_1 + 3) - fVar63 * fVar46;
            fVar46 = fVar47 * fVar43;
            fVar57 = fVar44 * fVar45;
            fVar53 = fVar49 * fVar56;
            fVar60 = fVar46 + fVar57 + fVar53;
            fVar53 = fVar46 + fVar57 + fVar53;
            fVar43 = fVar43 - fVar47 * fVar60;
            fVar45 = fVar45 - fVar44 * fVar53;
            fVar56 = fVar56 - fVar49 * fVar60;
            fVar46 = (*(float *)((long)param_1 + 0x1c) - auVar51._12_4_ * fVar67) - fVar55 * fVar53;
          }
          else {
            fVar56 = SQRT(fVar56);
            fVar47 = SQRT(fVar60 * fVar60 + fVar57 * fVar57 + auVar65._0_4_ * auVar65._0_4_);
            fVar60 = fVar60 / fVar56;
            fVar57 = fVar57 / fVar47;
            fVar56 = auVar65._0_4_ / fVar56;
            fVar43 = fVar43 * fVar60;
            fVar45 = fVar45 * fVar57;
            fVar46 = fVar46 * fVar56;
            fVar44 = fVar46 + fVar43 + fVar45;
            fVar46 = fVar46 + fVar43 + fVar45;
            fVar43 = fVar60 * fVar44 + 0.0;
            fVar45 = fVar57 * fVar46 + 0.0;
            fVar56 = fVar56 * fVar44 + 0.0;
            fVar46 = (0.0 / fVar47) * fVar46 + 0.0;
          }
          fVar43 = fVar43 * *(float *)(puVar31 + 10);
          fVar45 = fVar45 * *(float *)((long)puVar31 + 0x54);
          fVar46 = fVar46 * *(float *)((long)puVar31 + 0x5c);
          auVar23._4_4_ = fVar45;
          auVar23._0_4_ = fVar43;
          auVar23._8_4_ = fVar56 * *(float *)(puVar31 + 0xb);
          auVar23._12_4_ = fVar46;
          auVar24._4_4_ = fVar45;
          auVar24._0_4_ = fVar43;
          auVar24._8_4_ = fVar56 * *(float *)(puVar31 + 0xb);
          auVar24._12_4_ = fVar46;
          auVar51 = NEON_ext(auVar23,auVar24,8,1);
          if (fVar43 + fVar45 + auVar51._0_4_ < -0.001) {
            FUN_02f4de20(param_1,puVar31,puVar31 + 10,puVar31 + 0x14,plVar1,param_1 + 4);
            return;
          }
        }
        else {
          uVar6 = *(undefined4 *)(puVar31 + 5);
          uVar37 = puVar31[4];
          uVar41 = puVar31[2];
          uVar25 = puVar31[3];
          uVar7 = *(undefined4 *)(puVar31 + 6);
          uVar16 = *(undefined1 *)((long)puVar31 + 0x34);
          uVar19 = *(undefined2 *)(puVar31 + 7);
          uVar8 = *(undefined4 *)(puVar31 + 9);
          uVar17 = *(undefined1 *)((long)puVar31 + 0x4c);
          puVar31[4] = puVar31[0xe];
          *(undefined4 *)(puVar31 + 5) = *(undefined4 *)(puVar31 + 0xf);
          puVar31[1] = puVar31[0xb];
          *puVar31 = puVar31[10];
          puVar31[3] = puVar31[0xd];
          puVar31[2] = puVar31[0xc];
          *(undefined4 *)(puVar31 + 6) = *(undefined4 *)(puVar31 + 0x10);
          *(undefined1 *)((long)puVar31 + 0x34) = *(undefined1 *)((long)puVar31 + 0x84);
          puVar31[0xb] = CONCAT44(fVar55,fVar49);
          puVar31[10] = CONCAT44(fVar44,fVar47);
          puVar31[0xd] = uVar25;
          puVar31[0xc] = uVar41;
          *(undefined2 *)(puVar31 + 7) = *(undefined2 *)(puVar31 + 0x11);
          *(undefined8 *)((long)puVar31 + 0x3c) = *(undefined8 *)((long)puVar31 + 0x8c);
          *(undefined1 *)((long)puVar31 + 0x4c) = *(undefined1 *)((long)puVar31 + 0x9c);
          *(undefined4 *)((long)puVar31 + 0x44) = *(undefined4 *)((long)puVar31 + 0x94);
          *(undefined4 *)(puVar31 + 9) = *(undefined4 *)(puVar31 + 0x13);
          puVar31[0xe] = uVar37;
          *(undefined4 *)(puVar31 + 0xf) = uVar6;
          *(undefined4 *)(puVar31 + 0x10) = uVar7;
          *(undefined1 *)((long)puVar31 + 0x84) = uVar16;
          *(undefined2 *)(puVar31 + 0x11) = uVar19;
          uVar6 = *(undefined4 *)(puVar42 + 1);
          *(undefined8 *)((long)puVar31 + 0x8c) = *puVar42;
          *(undefined4 *)((long)puVar31 + 0x94) = uVar6;
          *(undefined4 *)(puVar31 + 0x13) = uVar8;
          *(undefined1 *)((long)puVar31 + 0x9c) = uVar17;
          puVar31 = (undefined8 *)*param_1;
        }
        local_68 = *(undefined4 *)(puVar31 + 0xf);
        local_70 = puVar31[0xe];
        uVar25 = puVar31[0xb];
        uVar41 = puVar31[10];
        uVar37 = puVar31[0xc];
        uVar39 = puVar31[0xd];
        uVar6 = *(undefined4 *)(puVar31 + 0x10);
        uVar16 = *(undefined1 *)((long)puVar31 + 0x84);
        uVar19 = *(undefined2 *)(puVar31 + 0x11);
        uStack_78 = (undefined6)((ulong)puVar31[0x12] >> 0x10);
        uStack_80 = (undefined6)*(undefined8 *)((long)puVar31 + 0x8a);
        local_7a = (undefined2)((ulong)*(undefined8 *)((long)puVar31 + 0x8a) >> 0x30);
        local_88 = *(undefined4 *)(puVar31 + 0x13);
        local_84 = *(undefined1 *)((long)puVar31 + 0x9c);
        *(undefined4 *)(puVar31 + 0xf) = *(undefined4 *)(puVar31 + 0x19);
        puVar31[0xe] = puVar31[0x18];
        puVar31[0xb] = puVar31[0x15];
        puVar31[10] = puVar31[0x14];
        puVar31[0xd] = puVar31[0x17];
        puVar31[0xc] = puVar31[0x16];
        *(undefined4 *)(puVar31 + 0x10) = *(undefined4 *)(puVar31 + 0x1a);
        *(undefined1 *)((long)puVar31 + 0x84) = *(undefined1 *)((long)puVar31 + 0xd4);
        puVar31[0x15] = uVar25;
        puVar31[0x14] = uVar41;
        puVar31[0x17] = uVar39;
        puVar31[0x16] = uVar37;
        *(undefined2 *)(puVar31 + 0x11) = *(undefined2 *)(puVar31 + 0x1b);
        *(undefined8 *)((long)puVar31 + 0x8c) = *(undefined8 *)((long)puVar31 + 0xdc);
        *(undefined4 *)((long)puVar31 + 0x94) = *(undefined4 *)((long)puVar31 + 0xe4);
        *(undefined4 *)(puVar31 + 0x13) = *(undefined4 *)(puVar31 + 0x1d);
        *(undefined1 *)((long)puVar31 + 0x9c) = *(undefined1 *)((long)puVar31 + 0xec);
        puVar31[0x18] = local_70;
        *(undefined4 *)(puVar31 + 0x19) = local_68;
        *(undefined4 *)(puVar31 + 0x1a) = uVar6;
        *(undefined1 *)((long)puVar31 + 0xd4) = uVar16;
        *(undefined2 *)(puVar31 + 0x1b) = uVar19;
        uVar6 = *(undefined4 *)(puVar42 + 1);
        *(undefined8 *)((long)puVar31 + 0xdc) = *puVar42;
        *(undefined4 *)((long)puVar31 + 0xe4) = uVar6;
        *(undefined4 *)(puVar31 + 0x1d) = local_88;
        *(undefined1 *)((long)puVar31 + 0xec) = local_84;
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      }
      else {
        param_1[5] = auVar64._8_8_;
        param_1[4] = auVar64._0_8_;
        local_68 = *(undefined4 *)(puVar31 + 5);
        local_70 = puVar31[4];
        uVar25 = puVar31[1];
        uVar41 = *puVar31;
        uVar37 = puVar31[2];
        uVar39 = puVar31[3];
        uVar6 = *(undefined4 *)(puVar31 + 6);
        uVar16 = *(undefined1 *)((long)puVar31 + 0x34);
        uVar19 = *(undefined2 *)(puVar31 + 7);
        uStack_78 = (undefined6)((ulong)puVar31[8] >> 0x10);
        uStack_80 = (undefined6)*(undefined8 *)((long)puVar31 + 0x3a);
        local_7a = (undefined2)((ulong)*(undefined8 *)((long)puVar31 + 0x3a) >> 0x30);
        local_88 = *(undefined4 *)(puVar31 + 9);
        local_84 = *(undefined1 *)((long)puVar31 + 0x4c);
        *(undefined4 *)(puVar31 + 5) = *(undefined4 *)(puVar31 + 0x19);
        puVar31[4] = puVar31[0x18];
        puVar31[1] = puVar31[0x15];
        *puVar31 = puVar31[0x14];
        puVar31[3] = puVar31[0x17];
        puVar31[2] = puVar31[0x16];
        *(undefined4 *)(puVar31 + 6) = *(undefined4 *)(puVar31 + 0x1a);
        *(undefined1 *)((long)puVar31 + 0x34) = *(undefined1 *)((long)puVar31 + 0xd4);
        puVar31[0x15] = uVar25;
        puVar31[0x14] = uVar41;
        puVar31[0x17] = uVar39;
        puVar31[0x16] = uVar37;
        *(undefined2 *)(puVar31 + 7) = *(undefined2 *)(puVar31 + 0x1b);
        *(undefined8 *)((long)puVar31 + 0x3c) = *(undefined8 *)((long)puVar31 + 0xdc);
        *(undefined4 *)((long)puVar31 + 0x44) = *(undefined4 *)((long)puVar31 + 0xe4);
        *(undefined4 *)(puVar31 + 9) = *(undefined4 *)(puVar31 + 0x1d);
        *(undefined1 *)((long)puVar31 + 0x4c) = *(undefined1 *)((long)puVar31 + 0xec);
        puVar31[0x18] = local_70;
        *(undefined4 *)(puVar31 + 0x19) = local_68;
        *(undefined4 *)(puVar31 + 0x1a) = uVar6;
        *(undefined1 *)((long)puVar31 + 0xd4) = uVar16;
        *(undefined2 *)(puVar31 + 0x1b) = uVar19;
        uVar6 = *(undefined4 *)(puVar42 + 1);
        *(undefined8 *)((long)puVar31 + 0xdc) = *puVar42;
        *(undefined4 *)((long)puVar31 + 0xe4) = uVar6;
        *(undefined4 *)(puVar31 + 0x1d) = local_88;
        *(undefined1 *)((long)puVar31 + 0xec) = local_84;
        *(undefined4 *)(param_1 + 1) = 1;
      }
      break;
    case 4:
      lVar33 = *param_1;
      FUN_02f4de20(param_1,lVar33 + 0x50,lVar33 + 0xa0,lVar33 + 0xf0,plVar1,&local_a0);
      puVar31 = (undefined8 *)*param_1;
      fVar46 = (float)puVar31[1];
      fVar47 = (float)((ulong)puVar31[1] >> 0x20);
      fVar43 = (float)*puVar31;
      fVar45 = (float)((ulong)*puVar31 >> 0x20);
      auVar51._0_4_ = fVar43 * (float)local_a0;
      auVar51._4_4_ = fVar45 * local_a0._4_4_;
      auVar51._8_4_ = fVar46 * (float)uStack_98;
      auVar51._12_4_ = fVar47 * uStack_98._4_4_;
      auVar50 = NEON_ext(auVar51,auVar51,8,1);
      if (auVar51._0_4_ + auVar51._4_4_ + auVar50._0_4_ < -0.001) {
        FUN_02f4de20(param_1,puVar31 + 0x14,puVar31,puVar31 + 0x1e,plVar1,&local_a0);
        puVar31 = (undefined8 *)*param_1;
        fVar46 = (float)puVar31[0xb];
        fVar47 = (float)((ulong)puVar31[0xb] >> 0x20);
        fVar43 = (float)puVar31[10];
        fVar45 = (float)((ulong)puVar31[10] >> 0x20);
        auVar50._0_4_ = fVar43 * (float)local_a0;
        auVar50._4_4_ = fVar45 * local_a0._4_4_;
        auVar50._8_4_ = fVar46 * (float)uStack_98;
        auVar50._12_4_ = fVar47 * uStack_98._4_4_;
        auVar51 = NEON_ext(auVar50,auVar50,8,1);
        if (-0.001 <= auVar50._0_4_ + auVar50._4_4_ + auVar51._0_4_) {
          lVar33 = 1;
          goto LAB_02f4d3d0;
        }
        FUN_02f4de20(param_1,puVar31,puVar31 + 10,puVar31 + 0x1e,plVar1,&local_a0);
        lVar33 = *param_1;
        fVar43 = (float)*(undefined8 *)(lVar33 + 0xa0) * (float)local_a0;
        fVar45 = (float)((ulong)*(undefined8 *)(lVar33 + 0xa0) >> 0x20) * local_a0._4_4_;
        fVar46 = (float)*(undefined8 *)(lVar33 + 0xa8) * (float)uStack_98;
        fVar47 = (float)((ulong)*(undefined8 *)(lVar33 + 0xa8) >> 0x20) * uStack_98._4_4_;
        auVar69._4_4_ = fVar45;
        auVar69._0_4_ = fVar43;
        auVar69._8_4_ = fVar46;
        auVar69._12_4_ = fVar47;
        auVar72._4_4_ = fVar45;
        auVar72._0_4_ = fVar43;
        auVar72._8_4_ = fVar46;
        auVar72._12_4_ = fVar47;
        auVar51 = NEON_ext(auVar69,auVar72,8,1);
        if (-0.001 <= fVar43 + fVar45 + auVar51._0_4_) goto LAB_02f4d4a8;
        uStack_98 = param_1[3];
        lVar38 = lVar33 + 0x50;
        local_a0 = *plVar1;
        iVar11 = (int)param_1[1];
        lVar2 = lVar33 + 0xa0;
        lVar3 = lVar33 + 0xf0;
        FUN_02f4de20(param_1,lVar33,lVar38,lVar2,&local_a0,&local_a0);
        iVar32 = (int)param_1[1];
        if (iVar11 == iVar32) {
          FUN_02f4de20(param_1,lVar33,lVar38,lVar3,&local_a0,&local_a0);
          iVar32 = (int)param_1[1];
        }
        if (iVar11 == iVar32) {
          FUN_02f4de20(param_1,lVar33,lVar2,lVar3,&local_a0,&local_a0);
          iVar32 = (int)param_1[1];
        }
        if (iVar11 == iVar32) {
          FUN_02f4de20(param_1,lVar38,lVar2,lVar3,&local_a0,&local_a0);
        }
        lVar33 = *param_1;
        param_1[5] = uStack_98;
        param_1[4] = local_a0;
        uVar12 = *(uint *)(lVar33 + 0x48);
        uVar13 = *(uint *)(lVar33 + 0x98);
        uVar4 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
        uVar14 = *(uint *)(lVar33 + 0xe8);
        uVar15 = *(uint *)(lVar33 + 0x138);
        if ((int)uVar4 <= (int)uVar13) {
          uVar4 = uVar13;
        }
        if ((int)uVar4 <= (int)uVar14) {
          uVar4 = uVar14;
        }
        uVar5 = uVar4;
        if ((int)uVar4 <= (int)uVar15) {
          uVar5 = uVar15;
        }
        if (uVar5 == uVar12) {
          lVar38 = 0;
LAB_02f4dabc:
          puVar31 = (undefined8 *)(lVar33 + lVar38 * 0x50);
          uVar41 = *(undefined8 *)(lVar33 + 0xf0);
          puVar31[1] = *(undefined8 *)(lVar33 + 0xf8);
          *puVar31 = uVar41;
          uVar41 = *(undefined8 *)(lVar33 + 0x100);
          puVar31[3] = *(undefined8 *)(lVar33 + 0x108);
          puVar31[2] = uVar41;
          uVar41 = *(undefined8 *)(lVar33 + 0x110);
          *(undefined4 *)(puVar31 + 5) = *(undefined4 *)(lVar33 + 0x118);
          puVar31[4] = uVar41;
          *(undefined4 *)(puVar31 + 6) = *(undefined4 *)(lVar33 + 0x120);
          *(undefined1 *)((long)puVar31 + 0x34) = *(undefined1 *)(lVar33 + 0x124);
          *(undefined2 *)(puVar31 + 7) = *(undefined2 *)(lVar33 + 0x128);
          uVar6 = *(undefined4 *)(lVar33 + 0x134);
          *(undefined8 *)((long)puVar31 + 0x3c) = *(undefined8 *)(lVar33 + 300);
          uVar7 = *(undefined4 *)(lVar33 + 0x138);
          *(undefined1 *)((long)puVar31 + 0x4c) = *(undefined1 *)(lVar33 + 0x13c);
          *(undefined4 *)((long)puVar31 + 0x44) = uVar6;
          *(undefined4 *)(puVar31 + 9) = uVar7;
          lVar33 = *param_1;
        }
        else {
          if (uVar5 == uVar13) {
            lVar38 = 1;
            goto LAB_02f4dabc;
          }
          lVar38 = 2;
          if ((uVar5 == uVar14) || (lVar38 = 3, (int)uVar4 <= (int)uVar15)) goto LAB_02f4dabc;
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        *(undefined4 *)(lVar33 + 0x48) = 0;
        *(undefined4 *)(*param_1 + 0x98) = 0;
        *(undefined4 *)(*param_1 + 0xe8) = 0;
      }
      else {
        lVar33 = 0;
LAB_02f4d3d0:
        puVar34 = puVar31 + lVar33 * 10;
        uVar6 = *(undefined4 *)(puVar34 + 5);
        uVar39 = puVar34[4];
        uVar41 = puVar34[2];
        uVar25 = puVar34[3];
        uVar7 = *(undefined4 *)(puVar34 + 6);
        uVar16 = *(undefined1 *)((long)puVar34 + 0x34);
        uVar19 = *(undefined2 *)(puVar34 + 7);
        uVar8 = *(undefined4 *)(puVar34 + 9);
        uVar17 = *(undefined1 *)((long)puVar34 + 0x4c);
        uVar37 = puVar31[0x14];
        puVar34[1] = puVar31[0x15];
        *puVar34 = uVar37;
        uVar37 = puVar31[0x16];
        puVar34[3] = puVar31[0x17];
        puVar34[2] = uVar37;
        uVar9 = *(undefined4 *)(puVar31 + 0x19);
        puVar34[4] = puVar31[0x18];
        *(undefined4 *)(puVar34 + 5) = uVar9;
        *(undefined4 *)(puVar34 + 6) = *(undefined4 *)(puVar31 + 0x1a);
        *(undefined1 *)((long)puVar34 + 0x34) = *(undefined1 *)((long)puVar31 + 0xd4);
        *(undefined2 *)(puVar34 + 7) = *(undefined2 *)(puVar31 + 0x1b);
        uVar9 = *(undefined4 *)((long)puVar31 + 0xe4);
        *(undefined8 *)((long)puVar34 + 0x3c) = *(undefined8 *)((long)puVar31 + 0xdc);
        uVar10 = *(undefined4 *)(puVar31 + 0x1d);
        *(undefined1 *)((long)puVar34 + 0x4c) = *(undefined1 *)((long)puVar31 + 0xec);
        *(undefined4 *)((long)puVar34 + 0x44) = uVar9;
        *(undefined4 *)(puVar34 + 9) = uVar10;
        puVar31[0x15] = CONCAT44(fVar47,fVar46);
        puVar31[0x14] = CONCAT44(fVar45,fVar43);
        puVar31[0x17] = uVar25;
        puVar31[0x16] = uVar41;
        *(undefined4 *)(puVar31 + 0x19) = uVar6;
        puVar31[0x18] = uVar39;
        *(undefined4 *)(puVar31 + 0x1a) = uVar7;
        *(undefined1 *)((long)puVar31 + 0xd4) = uVar16;
        *(undefined2 *)(puVar31 + 0x1b) = uVar19;
        uVar6 = *(undefined4 *)(puVar42 + 1);
        *(undefined8 *)((long)puVar31 + 0xdc) = *puVar42;
        *(undefined1 *)((long)puVar31 + 0xec) = uVar17;
        *(undefined4 *)((long)puVar31 + 0xe4) = uVar6;
        *(undefined4 *)(puVar31 + 0x1d) = uVar8;
        lVar33 = *param_1;
LAB_02f4d4a8:
        local_68 = *(undefined4 *)(lVar33 + 200);
        local_70 = *(undefined8 *)(lVar33 + 0xc0);
        uVar25 = *(undefined8 *)(lVar33 + 0xa8);
        uVar41 = *(undefined8 *)(lVar33 + 0xa0);
        uVar37 = *(undefined8 *)(lVar33 + 0xb0);
        uVar39 = *(undefined8 *)(lVar33 + 0xb8);
        uVar6 = *(undefined4 *)(lVar33 + 0xd0);
        uVar16 = *(undefined1 *)(lVar33 + 0xd4);
        uVar19 = *(undefined2 *)(lVar33 + 0xd8);
        uStack_78 = (undefined6)((ulong)*(undefined8 *)(lVar33 + 0xe0) >> 0x10);
        uStack_80 = (undefined6)*(undefined8 *)(lVar33 + 0xda);
        local_7a = (undefined2)((ulong)*(undefined8 *)(lVar33 + 0xda) >> 0x30);
        local_88 = *(undefined4 *)(lVar33 + 0xe8);
        local_84 = *(undefined1 *)(lVar33 + 0xec);
        *(undefined8 *)(lVar33 + 0xa8) = *(undefined8 *)(lVar33 + 0xf8);
        *(undefined8 *)(lVar33 + 0xa0) = *(undefined8 *)(lVar33 + 0xf0);
        *(undefined8 *)(lVar33 + 0xb8) = *(undefined8 *)(lVar33 + 0x108);
        *(undefined8 *)(lVar33 + 0xb0) = *(undefined8 *)(lVar33 + 0x100);
        *(undefined4 *)(lVar33 + 200) = *(undefined4 *)(lVar33 + 0x118);
        *(undefined8 *)(lVar33 + 0xc0) = *(undefined8 *)(lVar33 + 0x110);
        *(undefined4 *)(lVar33 + 0xd0) = *(undefined4 *)(lVar33 + 0x120);
        *(undefined1 *)(lVar33 + 0xd4) = *(undefined1 *)(lVar33 + 0x124);
        *(undefined2 *)(lVar33 + 0xd8) = *(undefined2 *)(lVar33 + 0x128);
        *(undefined4 *)(lVar33 + 0xe4) = *(undefined4 *)(lVar33 + 0x134);
        *(undefined8 *)(lVar33 + 0xdc) = *(undefined8 *)(lVar33 + 300);
        *(undefined4 *)(lVar33 + 0xe8) = *(undefined4 *)(lVar33 + 0x138);
        *(undefined1 *)(lVar33 + 0xec) = *(undefined1 *)(lVar33 + 0x13c);
        *(undefined8 *)(lVar33 + 0xf8) = uVar25;
        *(undefined8 *)(lVar33 + 0xf0) = uVar41;
        *(undefined8 *)(lVar33 + 0x108) = uVar39;
        *(undefined8 *)(lVar33 + 0x100) = uVar37;
        *(undefined8 *)(lVar33 + 0x110) = local_70;
        *(undefined4 *)(lVar33 + 0x118) = local_68;
        *(undefined4 *)(lVar33 + 0x120) = uVar6;
        *(undefined1 *)(lVar33 + 0x124) = uVar16;
        *(undefined2 *)(lVar33 + 0x128) = uVar19;
        uVar6 = *(undefined4 *)(puVar42 + 1);
        *(undefined8 *)(lVar33 + 300) = *puVar42;
        *(undefined4 *)(lVar33 + 0x134) = uVar6;
        *(undefined4 *)(lVar33 + 0x138) = local_88;
        *(undefined1 *)(lVar33 + 0x13c) = local_84;
        *(undefined4 *)(param_1 + 1) = 3;
      }
      break;
    default:
      return;
    }
  } while( true );
}


