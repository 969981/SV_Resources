/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e4f10; name: FUN_017e4f10
 */


undefined8 FUN_017e4f10(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0155a574();
  if (iVar1 == 1) {
    FUN_017e4f6c(param_1);
    uVar2 = 2;
  }
  else {
    if (iVar1 != 0) {
      return 2;
    }
    FUN_017e4f84(param_1);
    uVar2 = 1;
  }
  FUN_01497d74(param_1);
  return uVar2;
}


