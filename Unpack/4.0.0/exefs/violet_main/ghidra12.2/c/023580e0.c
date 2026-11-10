/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023580e0; name: FUN_023580e0
 */


uint FUN_023580e0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined1 local_40;
  long *local_38;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  plVar1 = (long *)param_2[3];
  param_2[3] = 0;
  local_48 = param_2[4];
  local_40 = *(undefined1 *)(param_2 + 5);
  plVar3 = (long *)param_2[6];
  param_2[6] = 0;
  plStack_50 = plVar1;
  local_38 = plVar3;
  uVar2 = FUN_0235817c(param_1,&local_68);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return uVar2 & 1;
}


