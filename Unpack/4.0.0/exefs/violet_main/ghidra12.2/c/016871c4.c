/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016871c4; name: FUN_016871c4
 */


void FUN_016871c4(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = 0x7ffffffffffffff;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 1;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  nn::os::InitializeLightEvent(param_1 + 10,0,1);
  return;
}


