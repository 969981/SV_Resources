/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291c690; name: FUN_0291c690
 */


uint FUN_0291c690(uint param_1,uint param_2)

{
  return param_1 & 0xf0000000 | param_1 & 0x1ffffff | (param_2 & 7) << 0x19;
}


