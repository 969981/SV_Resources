/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124d824; name: FUN_0124d824
 */


undefined2 FUN_0124d824(long param_1,byte param_2)

{
  if (param_2 < 5) {
    return *(undefined2 *)(param_1 + (ulong)param_2 * 2 + 0x7c);
  }
  return 0;
}


