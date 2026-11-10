/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00334194; name: FUN_00334194
 */


void FUN_00334194(long *param_1,undefined8 *param_2,long param_3,long *param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *local_88;
  long *local_80;
  long local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  long *plStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  plStack_58 = (long *)param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  local_50 = (undefined8 *)param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
                    /* try { // try from 003341cc to 003341d7 has its CatchHandler @ 003346d8 */
  FUN_0032d278(param_1,&local_60,1);
  puVar6 = local_50;
  local_50 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_0049e790(PTR_LAB_047cba48,puVar6);
  }
  if (plStack_58 != (long *)0x0) {
    plVar11 = plStack_58 + 1;
    do {
      lVar8 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar5 = PTR_DAT_047ccc60;
  param_1[6] = param_3;
  *param_1 = (long)(puVar5 + 0x10);
  lVar8 = *param_4;
  *param_4 = 0;
  param_1[0xb] = 0;
  param_1[8] = param_5;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[7] = lVar8;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003344fc to 00334503 has its CatchHandler @ 0033450c */
    abort();
  }
  local_78 = param_1[2];
  uVar9 = param_2[3];
  local_70 = (long *)param_1[3];
  lVar2 = param_1[4];
  if (local_70 != (long *)0x0) {
    plVar11 = local_70 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = param_1 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = *plVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_80 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
  if (local_80 == (long *)0x0) {
    plVar10 = param_1;
  }
  else {
    *local_80 = (long)(PTR_DAT_047ccc68 + 0x10);
    local_80[1] = (long)param_1;
    plVar10 = (long *)0x0;
  }
                    /* try { // try from 003342e8 to 00334303 has its CatchHandler @ 00334584 */
  FUN_00330b38(&local_68,lVar8,uVar9,lVar2,&local_78,&local_80);
  puVar6 = local_68;
  local_68 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)param_1[9];
  param_1[9] = (long)puVar6;
  if (puVar7 == (undefined8 *)0x0) {
    local_68 = (undefined8 *)0x0;
    plVar1 = local_80;
  }
  else {
                    /* try { // try from 00334320 to 00334323 has its CatchHandler @ 00334508 */
    (**(code **)*puVar7)();
    puVar6 = local_68;
    local_68 = (undefined8 *)0x0;
    plVar1 = local_80;
    if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 00334338 to 0033433b has its CatchHandler @ 00334504 */
      (**(code **)*puVar6)();
      plVar1 = local_80;
    }
  }
  local_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    local_80 = (long *)0x0;
    (**(code **)*plVar1)(plVar1);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar10 + 8))(plVar10);
      FUN_0049e790(PTR_LAB_047cba48,plVar10);
    }
  }
  if (local_70 != (long *)0x0) {
    plVar10 = local_70 + 1;
    do {
      lVar8 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar10 = (long *)param_1[5];
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = *plVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_88 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (local_88 == (long *)0x0) {
    plVar11 = param_1;
  }
  else {
    *local_88 = (long)(PTR_DAT_047cc568 + 0x10);
    local_88[1] = (long)param_1;
    *(undefined1 *)(local_88 + 2) = 0;
    plVar11 = (long *)0x0;
  }
                    /* try { // try from 0033442c to 0033443b has its CatchHandler @ 00334514 */
  (**(code **)(*plVar10 + 0x18))(plVar10,1,&local_88);
  plVar10 = local_88;
  local_88 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)*plVar10)(plVar10);
    FUN_0049e790(PTR_LAB_047cba48,plVar10);
  }
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      lVar8 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 8))(plVar11);
      FUN_0049e790(PTR_LAB_047cba48,plVar11);
    }
  }
                    /* try { // try from 00334490 to 00334493 has its CatchHandler @ 0033450c */
  (**(code **)(*(long *)param_1[9] + 0x18))();
  return;
}


