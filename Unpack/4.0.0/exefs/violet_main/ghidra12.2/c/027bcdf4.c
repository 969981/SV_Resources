/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bcdf4; name: FUN_027bcdf4
 */


void FUN_027bcdf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  local_8 = param_3;
  FUN_027bd320(&local_30,&local_8,param_2);
  uVar2 = uStack_28;
  uVar1 = local_30;
  local_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  FUN_027bd3bc(&local_30);
  return;
}


