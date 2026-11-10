/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02467810; name: FUN_02467810
 */


undefined8 FUN_02467810(char *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = FUN_0175cca0();
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      lVar2 = FUN_0175ccb0();
      iVar1 = strcmp(*(char **)(lVar2 + lVar3 * 8),param_1);
      if (iVar1 == 0) {
        return 1;
      }
      lVar3 = lVar3 + 1;
      iVar1 = FUN_0175cca0();
    } while (lVar3 < iVar1);
  }
  return 0;
}


