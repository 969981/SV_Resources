/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c966c; name: FUN_001c966c
 */


void FUN_001c966c(long *param_1)

{
  if ((*(byte *)(*param_1 + 0xf47) & 1) == 0) {
    FUN_001c78f4();
    return;
  }
  FUN_001ca258();
  return;
}


