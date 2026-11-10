/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008bedf4; name: FUN_008bedf4
 */


void FUN_008bedf4(float param_1,float param_2,long *param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(*param_3 + 0x70))();
  if (iVar1 == 1) {
    fVar2 = 1.0 - param_2;
    param_2 = 1.0 - param_1;
    *(float *)(param_3 + 1) = fVar2;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    *(float *)(param_3 + 1) = param_1;
  }
  *(float *)((long)param_3 + 0xc) = param_2;
  return;
}


