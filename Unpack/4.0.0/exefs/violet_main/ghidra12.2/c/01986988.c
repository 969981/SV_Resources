/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


