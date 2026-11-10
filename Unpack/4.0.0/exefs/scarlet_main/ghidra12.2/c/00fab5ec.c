/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fab5ec; name: FUN_00fab5ec
 */


void FUN_00fab5ec(undefined4 *param_1)

{
  *param_1 = 0x3020002;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfff0;
  *(ushort *)((long)param_1 + 0x1a) = *(ushort *)((long)param_1 + 0x1a) & 0xfffe;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 6) = 0;
  param_1[7] = 0xffffffff;
  return;
}


