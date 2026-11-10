/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00880d60; name: FUN_00880d60
 */


float FUN_00880d60(float param_1,float param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = param_2;
  if (param_2 <= param_1) {
    fVar3 = param_3;
  }
  bVar1 = true;
  bVar2 = false;
  if (param_1 <= param_3) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1) && !NAN(param_2)) {
      bVar1 = param_1 < param_2;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    fVar3 = param_1;
  }
  return fVar3;
}


