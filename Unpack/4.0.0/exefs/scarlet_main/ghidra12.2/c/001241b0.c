/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001241b0; name: FUN_001241b0
 */


void FUN_001241b0(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00d34290();
  if (iVar1 == param_3) {
    return;
  }
  uVar2 = FUN_01b2ccf0(param_1,param_3);
  FUN_00123c80(param_1,param_2,uVar2);
  return;
}


