/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b3940; name: FUN_008b3940
 */


long * FUN_008b3940(long *param_1,char *param_2,byte param_3)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  
  plVar2 = (long *)FUN_00896e78(0x18);
  if (plVar2 != (long *)0x0) {
    *plVar2 = (long)(PTR_DAT_047d2408 + 0x10);
    plVar2[1] = -1;
    *(undefined4 *)(plVar2 + 2) = 0;
  }
  plVar3 = (long *)FUN_00896e78(0xa0);
  if (plVar3 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    lVar4 = 0;
    plVar3[0x12] = (long)plVar2;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    *(byte *)(plVar3 + 0x13) = param_3 & 1;
    *(undefined1 *)(plVar3 + 2) = 0;
    cVar1 = *param_2;
    plVar6 = plVar3;
    while (cVar1 != '\0') {
      *(char *)(plVar6 + 2) = cVar1;
      if (((int)lVar4 == 0x7e) || (param_2[lVar4 + 1] == '\0')) {
        lVar4 = lVar4 + 1;
        plVar6 = (long *)((long)plVar6 + 0x11);
        goto LAB_008b39f4;
      }
      *(char *)((long)plVar6 + 0x11) = param_2[lVar4 + 1];
      lVar4 = lVar4 + 2;
      plVar6 = (long *)((long)plVar3 + lVar4);
      cVar1 = param_2[lVar4];
    }
    plVar6 = plVar6 + 2;
LAB_008b39f4:
    *(undefined1 *)plVar6 = 0;
    pcVar5 = param_2 + lVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    lVar4 = *plVar3;
    *plVar3 = *param_1;
    *(long **)(lVar4 + 8) = param_1;
    *(long **)(*param_1 + 8) = plVar3;
    *param_1 = lVar4;
  }
  return plVar2;
}


