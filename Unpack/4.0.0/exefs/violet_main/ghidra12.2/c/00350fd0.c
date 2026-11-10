/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00350fd0; name: FUN_00350fd0
 */


void FUN_00350fd0(void *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  byte bVar8;
  
  iVar4 = FUN_0038dac0();
  if (iVar4 == 0) {
    return;
  }
  if ((void *)0x4 < param_1) {
    bVar8 = *(byte *)((long)param_1 + 0x2d);
    do {
      if (bVar8 == 0xff) {
        if ((((ulong)*(byte *)((long)param_1 + 0x20) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x20) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x21) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x21) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x22) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x22) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x23) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x23) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x24) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x24) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x25) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x25) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x26) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x26) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x27) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x27) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x28) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x28) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x29) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x29) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x2a) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2a) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        if ((((ulong)*(byte *)((long)param_1 + 0x2b) != 0xff) &&
            (puVar5 = *(undefined8 **)
                       ((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2b) * 8 + 0x38),
            puVar5 != (undefined8 *)0x0)) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
          do {
            lVar7 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)puVar5[3])(puVar5[4]);
          }
        }
        free(*(void **)((long)param_1 + 8));
        free(param_1);
        return;
      }
      if (4 < *(ulong *)((long)param_1 + (ulong)bVar8 * 8 + 0x38)) {
        FUN_00350fd0();
      }
      bVar1 = *(byte *)((long)param_1 + (ulong)bVar8 * 8 + 0x40);
      bVar3 = bVar1 != 0xff;
      if (*(byte *)((long)param_1 + 0x2e) != bVar8) {
        bVar3 = bVar1 == 0xff;
      }
      bVar8 = bVar1;
    } while (!bVar3);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


