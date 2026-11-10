/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052b0a0; name: FUN_0052b0a0
 */


long FUN_0052b0a0(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    return 0;
  }
  if (((ulong *)param_1[2] < param_1) || (param_1 + 3 <= (ulong *)param_1[2])) {
    return (*param_1 & 0xfffffffffffffffe) - 1;
  }
  return 0;
}


