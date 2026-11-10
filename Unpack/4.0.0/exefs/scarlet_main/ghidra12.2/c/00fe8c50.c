/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe8c50; name: FUN_00fe8c50
 */


void FUN_00fe8c50(float param_1,float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(long **)(param_3 + 0x28) + 0x20))();
  iVar2 = (**(code **)(**(long **)(param_3 + 0x28) + 0x28))();
  *(float *)(param_3 + 0xc) = param_1 / (float)iVar1;
  *(float *)(param_3 + 0x10) = param_2 / (float)iVar2;
  return;
}


