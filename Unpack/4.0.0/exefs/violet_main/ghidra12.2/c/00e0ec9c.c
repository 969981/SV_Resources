/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0ec9c; name: FUN_00e0ec9c
 */


undefined4 FUN_00e0ec9c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_18 [2];
  
  iVar6 = *(int *)(param_1 + 0xa8);
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + lVar8 * 8);
      if (lVar7 == 0) {
        if (*(long *)(*(long *)(param_1 + 0xc0) + lVar8 * 8) != 0) {
          FUN_029fc2ec(*(undefined8 *)(param_1 + 0x48));
          plVar4 = *(long **)(*(long *)(param_1 + 0xc0) + lVar8 * 8);
          *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar8 * 8) = 0;
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar9 = plVar4 + 2;
            do {
              lVar7 = *plVar9 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *plVar9 = lVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_00e0edb4;
          }
        }
      }
      else {
        local_18[0] = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x17c);
        FUN_00e09fe0(*(undefined8 *)(param_1 + 0x48),local_18,
                     *(long *)(*(long *)(param_1 + 0xc0) + lVar8 * 8) != 0);
        plVar4 = *(long **)(*(long *)(param_1 + 0xa0) + lVar8 * 8);
        *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar8 * 8) = 0;
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar9 = plVar4 + 2;
          do {
            lVar7 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        plVar4 = *(long **)(*(long *)(param_1 + 0xc0) + lVar8 * 8);
        *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar8 * 8) = 0;
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar9 = plVar4 + 2;
          do {
            lVar7 = *plVar9 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_00e0edb4:
          if (lVar7 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
      }
      iVar6 = *(int *)(param_1 + 0xa8);
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar6);
  }
  if (*(int *)(param_1 + 200) != 0) {
    plVar9 = *(long **)(param_1 + 0xc0);
    plVar4 = plVar9 + *(int *)(param_1 + 200);
    do {
      plVar4 = plVar4 + -1;
      plVar5 = (long *)*plVar4;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar4 != plVar9);
    iVar6 = *(int *)(param_1 + 0xa8);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (iVar6 != 0) {
    plVar9 = *(long **)(param_1 + 0xa0);
    plVar4 = plVar9 + iVar6;
    do {
      plVar4 = plVar4 + -1;
      plVar5 = (long *)*plVar4;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar4 != plVar9);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    plVar9 = *(long **)(param_1 + 0xb0);
    plVar4 = plVar9 + *(int *)(param_1 + 0xb8);
    do {
      plVar4 = plVar4 + -1;
      plVar5 = (long *)*plVar4;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar4 != plVar9);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    plVar9 = *(long **)(param_1 + 0x90);
    plVar4 = plVar9 + *(int *)(param_1 + 0x98);
    do {
      plVar4 = plVar4 + -1;
      plVar5 = (long *)*plVar4;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar4 != plVar9);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x40) = 4;
  return *(undefined4 *)(param_1 + 0x1e0);
}


