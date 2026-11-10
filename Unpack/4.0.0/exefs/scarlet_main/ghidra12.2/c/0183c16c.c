/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183c16c; name: FUN_0183c16c
 */


long * FUN_0183c16c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  iVar2 = FUN_0183c1f4(param_1,param_3,param_4,uVar1,param_5);
  if (iVar2 == 0) {
    return param_2;
  }
  plVar3 = (long *)FUN_014813f4(param_1,iVar2);
  return plVar3;
}


