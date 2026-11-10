/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c4ad4; name: FUN_015c4ad4
 */


void FUN_015c4ad4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *local_28;
  
  plVar2 = *(long **)(param_1 + 0x28);
  plVar1 = plVar2;
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = plVar2 + *(long *)(param_1 + 0x30) * 4;
  }
  if (plVar1 != plVar2) {
    do {
      if ((((char)plVar2[3] == '\0') && ((*plVar2 == 0 || (*(short *)(*plVar2 + 0x1a) == 0)))) ||
         (plVar2[2] == 0)) {
        FUN_015c59e0(&local_28,param_1 + 8);
        plVar2 = local_28;
      }
      else {
        plVar2 = plVar2 + 4;
      }
      plVar1 = *(long **)(param_1 + 0x28);
      if (*(long *)(param_1 + 0x30) != 0) {
        plVar1 = *(long **)(param_1 + 0x28) + *(long *)(param_1 + 0x30) * 4;
      }
    } while (plVar1 != plVar2);
  }
  return;
}


