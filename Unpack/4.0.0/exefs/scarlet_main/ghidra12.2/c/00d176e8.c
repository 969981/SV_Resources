/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d176e8; name: FUN_00d176e8
 */


void FUN_00d176e8(float *param_1)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  fVar2 = *param_1;
  auVar3 = NEON_fmov(0x41200000,4);
  iVar1 = -0x14;
  do {
    fVar8 = (float)iVar1 * 0.5;
    local_50 = auVar3._0_4_;
    fStack_4c = auVar3._4_4_;
    fStack_48 = auVar3._8_4_;
    fStack_44 = auVar3._12_4_;
    fVar6 = (float)*(undefined8 *)(param_1 + 0xc) * local_50;
    fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) * fStack_4c;
    auVar4._0_4_ = (param_1[8] * fVar8 - fVar6) + 0.0;
    auVar4._4_4_ = fVar2 + (param_1[9] * fVar8 - fVar7);
    auVar4._8_4_ = (param_1[10] * fVar8 - (float)*(undefined8 *)(param_1 + 0xe) * fStack_48) + 0.0;
    auVar4._12_4_ =
         (param_1[0xb] * fVar8 - (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) * fStack_44)
         + 0.0;
    FUN_011c1de0(auVar4,CONCAT44(fVar2 + fVar7 + param_1[9] * fVar8,fVar6 + param_1[8] * fVar8 + 0.0
                                ),param_1 + 0x10);
    local_50 = (float)*(undefined8 *)(param_1 + 8) * local_50;
    fStack_4c = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fStack_4c;
    auVar5._0_4_ = (param_1[0xc] * fVar8 - local_50) + 0.0;
    auVar5._4_4_ = fVar2 + (param_1[0xd] * fVar8 - fStack_4c);
    auVar5._8_4_ = (param_1[0xe] * fVar8 - (float)*(undefined8 *)(param_1 + 10) * fStack_48) + 0.0;
    auVar5._12_4_ =
         (param_1[0xf] * fVar8 - (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) * fStack_44)
         + 0.0;
    FUN_011c1de0(auVar5,CONCAT44(fVar2 + param_1[0xd] * fVar8 + fStack_4c,
                                 param_1[0xc] * fVar8 + local_50 + 0.0),param_1 + 0x10);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x15);
  return;
}


