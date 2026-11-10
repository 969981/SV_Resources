/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f3d94; name: FUN_007f3d94
 */


undefined4 FUN_007f3d94(long param_1,byte param_2)

{
  if (param_2 < *(byte *)(param_1 + 0x5a)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x40);
  }
  return 0;
}


