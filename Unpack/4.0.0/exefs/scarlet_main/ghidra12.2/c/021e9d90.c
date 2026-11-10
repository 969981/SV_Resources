/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e9d90; name: FUN_021e9d90
 */


void FUN_021e9d90(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x120);
  if (plVar1 != (long *)0x0) {
    do {
      if (plVar1[6] != 0) {
        FUN_022518ac();
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    plVar1 = *(long **)(param_1 + 0x120);
    if (plVar1 != (long *)0x0) {
      do {
        if (plVar1[7] != 0) {
          FUN_022518ac();
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
      plVar1 = *(long **)(param_1 + 0x120);
      if (plVar1 != (long *)0x0) {
        do {
          if (plVar1[8] != 0) {
            FUN_022518ac();
          }
          plVar1 = (long *)*plVar1;
        } while (plVar1 != (long *)0x0);
        plVar1 = *(long **)(param_1 + 0x120);
        if (plVar1 != (long *)0x0) {
          do {
            if (plVar1[9] != 0) {
              FUN_022518ac();
            }
            plVar1 = (long *)*plVar1;
          } while (plVar1 != (long *)0x0);
          for (plVar1 = *(long **)(param_1 + 0x120); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1
              ) {
            if (plVar1[10] != 0) {
              FUN_022518ac();
            }
          }
        }
      }
    }
  }
  for (plVar1 = *(long **)(param_1 + 0x1f0); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_022518b4(plVar1[6]);
  }
  return;
}


