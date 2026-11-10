/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e2194; name: FUN_011e2194
 */


undefined1 FUN_011e2194(void)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_011e2dd4();
  if (lVar2 == 0) {
    uVar1 = 6;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 4);
  }
  return uVar1;
}


