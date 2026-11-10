/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ce970; name: FUN_003ce970
 */


long FUN_003ce970(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((*(int *)(param_1 + 0x38) == 0) || (lVar2 = FUN_003aed10(param_1), lVar2 == 0)) ||
     (iVar1 = FUN_0047e430(), iVar1 == 0)) {
    lVar2 = FUN_003aecf0(param_1);
    return lVar2;
  }
  return lVar2;
}


