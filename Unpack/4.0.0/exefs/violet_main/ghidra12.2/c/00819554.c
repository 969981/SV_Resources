/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00819554; name: FUN_00819554
 */


long * FUN_00819554(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_008194e0(*param_1 + param_1[2],param_1[1] - param_1[2],param_2,0xffffffffffffffff);
  param_1[2] = param_1[2] + lVar1;
  return param_1;
}


