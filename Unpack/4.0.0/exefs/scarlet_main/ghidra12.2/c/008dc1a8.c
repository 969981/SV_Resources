/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dc1a8; name: thunk_FUN_008dc1b4
 */


long thunk_FUN_008dc1b4(long param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  do {
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 != 0) {
      plVar4 = *(long **)(param_1 + 0xb8);
      while (plVar4 != (long *)0x0) {
        if (*plVar4 == param_2) {
          return lVar3;
        }
        puVar1 = (uint *)(plVar4 + 1);
        plVar2 = (long *)((long)plVar4 + (ulong)*puVar1);
        plVar4 = (long *)0x0;
        if (*puVar1 != 0) {
          plVar4 = plVar2;
        }
        lVar3 = lVar3 + 0x90;
      }
    }
    param_1 = *(long *)(param_1 + 0x4a8);
  } while (param_1 != 0);
  return 0;
}


