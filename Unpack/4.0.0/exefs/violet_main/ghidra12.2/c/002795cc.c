/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002795cc; name: FUN_002795cc
 */


/* WARNING: Removing unreachable block (ram,0x00279630) */
/* WARNING: Removing unreachable block (ram,0x00279634) */
/* WARNING: Removing unreachable block (ram,0x0027963c) */
/* WARNING: Removing unreachable block (ram,0x00279644) */
/* WARNING: Removing unreachable block (ram,0x00279648) */

void FUN_002795cc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_198 [168];
  undefined8 local_f0;
  long *plStack_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_40 [8];
  long *local_38;
  
  lVar6 = param_1[2];
  if (*(char *)(lVar6 + 0x60) == '\0') {
    if (param_1[6] == 0) {
      local_d8 = *(undefined8 *)(lVar6 + 0x38);
      local_e0 = (undefined8 *)0x0;
      local_f0 = *(undefined8 *)(lVar6 + 0x10);
      plStack_e8 = *(long **)(lVar6 + 0x18);
      if (plStack_e8 != (long *)0x0) {
        plVar9 = plStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = param_1 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
      puVar5 = local_e0;
      plVar9 = param_1;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_0448cae0;
        puVar4[1] = param_1;
        plVar9 = (long *)0x0;
      }
      if (local_e0 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*local_e0;
        local_e0 = puVar4;
        (*(code *)*puVar7)(puVar5);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
        puVar4 = local_e0;
      }
      local_e0 = puVar4;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 8))(plVar9);
          FUN_0049e790(PTR_LAB_047cba48,plVar9);
        }
      }
      local_38 = (long *)PTR_DAT_047cc570;
                    /* try { // try from 002796f8 to 00279703 has its CatchHandler @ 002798a4 */
      lVar6 = FUN_0027ad24(&local_f0,&local_38);
                    /* try { // try from 00279714 to 00279717 has its CatchHandler @ 00279888 */
      FUN_00358260(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(param_1[2] + 0x20));
      puVar5 = local_e0;
      local_e0 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
      }
      if (plStack_e8 != (long *)0x0) {
        plVar9 = plStack_e8 + 1;
        do {
          lVar8 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar5 = (undefined8 *)param_1[6];
      param_1[6] = lVar6;
      if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 00279790 to 00279793 has its CatchHandler @ 00279884 */
        (**(code **)*puVar5)();
      }
    }
    local_f0 = 0;
    lVar6 = param_1[2];
    local_58 = *param_2;
    local_38 = param_1 + 3;
    local_50 = 0;
    *param_2 = 0;
                    /* try { // try from 002797b4 to 002797ff has its CatchHandler @ 00279924 */
    lVar6 = FUN_0027af8c(lVar6 + 0x48,local_38,&DAT_03cc9745,&local_38,auStack_40);
    if ((undefined8 *)(lVar6 + 0x38) != &local_f0) {
      plVar9 = (long *)(lVar6 + 0x40);
      if ((*(ulong *)(lVar6 + 0x38) & 1) != 0) {
        plVar9 = (long *)*(long *)(lVar6 + 0x40);
      }
      FUN_0027b208(&local_f0,plVar9,*(ulong *)(lVar6 + 0x38) >> 1);
    }
    local_50 = FUN_003438f0(*(undefined8 *)(param_1[2] + 0x38));
    plVar9 = (long *)param_1[6];
    FUN_0032d470(auStack_198,&local_f0);
                    /* try { // try from 0027981c to 00279827 has its CatchHandler @ 00279914 */
    (**(code **)(*plVar9 + 0x20))(plVar9,auStack_198);
    FUN_00275228(auStack_198);
    FUN_00275228(&local_f0);
  }
  return;
}


