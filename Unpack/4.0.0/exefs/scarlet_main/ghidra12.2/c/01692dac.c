/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01692dac; name: FUN_01692dac
 */


void FUN_01692dac(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  iVar1 = FUN_01692e50(param_4);
  plVar3 = *(long **)(param_2 + 8);
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,(long)iVar1,8);
  *param_1 = uVar2;
  param_1[1] = plVar3;
  param_1[2] = (long)iVar1;
  param_1[3] = 8;
  iVar1 = FUN_01692e80(param_3,uVar2,param_4,iVar1);
  *param_5 = (long)iVar1;
  return;
}


