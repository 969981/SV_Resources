/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00145730; name: FUN_00145730
 */


ulong FUN_00145730(long *param_1)

{
  byte *pbVar1;
  long local_8;
  
  pbVar1 = (byte *)(*(code *)param_1[2])(param_1[4],param_1[3],&local_8);
  if (pbVar1 == (byte *)0x0 || local_8 == 0) {
    return 0xffffffff;
  }
  *param_1 = local_8 + -1;
  param_1[1] = (long)(pbVar1 + 1);
  return (ulong)*pbVar1;
}


