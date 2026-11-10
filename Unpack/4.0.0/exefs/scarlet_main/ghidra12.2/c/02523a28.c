/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02523a28; name: thunk_FUN_025205f8
 */


bool thunk_FUN_025205f8(undefined1 param_1 [16])

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_1._8_4_ + param_1._0_4_ + param_1._4_4_;
  if (1.1920929e-07 <= ABS(fVar4)) {
    fVar4 = 1.0 / fVar4;
    fVar5 = param_1._0_4_ * fVar4;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 1.0;
        bVar2 = fVar5 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar5 = param_1._4_4_ * fVar4;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (0.0 <= fVar5) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar5)) {
          bVar1 = fVar5 < 1.0;
          bVar2 = fVar5 == 1.0;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        fVar4 = param_1._8_4_ * fVar4;
        return 0.0 <= fVar4 && fVar4 <= 1.0;
      }
    }
  }
  return false;
}


