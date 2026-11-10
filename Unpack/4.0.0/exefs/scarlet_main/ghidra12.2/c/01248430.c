/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01248430; name: FUN_01248430
 */


undefined8 FUN_01248430(long param_1,byte param_2,byte param_3)

{
  if ((param_2 < 5) && (param_3 < *(byte *)(param_1 + (ulong)param_2 * 0x38 + 0x58))) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 0x38 + (ulong)param_3 * 8 + 0x28);
  }
  return 0;
}


