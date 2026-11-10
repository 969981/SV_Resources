/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294c9d0; name: FUN_0294c9d0
 */


bool FUN_0294c9d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((((*(int *)(lVar1 + 0x4c) < 1) && (*(int *)(lVar1 + 0x50) < 1)) &&
      (*(int *)(lVar1 + 0x54) < 1)) &&
     (((*(int *)(lVar1 + 0x58) < 1 && (*(int *)(lVar1 + 0x5c) < 1)) &&
      ((*(int *)(lVar1 + 0x60) < 1 && (*(int *)(lVar1 + 100) < 1)))))) {
    return 0 < *(int *)(lVar1 + 0x68);
  }
  return true;
}


