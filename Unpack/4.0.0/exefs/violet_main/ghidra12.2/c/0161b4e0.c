/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0161b4e0; name: FUN_0161b4e0
 */


uint FUN_0161b4e0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 >> 4 & 0xf;
  if ((*param_1 & 0xf) != 1) {
    uVar1 = 10;
  }
  return uVar1;
}


