/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ae53c; name: FUN_017ae53c
 */


uint FUN_017ae53c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_30 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_28 = plVar1;
  if (plVar1 == (long *)0x0) {
    uVar2 = FUN_021eb010(uVar3,&local_40);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar2 = FUN_021eb010(uVar3,&local_40);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return uVar2 & 1;
}


