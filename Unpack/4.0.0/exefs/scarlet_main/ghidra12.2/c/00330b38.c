/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00330b38; name: FUN_00330b38
 */


void FUN_00330b38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 *local_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if (DAT_047ef4c0 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_38 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
                    /* try { // try from 00330b7c to 00330b87 has its CatchHandler @ 00330dbc */
  plVar4 = (long *)FUN_00330930(DAT_047ef4c0,param_2,&local_38,&local_58);
  uVar1 = *param_5;
  plVar6 = (long *)param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  puVar7 = (undefined8 *)*param_6;
  *param_6 = 0;
  if (plVar4 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    local_88 = local_38;
                    /* try { // try from 00330bb4 to 00330bbf has its CatchHandler @ 00330cd4 */
    uStack_80 = param_3;
    local_78 = param_4;
    uStack_70 = uVar1;
    local_68 = plVar6;
    local_60 = puVar7;
    (**(code **)(*plVar4 + 8))(param_1,plVar4,&local_88);
    puVar7 = local_60;
    local_60 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
    }
    if (local_68 != (long *)0x0) {
      plVar6 = local_68 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar6 = (long *)0x0;
    puVar7 = (undefined8 *)0x0;
  }
                    /* try { // try from 00330c38 to 00330c3b has its CatchHandler @ 00330d40 */
  FUN_0037bfa0(local_38);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    FUN_0049e790(PTR_LAB_047cba48,puVar7);
  }
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}


