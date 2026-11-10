/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec0bf4; name: FUN_01ec0bf4
 */


void FUN_01ec0bf4(long param_1,void *param_2)

{
  long lVar1;
  void *__dest;
  char cVar2;
  undefined1 auStack_58 [40];
  
  if (*(long *)(param_1 + 0x50) + 3U < 0x19) {
    lVar1 = param_1 + 8;
    __dest = (void *)(param_1 + 0x80);
    if (*(char *)(param_1 + 0xa8) != '\0') {
      FUN_01ec0cc8(__dest,param_2,2,0,auStack_58);
      FUN_01ec0d6c(lVar1,auStack_58);
      if (*(char *)(param_1 + 0xa8) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_01ec0e20();
      }
      FUN_01ec0cc8(__dest,param_2,2,1,auStack_58);
      FUN_01ec0d6c(lVar1,auStack_58);
    }
    FUN_01ec0d6c(lVar1,param_2);
    cVar2 = *(char *)(param_1 + 0xa8);
    memcpy(__dest,param_2,0x28);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
  }
  return;
}


