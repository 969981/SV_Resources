/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01986988; name: FUN_01986988
 */


ulong FUN_01986988(ulong param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return param_1;
  }
  uVar1 = snprintf((char *)(param_1 + 0xa1),0x10,"%s",param_2);
  return (ulong)uVar1;
}


