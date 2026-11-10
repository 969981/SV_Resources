/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6be40; name: FUN_00f6be40
 */


void FUN_00f6be40(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x1a0) = param_2[1];
  *(undefined4 *)(param_1 + 0x1a4) = param_2[2];
  *(undefined4 *)(param_1 + 0x1a8) = param_2[3];
  *(undefined1 *)(param_1 + 0x1ac) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1b0) = param_2[5];
  *(undefined4 *)(param_1 + 0x1d4) = *param_2;
  return;
}


