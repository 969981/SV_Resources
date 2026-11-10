/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ebb30; name: FUN_002ebb30
 */


long FUN_002ebb30(long *param_1)

{
  int iVar1;
  char *__s2;
  char *__s1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = 0;
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
LAB_002ebbc4:
      lVar2 = 0;
    }
    else {
      while( true ) {
        uVar3 = param_1[1];
        uVar4 = *(ulong *)(lVar2 + 0x18);
        if (uVar3 == uVar4) {
          do {
            lVar2 = *(long *)(lVar2 + 8);
            if (lVar2 == 0) goto LAB_002ebbc4;
            *param_1 = lVar2;
            param_1[1] = 0;
            uVar4 = *(ulong *)(lVar2 + 0x18);
          } while (uVar4 == 0);
          uVar3 = 0;
        }
        __s1 = (char *)param_1[2];
        if (__s1 == (char *)0x0) break;
        lVar5 = uVar3 * 0x18;
        while (uVar3 < uVar4) {
          lVar6 = *(long *)(lVar2 + 0x10);
          uVar3 = uVar3 + 1;
          param_1[1] = uVar3;
          __s2 = *(char **)(lVar6 + lVar5);
          if (__s2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          iVar1 = strcmp(__s1,__s2);
          lVar5 = lVar5 + 0x18;
          if (iVar1 == 0) {
            return lVar6 + lVar5 + -0x18;
          }
        }
        if (lVar2 == 0) {
          return 0;
        }
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      param_1[1] = uVar3 + 1;
      lVar2 = lVar2 + uVar3 * 0x18;
    }
  }
  return lVar2;
}


