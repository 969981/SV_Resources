/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f47810; name: FUN_02f47810
 */


void FUN_02f47810(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  *(undefined8 *)(param_1 + 0x4d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x4d0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x4c8) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x4e0) = 0xffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  if (*(int *)(param_1 + 0x3c0) != 0) {
    plVar6 = *(long **)(param_1 + 0x3b8);
    plVar7 = plVar6 + *(int *)(param_1 + 0x3c0);
    do {
      plVar7 = plVar7 + -1;
      plVar4 = (long *)*plVar7;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar1 = plVar4 + 2;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
    } while (plVar7 != plVar6);
  }
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}


