/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033bbb38; name: FUN_033bbb38
 */


void FUN_033bbb38(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  *param_1 = &PTR_LAB_047b4720;
  if (*(int *)(param_1 + 6) != 0) {
    plVar12 = (long *)param_1[5];
    plVar6 = plVar12 + (long)*(int *)(param_1 + 6) * 3;
    do {
      lVar7 = *plVar12;
      if (lVar7 != 0) {
        puVar8 = (ulong *)plVar12[1];
        puVar9 = puVar8;
        while (uVar11 = *puVar9, ((uint)uVar11 >> 8 & 1) == 0) {
          if (((uVar11 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
          goto LAB_033bbbd4;
        }
        if ((puVar9 != (ulong *)0x0) &&
           ((code *)puVar9[(ulong)(byte)POPCOUNT((char)uVar11) + 2] != (code *)0x0)) {
          (*(code *)puVar9[(ulong)(byte)POPCOUNT((char)uVar11) + 2])(lVar7,puVar8,1);
          lVar7 = *plVar12;
          puVar8 = (ulong *)plVar12[1];
        }
LAB_033bbbd4:
        uVar10 = (uint)*puVar8;
        if ((uVar10 >> 0x13 & 1) == 0) {
          do {
            puVar8 = (ulong *)puVar8[1];
            uVar10 = (uint)*puVar8;
          } while ((uVar10 >> 0x13 & 1) == 0);
        }
        uVar11 = CONCAT44(uVar10,uVar10) & 0x7ffff0007ffff;
        (**(code **)(*(long *)puVar8[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                   POPCOUNT((char)(uVar11 >> 8)) +
                                                  POPCOUNT((char)(uVar11 >> 0x10))) + 2] + 0x20))
                  ((long *)puVar8[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                POPCOUNT((char)(uVar11 >> 8)) +
                                               POPCOUNT((char)(uVar11 >> 0x10))) + 2],lVar7);
        uVar11 = plVar12[2];
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[2] = 0;
        if ((uVar11 & 1) != 0) {
          plVar5 = (long *)(uVar11 & 0xfffffffffffffffe);
          plVar1 = plVar5 + 1;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar5 != (long *)0x0) && ((int)lVar7 == 1)) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar12 = plVar12 + 3;
    } while (plVar12 != plVar6);
    if (*(int *)(param_1 + 6) != 0) {
      lVar7 = param_1[5];
      lVar13 = lVar7 + (long)*(int *)(param_1 + 6) * 0x18;
      do {
        puVar8 = (ulong *)(lVar13 + -8);
        lVar13 = lVar13 + -0x18;
        if ((*puVar8 & 1) != 0) {
          plVar6 = (long *)(*puVar8 & 0xfffffffffffffffe);
          plVar12 = plVar6 + 1;
          do {
            lVar14 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *(int *)plVar12 = (int)lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar6 != (long *)0x0) && ((int)lVar14 == 1)) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      } while (lVar13 != lVar7);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) * 0x18);
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  param_1[5] = 0;
  puVar4 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 4) != 0) {
    lVar7 = param_1[3];
    lVar13 = lVar7 + (long)*(int *)(param_1 + 4) * 0x28;
    do {
      if ((*(ulong *)(lVar13 + -0x10) & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,*(ulong *)(lVar13 + -0x10) - 1,0);
      }
      puVar8 = (ulong *)(lVar13 + -0x18);
      lVar13 = lVar13 + -0x28;
      if ((*puVar8 & 1) != 0) {
        plVar6 = (long *)(*puVar8 & 0xfffffffffffffffe);
        plVar12 = plVar6 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    } while (lVar13 != lVar7);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) * 0x28);
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  param_1[3] = 0;
  if (*(int *)(param_1 + 2) != 0) {
    lVar13 = param_1[1];
    lVar7 = lVar13 + (long)*(int *)(param_1 + 2) * 0x40;
    do {
      lVar14 = lVar7 + -0x40;
      FUN_0320a6dc(lVar7 + -0x20);
      if ((*(ulong *)(lVar7 + -0x30) & 1) != 0) {
        plVar6 = (long *)(*(ulong *)(lVar7 + -0x30) & 0xfffffffffffffffe);
        plVar12 = plVar6 + 1;
        do {
          lVar7 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      lVar7 = lVar14;
    } while (lVar14 != lVar13);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[1],(ulong)*(uint *)((long)param_1 + 0x14) << 6);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


