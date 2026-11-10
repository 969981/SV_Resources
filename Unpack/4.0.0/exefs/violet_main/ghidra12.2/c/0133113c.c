/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133113c; name: FUN_0133113c
 */


void FUN_0133113c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return;
  }
  lVar7 = param_1[1];
  if (lVar7 == lVar8) {
    lVar7 = lVar8;
  }
  else {
    plVar4 = *(long **)(lVar7 + -0x30);
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar1 = plVar4 + 2;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    plVar4 = *(long **)(lVar7 + -0x38);
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar1 = plVar4 + 2;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    if (lVar7 + -0x40 != lVar8) {
      plVar4 = *(long **)(lVar7 + -0x70);
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar1 = plVar4 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      plVar4 = *(long **)(lVar7 + -0x78);
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar1 = plVar4 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      if (lVar7 + -0x80 != lVar8) {
        plVar4 = *(long **)(lVar7 + -0xb0);
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar1 = plVar4 + 2;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        plVar4 = *(long **)(lVar7 + -0xb8);
        lVar7 = lVar7 + -0xc0;
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar1 = plVar4 + 2;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        while (lVar7 != lVar8) {
          plVar4 = *(long **)(lVar7 + -0x30);
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar1 = plVar4 + 2;
            do {
              lVar6 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar6 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))();
            }
          }
          plVar4 = *(long **)(lVar7 + -0x38);
          lVar7 = lVar7 + -0x40;
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar1 = plVar4 + 2;
            do {
              lVar6 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar6 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))();
            }
          }
        }
      }
    }
    lVar7 = *param_1;
  }
  param_1[1] = lVar8;
  lVar8 = param_1[2];
  plVar4 = (long *)param_1[3];
  uVar5 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01331200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,lVar8 - lVar7,0x10);
    return;
  }
  FUN_00c48fe8(plVar4,lVar7,lVar8 - lVar7,0x10);
  return;
}


