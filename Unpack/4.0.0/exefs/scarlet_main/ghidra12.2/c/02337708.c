/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02337708; name: FUN_02337708
 */


void FUN_02337708(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  
  if (*param_4 == 0) {
    uVar2 = FUN_01060ed0();
    FUN_023377bc(&local_40,param_1,param_2,param_3,param_6,uVar2,param_7);
    local_38 = *param_4;
    *param_4 = 0;
    FUN_0199ade8(&local_38);
    lVar1 = local_40;
    local_40 = 0;
    *param_4 = lVar1;
    FUN_0199ade8(&local_40);
    return;
  }
  FUN_02337934(param_1,param_2,param_3,param_6,*param_4,param_7);
  return;
}


