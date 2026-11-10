/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c7d63c; name: FUN_02c7d63c
 */


void FUN_02c7d63c(long param_1,undefined1 param_2)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined1 *)(param_1 + 0x1e) = param_2;
  return;
}


