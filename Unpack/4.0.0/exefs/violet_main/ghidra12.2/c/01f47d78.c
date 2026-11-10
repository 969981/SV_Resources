/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f47d78; name: FUN_01f47d78
 */


void FUN_01f47d78(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_60;
  undefined4 local_54;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  long *local_18;
  
  FUN_0177dbc8(&local_18,param_2 + 0x18,"+inner");
  plVar2 = local_18;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 6;
  }
  local_50 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 7;
  }
  lStack_48 = *plVar1;
  if (local_18 == (long *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = local_18[8];
  }
  local_38 = (long *)0x0;
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x18))(local_18);
  }
  local_38 = plVar2;
  local_54 = 0;
  FUN_01f47e74(param_2);
  local_60 = 0;
  FUN_01945a78(param_1,&local_50,&local_54,&local_60);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


