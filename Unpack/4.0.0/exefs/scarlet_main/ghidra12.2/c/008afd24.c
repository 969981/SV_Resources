/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008afd24; name: FUN_008afd24
 */


void FUN_008afd24(undefined1 *param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 8) = param_2;
    *param_1 = 0x90;
  }
  return;
}


