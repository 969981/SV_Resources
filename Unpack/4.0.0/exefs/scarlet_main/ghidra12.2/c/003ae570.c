/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ae570; name: FUN_003ae570
 */


undefined8 FUN_003ae570(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = FUN_003ae490(param_1,param_2);
    return uVar3;
  }
  lVar2 = FUN_00484190(param_3);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_003ae490(param_1,param_2,lVar2);
    if (iVar1 == 0) {
      FUN_0047e3b0(lVar2,PTR_FUN_047cd0a0);
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}


