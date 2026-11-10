/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024b5524; name: FUN_024b5524
 */


void FUN_024b5524(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_1a0 [8];
  long *local_198;
  undefined1 auStack_190 [8];
  long *local_188;
  undefined1 auStack_180 [8];
  long *local_178;
  undefined1 auStack_170 [8];
  long *local_168;
  undefined1 auStack_160 [240];
  long local_70;
  ulong local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  long *local_40;
  undefined1 auStack_38 [8];
  
  local_70 = 0;
  local_68 = 0;
  FUN_024b58d8(&local_68,param_1);
  FUN_024ab220(auStack_48,*(undefined8 *)(param_1 + 0x60),auStack_160);
  if (local_40 != (long *)0x0) {
    piVar1 = (int *)((long)local_40 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))();
    }
  }
  if (local_68 != 0) {
    if (((local_68 & 1) == 0) && (*(code **)(local_68 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_68 & 0xfffffffffffffffe))(auStack_60,auStack_60,2);
    }
    local_68 = 0;
  }
  if (local_70 != 0) {
    puVar5 = auStack_160;
    lVar6 = local_70;
    do {
      lVar6 = lVar6 + -1;
      FUN_024ab29c(puVar5,auStack_38);
      puVar5 = puVar5 + 0x18;
    } while (lVar6 != 0);
  }
  local_70 = 0;
  local_68 = 0;
  FUN_024b5948(&local_68,param_1);
  FUN_024ab220(auStack_170,*(undefined8 *)(param_1 + 0x78),auStack_160);
  if (local_168 != (long *)0x0) {
    piVar1 = (int *)((long)local_168 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*local_168 + 0x18))();
    }
  }
  if (local_68 != 0) {
    if (((local_68 & 1) == 0) && (*(code **)(local_68 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_68 & 0xfffffffffffffffe))(auStack_60,auStack_60,2);
    }
    local_68 = 0;
  }
  if (local_70 != 0) {
    puVar5 = auStack_160;
    lVar6 = local_70;
    do {
      lVar6 = lVar6 + -1;
      FUN_024ab29c(puVar5,auStack_38);
      puVar5 = puVar5 + 0x18;
    } while (lVar6 != 0);
  }
  local_70 = 0;
  local_68 = 0;
  FUN_024b59b8(&local_68,param_1);
  FUN_024ab220(auStack_180,*(undefined8 *)(param_1 + 0x90),auStack_160);
  if (local_178 != (long *)0x0) {
    piVar1 = (int *)((long)local_178 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*local_178 + 0x18))();
    }
  }
  if (local_68 != 0) {
    if (((local_68 & 1) == 0) && (*(code **)(local_68 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_68 & 0xfffffffffffffffe))(auStack_60,auStack_60,2);
    }
    local_68 = 0;
  }
  if (local_70 != 0) {
    puVar5 = auStack_160;
    lVar6 = local_70;
    do {
      lVar6 = lVar6 + -1;
      FUN_024ab29c(puVar5,auStack_38);
      puVar5 = puVar5 + 0x18;
    } while (lVar6 != 0);
  }
  local_70 = 0;
  local_68 = 0;
  FUN_024b5a28(&local_68,param_1);
  FUN_024ab408(auStack_190,*(undefined8 *)(param_1 + 0xa8),auStack_160);
  if (local_188 != (long *)0x0) {
    piVar1 = (int *)((long)local_188 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*local_188 + 0x18))();
    }
  }
  if (local_68 != 0) {
    if (((local_68 & 1) == 0) && (*(code **)(local_68 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_68 & 0xfffffffffffffffe))(auStack_60,auStack_60,2);
    }
    local_68 = 0;
  }
  if (local_70 != 0) {
    puVar5 = auStack_160;
    lVar6 = local_70;
    do {
      lVar6 = lVar6 + -1;
      FUN_024ab29c(puVar5,auStack_38);
      puVar5 = puVar5 + 0x18;
    } while (lVar6 != 0);
  }
  local_70 = 0;
  local_68 = 0;
  FUN_024b5a98(&local_68,param_1);
  FUN_024ab408(auStack_1a0,*(undefined8 *)(param_1 + 0xc0),auStack_160);
  if (local_198 != (long *)0x0) {
    piVar1 = (int *)((long)local_198 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*local_198 + 0x18))();
    }
  }
  if (local_68 != 0) {
    if (((local_68 & 1) == 0) && (*(code **)(local_68 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_68 & 0xfffffffffffffffe))(auStack_60,auStack_60,2);
    }
    local_68 = 0;
  }
  if (local_70 != 0) {
    puVar5 = auStack_160;
    lVar6 = local_70;
    do {
      lVar6 = lVar6 + -1;
      FUN_024ab29c(puVar5,auStack_38);
      puVar5 = puVar5 + 0x18;
    } while (lVar6 != 0);
  }
  return;
}


