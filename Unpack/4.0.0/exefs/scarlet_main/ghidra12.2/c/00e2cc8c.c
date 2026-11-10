/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e2cc8c; name: FUN_00e2cc8c
 */


void FUN_00e2cc8c(float param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = FUN_00c4c40c(*(undefined8 *)(param_2 + 0x68),*(undefined2 *)(param_3 + 0x18));
  uVar3 = *(ulong *)(lVar1 + 0x38);
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  if ((0.0 < param_1) && (*(char *)(param_2 + 0x170) == '\0')) {
    fVar5 = (float)uVar2 - (float)*(undefined8 *)(param_3 + 0x20);
    fVar6 = (float)((ulong)uVar2 >> 0x20) - (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
    fVar7 = (float)uVar3 - (float)*(undefined8 *)(param_3 + 0x28);
    fVar5 = fVar5 * fVar5;
    fVar6 = fVar6 * fVar6;
    fVar7 = fVar7 * fVar7;
    auVar4._0_4_ = fVar5 + fVar6;
    auVar4._4_4_ = fVar7 + 0.0;
    auVar4._8_4_ = fVar5 + fVar6;
    auVar4._12_4_ = fVar7 + 0.0;
    auVar4 = NEON_ext(auVar4,auVar4,4,1);
    *(float *)(param_3 + 0x30) = SQRT(auVar4._0_4_ + auVar4._4_4_) / param_1;
  }
  *(ulong *)(param_3 + 0x28) = uVar3 & 0xffffffff;
  *(undefined8 *)(param_3 + 0x20) = uVar2;
  return;
}


