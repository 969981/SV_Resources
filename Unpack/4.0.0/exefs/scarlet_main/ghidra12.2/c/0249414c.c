/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0249414c; name: FUN_0249414c
 */


void FUN_0249414c(undefined1 param_1 [16],long param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_1._4_4_;
  fVar6 = param_1._0_4_;
  fVar4 = fVar5;
  if (1.0 < fVar5) {
    fVar4 = 1.0;
  }
  fVar3 = fVar6;
  if (1.0 < fVar6) {
    fVar3 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar6 = param_1._8_4_;
  if (fVar5 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar2 = param_1._12_4_;
  fVar5 = fVar6;
  if (1.0 < fVar6) {
    fVar5 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar6 = fVar2;
  if (1.0 < fVar2) {
    fVar6 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar2 = 1.0 - fVar3;
  if (fVar5 <= 1.0 - fVar3) {
    fVar2 = fVar5;
  }
  fVar5 = 1.0 - fVar4;
  if (fVar6 <= 1.0 - fVar4) {
    fVar5 = fVar6;
  }
  lVar1 = *(long *)(param_2 + 0x30) + param_3 * 0x30;
  *(ulong *)(lVar1 + 0x18) = CONCAT44(fVar5,fVar2);
  *(ulong *)(lVar1 + 0x10) = CONCAT44(fVar4,fVar3);
  return;
}


