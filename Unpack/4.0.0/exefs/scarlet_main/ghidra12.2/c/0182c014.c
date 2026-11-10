/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0182c014; name: FUN_0182c014
 */


void FUN_0182c014(long param_1)

{
  long lVar1;
  long local_38;
  undefined1 auStack_30 [16];
  
  lVar1 = FUN_0182c090(param_1 + 0x160);
  if (lVar1 == 0) {
    return;
  }
  FUN_0182c1a0(&local_38,param_1 + 0x160,lVar1);
  lVar1 = local_38;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_0182c30c(auStack_30);
  }
  return;
}


