/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ccc9c; name: FUN_001ccc9c
 */


undefined8 FUN_001ccc9c(char *param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  long lVar4;
  
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    lVar4 = 0;
    do {
      __s = *(char **)((long)&PTR_DAT_044844b8 + lVar4);
      sVar3 = strlen(__s);
      if ((sVar3 <= sVar2) && (iVar1 = FUN_001e0990(param_1 + (sVar2 - sVar3),__s), iVar1 != 0)) {
        return *(undefined8 *)((long)&PTR_s_image_gif_044844c0 + lVar4);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0xa0);
  }
  return 0;
}


