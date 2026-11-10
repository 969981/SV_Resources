/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b5210; name: FUN_008b5210
 */


void FUN_008b5210(float param_1,float param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_3;
  fVar4 = param_1;
  if (param_1 <= fVar5) {
    fVar4 = fVar5;
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (param_1 <= fVar5) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4) && !NAN(param_2)) {
      bVar1 = fVar4 < param_2;
      bVar2 = fVar4 == param_2;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    if (fVar4 <= param_2) {
      param_2 = fVar4;
    }
    *param_3 = param_2;
  }
  return;
}


