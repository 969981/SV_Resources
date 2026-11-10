/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035347c; name: FUN_0035347c
 */


long FUN_0035347c(long param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [12];
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    return *(long *)(param_1 + 0x38);
  }
  auVar3 = FUN_0038e500(0);
  auVar3 = FUN_0038dfd0(auVar3._0_8_,auVar3._8_4_,DAT_047ef5f0,DAT_047ef5f8);
  dVar2 = (double)auVar3._0_8_ * 1000.0 + (double)auVar3._8_4_ / 1000000.0;
  if (0.0 <= dVar2) {
    if (dVar2 <= 9.223372036854776e+18) {
      lVar1 = (long)dVar2;
    }
    else {
      lVar1 = 0x7fffffffffffffff;
    }
  }
  else {
    lVar1 = 0;
  }
  *(long *)(param_1 + 0x38) = lVar1;
  *(undefined1 *)(param_1 + 0x34) = 1;
  return lVar1;
}


