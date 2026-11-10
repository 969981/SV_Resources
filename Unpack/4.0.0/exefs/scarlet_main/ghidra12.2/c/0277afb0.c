/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277afb0; name: FUN_0277afb0
 */


void FUN_0277afb0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  long *plVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *plStack_40;
  undefined2 local_38;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_40 = plVar1;
  local_38 = param_3;
  if (plVar1 == (long *)0x0) {
    FUN_0277b09c(param_1,&local_58);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_0277b09c(param_1,&local_58);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


