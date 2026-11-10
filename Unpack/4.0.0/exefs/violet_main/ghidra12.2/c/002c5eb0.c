/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c5eb0; name: FUN_002c5eb0
 */


void FUN_002c5eb0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_002c5eb0(param_1,*param_2);
  FUN_002c5eb0(param_1,param_2[1]);
  FUN_002c1bf4(param_2 + 0x10,param_2[0x11]);
  FUN_002c648c(param_2 + 0xd,param_2[0xe]);
  FUN_002c1d18(param_2 + 10,param_2[0xb]);
  if ((*(byte *)(param_2 + 7) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[9]);
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[6]);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


