/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173b220; name: FUN_0173b220
 */


undefined8 FUN_0173b220(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_0155a574();
  if (iVar1 == 1) {
    uVar2 = FUN_0173b278(param_1);
    if ((uVar2 & 1) != 0) {
      return 2;
    }
  }
  else {
    if (iVar1 != 0) {
      return 2;
    }
    FUN_0173b29c(param_1);
    FUN_01497d74(param_1);
  }
  return 0;
}


