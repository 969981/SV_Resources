/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02984fb4; name: FUN_02984fb4
 */


void FUN_02984fb4(undefined8 param_1,long *param_2,long *param_3,undefined2 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_54 [4];
  long *local_38;
  
  local_54[0] = (undefined1)param_5;
  local_38 = param_3;
  uVar2 = FUN_01243584();
  uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_029851ac(uVar2,uVar1,param_5,*param_4);
  uVar2 = FUN_01243584(param_1);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01636f5c(uVar2,uVar1,param_3,0x100);
  uVar2 = FUN_01243584(param_1);
  FUN_029851c8(uVar2,param_2,1,local_54,&local_38,0);
  FUN_029856b0(param_1,param_2,local_38,param_4,param_6);
  return;
}


