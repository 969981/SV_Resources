/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d37704; name: FUN_00d37704
 */


void FUN_00d37704(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x579) == '\0') {
    plVar4 = *(long **)(param_1 + 0x140);
    plVar2 = *(long **)(param_1 + 0x148);
    *(undefined1 *)(param_1 + 0x579) = 1;
    if (plVar4 != plVar2) {
      lVar5 = *plVar4;
      if (*(char *)(lVar5 + 0x11b) != '\0') {
        (**(code **)(*(long *)(lVar5 + 0x20) + 0x100))((long *)(lVar5 + 0x20));
        *(undefined1 *)(lVar5 + 0x11b) = 0;
        *(byte *)(lVar5 + 0x11c) = *(byte *)(lVar5 + 0x118) ^ 1;
      }
      while (plVar4 = plVar4 + 1, plVar4 != plVar2) {
        lVar5 = *plVar4;
        if (*(char *)(lVar5 + 0x11b) != '\0') {
          (**(code **)(*(long *)(lVar5 + 0x20) + 0x100))((long *)(lVar5 + 0x20));
          *(undefined1 *)(lVar5 + 0x11b) = 0;
          *(byte *)(lVar5 + 0x11c) = *(byte *)(lVar5 + 0x118) ^ 1;
        }
      }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x1b0);
    puVar3 = *(undefined8 **)(param_1 + 0x1b8);
    if (puVar1 != puVar3) {
      FUN_00d37830(*puVar1,0);
      while (puVar1 = puVar1 + 1, puVar1 != puVar3) {
        FUN_00d37830(*puVar1,0);
      }
    }
    plVar4 = *(long **)(param_1 + 0x138);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x58))(plVar4);
      FUN_00d37830(plVar4,0);
                    /* WARNING: Could not recover jumptable at 0x00d3777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x60))(plVar4);
      return;
    }
  }
  return;
}


