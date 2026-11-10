/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a76a4; name: FUN_024a76a4
 */


void FUN_024a76a4(long param_1,uint *param_2)

{
  uint *puVar1;
  uint *local_18;
  
  puVar1 = (uint *)(*(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0x100) * 0x18);
  local_18 = puVar1 + 2;
  FUN_024a7704(param_2,&local_18);
  *puVar1 = *param_2 ^ (int)*param_2 >> 0x1f;
  *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 1;
  return;
}


