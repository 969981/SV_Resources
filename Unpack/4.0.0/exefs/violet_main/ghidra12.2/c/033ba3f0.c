/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ba3f0; name: FUN_033ba3f0
 */


void FUN_033ba3f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  *param_1 = &PTR_FUN_047b46b8;
  if (*(int *)(param_1 + 0x11) != 0) {
    plVar12 = (long *)param_1[0x10];
    plVar6 = plVar12 + (long)*(int *)(param_1 + 0x11) * 3;
    do {
      lVar7 = *plVar12;
      if (lVar7 != 0) {
        puVar8 = (ulong *)plVar12[1];
        puVar9 = puVar8;
        while (uVar11 = *puVar9, ((uint)uVar11 >> 8 & 1) == 0) {
          if (((uVar11 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
          goto LAB_033ba488;
        }
        if ((puVar9 != (ulong *)0x0) &&
           ((code *)puVar9[(ulong)(byte)POPCOUNT((char)uVar11) + 2] != (code *)0x0)) {
          (*(code *)puVar9[(ulong)(byte)POPCOUNT((char)uVar11) + 2])(lVar7,puVar8,1);
          lVar7 = *plVar12;
          puVar8 = (ulong *)plVar12[1];
        }
LAB_033ba488:
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
  }
  FUN_033bbb38(param_1 + 0x14);
  if (*(int *)(param_1 + 0x11) != 0) {
    lVar7 = param_1[0x10];
    lVar13 = lVar7 + (long)*(int *)(param_1 + 0x11) * 0x18;
    do {
      puVar8 = (ulong *)(lVar13 + -8);
      lVar13 = lVar13 + -0x18;
      if ((*puVar8 & 1) != 0) {
        plVar6 = (long *)(*puVar8 & 0xfffffffffffffffe);
        plVar12 = plVar6 + 1;
        do {
          lVar4 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    } while (lVar13 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) * 0x18);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[7] = PTR_DAT_047e6928 + 0x10;
  FUN_0337767c(param_1 + 10);
  param_1[2] = PTR_DAT_047e5b98 + 0x10;
  if (*(int *)(param_1 + 4) != 0) {
    lVar7 = param_1[3];
    lVar13 = lVar7 + (long)*(int *)(param_1 + 4) * 0x18;
    do {
      puVar8 = (ulong *)(lVar13 + -8);
      lVar13 = lVar13 + -0x18;
      if ((*puVar8 & 1) != 0) {
        plVar6 = (long *)(*puVar8 & 0xfffffffffffffffe);
        plVar12 = plVar6 + 1;
        do {
          lVar4 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    } while (lVar13 != lVar7);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) * 0x18);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  return;
}


