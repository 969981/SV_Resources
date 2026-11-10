/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003aecf0; name: FUN_003aecf0
 */


long FUN_003aecf0(long param_1)

{
  if (*(long *)(param_1 + 0x680) == 0) {
    return *(long *)(*(long *)(param_1 + 0x660) + 0x118);
  }
  return *(long *)(param_1 + 0x680);
}


