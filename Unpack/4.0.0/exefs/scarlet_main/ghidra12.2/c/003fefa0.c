/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fefa0; name: FUN_003fefa0
 */


undefined4
FUN_003fefa0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_003ed410(param_5);
  lVar3 = FUN_003ed5c0(param_5);
  if (lVar3 == 0) {
LAB_003ff038:
    uVar2 = 0;
  }
  else {
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = FUN_003f27e0(lVar3,param_3,param_5);
      }
      else {
        iVar1 = FUN_003f1d10(lVar3,param_2,param_3,param_5);
      }
      param_2 = lVar3;
      if (iVar1 == 0) goto LAB_003ff038;
    }
    uVar2 = FUN_003ff060(0,param_1,param_2,param_4,param_5);
  }
  FUN_003ed530(param_5);
  return uVar2;
}


