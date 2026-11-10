/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322e3e8; name: FUN_0322e3e8
 */


void FUN_0322e3e8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  puVar4 = PTR_PTR_047d1a50;
  if ((param_2 == (long *)0x0) || (iVar8 = (int)param_1[1], 3 < iVar8)) {
    iVar7 = *(int *)((long)param_1 + 0xc);
    iVar8 = iVar7;
    if (3 < iVar7) {
      iVar8 = 4;
    }
    plVar5 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x40);
    plVar12 = (long *)*param_1;
    if (0 < iVar7) {
      iVar7 = 0;
      plVar10 = plVar5;
      plVar6 = plVar12;
      do {
        lVar11 = *plVar6;
        *plVar10 = lVar11;
        if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
          plVar1 = (long *)(lVar11 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar1 = plVar6 + 1;
        iVar7 = iVar7 + 1;
        plVar6 = plVar6 + 2;
        *(char *)(plVar10 + 1) = (char)*plVar1;
        plVar10 = plVar10 + 2;
      } while (iVar7 != iVar8);
      iVar7 = 0;
      do {
        plVar6 = (long *)*plVar12;
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
          plVar10 = plVar6 + 2;
          do {
            lVar11 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
        iVar7 = iVar7 + 1;
        plVar12 = plVar12 + 2;
      } while (iVar7 != iVar8);
      plVar12 = (long *)*param_1;
    }
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,plVar12,(long)*(int *)((long)param_1 + 0xc) << 4);
    uVar9 = 4;
    *param_1 = (long)plVar5;
  }
  else {
    plVar12 = (long *)*param_1;
    if (0 < iVar8) {
      iVar7 = 0;
      plVar6 = param_2;
      plVar5 = plVar12;
      do {
        lVar11 = *plVar5;
        *plVar6 = lVar11;
        if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
          plVar10 = (long *)(lVar11 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = *plVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar10 = plVar5 + 1;
        iVar7 = iVar7 + 1;
        plVar5 = plVar5 + 2;
        *(char *)(plVar6 + 1) = (char)*plVar10;
        plVar6 = plVar6 + 2;
      } while (iVar7 != iVar8);
      iVar7 = 0;
      do {
        plVar5 = (long *)*plVar12;
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
          plVar6 = plVar5 + 2;
          do {
            lVar11 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        iVar7 = iVar7 + 1;
        plVar12 = plVar12 + 2;
      } while (iVar7 != iVar8);
      plVar12 = (long *)*param_1;
    }
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,plVar12,((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) << 4);
    *param_1 = (long)param_2;
    uVar9 = 0x80000004;
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar9;
  return;
}


