/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277c4f0; name: FUN_0277c4f0
 */


void FUN_0277c4f0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = *param_2;
  uStack_38 = param_2[1];
  local_30 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_28 = plVar1;
  if (plVar1 == (long *)0x0) {
    FUN_0277c5c8(param_1,&local_40);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_0277c5c8(param_1,&local_40);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


