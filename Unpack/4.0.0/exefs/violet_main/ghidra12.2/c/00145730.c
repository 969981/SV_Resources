/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


