/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322d390; name: FUN_0322d390
 */


void FUN_0322d390(undefined8 param_1,long param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80 [5];
  undefined1 local_58;
  long *local_50;
  long *local_48;
  
  if (*(int *)(param_2 + 8) != 0) {
    *(undefined4 *)(param_2 + 8) = 0;
  }
  puVar3 = PTR_DAT_047d1a08;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_80[0] = 0x30;
  plVar5 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_80,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar5,"WriteBufferImpl");
  }
  puVar4 = PTR_DAT_047e5fb0;
  plVar5[1] = 0xffffffff;
  plVar7 = plVar5 + 2;
  *plVar7 = 1;
  puVar3 = PTR_PTR_047d1a50;
  plVar5[5] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[3] = param_2;
  plVar5[4] = (long)(puVar3 + 0x20);
  *plVar7 = 0;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_80[4] = 0;
  uStack_98 = 0;
  local_58 = 1;
  local_90 = 0;
  uStack_88 = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  local_a0 = plVar5;
  FUN_032282d4(local_80,&local_a0);
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  FUN_0322d870(param_1,local_80,param_3,param_4 & 1);
  if (local_50 == (long *)0x0) {
    if ((local_80[3] != 0) && (local_48 != (long *)0x0)) {
      *local_48 = local_80[0] - local_80[2];
    }
  }
  else {
    (**(code **)(*local_50 + 0x28))(local_50,local_80);
    plVar5 = local_50;
    local_50 = (long *)0x0;
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (plVar5[1] != 0) {
      plVar7 = plVar5 + 2;
      do {
        lVar6 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  local_80[3] = 0;
  if ((local_50 != (long *)0x0) && (local_50[1] != 0)) {
    plVar5 = local_50 + 2;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))();
    }
  }
  return;
}


