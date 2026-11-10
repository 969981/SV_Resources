/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa030c; name: FUN_01fa030c
 */


bool FUN_01fa030c(undefined8 *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((0.0 < (float)param_1[2] - (float)*param_1) &&
     (0.0 < (float)((ulong)param_1[2] >> 0x20) - (float)((ulong)*param_1 >> 0x20))) {
    bVar1 = 0.0 < (float)param_1[3] - (float)param_1[1];
  }
  return bVar1;
}


