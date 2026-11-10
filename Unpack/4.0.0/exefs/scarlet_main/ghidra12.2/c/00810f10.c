/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00810f10; name: FUN_00810f10
 */


void FUN_00810f10(long param_1,long param_2)

{
  *(long *)(param_1 + 0x20) = param_2;
  *(bool *)(param_1 + 0x28) = param_2 != 0;
  return;
}


