/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024acc84; name: FUN_024acc84
 */


void FUN_024acc84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  long local_18;
  
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 8) == 1)) {
    FUN_024a5f18(param_1,param_2,1,2);
    return;
  }
  uVar1 = (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],0x20,0x10);
  FUN_024a7890(uVar1,(undefined8 *)*param_1,*(undefined8 *)*param_1,param_1[5]);
  local_18 = param_1[5];
  if (local_18 == 0) {
    local_18 = FUN_024a7940();
  }
  FUN_024ad058(param_1,uVar1,param_1,&local_18);
  local_38 = *(undefined8 *)(*(long *)*param_1 + 8);
  FUN_024a64b0(param_1,param_2,1,&local_38,0);
  return;
}


