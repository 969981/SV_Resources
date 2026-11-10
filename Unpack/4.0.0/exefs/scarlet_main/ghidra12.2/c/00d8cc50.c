/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8cc50; name: FUN_00d8cc50
 */


void FUN_00d8cc50(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    return;
  }
  uVar1 = FUN_00121b80();
  FUN_00c5fc50(param_1,uVar1,3);
  FUN_00123130(param_1,uVar1,param_3);
  FUN_00c5d960(param_1,param_3);
  FUN_00123130(param_1,uVar1,3);
  return;
}


