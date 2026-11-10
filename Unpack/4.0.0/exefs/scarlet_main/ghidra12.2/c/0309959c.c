/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309959c; name: FUN_0309959c
 */


void FUN_0309959c(long param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar8 = *(long *)(param_1 + 0x20);
  iVar9 = *param_2;
  if (iVar9 < *(int *)(lVar8 + 0x20)) {
    lVar13 = *(long *)(lVar8 + 0x18);
    iVar12 = iVar9;
    if (*(int *)(lVar8 + 0x98) != 0) {
      iVar12 = *(int *)(*(long *)(lVar8 + 0x90) + (long)iVar9 * 4);
    }
    if (iVar12 == -1) goto LAB_030995ec;
    plVar11 = (long *)(lVar8 + 0xb0);
    iVar9 = iVar12;
  }
  else {
    plVar11 = (long *)(lVar8 + 0xd0);
    iVar9 = iVar9 - *(int *)(lVar8 + 0x20);
  }
  lVar13 = *plVar11;
LAB_030995ec:
  piVar15 = (int *)(lVar13 + (long)iVar9 * 0x10);
  uVar3 = *(ushort *)(piVar15 + 2);
  if ((short)uVar3 < 1) {
    auVar17._8_4_ = 0xff7fffee;
    auVar17._0_8_ = 0xff7fffeeff7fffee;
    auVar17._12_4_ = 0xff7fffee;
    auVar16._8_4_ = 0x7f7fffee;
    auVar16._0_8_ = 0x7f7fffee7f7fffee;
    auVar16._12_4_ = 0x7f7fffee;
  }
  else {
    iVar12 = *piVar15;
    lVar13 = (long)iVar12;
    auVar16._8_4_ = 0x7f7fffee;
    auVar16._0_8_ = 0x7f7fffee7f7fffee;
    auVar16._12_4_ = 0x7f7fffee;
    auVar17._8_4_ = 0xff7fffee;
    auVar17._0_8_ = 0xff7fffeeff7fffee;
    auVar17._12_4_ = 0xff7fffee;
    lVar14 = (long)*(int *)(lVar8 + 0x30) * -0x14 + lVar13 * 0x14;
    iVar9 = *(int *)(lVar8 + 0x40);
    do {
      if (lVar13 < *(int *)(lVar8 + 0x30)) {
        if (*(int *)(lVar8 + 0x78) == 0) {
          iVar10 = (int)lVar13;
        }
        else {
          iVar10 = *(int *)(*(long *)(lVar8 + 0x70) + lVar13 * 4);
        }
        if (iVar10 == -1) {
          piVar15 = (int *)(*(long *)(lVar8 + 0x28) + lVar13 * 0x14);
        }
        else {
          piVar15 = (int *)(*(long *)(lVar8 + 0xc0) + (long)iVar10 * 0x14);
        }
      }
      else {
        piVar15 = (int *)(*(long *)(lVar8 + 0xe0) + lVar14);
      }
      iVar10 = *piVar15;
      lVar2 = 0x38;
      if (iVar9 <= iVar10) {
        lVar2 = 0xf0;
      }
      iVar1 = 0;
      if (iVar9 <= iVar10) {
        iVar1 = iVar9;
      }
      puVar4 = (undefined8 *)(*(long *)(lVar8 + lVar2) + (long)(iVar10 - iVar1) * 0x10);
      fVar21 = (float)puVar4[1];
      uVar7 = *puVar4;
      fVar23 = (float)uVar7;
      fVar19 = (float)((ulong)uVar7 >> 0x20);
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 0x14;
      fVar18 = (float)*(undefined8 *)(param_1 + 0x90) +
               (float)*(undefined8 *)(param_1 + 0x80) * fVar21 +
               (float)*(undefined8 *)(param_1 + 0x60) * fVar23 +
               (float)*(undefined8 *)(param_1 + 0x70) * fVar19;
      fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) * fVar21 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar23 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) * fVar19;
      fVar22 = (float)*(undefined8 *)(param_1 + 0x98) +
               (float)*(undefined8 *)(param_1 + 0x88) * fVar21 +
               (float)*(undefined8 *)(param_1 + 0x68) * fVar23 +
               (float)*(undefined8 *)(param_1 + 0x78) * fVar19;
      fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar21 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) * fVar23 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar19;
      auVar5._4_4_ = fVar20;
      auVar5._0_4_ = fVar18;
      auVar5._8_4_ = fVar22;
      auVar5._12_4_ = fVar23;
      auVar16 = NEON_fmin(auVar16,auVar5,4);
      auVar6._4_4_ = fVar20;
      auVar6._0_4_ = fVar18;
      auVar6._8_4_ = fVar22;
      auVar6._12_4_ = fVar23;
      auVar17 = NEON_fmax(auVar17,auVar6,4);
    } while (lVar13 < (int)(iVar12 + (uint)uVar3));
  }
  fVar23 = (float)*param_3;
  fVar18 = (float)((ulong)*param_3 >> 0x20);
  param_4[1] = CONCAT44(auVar16._12_4_ - fVar18,auVar16._8_4_ - fVar23);
  *param_4 = CONCAT44(auVar16._4_4_ - fVar18,auVar16._0_4_ - fVar23);
  param_4[3] = CONCAT44(fVar18 + auVar17._12_4_,fVar23 + auVar17._8_4_);
  param_4[2] = CONCAT44(fVar18 + auVar17._4_4_,fVar23 + auVar17._0_4_);
  return;
}


