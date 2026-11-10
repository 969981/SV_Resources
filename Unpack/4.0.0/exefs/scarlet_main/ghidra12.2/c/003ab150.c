/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ab150; name: FUN_003ab150
 */


undefined8 FUN_003ab150(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = FUN_0043def0();
    iVar1 = FUN_0043e700(uVar2,param_1);
    if (0 < iVar1) {
      return uVar2;
    }
    FUN_0043e1f0(uVar2);
  }
  return 0;
}


