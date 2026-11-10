/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03454134; name: FUN_03454134
 */


void FUN_03454134(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  for (plVar2 = *(long **)(param_1 + 0x50); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar3 = plVar2[2];
    if ((*(int *)(lVar3 + 0x30) == param_2) && (*(short *)(*(long *)(lVar3 + 8) + 0x34) != 0x1820))
    {
      *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
    }
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    plVar5 = (long *)0x0;
    do {
      while ((plVar4 = plVar2, lVar3 = plVar4[2], *(int *)(lVar3 + 0x30) != param_2 ||
             (*(short *)(*(long *)(lVar3 + 8) + 0x34) == 0x1820))) {
        plVar2 = (long *)*plVar4;
        plVar5 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          return;
        }
      }
      FUN_0345541c(param_1,*(undefined4 *)(*(long *)(lVar3 + 8) + 0x30),lVar3,0);
      plVar2 = (long *)*plVar4;
      plVar1 = (long *)(param_1 + 0x28);
      if (*(long **)(param_1 + 0x28) != plVar4) {
        plVar1 = plVar5;
      }
      *plVar1 = (long)plVar2;
      if (*(long **)(param_1 + 0x30) == plVar4) {
        *(long **)(param_1 + 0x30) = plVar5;
      }
      *plVar4 = *(long *)(param_1 + 0x38);
      *(long **)(param_1 + 0x38) = plVar4;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    } while (plVar2 != (long *)0x0);
  }
  return;
}


