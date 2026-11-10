/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cb820; name: FUN_001cb820
 */


void FUN_001cb820(undefined8 *param_1,undefined8 param_2)

{
  memset(param_1 + 1,0,0x1b8);
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}


