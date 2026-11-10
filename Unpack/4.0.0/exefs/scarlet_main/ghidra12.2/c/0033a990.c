/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033a990; name: FUN_0033a990
 */


void FUN_0033a990(long param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int local_2c;
  undefined8 local_28;
  
  if (param_2 == 2) {
    if (*(int *)(param_1 + 0x38) != 1) {
      local_28 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x38) = 1;
      local_2c = 1;
      plVar4 = *(long **)(param_1 + 0x40);
      while (plVar4 != (long *)(param_1 + 0x48)) {
        FUN_0033d2f8(plVar4 + 5,&local_28,&local_2c);
        plVar2 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar2 = plVar4 + 2;
          if (*(long **)*plVar2 == plVar4) {
            plVar4 = (long *)*plVar2;
          }
          else {
            do {
              lVar3 = *plVar2;
              plVar2 = (long *)(lVar3 + 0x10);
              plVar4 = (long *)*plVar2;
            } while (*plVar4 != lVar3);
          }
        }
        else {
          do {
            plVar4 = plVar2;
            plVar2 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
      }
    }
    FUN_0033cd08(param_1);
  }
  else {
    local_28 = *(undefined8 *)(param_1 + 0x20);
    *(int *)(param_1 + 0x38) = param_2;
    plVar4 = *(long **)(param_1 + 0x40);
    local_2c = param_2;
    while (plVar4 != (long *)(param_1 + 0x48)) {
      FUN_0033d2f8(plVar4 + 5,&local_28,&local_2c);
      plVar2 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar2 = plVar4 + 2;
        if (*(long **)*plVar2 == plVar4) {
          plVar4 = (long *)*plVar2;
        }
        else {
          do {
            lVar3 = *plVar2;
            plVar2 = (long *)(lVar3 + 0x10);
            plVar4 = (long *)*plVar2;
          } while (*plVar4 != lVar3);
        }
      }
      else {
        do {
          plVar4 = plVar2;
          plVar2 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0033aa54 to 0033aa57 has its CatchHandler @ 0033aaec */
      (**(code **)*puVar1)();
    }
  }
  return;
}


