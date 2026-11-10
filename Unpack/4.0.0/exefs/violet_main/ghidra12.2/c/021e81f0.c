/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e81f0; name: FUN_021e81f0
 */


void FUN_021e81f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_045a82a0;
  param_1[4] = 0;
  param_1[1] = &PTR_LAB_045a83b8;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 1;
  nn::os::InitializeLightEvent(param_1 + 5,0,1);
  FUN_00cc8850(param_1 + 7,param_2,param_3);
  *(undefined4 *)(param_1 + 0x15) = 0;
  return;
}


