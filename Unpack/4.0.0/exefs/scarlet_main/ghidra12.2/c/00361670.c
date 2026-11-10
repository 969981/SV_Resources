/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00361670; name: FUN_00361670
 */


void FUN_00361670(double *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  pdVar1 = param_1 + 3;
  dVar2 = *pdVar1;
  dVar4 = param_1[1];
  dVar3 = param_1[4];
  if (0.0 < dVar4) {
    dVar2 = dVar2 + dVar4 * *param_1;
    dVar3 = dVar3 + dVar4;
    dVar4 = param_1[2];
  }
  else {
    dVar4 = param_1[2];
  }
  if (0.0 < dVar4) {
    dVar2 = dVar2 + dVar4 * param_1[5] * param_1[6];
    dVar3 = dVar3 + dVar4 * param_1[5];
  }
  if (dVar3 <= 0.0) {
    param_1[5] = dVar3;
    param_1[6] = *param_1;
    *pdVar1 = 0.0;
    param_1[4] = 0.0;
    return;
  }
  param_1[5] = dVar3;
  param_1[6] = dVar2 / dVar3;
  *pdVar1 = 0.0;
  param_1[4] = 0.0;
  return;
}


