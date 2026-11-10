/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003752d8; name: FUN_003752d8
 */


void FUN_003752d8(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 8) != param_2) {
    *(int *)(param_1 + 8) = param_2;
    plVar3 = *(long **)(param_1 + 0x10);
    while (plVar3 != (long *)(param_1 + 0x18)) {
      (**(code **)(*(long *)plVar3[5] + 0x18))((long *)plVar3[5],param_2);
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
    if (param_2 == 4) {
      FUN_003753ac((undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(long **)(param_1 + 0x10) = (long *)(param_1 + 0x18);
    }
  }
  return;
}


