/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c85cc; name: FUN_014c85cc
 */


void FUN_014c85cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1a8);
  while( true ) {
    lVar1 = param_1;
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    if (lVar1 == param_1) break;
    lVar2 = *(long *)(lVar1 + 0x1a8);
    param_1 = lVar1;
  }
  if ((*(byte *)(param_1 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  FUN_014c8e54(param_1 + 0x1f0);
  return;
}


