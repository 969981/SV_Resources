/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ecbe0; name: FUN_003ecbe0
 */


undefined4 FUN_003ecbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  FUN_003ed410(param_4);
  lVar2 = FUN_003ed5c0(param_4);
  if ((lVar2 == 0) || (lVar3 = FUN_003eb8f0(lVar2,param_2), lVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_003ec870(param_1,lVar2,param_3);
  }
  FUN_003ed530(param_4);
  return uVar1;
}


