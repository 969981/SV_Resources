/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b3620; name: FUN_019b3620
 */


void FUN_019b3620(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
    *(long *)(param_1 + 0xb0) = param_2;
  }
  return;
}


