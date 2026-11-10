/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00796a00; name: FUN_00796a00
 */


bool FUN_00796a00(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 8),(void *)(param_2 + 8),0x10);
  return iVar1 == 0;
}


