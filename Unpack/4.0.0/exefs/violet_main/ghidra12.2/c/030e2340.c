/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e2340; name: FUN_030e2340
 */


void FUN_030e2340(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = *param_2;
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
    plVar6 = (long *)(param_3 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 2);
  *(long *)(param_1 + 2) = param_3;
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
  param_1[6] = 0;
  if ((-1 < (int)param_1[7]) && (*(long *)(param_1 + 4) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 4),(ulong)(uint)param_1[7] << 3);
  }
  lVar7 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[7] = 0x80000000;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    *(undefined **)(param_1 + 8) = &DAT_03d7702c;
    param_1[10] = 0;
  }
  puVar5 = PTR_PTR_047d1a50;
  plVar6 = (long *)(param_1 + 0xc);
  if (param_1[0xe] != 0) {
    lVar8 = *plVar6;
    lVar7 = (long)(int)param_1[0xe] * 0x28;
    do {
      lVar2 = lVar8 + lVar7;
      *(undefined4 *)(lVar2 + -0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -0xc)) && (*(long *)(lVar2 + -0x18) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,*(long *)(lVar2 + -0x18),(ulong)*(uint *)(lVar2 + -0xc) << 2);
      }
      lVar7 = lVar7 + -0x28;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined4 *)(lVar2 + -0xc) = 0x80000000;
    } while (lVar7 != 0);
  }
  param_1[0xe] = 0;
  if ((-1 < (int)param_1[0xf]) && (*plVar6 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,*plVar6,(ulong)(uint)param_1[0xf] * 0x28);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  *plVar6 = 0;
  param_1[0xf] = 0x80000000;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar5[8],lVar7,0);
    *(undefined **)(param_1 + 0x10) = &DAT_03d7702c;
    param_1[0x12] = 0;
  }
  return;
}


