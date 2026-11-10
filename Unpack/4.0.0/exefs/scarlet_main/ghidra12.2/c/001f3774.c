/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f3774; name: FUN_001f3774
 */


undefined8 FUN_001f3774(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_001edb18();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xa0);
  }
  return uVar2;
}


