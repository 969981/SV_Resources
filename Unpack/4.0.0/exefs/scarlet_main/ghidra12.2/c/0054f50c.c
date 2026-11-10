/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054f50c; name: FUN_0054f50c
 */


long * FUN_0054f50c(long *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)(param_2 + 0x10);
    plVar4 = (long *)*plVar1;
    if (*plVar4 != param_2) {
      do {
        lVar3 = *plVar1;
        plVar1 = (long *)(lVar3 + 0x10);
        plVar4 = (long *)*plVar1;
      } while (*plVar4 != lVar3);
    }
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[3] = param_1[3] + -1;
  FUN_01336080(param_1[1],param_2);
  plVar1 = *(long **)(param_2 + 0x80);
  if (plVar1 != (long *)0x0) {
    if (plVar1 == (long *)(param_2 + 0x60)) {
      pcVar2 = *(code **)(*plVar1 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*plVar1 + 0x18);
    }
    (*pcVar2)();
  }
  plVar1 = *(long **)(param_2 + 0x50);
  if (plVar1 != (long *)0x0) {
    if (plVar1 == (long *)(param_2 + 0x30)) {
      pcVar2 = *(code **)(*plVar1 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*plVar1 + 0x18);
    }
    (*pcVar2)();
  }
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],param_2,0x90,0x10);
  return plVar4;
}


