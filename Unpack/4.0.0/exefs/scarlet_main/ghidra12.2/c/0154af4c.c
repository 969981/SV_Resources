/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0154af4c; name: FUN_0154af4c
 */


long FUN_0154af4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x68), param_1 = lVar1, lVar2 != 0)) &&
     (lVar1 = *(long *)(lVar2 + 0x68), param_1 = lVar2, lVar1 != 0)) {
    param_1 = lVar1;
    for (lVar1 = *(long *)(lVar1 + 0x68); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x68)) {
      param_1 = lVar1;
    }
  }
  return param_1;
}


