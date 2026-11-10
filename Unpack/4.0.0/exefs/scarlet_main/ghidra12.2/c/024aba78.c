/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024aba78; name: FUN_024aba78
 */


void FUN_024aba78(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *local_38;
  
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3,0x50,0x10);
  FUN_024a7ad4(uVar1,param_2);
  local_38 = param_3;
  if (param_3 == (long *)0x0) {
    local_38 = (long *)FUN_024a7940();
  }
  *param_1 = uVar1;
  FUN_024abca0(param_1 + 1,uVar1,param_3,&local_38);
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3,1,0x10);
  plVar2 = param_3;
  if (param_3 == (long *)0x0) {
    plVar2 = (long *)FUN_024a7940();
  }
  param_1[2] = uVar1;
  local_38 = plVar2;
  FUN_024abd44(param_1 + 3,uVar1,param_3,&local_38);
  return;
}


