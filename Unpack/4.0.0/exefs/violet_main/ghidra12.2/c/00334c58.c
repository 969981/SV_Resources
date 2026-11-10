/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00334c58; name: FUN_00334c58
 */


/* WARNING: Removing unreachable block (ram,0x00334ca4) */
/* WARNING: Removing unreachable block (ram,0x00334ca8) */
/* WARNING: Removing unreachable block (ram,0x00334cb0) */
/* WARNING: Removing unreachable block (ram,0x00334cb8) */
/* WARNING: Removing unreachable block (ram,0x00334cbc) */

void FUN_00334c58(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_50;
  long *plStack_48;
  long *local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = (undefined8 *)0x0;
  local_50 = param_2[2];
  plStack_48 = (long *)param_2[3];
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = param_2 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar5 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
  plVar2 = local_40;
  plVar1 = param_2;
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)(PTR_DAT_047ccc70 + 0x10);
    plVar5[1] = (long)param_2;
    plVar1 = (long *)0x0;
  }
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*local_40;
    local_40 = plVar5;
    (*(code *)*puVar6)(plVar2);
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
    plVar5 = local_40;
  }
  local_40 = plVar5;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_0049e790(PTR_LAB_047cba48,plVar1);
    }
  }
  local_38 = param_3;
                    /* try { // try from 00334d68 to 00334d6f has its CatchHandler @ 00334e54 */
  lVar7 = FUN_00335ba8(&local_50,param_2 + 6);
  *param_1 = lVar7;
                    /* try { // try from 00334d80 to 00334d83 has its CatchHandler @ 00334e34 */
  FUN_00358260(*(undefined8 *)(lVar7 + 0x20),param_2[4]);
  plVar1 = local_40;
  local_40 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


