/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216bc84; name: FUN_0216bc84
 */


void FUN_0216bc84(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_58;
  long lStack_50;
  long local_48;
  long *local_40;
  long *local_38;
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_00faae34(&local_38,param_2);
  plVar2 = local_38;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 6;
  }
  local_58 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 7;
  }
  lStack_50 = *plVar1;
  param_1 = param_1 + 0x680;
  if (local_38 == (long *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = local_38[8];
  }
  local_40 = (long *)0x0;
  if (local_38 == (long *)0x0) {
    local_40 = local_38;
    lVar3 = FUN_0216bd88(param_1,&local_58);
  }
  else {
    (**(code **)(*local_38 + 0x18))(local_38);
    local_40 = plVar2;
    lVar3 = FUN_0216bd88(param_1,&local_58);
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (lVar3 == 0) {
    FUN_00fab02c(param_1,&local_38,&local_18);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


