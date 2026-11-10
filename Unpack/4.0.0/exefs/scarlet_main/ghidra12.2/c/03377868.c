/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03377868; name: FUN_03377868
 */


void FUN_03377868(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  *(undefined8 *)(param_1 + 0x10) = param_2;
  puVar6 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar9 = *(long *)(param_1 + 0x18);
    lVar8 = lVar9 + (long)*(int *)(param_1 + 0x20) * 0x28;
    do {
      if (*(int *)(lVar8 + -8) != 0) {
        lVar10 = *(long *)(lVar8 + -0x10);
        lVar11 = lVar10 + (long)*(int *)(lVar8 + -8) * 0x18;
        do {
          puVar1 = (ulong *)(lVar11 + -8);
          lVar11 = lVar11 + -0x18;
          if ((*puVar1 & 1) != 0) {
            plVar7 = (long *)(*puVar1 & 0xfffffffffffffffe);
            plVar2 = plVar7 + 1;
            do {
              lVar5 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = (int)lVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        } while (lVar11 != lVar10);
      }
      *(undefined4 *)(lVar8 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar8 + -4)) && (*(long *)(lVar8 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*(long *)(lVar8 + -0x10),(ulong)*(uint *)(lVar8 + -4) * 0x18);
      }
      lVar10 = lVar8 + -0x28;
      *(undefined8 *)(lVar8 + -0x10) = 0;
      *(undefined4 *)(lVar8 + -4) = 0x80000000;
      if ((*(ulong *)(lVar8 + -0x18) & 1) != 0) {
        plVar7 = (long *)(*(ulong *)(lVar8 + -0x18) & 0xfffffffffffffffe);
        plVar2 = plVar7 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar7 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      lVar8 = lVar10;
    } while (lVar10 != lVar9);
    lVar8 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) && (-1 < *(int *)(param_1 + 0x30))) &&
       (*(undefined4 *)(lVar8 + 4) = 0xffffffff, 0 < *(int *)(param_1 + 0x30))) {
      lVar8 = 0;
      lVar9 = 0xc;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar9) = 0xffffffff;
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 8;
      } while (lVar8 < *(int *)(param_1 + 0x30));
    }
  }
  return;
}


