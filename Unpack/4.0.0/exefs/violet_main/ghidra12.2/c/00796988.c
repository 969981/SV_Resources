/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00796988; name: FUN_00796988
 */


ulong FUN_00796988(long param_1)

{
  ulong uVar1;
  ulong local_8;
  
  memcpy(&local_8,(void *)(param_1 + 0x10),8);
  uVar1 = (local_8 & 0xff00ff00ff00ff00) >> 8 | (local_8 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar1 >> 0x20 | uVar1 << 0x20;
}


