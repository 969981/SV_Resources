/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02988cf8; name: FUN_02988cf8
 */


void FUN_02988cf8(long param_1,undefined2 param_2)

{
  if (*(short *)(param_1 + 0x368) == 0) {
    *(undefined2 *)(param_1 + 0x368) = param_2;
    *(undefined1 *)(param_1 + 0x36a) = 1;
    return;
  }
  return;
}


