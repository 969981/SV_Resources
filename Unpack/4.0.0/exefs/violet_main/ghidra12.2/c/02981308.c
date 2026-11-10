/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02981308; name: FUN_02981308
 */


void FUN_02981308(undefined8 param_1,undefined2 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined2 local_34 [2];
  
  FUN_02984fb4(param_1,*param_3,param_3[1],param_3[4],*(undefined1 *)((long)param_3 + 0x12),
               *(undefined1 *)((long)param_3 + 0x13));
  local_34[0] = *(undefined2 *)(param_3 + 2);
  plVar2 = (long *)param_3[1];
  uVar1 = (**(code **)(*plVar2 + 0x598))(plVar2,local_34);
  if ((uVar1 & 1) != 0) {
    FUN_029850a0(param_1,plVar2);
  }
  *param_2 = local_34[0];
  FUN_029850d8(param_1,*param_3,param_3[1],param_3[4]);
  FUN_02985114(param_1,*param_3,param_3[1],param_3[4],param_3[3],*param_2);
  FUN_02985158(param_1,*param_3,param_3[1],param_3[4],*(undefined1 *)((long)param_3 + 0x12),*param_2
               ,*(undefined1 *)((long)param_3 + 0x13));
  return;
}


