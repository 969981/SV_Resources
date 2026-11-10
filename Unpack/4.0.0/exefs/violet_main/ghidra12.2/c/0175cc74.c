/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175cc74; name: FUN_0175cc74
 */


void FUN_0175cc74(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0x100000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0x400000;
  param_1[3] = 0;
  FUN_0175cca0();
  FUN_0175ccb0();
  return;
}


