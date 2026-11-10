/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ef7994; name: FUN_00ef7994
 */


uint FUN_00ef7994(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 ^ 0x10000000;
  if (0xf < (param_1 & 0xfff0 ^ param_1 >> 0x10 ^ param_2 >> 0x10 ^ param_2 & 0xfff0)) {
    uVar1 = param_2;
  }
  return uVar1;
}


