/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01477400; name: FUN_01477400
 */


void FUN_01477400(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float __x;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar3 = *(long *)(param_2 + 0x120);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x194) <
        (int)((ulong)(*(long *)(lVar3 + 0x58) - *(long *)(lVar3 + 0x50)) >> 3) * -0x49249249) {
      lVar2 = *(long *)(lVar3 + 0x50) + (long)*(int *)(lVar3 + 0x194) * 0x38;
      uVar8 = 0;
      fVar9 = 0.0;
      fVar10 = 0.0;
      for (lVar3 = *(long *)(lVar2 + 8); lVar3 != lVar2; lVar3 = *(long *)(lVar3 + 8)) {
        lVar4 = *(long *)(lVar3 + 0x10);
        for (lVar5 = *(long *)(lVar4 + 0x70); lVar5 != lVar4 + 0x68; lVar5 = *(long *)(lVar5 + 8)) {
          lVar6 = *(long *)(lVar5 + 0x10);
          if ((*(char *)(lVar6 + 0x240) == '\0') || (*(char *)(lVar6 + 0x241) == '\0')) {
LAB_014774e8:
            uVar13 = uVar8;
            fVar11 = fVar9;
            fVar7 = fVar10;
          }
          else {
            fVar11 = *(float *)(lVar6 + 0x1b8);
            fVar7 = *(float *)(lVar6 + 0x1bc);
            uVar13 = *(undefined8 *)(lVar6 + 0x1b0);
            if (fVar7 <= 0.0) goto LAB_014774e8;
            if (0.0 < fVar10) {
              fVar16 = (float)uVar13 - (float)uVar8;
              fVar15 = (float)((ulong)uVar8 >> 0x20);
              fVar17 = (float)((ulong)uVar13 >> 0x20) - fVar15;
              fVar18 = fVar11 - fVar9;
              fVar14 = fVar7 - fVar10;
              auVar12._0_4_ = fVar16 * fVar16 + fVar17 * fVar17;
              auVar12._4_4_ = fVar18 * fVar18 + 0.0;
              auVar12._8_4_ = fVar16 * fVar16 + fVar17 * fVar17;
              auVar12._12_4_ = fVar18 * fVar18 + 0.0;
              auVar12 = NEON_ext(auVar12,auVar12,4,1);
              __x = auVar12._0_4_ + auVar12._4_4_;
              if (fVar14 * fVar14 < __x) {
                fVar7 = SQRT(__x);
                if (NAN(fVar7)) {
                  fVar7 = sqrtf(__x);
                }
                fVar11 = (fVar14 + fVar7) / (fVar7 + fVar7);
                uVar13 = CONCAT44(fVar15 + fVar17 * fVar11,(float)uVar8 + fVar16 * fVar11);
                fVar11 = fVar9 + fVar18 * fVar11;
                fVar7 = (fVar10 + fVar7 + *(float *)(lVar6 + 0x1bc)) * 0.5;
              }
              else if (fVar14 < 0.0) goto LAB_014774e8;
            }
          }
          uVar8 = uVar13;
          fVar9 = fVar11;
          fVar10 = fVar7;
        }
      }
      uVar1 = 1;
      *(float *)(param_1 + 1) = fVar9;
      *(float *)((long)param_1 + 0xc) = fVar10;
      *param_1 = uVar8;
      goto LAB_01477554;
    }
  }
  uVar1 = 0;
  *(undefined1 *)param_1 = 0;
LAB_01477554:
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}


