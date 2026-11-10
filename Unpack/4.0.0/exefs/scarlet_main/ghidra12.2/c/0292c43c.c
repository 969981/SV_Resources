/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292c43c; name: FUN_0292c43c
 */


undefined8 FUN_0292c43c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_01497d84();
  iVar1 = FUN_0154b6c8();
  if (iVar1 == 0) {
    FUN_014f5f08(param_1);
    iVar1 = FUN_0154b6d4();
    if (iVar1 == 0) {
      FUN_017e4fe4(param_1);
      FUN_014f5f00();
      uVar2 = FUN_014f5ef8();
      uVar2 = FUN_014f5f24(uVar2,0);
      return uVar2;
    }
  }
  return 0;
}


