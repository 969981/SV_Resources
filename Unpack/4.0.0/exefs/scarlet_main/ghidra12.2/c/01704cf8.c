/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01704cf8; name: FUN_01704cf8
 */


void FUN_01704cf8(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 0x1b8) != 0) {
    *(undefined4 *)(param_1 + 0x170) = param_2;
    *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = param_2;
  }
  return;
}


