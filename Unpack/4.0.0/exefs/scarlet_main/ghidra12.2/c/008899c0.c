/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008899c0; name: FUN_008899c0
 */


float FUN_008899c0(long param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    fVar2 = 0.0;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
    fVar2 = (float)iVar1;
  }
  return fVar2 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x44);
}


