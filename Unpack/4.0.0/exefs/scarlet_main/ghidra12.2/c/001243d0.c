/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001243d0; name: FUN_001243d0
 */


undefined8 FUN_001243d0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_14;
  
  iVar1 = FUN_00d34290();
  if (0 < iVar1) {
    param_3 = FUN_00c92df0(param_1,param_2,&local_14);
    if (local_14 == 0) {
      iVar1 = FUN_00121e90(param_1,param_2);
      if (iVar1 == 0) {
        uVar2 = FUN_01b2ccf0(param_1,3);
        FUN_00123c80(param_1,param_2,uVar2);
      }
      else {
        FUN_00123970(param_1,param_2,"number has no integer representation");
      }
    }
  }
  return param_3;
}


