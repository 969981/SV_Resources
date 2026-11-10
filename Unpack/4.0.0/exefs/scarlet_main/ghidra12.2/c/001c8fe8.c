/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c8fe8; name: FUN_001c8fe8
 */


int FUN_001c8fe8(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(long *)(param_1 + 0x28)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


