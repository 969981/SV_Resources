/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003de390; name: FUN_003de390
 */


uint FUN_003de390(uint *param_1)

{
  if (((*param_1 | 4) == 5) || (*(long *)(param_1 + 2) != 0)) {
    return *param_1;
  }
  return 0;
}


