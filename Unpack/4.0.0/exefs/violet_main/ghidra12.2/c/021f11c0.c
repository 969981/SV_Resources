/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f11c0; name: FUN_021f11c0
 */


uint FUN_021f11c0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xff) << 1;
  return param_1 & (3 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU) |
         (param_3 & 0xff) << (ulong)(uVar1 & 0x1f);
}


