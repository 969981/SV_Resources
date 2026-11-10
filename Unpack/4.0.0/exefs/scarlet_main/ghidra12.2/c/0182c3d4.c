/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0182c3d4; name: FUN_0182c3d4
 */


void FUN_0182c3d4(long param_1)

{
  long lVar1;
  long local_38;
  undefined1 auStack_30 [16];
  
  lVar1 = FUN_0182c450(param_1 + 0x1c8);
  if (lVar1 == 0) {
    return;
  }
  FUN_0182c560(&local_38,param_1 + 0x1c8,lVar1);
  lVar1 = local_38;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_0182c6cc(auStack_30);
  }
  return;
}


