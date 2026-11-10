/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056d2cc; name: FUN_0056d2cc
 */


void FUN_0056d2cc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  uVar1 = FUN_01cf7e20();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[1] = param_1 + 2;
  if (*(int *)(param_2 + 0x1c) == 1) {
    uVar1 = FUN_0025da00(param_3);
    *param_1 = uVar1;
  }
  return;
}


