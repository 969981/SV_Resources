/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eb45a0; name: FUN_02eb45a0
 */


undefined8
FUN_02eb45a0(long param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar5 = *param_2;
  auVar4 = param_2[1];
  fVar10 = (auVar4._4_4_ - auVar5._4_4_) * 0.5;
  uStack_20 = CONCAT44(fVar10,(auVar4._0_4_ - auVar5._0_4_) * 0.5);
  uStack_18 = CONCAT44((auVar4._12_4_ - auVar5._12_4_) * 0.5,(auVar4._8_4_ - auVar5._8_4_) * 0.5);
  fVar13 = (auVar4._4_4_ + auVar5._4_4_) * 0.5;
  uStack_28 = CONCAT44((auVar4._12_4_ + auVar5._12_4_) * 0.5,(auVar4._8_4_ + auVar5._8_4_) * 0.5);
  local_30 = CONCAT44(fVar13,(auVar4._0_4_ + auVar5._0_4_) * 0.5);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x90);
  uVar9 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  fVar12 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_1 + 0xa0);
  uVar8 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  uVar14 = NEON_fmin(CONCAT44(fVar10 + fVar7,fVar10 + fVar7),CONCAT44(fVar13,fVar13),4);
  uVar14 = NEON_fmax(CONCAT44(fVar12 - fVar10,fVar12 - fVar10),uVar14,4);
  fVar10 = fVar13 - (float)uVar14;
  fVar13 = fVar13 - (float)((ulong)uVar14 >> 0x20);
  if (fVar10 * fVar10 <= (float)*param_3) {
    auVar3._12_4_ = uVar9;
    auVar3._0_12_ = *pauVar1;
    auVar5 = NEON_fmax(auVar3,auVar5,4);
    auVar6._12_4_ = uVar9;
    auVar6._0_12_ = *pauVar1;
    auVar3 = NEON_fmax(auVar6,auVar4,4);
    auVar4._12_4_ = uVar8;
    auVar4._0_12_ = *pauVar2;
    auVar6 = NEON_fmin(auVar4,auVar5,4);
    fVar11 = (fVar7 - fVar12) + ABS(fVar10);
    fVar12 = (fVar7 - fVar12) + ABS(fVar13);
    auVar5._12_4_ = uVar8;
    auVar5._0_12_ = *pauVar2;
    auVar4 = NEON_fmin(auVar5,auVar3,4);
    fVar7 = SQRT(fVar11 * fVar11 - fVar10 * fVar10);
    fVar12 = SQRT(fVar12 * fVar12 - fVar13 * fVar13);
    fStack_38 = (float)*(undefined8 *)(param_1 + 0x78);
    fStack_34 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
    fStack_40 = (float)*(undefined8 *)(param_1 + 0x70);
    fStack_3c = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
    local_50 = (auVar6._0_4_ - fVar7) * fStack_40;
    fStack_4c = (auVar6._4_4_ - fVar12) * fStack_3c;
    fStack_48 = (auVar6._8_4_ - fVar7) * fStack_38;
    fStack_44 = (auVar6._12_4_ - fVar12) * fStack_34;
    fStack_40 = (fVar7 + auVar4._0_4_) * fStack_40;
    fStack_3c = (fVar12 + auVar4._4_4_) * fStack_3c;
    fStack_38 = (fVar7 + auVar4._8_4_) * fStack_38;
    fStack_34 = (fVar12 + auVar4._12_4_) * fStack_34;
    uVar14 = NEON_fmax(CONCAT44(fStack_40 - local_50,fStack_40 - local_50),
                       CONCAT44(fStack_38 - fStack_48,fStack_38 - fStack_48),4);
    uVar14 = FUN_02eb46c0(0,param_1,PTR_DAT_047d19b0 + 0x200,&local_50,
                          0x20 - LZCOUNT((int)(float)uVar14 + 1),&local_30,&uStack_20,param_3,
                          param_4);
  }
  else {
    uVar14 = 0;
  }
  return uVar14;
}


