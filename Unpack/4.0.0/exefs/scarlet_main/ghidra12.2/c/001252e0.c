/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001252e0; name: FUN_001252e0
 */


char * FUN_001252e0(long param_1,long *param_2,uint param_3,long *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_2;
  if ((*(byte *)((long)param_2 + 0x3e) >> 1 & 1) == 0) {
    lVar1 = *(long *)(*plVar3 + 0x18);
    if ((int)param_3 < 0) {
      if ((*(char *)(lVar1 + 0xb) == '\0') || ((int)param_3 < -*(int *)((long)param_2 + 0x2c))) {
        return (char *)0x0;
      }
      pcVar2 = "(vararg)";
      plVar3 = plVar3 + (long)*(int *)((long)param_2 + 0x2c) * -2 + (long)(int)~param_3 * 2;
      goto LAB_001253b0;
    }
    pcVar2 = (char *)FUN_00129d10(lVar1,param_3,
                                  (int)((ulong)(param_2[4] - *(long *)(lVar1 + 0x40)) >> 2) + -1);
    if (pcVar2 == (char *)0x0) goto LAB_00125340;
  }
  else {
LAB_00125340:
    if (*(long **)(param_1 + 0x20) == param_2) {
      plVar4 = (long *)(param_1 + 0x10);
    }
    else {
      plVar4 = (long *)param_2[3];
    }
    if ((int)param_3 < 1) {
      return (char *)0x0;
    }
    if (*plVar4 - (long)(plVar3 + 2) >> 4 < (long)(int)param_3) {
      return (char *)0x0;
    }
    pcVar2 = "(temporary)";
    if ((*(byte *)((long)param_2 + 0x3e) & 2) != 0) {
      pcVar2 = "(C temporary)";
    }
  }
  if (param_4 == (long *)0x0) {
    return pcVar2;
  }
  plVar3 = plVar3 + 2 + (long)(int)(param_3 - 1) * 2;
LAB_001253b0:
  *param_4 = (long)plVar3;
  return pcVar2;
}


