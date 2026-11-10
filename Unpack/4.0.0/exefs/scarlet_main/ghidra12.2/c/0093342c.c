/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0093342c; name: FUN_0093342c
 */


void FUN_0093342c(long *param_1,byte param_2)

{
  *(byte *)(*param_1 + 0x30) = param_2 & 1;
  return;
}


