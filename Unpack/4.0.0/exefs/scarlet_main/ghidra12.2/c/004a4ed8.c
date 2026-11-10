/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a4ed8; name: FUN_004a4ed8
 */


long FUN_004a4ed8(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(int *)(param_2 + 0x7c) != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x20) + 0x188);
    if (plVar4 != (long *)0x0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x188);
      plVar3 = plVar1;
      do {
        while (((ulong)plVar4[4] < param_2 ||
               (((ulong)plVar4[4] <= param_2 && ((int)plVar4[5] < param_3))))) {
          plVar4 = (long *)plVar4[1];
          if (plVar4 == (long *)0x0) goto LAB_004a4f30;
        }
        plVar5 = (long *)*plVar4;
        plVar3 = plVar4;
        plVar4 = plVar5;
      } while (plVar5 != (long *)0x0);
LAB_004a4f30:
      if ((((plVar3 != plVar1) && ((ulong)plVar3[4] <= param_2)) &&
          (((ulong)plVar3[4] < param_2 || ((int)plVar3[5] <= param_3)))) && (plVar3[6] != 0)) {
        return plVar3[6];
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar2 = FUN_004a4ed8(), lVar2 != 0)) {
      return lVar2;
    }
  }
  return 0;
}


