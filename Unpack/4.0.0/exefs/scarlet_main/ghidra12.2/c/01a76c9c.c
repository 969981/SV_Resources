/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a76c9c; name: FUN_01a76c9c
 */


undefined8 FUN_01a76c9c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  
  local_40 = *param_2;
  uStack_38 = param_2[1];
  local_30 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_28 = plVar1;
  if (plVar1 == (long *)0x0) {
    uVar2 = FUN_02162478(param_1,&local_40);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar2 = FUN_02162478(param_1,&local_40);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return uVar2;
}


