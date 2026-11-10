/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03174ac0; name: FUN_03174ac0
 */


void FUN_03174ac0(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  *param_1 = (long)&PTR_LAB_04689218;
  puVar5 = PTR_PTR_047d1a50;
  if ((int)param_1[7] != 0) {
    lVar8 = param_1[6];
    lVar10 = (long)(int)param_1[7] * 0x18;
    do {
      lVar2 = lVar8 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -0xc)) && (*(long *)(lVar2 + -0x18) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,*(long *)(lVar2 + -0x18),(ulong)*(uint *)(lVar2 + -0xc) << 4);
      }
      lVar10 = lVar10 + -0x18;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined4 *)(lVar2 + -0xc) = 0x80000000;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) * 0x18);
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  param_1[6] = 0;
  if ((int)param_1[5] != 0) {
    plVar9 = (long *)param_1[4];
    plVar7 = plVar9 + (long)(int)param_1[5] * 2;
    do {
      plVar7 = plVar7 + -2;
      plVar6 = (long *)*plVar7;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (plVar7 != plVar9);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 4);
  }
  plVar7 = (long *)param_1[3];
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar9 = plVar7 + 2;
    do {
      lVar10 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


