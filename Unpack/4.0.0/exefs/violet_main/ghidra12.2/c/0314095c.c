/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314095c; name: FUN_0314095c
 */


void FUN_0314095c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  *param_1 = (long)&PTR_LAB_046554a8;
  param_1[3] = (long)&PTR_LAB_046554e8;
  plVar4 = (long *)param_1[0x32];
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar9 = plVar4 + 2;
    do {
      lVar6 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if ((int)param_1[0x17] != 0) {
    lVar6 = param_1[0x16];
    lVar8 = lVar6 + (long)(int)param_1[0x17] * 0x60;
    do {
      plVar4 = *(long **)(lVar8 + -0x10);
      lVar8 = lVar8 + -0x60;
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
    } while (lVar8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x16],(ulong)*(uint *)((long)param_1 + 0xbc) * 0x60);
  }
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  param_1[0x16] = 0;
  if ((int)param_1[0x15] != 0) {
    plVar4 = (long *)param_1[0x14];
    plVar9 = plVar4 + (long)(int)param_1[0x15] * 0xc;
    do {
      plVar9 = plVar9 + -0xc;
      plVar5 = (long *)*plVar9;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
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
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar9 != plVar4);
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x14],(ulong)*(uint *)((long)param_1 + 0xac) * 0x60);
  }
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  param_1[0x14] = 0;
  if ((int)param_1[0x13] != 0) {
    lVar8 = param_1[0x12];
    lVar6 = (long)(int)param_1[0x13] * 0xd0;
    do {
      FUN_030fd1ac(lVar8 + -0xd0 + lVar6);
      lVar6 = lVar6 + -0xd0;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x12],(ulong)*(uint *)((long)param_1 + 0x9c) * 0xd0);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  FUN_030ff630(param_1 + 4);
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


