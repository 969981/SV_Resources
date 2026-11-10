/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078a324; name: FUN_0078a324
 */


bool FUN_0078a324(long param_1)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_03d0abac,0x10);
  return iVar1 != 0;
}


