/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01249380; name: FUN_01249380
 */


undefined8 FUN_01249380(long param_1,byte param_2)

{
  if (param_2 < 5) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 8);
  }
  return 0;
}


