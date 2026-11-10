/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00542760; name: FUN_00542760
 */


void FUN_00542760(undefined1 *param_1,char *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  *param_1 = 0;
  if (*param_2 != '\0') {
    puVar4 = (undefined8 *)(param_1 + 8);
    *puVar4 = 0;
    uVar1 = FUN_01cf7e20();
    puVar5 = (undefined8 *)(param_1 + 0x10);
    *puVar5 = 0;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *puVar4 = puVar5;
    plVar6 = *(long **)(param_2 + 8);
    while (plVar6 != (long *)(param_2 + 0x10)) {
                    /* try { // try from 005427b8 to 005427c7 has its CatchHandler @ 00542828 */
      FUN_01d0202c(puVar4,puVar5,plVar6 + 4,plVar6 + 4);
      plVar2 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar2 = plVar6 + 2;
        if (*(long **)*plVar2 == plVar6) {
          plVar6 = (long *)*plVar2;
        }
        else {
          do {
            lVar3 = *plVar2;
            plVar2 = (long *)(lVar3 + 0x10);
            plVar6 = (long *)*plVar2;
          } while (*plVar6 != lVar3);
        }
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    *param_1 = 1;
  }
  return;
}


