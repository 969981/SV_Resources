/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e76e8; name: FUN_033e76e8
 */


void FUN_033e76e8(long *param_1,undefined4 *param_2,float *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar11 = *param_1;
  fVar13 = *(float *)(param_1[1] + (ulong)param_5 * 4);
  puVar10 = (undefined8 *)(lVar11 + (ulong)param_5 * 0x18);
  uVar9 = *(uint *)((long)puVar10 + 0xc);
  if (param_4 != 0) {
    uVar4 = *(uint *)(param_1 + 3);
    fVar16 = (float)uVar4;
    fVar17 = (float)(uVar4 >> 1);
    fVar15 = *(float *)(param_1 + 2);
    lVar11 = *(long *)*puVar10;
    do {
      uVar5 = uVar4 - uVar9;
      uVar7 = param_4;
      uVar8 = uVar9;
      uVar1 = param_4;
      if (uVar5 <= param_4) {
        uVar7 = uVar5;
        uVar1 = uVar5;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        fVar14 = fVar13 + fVar15;
        fVar18 = fVar14 + fVar17;
        if (fVar16 <= fVar14) {
          fVar14 = fVar14 - fVar16;
        }
        if (fVar16 <= fVar18) {
          fVar18 = fVar18 - fVar16;
        }
        fVar13 = fVar14 + fVar16;
        if (0.0 <= fVar14) {
          fVar13 = fVar14;
        }
        fVar19 = (float)uVar8 - fVar13;
        fVar14 = fVar18 + fVar16;
        if (0.0 <= fVar18) {
          fVar14 = fVar18;
        }
        iVar12 = (int)((float)uVar8 - fVar14);
        fVar14 = fVar19 - (float)(int)fVar19;
        uVar9 = 0;
        if ((int)uVar4 <= (int)fVar19) {
          uVar9 = uVar4;
        }
        iVar6 = (int)fVar19 - uVar9;
        iVar6 = (uVar4 & iVar6 >> 0x1f) + iVar6;
        uVar9 = 0;
        if ((int)uVar4 <= iVar12) {
          uVar9 = uVar4;
        }
        iVar12 = iVar12 - uVar9;
        iVar2 = 0;
        if (iVar6 + 1 < (int)uVar4) {
          iVar2 = iVar6 + 1;
        }
        iVar12 = (uVar4 & iVar12 >> 0x1f) + iVar12;
        iVar3 = 0;
        if (iVar12 + 1 < (int)uVar4) {
          iVar3 = iVar12 + 1;
        }
        fVar19 = *(float *)(lVar11 + (long)iVar3 * 4);
        fVar18 = fVar14 * *(float *)(lVar11 + (long)iVar2 * 4) +
                 *(float *)(lVar11 + (long)iVar6 * 4) * (1.0 - fVar14);
        fVar20 = *(float *)(lVar11 + (long)iVar12 * 4);
        *(undefined4 *)(lVar11 + (ulong)uVar8 * 4) = *param_2;
        *param_3 = fVar18 + (1.0 / fVar17) *
                            ((fVar14 * fVar19 + fVar20 * (1.0 - fVar14)) - fVar18) *
                            ABS(fVar13 - fVar17);
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        uVar8 = uVar8 + 1;
      }
      uVar9 = 0;
      if (uVar8 != uVar4) {
        uVar9 = uVar8;
      }
      param_4 = param_4 - uVar1;
    } while (param_4 != 0);
    lVar11 = *param_1;
  }
  *(uint *)(lVar11 + (ulong)param_5 * 0x18 + 0xc) = uVar9;
  *(float *)(param_1[1] + (ulong)param_5 * 4) = fVar13;
  return;
}


