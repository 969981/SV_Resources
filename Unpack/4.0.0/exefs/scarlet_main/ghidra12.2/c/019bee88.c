/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bee88; name: FUN_019bee88
 */


void FUN_019bee88(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 8);
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,8);
  *param_1 = uVar1;
  param_1[1] = plVar2;
  param_1[2] = param_3;
  param_1[3] = 8;
  FUN_019bfa00(param_4,uVar1,param_5,param_3 & 0xffffffff);
  return;
}


