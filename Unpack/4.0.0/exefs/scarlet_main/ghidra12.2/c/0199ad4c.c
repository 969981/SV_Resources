/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199ad4c; name: FUN_0199ad4c
 */


void FUN_0199ad4c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  long local_18;
  
  if (*param_3 == 0) {
    uVar2 = FUN_01060ed0();
    FUN_0199ae60(&local_38,param_1,param_2,param_5,uVar2,param_6);
    local_18 = *param_3;
    *param_3 = 0;
    FUN_0199ade8(&local_18);
    lVar1 = local_38;
    local_38 = 0;
    *param_3 = lVar1;
    FUN_0199ade8(&local_38);
    return;
  }
  FUN_0199beb4(param_1,param_2,param_5,*param_3,param_6);
  return;
}


