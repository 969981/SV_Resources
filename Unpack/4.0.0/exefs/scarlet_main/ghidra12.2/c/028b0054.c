/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b0054; name: FUN_028b0054
 */


void FUN_028b0054(void)

{
  long lVar1;
  uint uVar2;
  
  if (0 < (int)DAT_04865a18) {
    lVar1 = (ulong)DAT_04865a18 << 3;
    uVar2 = DAT_04865a18;
    do {
      uVar2 = uVar2 - 1;
      if (0x3ff < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01dace90();
      }
      (**(code **)(**(long **)(&DAT_04863a10 + lVar1) + 8))();
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  DAT_04865a18 = 0;
  return;
}


