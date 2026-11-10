/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322e604; name: FUN_0322e604
 */


void FUN_0322e604(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long *plVar12;
  long *plVar13;
  
  *param_1 = (long)&PTR_LAB_046aafc0;
  if ((int)param_1[8] != 0) {
    puVar10 = (undefined8 *)param_1[7];
    puVar2 = puVar10 + (int)param_1[8];
    do {
      for (puVar8 = *(undefined8 **)*puVar10; puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)puVar8[0xc]) {
        plVar12 = (long *)*puVar8;
        if (*(int *)(puVar8 + 1) != 0) {
          plVar13 = plVar12 + (long)*(int *)(puVar8 + 1) * 2;
          do {
            plVar13 = plVar13 + -2;
            plVar6 = (long *)*plVar13;
            if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
              plVar1 = plVar6 + 2;
              do {
                lVar7 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar7 + -1 == 0) {
                (**(code **)(*plVar6 + 0x18))();
              }
            }
          } while (plVar13 != plVar12);
          plVar12 = (long *)*puVar8;
        }
        *(undefined4 *)(puVar8 + 1) = 0;
        if ((plVar12 != puVar8 + 2) && (-1 < *(int *)((long)puVar8 + 0xc))) {
          FUN_0322e3e8(puVar8);
        }
        *(undefined1 *)(puVar8 + 10) = 0;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar2);
  }
  DAT_04885560 = 0;
  if ((-1 < (int)DAT_04885564) && (DAT_04885558 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,DAT_04885558,(ulong)DAT_04885564 << 2);
  }
  DAT_04885558 = 0;
  DAT_04885564 = 0x80000000;
  if ((DAT_04885568 != (undefined *)0x0) && (*(int *)(DAT_04885568 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],DAT_04885568,0);
    DAT_04885570 = 0;
    DAT_04885568 = &DAT_03d7702c;
  }
  puVar5 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar12 = (long *)(param_1[10] & 0xfffffffffffffffc);
    if (plVar12 != (long *)0x0) {
      if ((param_1[10] & 3U) == 0) {
        param_1[10] = (ulong)plVar12 | 1;
        do {
          lVar7 = *plVar12;
          plVar12 = (long *)(plVar12[1] & 0xfffffffffffffffc);
          (**(code **)(lVar7 + 8))();
        } while (plVar12 != (long *)0x0);
        param_1[10] = 0;
        if (*puVar5 == '\0') goto LAB_0322e824;
      }
      else {
        do {
          plVar13 = (long *)(plVar12[1] & 0xfffffffffffffffc);
          plVar12[1] = (ulong)plVar13 | 1;
          plVar12 = plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
    plVar12 = (long *)(param_1[9] & 0xfffffffffffffffc);
    if (plVar12 != (long *)0x0) {
      if ((param_1[9] & 3U) == 0) {
        param_1[9] = (ulong)plVar12 | 1;
        do {
          lVar7 = *plVar12;
          plVar12 = (long *)(plVar12[1] & 0xfffffffffffffffc);
          (**(code **)(lVar7 + 8))();
        } while (plVar12 != (long *)0x0);
        param_1[9] = 0;
      }
      else {
        do {
          plVar13 = (long *)(plVar12[1] & 0xfffffffffffffffc);
          plVar12[1] = (ulong)plVar13 | 1;
          plVar12 = plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_0322e824:
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 3);
  }
  lVar7 = param_1[5];
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    param_1[5] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  puVar5 = PTR_DAT_047d1a08;
  if ((int)param_1[4] != 0) {
    puVar9 = (ulong *)param_1[3];
    puVar11 = puVar9 + (long)(int)param_1[4] * 2;
    do {
      plVar12 = (long *)puVar11[-1];
      puVar11 = puVar11 + -2;
      if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
        plVar13 = plVar12 + 2;
        do {
          lVar7 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))();
        }
      }
      if ((*puVar11 & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,*puVar11 - 1,0);
      }
    } while (puVar11 != puVar9);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 4);
  }
  param_1[3] = 0;
  puVar5 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
  return;
}


