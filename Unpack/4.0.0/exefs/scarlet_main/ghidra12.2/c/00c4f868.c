/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4f868; name: FUN_00c4f868
 */


void FUN_00c4f868(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long *param_4,
                 long *param_5,long param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  
  if (*(char *)(param_6 + 0x28c) != '\0') {
    *(undefined1 *)(*param_5 + 0x251) = 1;
  }
  uVar9 = param_5[2];
  fVar13 = *(float *)(param_5 + 2);
  fVar14 = *(float *)((long)param_5 + 0x14);
  fVar15 = *(float *)(param_5 + 3);
  fVar12 = (float)((ulong)param_5[3] >> 0x20);
  auVar20 = ZEXT416((uint)fVar12);
  if (fVar12 < 0.0) {
LAB_00c4f9b0:
    *(undefined1 *)(param_5 + 5) = 1;
  }
  else {
    lVar2 = *(long *)(param_6 + 0x208);
    fVar11 = (float)param_5[3];
    fVar10 = (float)((ulong)uVar9 >> 0x20);
    if (fVar12 != 0.0) {
      if (*(float *)(param_6 + 0x290) < fVar12) {
        if (*(char *)(param_6 + 0x28b) == '\0') goto LAB_00c4f9f8;
        fVar16 = fVar13 * (float)*(undefined8 *)(lVar2 + 0x120);
        fVar17 = fVar14 * (float)((ulong)*(undefined8 *)(lVar2 + 0x120) >> 0x20);
        fVar18 = fVar15 * (float)*(undefined8 *)(lVar2 + 0x128);
        fVar19 = (float)((ulong)*(undefined8 *)(lVar2 + 0x128) >> 0x20) * 1.0;
        auVar3._0_4_ = fVar16 + fVar17;
        auVar3._4_4_ = fVar18 + fVar19;
        auVar3._8_4_ = fVar16 + fVar17;
        auVar3._12_4_ = fVar18 + fVar19;
        auVar20 = NEON_ext(auVar3,auVar3,4,1);
        if ((((0.0 < fVar12 + auVar20._0_4_ + auVar20._4_4_) &&
             (fVar16 = fVar13 * *(float *)(lVar2 + 0x130),
             fVar17 = fVar14 * *(float *)(lVar2 + 0x134),
             fVar18 = fVar15 * *(float *)(lVar2 + 0x138), fVar19 = *(float *)(lVar2 + 0x13c) * 1.0,
             auVar4._0_4_ = fVar16 + fVar17, auVar4._4_4_ = fVar18 + fVar19,
             auVar4._8_4_ = fVar16 + fVar17, auVar4._12_4_ = fVar18 + fVar19,
             auVar20 = NEON_ext(auVar4,auVar4,4,1), 0.0 < fVar12 + auVar20._0_4_ + auVar20._4_4_))
            && (fVar16 = fVar13 * *(float *)(lVar2 + 0x140),
               fVar17 = fVar14 * *(float *)(lVar2 + 0x144),
               fVar18 = fVar15 * *(float *)(lVar2 + 0x148), fVar19 = *(float *)(lVar2 + 0x14c) * 1.0
               , auVar5._0_4_ = fVar16 + fVar17, auVar5._4_4_ = fVar18 + fVar19,
               auVar5._8_4_ = fVar16 + fVar17, auVar5._12_4_ = fVar18 + fVar19,
               auVar20 = NEON_ext(auVar5,auVar5,4,1), 0.0 < fVar12 + auVar20._0_4_ + auVar20._4_4_))
           && (((fVar16 = fVar13 * *(float *)(lVar2 + 0x150),
                fVar17 = fVar14 * *(float *)(lVar2 + 0x154),
                fVar18 = fVar15 * *(float *)(lVar2 + 0x158),
                fVar19 = *(float *)(lVar2 + 0x15c) * 1.0, auVar6._0_4_ = fVar16 + fVar17,
                auVar6._4_4_ = fVar18 + fVar19, auVar6._8_4_ = fVar16 + fVar17,
                auVar6._12_4_ = fVar18 + fVar19, auVar20 = NEON_ext(auVar6,auVar6,4,1),
                0.0 < fVar12 + auVar20._0_4_ + auVar20._4_4_ &&
                (fVar16 = fVar13 * *(float *)(lVar2 + 0x160),
                fVar17 = fVar14 * *(float *)(lVar2 + 0x164),
                fVar18 = fVar15 * *(float *)(lVar2 + 0x168),
                fVar19 = *(float *)(lVar2 + 0x16c) * 1.0, auVar7._0_4_ = fVar16 + fVar17,
                auVar7._4_4_ = fVar18 + fVar19, auVar7._8_4_ = fVar16 + fVar17,
                auVar7._12_4_ = fVar18 + fVar19, auVar20 = NEON_ext(auVar7,auVar7,4,1),
                0.0 < fVar12 + auVar20._0_4_ + auVar20._4_4_)) &&
               (fVar13 = fVar13 * *(float *)(lVar2 + 0x170),
               fVar14 = fVar14 * *(float *)(lVar2 + 0x174),
               fVar15 = fVar15 * *(float *)(lVar2 + 0x178), fVar16 = *(float *)(lVar2 + 0x17c) * 1.0
               , auVar8._0_4_ = fVar13 + fVar14, auVar8._4_4_ = fVar15 + fVar16,
               auVar8._8_4_ = fVar13 + fVar14, auVar8._12_4_ = fVar15 + fVar16,
               auVar20 = NEON_ext(auVar8,auVar8,4,1), 0.0 < fVar12 + auVar20._0_4_ + auVar20._4_4_))
              )) {
          fVar14 = fVar10 * (float)*(undefined8 *)(lVar2 + 0x18);
          param_3 = *(undefined8 *)(lVar2 + 0x20);
          fVar11 = fVar11 * (float)*(undefined8 *)(lVar2 + 0x28);
          fVar15 = SUB164(*(undefined1 (*) [16])(lVar2 + 0x30),8);
          auVar20._4_4_ = fVar15;
          auVar20._0_4_ = fVar15;
          auVar20._8_4_ = fVar15;
          auVar20._12_4_ = fVar15;
          fVar13 = fVar15 + (float)uVar9 * *(float *)(lVar2 + 8) + fVar14 + fVar11;
          uVar9 = CONCAT44(fVar15 + fVar10 * *(float *)(lVar2 + 8) + fVar14 + fVar11,fVar13);
          *(float *)((long)param_5 + 0x24) = fVar13;
          goto LAB_00c4f9b0;
        }
      }
      uVar1 = 0;
      *(undefined1 *)(param_5 + 5) = 0;
      goto LAB_00c4f9e4;
    }
LAB_00c4f9f8:
    *(undefined1 *)(param_5 + 5) = 1;
    fVar14 = fVar10 * (float)*(undefined8 *)(lVar2 + 0x18);
    param_3 = *(undefined8 *)(lVar2 + 0x20);
    fVar11 = fVar11 * (float)*(undefined8 *)(lVar2 + 0x28);
    fVar15 = SUB164(*(undefined1 (*) [16])(lVar2 + 0x30),8);
    auVar20._4_4_ = fVar15;
    auVar20._0_4_ = fVar15;
    auVar20._8_4_ = fVar15;
    auVar20._12_4_ = fVar15;
    fVar13 = fVar15 + (float)uVar9 * *(float *)(lVar2 + 8) + fVar14 + fVar11;
    uVar9 = CONCAT44(fVar15 + fVar10 * *(float *)(lVar2 + 8) + fVar14 + fVar11,fVar13);
    *(float *)((long)param_5 + 0x24) = fVar13;
  }
  FUN_00c4fa44(uVar9,auVar20,param_3,*param_5,param_4[1],*(undefined8 *)(*param_4 + 0x110));
  *(undefined1 *)(param_6 + 0x289) = 1;
  uVar1 = (undefined1)param_5[5];
LAB_00c4f9e4:
  *(undefined1 *)(*param_5 + 0x250) = uVar1;
  return;
}


