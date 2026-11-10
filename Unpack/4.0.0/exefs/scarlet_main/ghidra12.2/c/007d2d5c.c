/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d2d5c; name: FUN_007d2d5c
 */


undefined8 FUN_007d2d5c(long param_1,uint param_2)

{
  if (((int)param_2 < 0) || ((int)(uint)*(ushort *)(param_1 + 10) <= (int)param_2)) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8);
}


