/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0221341c; name: FUN_0221341c
 */


void FUN_0221341c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_1[2];
  uVar4 = *(undefined8 *)((long)param_1 + 0x15);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  param_2[5] = 0;
  *(undefined8 *)((long)param_2 + 0x15) = uVar4;
  param_2[2] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[4] = 0;
  FUN_00e76888(param_2 + 4,param_1 + 4);
  param_2[6] = param_1[6];
  return;
}


