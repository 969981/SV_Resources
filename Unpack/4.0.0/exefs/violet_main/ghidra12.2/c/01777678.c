/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01777678; name: FUN_01777678
 */


void FUN_01777678(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *local_18;
  
  FUN_01777708(param_3,param_4);
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x70))(plVar1,0x1964);
  local_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    local_18 = plVar1 + 4;
    (**(code **)(plVar1[4] + 0x10))();
  }
  FUN_015c3dd0(param_2,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x18))();
  }
  return;
}


