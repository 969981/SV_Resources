/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00185410; name: FUN_00185410
 */


int FUN_00185410(long *param_1)

{
  void *__dest;
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar2 = param_1[2];
  iVar4 = (int)lVar2 + -1;
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  else {
    lVar5 = (long)iVar4 * 0x408;
    iVar3 = 0;
    do {
      __dest = (void *)(*param_1 + lVar5);
      iVar1 = *(int *)((long)__dest + 0x400);
      iVar3 = iVar1 + iVar3;
      if (iVar1 == 0) {
        memcpy(__dest,(void *)(*param_1 + lVar2 * 0x408 + -0x408),0x408);
        lVar2 = param_1[2] + -1;
        param_1[2] = lVar2;
      }
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + -0x408;
    } while (-1 < iVar4);
  }
  return iVar3;
}


