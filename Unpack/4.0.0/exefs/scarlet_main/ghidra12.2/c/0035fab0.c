/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035fab0; name: FUN_0035fab0
 */


void FUN_0035fab0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0x18;
  FUN_0038db40(lVar1);
  uVar2 = *(long *)(param_1 + 0x40) + 1;
  *(ulong *)(param_1 + 0x40) = uVar2;
  if (uVar2 == *(uint *)(param_1 + 0x60)) {
    FUN_0038db60(lVar1);
    FUN_0035fb10(param_1);
    return;
  }
  if (*(uint *)(param_1 + 0x60) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_0038db60(lVar1);
  return;
}


