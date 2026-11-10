/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ca290; name: FUN_012ca290
 */


void FUN_012ca290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  nn::os::InitializeLightEvent(param_1 + 1,0,1);
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[6] = uVar1;
  param_1[7] = 0xfffffffffffffff;
  param_1[8] = 0;
  return;
}


