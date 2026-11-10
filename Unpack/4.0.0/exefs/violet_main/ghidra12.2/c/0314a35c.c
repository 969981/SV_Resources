/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a35c; name: FUN_0314a35c
 */


undefined8 FUN_0314a35c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *local_40;
  undefined8 local_38;
  
  local_40 = (undefined4 *)0x0;
  local_38 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    local_40 = (undefined4 *)0x0;
    local_38 = -0x8000000000000000;
  }
  else {
    puVar12 = (undefined4 *)*param_2;
    local_40 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar2 << 4);
    uVar7 = 0;
    local_38 = CONCAT44(uVar2,uVar2);
    puVar5 = local_40;
    do {
      *puVar5 = *puVar12;
      lVar9 = *(long *)(puVar12 + 2);
      *(long *)(puVar5 + 2) = lVar9;
      puVar5 = puVar5 + 4;
      puVar12 = puVar12 + 4;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
        plVar6 = (long *)(lVar9 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  if (&local_40 != (undefined4 **)param_1) {
    if ((int)param_1[1] != 0) {
      lVar11 = *param_1;
      lVar9 = lVar11 + (long)(int)param_1[1] * 0x10;
      do {
        plVar6 = *(long **)(lVar9 + -8);
        lVar9 = lVar9 + -0x10;
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
      } while (lVar9 != lVar11);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 4);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_031562d8(&local_40);
    *param_1 = (long)local_40;
    *(int *)(param_1 + 1) = (int)local_38;
    *(uint *)((long)param_1 + 0xc) = local_38._4_4_;
    local_40 = (undefined4 *)0x0;
    local_38 = 0;
  }
  FUN_031561cc(param_1);
  puVar5 = local_40;
  if ((int)local_38 != 0) {
    puVar12 = local_40 + (long)(int)local_38 * 4;
    do {
      plVar6 = *(long **)(puVar12 + -2);
      puVar12 = puVar12 + -4;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (puVar12 != puVar5);
  }
  lVar9 = local_38;
  uVar8 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_40 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_40,uVar8 << 4);
  }
  return 1;
}


