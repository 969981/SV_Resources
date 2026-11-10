/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01251234; name: FUN_01251234
 */


long FUN_01251234(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 8 + (ulong)param_2 * 0x180;
  if (*(byte *)(param_1 + 0x2588) <= param_2) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


