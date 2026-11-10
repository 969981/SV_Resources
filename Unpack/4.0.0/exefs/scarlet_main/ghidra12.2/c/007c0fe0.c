/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c0fe0; name: FUN_007c0fe0
 */


long FUN_007c0fe0(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (0 < *(int *)(param_1 + 0xe8)) {
    plVar1 = (long *)(param_1 + 0xd8);
    if ((*plVar1 != 0) && (lVar5 = *plVar1 - (long)*(int *)(param_1 + 0xec), lVar5 != 0)) {
      if (param_3 == 2) {
        lVar3 = 0;
        do {
          if ((param_2 <= *(ulong *)(lVar5 + 0x18)) &&
             ((lVar3 == 0 || (*(ulong *)(lVar3 + 0x18) < *(ulong *)(lVar5 + 0x18))))) {
            lVar3 = lVar5;
          }
          plVar4 = *(long **)(*(int *)(param_1 + 0xec) + lVar5);
          lVar5 = 0;
          if (plVar4 != plVar1) {
            lVar5 = (long)plVar4 - (long)*(int *)(param_1 + 0xec);
          }
        } while (lVar5 != 0);
      }
      else if (param_3 == 1) {
        lVar3 = 0;
        do {
          if ((param_2 <= *(ulong *)(lVar5 + 0x18)) &&
             ((lVar3 == 0 || (*(ulong *)(lVar5 + 0x18) < *(ulong *)(lVar3 + 0x18))))) {
            lVar3 = lVar5;
          }
          plVar4 = *(long **)(*(int *)(param_1 + 0xec) + lVar5);
          lVar5 = 0;
          if (plVar4 != plVar1) {
            lVar5 = (long)plVar4 - (long)*(int *)(param_1 + 0xec);
          }
        } while (lVar5 != 0);
      }
      else if (param_3 == 0) {
        do {
          if (param_2 <= *(ulong *)(lVar5 + 0x18)) {
            return lVar5;
          }
          lVar3 = 0;
          plVar4 = *(long **)(*(int *)(param_1 + 0xec) + lVar5);
          lVar5 = 0;
          if (plVar4 != plVar1) {
            lVar5 = (long)plVar4 - (long)*(int *)(param_1 + 0xec);
          }
        } while (lVar5 != 0);
      }
      else {
        lVar3 = 0;
        do {
          lVar2 = lVar5;
          if (lVar3 != 0) {
            lVar2 = lVar3;
          }
          plVar4 = *(long **)(*(int *)(param_1 + 0xec) + lVar5);
          if (param_2 <= *(ulong *)(lVar5 + 0x18)) {
            lVar3 = lVar2;
          }
          lVar5 = 0;
          if (plVar4 != plVar1) {
            lVar5 = (long)plVar4 - (long)*(int *)(param_1 + 0xec);
          }
        } while (lVar5 != 0);
      }
      return lVar3;
    }
  }
  return 0;
}


