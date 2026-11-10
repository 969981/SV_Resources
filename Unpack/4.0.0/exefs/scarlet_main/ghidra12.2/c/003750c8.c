/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003750c8; name: FUN_003750c8
 */


void FUN_003750c8(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 8) != 4) {
    plVar3 = *(long **)(param_1 + 0x10);
    while (plVar3 != (long *)(param_1 + 0x18)) {
                    /* try { // try from 00375124 to 0037512b has its CatchHandler @ 00375174 */
      (**(code **)(*(long *)plVar3[5] + 0x18))((long *)plVar3[5],4);
      plVar1 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar1 = plVar3 + 2;
        if (*(long **)*plVar1 == plVar3) {
          plVar3 = (long *)*plVar1;
        }
        else {
          do {
            lVar2 = *plVar1;
            plVar1 = (long *)(lVar2 + 0x10);
            plVar3 = (long *)*plVar1;
          } while (*plVar3 != lVar2);
        }
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
  }
  FUN_003753ac(param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  return;
}


