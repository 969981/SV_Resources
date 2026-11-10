/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a2745c; name: FUN_02a2745c
 */


void FUN_02a2745c(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = 0xbf8;
  do {
    if (*(long **)(lVar2 + 0x4567160) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + 0x4567160) + 0x20))();
    }
    bVar1 = lVar2 != 0x18;
    lVar2 = lVar2 + -0x20;
  } while (bVar1);
  return;
}


