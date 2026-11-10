/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f43fc; name: FUN_005f43fc
 */


undefined8 FUN_005f43fc(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar4 = param_1 + 1;
  plVar2 = (long *)*plVar4;
  if (plVar2 != (long *)0x0) {
    uVar1 = *param_2;
    plVar5 = plVar2;
    plVar7 = plVar4;
    do {
      if (*(uint *)(plVar5 + 4) >= uVar1) {
        plVar7 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < uVar1];
    } while (plVar5 != (long *)0x0);
    if (plVar7 == plVar4) {
      return 0;
    }
    if (*(uint *)(plVar7 + 4) <= uVar1) {
      plVar4 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar4 = plVar7 + 2;
        plVar5 = (long *)*plVar4;
        if ((long *)*plVar5 != plVar7) {
          do {
            lVar6 = *plVar4;
            plVar4 = (long *)(lVar6 + 0x10);
            plVar5 = (long *)*plVar4;
          } while (*plVar5 != lVar6);
        }
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar7) {
        *param_1 = plVar5;
      }
      param_1[3] = param_1[3] + -1;
      FUN_01336080(plVar2,plVar7);
      plVar2 = (long *)plVar7[10];
      if (plVar2 != (long *)0x0) {
        if (plVar2 == plVar7 + 6) {
          pcVar3 = *(code **)(*plVar2 + 0x10);
        }
        else {
          pcVar3 = *(code **)(*plVar2 + 0x18);
        }
        (*pcVar3)();
      }
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],plVar7,0x60,0x10);
      return 1;
    }
  }
  return 0;
}


