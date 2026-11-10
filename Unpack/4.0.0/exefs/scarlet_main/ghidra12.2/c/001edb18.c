/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001edb18; name: FUN_001edb18
 */


long FUN_001edb18(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_001f9090();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0xe4) >> 1 & 1) != 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(int *)(lVar1 + 0xdc) != 5) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


