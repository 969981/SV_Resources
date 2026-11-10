/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019f84bc; name: FUN_019f84bc
 */


void FUN_019f84bc(undefined8 param_1)

{
  long lVar1;
  long local_38;
  undefined1 auStack_30 [16];
  
  lVar1 = FUN_019f8534();
  if (lVar1 == 0) {
    return;
  }
  FUN_019f863c(&local_38,param_1,lVar1);
  lVar1 = local_38;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_0297be34(auStack_30);
  }
  return;
}


