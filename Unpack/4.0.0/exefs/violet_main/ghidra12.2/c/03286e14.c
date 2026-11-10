/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03286e14; name: FUN_03286e14
 */


void FUN_03286e14(undefined8 *param_1,long param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong local_88;
  long local_80;
  byte *pbStack_78;
  undefined8 local_70;
  ulong local_68;
  
  pbVar9 = (byte *)param_1[1];
  if (pbVar9 != (byte *)0x0) {
    pbVar7 = pbVar9;
    if ((*pbVar9 & 1) == 0) {
      do {
        pbVar7 = *(byte **)(pbVar7 + 8);
      } while ((*pbVar7 & 1) == 0);
    }
    if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) == 8) {
      uVar10 = *param_1;
      local_88 = param_1[2];
      if ((local_88 & 1) != 0) {
        piVar1 = (int *)((local_88 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_88 = param_1[2];
      }
      goto LAB_03286ea8;
    }
    pbVar9 = (byte *)0x0;
  }
  local_88 = 0;
  uVar10 = 0;
LAB_03286ea8:
  if (0 < (int)param_3) {
    uVar14 = 0;
    do {
      local_70 = 0;
      local_68 = 0;
      local_80 = 0;
      pbStack_78 = (byte *)0x0;
      (**(code **)(*(long *)(local_88 & 0xfffffffffffffffe) + 0x50))
                ((long *)(local_88 & 0xfffffffffffffffe),uVar10,pbVar9,&local_80);
      if ((long)uVar14 < (long)(int)local_70) {
        lVar11 = local_80 + (long)local_70._4_4_ * (long)(int)uVar14;
        pbVar7 = pbStack_78;
        uVar12 = local_68;
        if ((local_68 & 1) != 0) {
          piVar1 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        lVar11 = 0;
        pbVar7 = (byte *)0x0;
        uVar12 = 0;
      }
      if ((local_68 & 1) != 0) {
        plVar6 = (long *)(local_68 & 0xfffffffffffffffe);
        plVar13 = plVar6 + 1;
        do {
          lVar5 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *(int *)plVar13 = (int)lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      if (pbVar7 == (byte *)0x0) {
LAB_03286fd0:
        lVar11 = 0;
        uVar4 = 0;
      }
      else {
        pbVar8 = pbVar7;
        if ((*pbVar7 & 1) == 0) {
          do {
            pbVar8 = *(byte **)(pbVar8 + 8);
          } while ((*pbVar8 & 1) == 0);
        }
        if ((*(ulong *)(pbVar8 + 0x10) & 0x1f) != 5) {
          pbVar7 = (byte *)0x0;
          goto LAB_03286fd0;
        }
        uVar4 = uVar12;
        if ((uVar12 & 1) != 0) {
          piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      if ((uVar12 & 1) != 0) {
        plVar6 = (long *)(uVar12 & 0xfffffffffffffffe);
        plVar13 = plVar6 + 1;
        do {
          lVar5 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *(int *)plVar13 = (int)lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      plVar13 = (long *)(uVar4 & 0xfffffffffffffffe);
      (**(code **)(*plVar13 + 0x30))((double)*(float *)(param_2 + uVar14 * 4),plVar13,lVar11,pbVar7)
      ;
      if ((uVar4 & 1) != 0) {
        plVar6 = plVar13 + 1;
        do {
          lVar11 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = (int)lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar11 == 1)) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_3);
  }
  if ((local_88 & 1) != 0) {
    plVar6 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar13 = plVar6 + 1;
    do {
      lVar11 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar11 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}


