/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277844c; name: FUN_0277844c
 */


void FUN_0277844c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  long *plVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  undefined8 local_40;
  byte local_38;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_60 = *param_2;
  uStack_58 = param_2[1];
  local_50 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_48 = plVar1;
  local_40 = param_3;
  local_38 = param_4 & 1;
  if (plVar1 == (long *)0x0) {
    FUN_02778544(param_1,&local_60);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_02778544(param_1,&local_60);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


