/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01686964; name: FUN_01686964
 */


void FUN_01686964(long param_1,undefined8 param_2)

{
  FUN_016869c4();
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_016869a4(param_1 + 0xd0,param_2);
  FUN_016867e4(param_1 + 0x110);
  return;
}


