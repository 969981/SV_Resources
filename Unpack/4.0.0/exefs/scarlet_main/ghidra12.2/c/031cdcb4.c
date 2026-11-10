/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031cdcb4; name: FUN_031cdcb4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031cdcb4(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  
  uVar1 = param_2 + 3U >> 2;
  uVar4 = (ulong)uVar1;
  if (uVar1 != 0) {
    iVar12 = (int)_UNK_03cab988;
    iVar13 = (int)((ulong)_UNK_03cab988 >> 0x20);
    iVar10 = (int)_DAT_03cab980;
    iVar11 = (int)((ulong)_DAT_03cab980 >> 0x20);
    pauVar6 = (undefined1 (*) [16])(param_1 + 0x20);
    puVar7 = param_3;
    do {
      uVar4 = uVar4 - 1;
      uVar14 = *(undefined4 *)pauVar6[-2];
      uVar16 = *(undefined4 *)(pauVar6[-2] + 4);
      uVar18 = *(undefined4 *)(pauVar6[-2] + 8);
      uVar20 = *(undefined4 *)(pauVar6[-2] + 0xc);
      uVar15 = *(undefined4 *)pauVar6[-1];
      uVar17 = *(undefined4 *)(pauVar6[-1] + 4);
      uVar19 = *(undefined4 *)(pauVar6[-1] + 8);
      uVar21 = *(undefined4 *)(pauVar6[-1] + 0xc);
      auVar25 = *pauVar6;
      uVar23 = CONCAT44(iVar10,auVar25._0_4_);
      uVar24 = CONCAT44(iVar11,auVar25._4_4_);
      auVar22 = NEON_ext(auVar25,auVar25,8,1);
      auVar25._4_4_ = iVar11;
      auVar25._0_4_ = iVar10;
      auVar25._8_4_ = iVar12;
      auVar25._12_4_ = iVar13;
      auVar2._4_4_ = iVar11;
      auVar2._0_4_ = iVar10;
      auVar2._8_4_ = iVar12;
      auVar2._12_4_ = iVar13;
      auVar25 = NEON_ext(auVar25,auVar2,8,1);
      iVar10 = iVar10 + 4;
      iVar11 = iVar11 + 4;
      iVar12 = iVar12 + 4;
      iVar13 = iVar13 + 4;
      puVar7[1] = uVar23;
      *puVar7 = CONCAT44(uVar15,uVar14);
      puVar7[3] = uVar24;
      puVar7[2] = CONCAT44(uVar17,uVar16);
      puVar7[5] = CONCAT44(auVar25._0_4_,auVar22._0_4_);
      puVar7[4] = CONCAT44(uVar19,uVar18);
      puVar7[7] = CONCAT44(auVar25._4_4_,auVar22._4_4_);
      puVar7[6] = CONCAT44(uVar21,uVar20);
      puVar7 = puVar7 + 8;
      pauVar6 = pauVar6 + 3;
    } while (uVar4 != 0);
  }
  uVar1 = param_2 + 3U & 0xfffffffc;
  if (param_2 < (int)uVar1) {
    uVar4 = (ulong)param_2;
    uVar8 = ~uVar4;
    lVar3 = uVar4 - 1;
    uVar9 = (ulong)(uint)-param_2 & 3;
    if ((-param_2 & 3U) != 0) {
      do {
        uVar23 = param_3[lVar3 * 2];
        uVar9 = uVar9 - 1;
        (param_3 + uVar4 * 2)[1] = (param_3 + lVar3 * 2)[1];
        param_3[uVar4 * 2] = uVar23;
        uVar4 = uVar4 + 1;
      } while (uVar9 != 0);
    }
    if (2 < uVar8 + (long)(int)uVar1) {
      lVar5 = (long)(int)uVar1 - uVar4;
      puVar7 = param_3 + uVar4 * 2 + 4;
      do {
        uVar23 = param_3[lVar3 * 2];
        lVar5 = lVar5 + -4;
        puVar7[-3] = (param_3 + lVar3 * 2)[1];
        puVar7[-4] = uVar23;
        uVar23 = param_3[lVar3 * 2];
        puVar7[-1] = (param_3 + lVar3 * 2)[1];
        puVar7[-2] = uVar23;
        uVar23 = param_3[lVar3 * 2];
        puVar7[1] = (param_3 + lVar3 * 2)[1];
        *puVar7 = uVar23;
        uVar23 = param_3[lVar3 * 2];
        puVar7[3] = (param_3 + lVar3 * 2)[1];
        puVar7[2] = uVar23;
        puVar7 = puVar7 + 8;
      } while (lVar5 != 0);
    }
  }
  return;
}


