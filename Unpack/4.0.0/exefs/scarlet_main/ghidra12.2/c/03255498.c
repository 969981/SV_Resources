/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03255498; name: FUN_03255498
 */


void FUN_03255498(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if (*(char *)(param_3 + 0xe) == '\0') {
    lVar3 = *(long *)(param_1 + 8);
    pauVar4 = (undefined1 (*) [16])(lVar3 + (ulong)*(uint *)(param_3 + 0xc) * 0x20);
    auVar7 = *pauVar4;
    auVar5 = pauVar4[1];
    pauVar4 = (undefined1 (*) [16])(lVar3 + (ulong)*(uint *)((long)param_3 + 100) * 0x20);
    auVar10 = *pauVar4;
    auVar9 = pauVar4[1];
    pauVar4 = (undefined1 (*) [16])(lVar3 + (ulong)*(uint *)(param_3 + 0xd) * 0x20);
    pauVar1 = (undefined1 (*) [16])(lVar3 + (ulong)*(uint *)((long)param_3 + 0x6c) * 0x20);
    auVar16 = *pauVar4;
    auVar14 = pauVar4[1];
    auVar12 = *pauVar1;
    auVar6 = pauVar1[1];
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    pauVar4 = (undefined1 (*) [16])(lVar3 + (ulong)*(uint *)(param_3 + 0xc) * 0x18);
    auVar5 = *pauVar4;
    auVar7._0_8_ = *(undefined8 *)pauVar4[1];
    auVar6._8_4_ = 0xff7fffee;
    auVar6._0_8_ = 0xff7fffeeff7fffee;
    auVar6._12_4_ = 0xff7fffee;
    auVar7._12_4_ = auVar5._12_4_;
    auVar7._8_4_ = auVar5._12_4_;
    auVar12._8_4_ = 0x7f7fffee;
    auVar12._0_8_ = 0x7f7fffee7f7fffee;
    auVar12._12_4_ = 0x7f7fffee;
    auVar9._8_8_ = auVar6._8_8_;
    auVar9._0_8_ = 0xff7fffeeff7fffee;
    auVar10 = auVar12;
    if (*(uint *)((long)param_3 + 100) != 0xffffffff) {
      pauVar4 = (undefined1 (*) [16])(lVar3 + (ulong)*(uint *)((long)param_3 + 100) * 0x18);
      auVar9 = *pauVar4;
      auVar10._0_8_ = *(undefined8 *)pauVar4[1];
      auVar10._12_4_ = auVar9._12_4_;
      auVar10._8_4_ = auVar9._12_4_;
    }
    auVar14._8_8_ = auVar6._8_8_;
    auVar14._0_8_ = 0xff7fffeeff7fffee;
    auVar16._8_8_ = auVar12._8_8_;
    auVar16._0_8_ = 0x7f7fffee7f7fffee;
    if (*(uint *)(param_3 + 0xd) != 0xffffffff) {
      pauVar4 = (undefined1 (*) [16])(lVar3 + (ulong)*(uint *)(param_3 + 0xd) * 0x18);
      auVar14 = *pauVar4;
      auVar16._0_8_ = *(undefined8 *)pauVar4[1];
      auVar16._12_4_ = auVar14._12_4_;
      auVar16._8_4_ = auVar14._12_4_;
    }
    if (*(uint *)((long)param_3 + 0x6c) != 0xffffffff) {
      pauVar4 = (undefined1 (*) [16])(lVar3 + (ulong)*(uint *)((long)param_3 + 0x6c) * 0x18);
      auVar6 = *pauVar4;
      auVar12._0_8_ = *(undefined8 *)pauVar4[1];
      auVar12._12_4_ = auVar6._12_4_;
      auVar12._8_4_ = auVar6._12_4_;
    }
  }
  auVar18 = NEON_fmin(auVar7,auVar10,4);
  auVar19 = NEON_fmax(auVar5,auVar9,4);
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 8) + (((long)param_3 - param_2) * 0x2000000 >> 0x20) * 0x20);
  auVar20 = NEON_fmin(auVar16,auVar12,4);
  auVar20 = NEON_fmin(auVar18,auVar20,4);
  auVar8 = NEON_ext(auVar7,auVar7,8,1);
  auVar11 = NEON_ext(auVar10,auVar10,8,1);
  auVar18 = NEON_fmax(auVar14,auVar6,4);
  auVar18 = NEON_fmax(auVar19,auVar18,4);
  auVar17 = NEON_ext(auVar16,auVar16,8,1);
  auVar13 = NEON_ext(auVar12,auVar12,8,1);
  puVar2[1] = auVar20._8_8_;
  *puVar2 = auVar20._0_8_;
  puVar2[3] = auVar18._8_8_;
  puVar2[2] = auVar18._0_8_;
  auVar18 = NEON_ext(auVar5,auVar5,8,1);
  auVar19 = NEON_ext(auVar9,auVar9,8,1);
  auVar15 = NEON_ext(auVar14,auVar14,8,1);
  auVar20 = NEON_ext(auVar6,auVar6,8,1);
  param_3[5] = CONCAT44(auVar12._4_4_,auVar16._4_4_);
  param_3[4] = CONCAT44(auVar10._4_4_,auVar7._4_4_);
  param_3[7] = CONCAT44(auVar6._4_4_,auVar14._4_4_);
  param_3[6] = CONCAT44(auVar9._4_4_,auVar5._4_4_);
  param_3[1] = CONCAT44(auVar12._0_4_,auVar16._0_4_);
  *param_3 = CONCAT44(auVar10._0_4_,auVar7._0_4_);
  param_3[3] = CONCAT44(auVar6._0_4_,auVar14._0_4_);
  param_3[2] = CONCAT44(auVar9._0_4_,auVar5._0_4_);
  param_3[9] = CONCAT44(auVar13._0_4_,auVar17._0_4_);
  param_3[8] = CONCAT44(auVar11._0_4_,auVar8._0_4_);
  param_3[0xb] = CONCAT44(auVar20._0_4_,auVar15._0_4_);
  param_3[10] = CONCAT44(auVar19._0_4_,auVar18._0_4_);
  return;
}


