/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a046d4; name: FUN_01a046d4
 */


undefined4 FUN_01a046d4(long param_1,byte param_2,byte param_3)

{
  if ((param_2 < 4) && (param_3 < *(byte *)(param_1 + (ulong)param_2 * 0x98 + 0x9e))) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 0x98 + (ulong)param_3 * 4 + 8);
  }
  return 0;
}


