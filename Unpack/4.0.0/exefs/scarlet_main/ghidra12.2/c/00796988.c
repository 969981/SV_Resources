/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


