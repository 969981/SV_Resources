/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e8473c; name: FUN_01e8473c
 */


void FUN_01e8473c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_68;
  undefined4 local_5c;
  long *local_58;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  
  FUN_0177dbc8(&local_58,param_2 + 1,"+inner");
  plVar2 = local_58;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 6;
  }
  local_50 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 7;
  }
  lStack_48 = *plVar1;
  if (local_58 == (long *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = local_58[8];
  }
  local_38 = (long *)0x0;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  local_38 = plVar2;
  local_5c = 0;
  FUN_01e7b5fc(*param_2,0,*param_3);
  local_68 = 0;
  FUN_01945a78(param_1,&local_50,&local_5c,&local_68);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


