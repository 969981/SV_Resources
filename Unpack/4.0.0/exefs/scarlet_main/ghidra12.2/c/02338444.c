/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02338444; name: FUN_02338444
 */


void FUN_02338444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9)

{
  long lVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  
  if (*param_6 == 0) {
    uVar2 = FUN_01060ed0();
    FUN_02338510(&local_40,param_1,param_2,param_3,param_8,param_4,param_5,uVar2,param_9);
    local_38 = *param_6;
    *param_6 = 0;
    FUN_0199ade8(&local_38);
    lVar1 = local_40;
    local_40 = 0;
    *param_6 = lVar1;
    FUN_0199ade8(&local_40);
    return;
  }
  FUN_023387a4(param_1,param_2,param_3,param_8,*param_6,param_9);
  return;
}


