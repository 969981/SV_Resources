/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4d284; name: FUN_00f4d284
 */


void FUN_00f4d284(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  long *local_40;
  undefined1 auStack_38 [24];
  
  local_58 = 0x4c70ee31fb14466a;
  local_50 = "BoxInfo";
  local_48 = 7;
  local_40 = (long *)0x0;
  FUN_00fb4c10(auStack_38,param_2,&local_58);
  FUN_00f4d388(param_1,auStack_38);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  local_78 = 0x352b79c017918034;
  pcStack_70 = "JointName";
  local_68 = 9;
  local_60 = (long *)0x0;
  FUN_00cee868(&local_58,param_2,&local_78);
  plVar1 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x50) = local_58;
  *(char **)(param_1 + 0x58) = local_50;
  *(undefined8 *)(param_1 + 0x60) = local_48;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_40;
  local_40 = (long *)0x0;
  *(long **)(param_1 + 0x68) = plVar1;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


