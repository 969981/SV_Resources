/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f40f8; name: FUN_007f40f8
 */


void FUN_007f40f8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1540 + 0x10);
  FUN_00796584(param_1 + 1);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = 0xfd;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3a) = 0;
  param_1[8] = 0;
  FUN_007f3f74(param_1 + 9);
  FUN_007f3f74(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}


