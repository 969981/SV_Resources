/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0028c098; name: FUN_0028c098
 */


void FUN_0028c098(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *local_30;
  undefined8 *local_28;
  
  if ((*(long *)(param_1 + 200) == 0) || (*(char *)(*(long *)(param_1 + 200) + 0x58) == '\0')) {
    if (*(long *)(param_1 + 0xe8) == 0) {
      return;
    }
    plVar7 = *(long **)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0xe0);
    local_30 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    if (local_30 != (undefined8 *)0x0) {
      *local_30 = &PTR_FUN_0448d5c0;
      local_30[1] = 0;
      uVar6 = 0;
      if (*(long *)(param_1 + 200) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 200) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = *(undefined8 *)(param_1 + 200);
      }
      local_30[1] = uVar6;
      local_30[2] = 0;
      uVar6 = 0;
      if (*(long *)(param_1 + 0xd0) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0xd0) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = *(undefined8 *)(param_1 + 0xd0);
      }
      local_30[2] = uVar6;
      local_30[3] = 0;
      uVar6 = 0;
      if (*(long *)(param_1 + 0xe8) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0xe8) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = *(undefined8 *)(param_1 + 0xe8);
      }
      local_30[3] = uVar6;
    }
                    /* try { // try from 0028c228 to 0028c237 has its CatchHandler @ 0028c274 */
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar2,&local_30);
    puVar5 = local_30;
    local_30 = (undefined8 *)0x0;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x28);
    local_28 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    if (local_28 != (undefined8 *)0x0) {
      *local_28 = &PTR_FUN_0448d5c0;
      local_28[1] = 0;
      uVar6 = 0;
      if (*(long *)(param_1 + 200) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 200) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = *(undefined8 *)(param_1 + 200);
      }
      local_28[1] = uVar6;
      local_28[2] = 0;
      uVar6 = 0;
      if (*(long *)(param_1 + 0xd0) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0xd0) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = *(undefined8 *)(param_1 + 0xd0);
      }
      local_28[2] = uVar6;
      local_28[3] = 0;
      uVar6 = 0;
      if (*(long *)(param_1 + 0xe8) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0xe8) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = *(undefined8 *)(param_1 + 0xe8);
      }
      local_28[3] = uVar6;
    }
                    /* try { // try from 0028c154 to 0028c163 has its CatchHandler @ 0028c2ac */
    (**(code **)(*plVar7 + 0x18))(plVar7,2,&local_28);
    puVar5 = local_28;
    local_28 = (undefined8 *)0x0;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar5)(puVar5);
  FUN_0049e790(PTR_LAB_047cba48,puVar5);
  return;
}


