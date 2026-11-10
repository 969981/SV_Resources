/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03318c40; name: FUN_03318c40
 */


void FUN_03318c40(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 local_80;
  byte *local_78;
  ulong local_70;
  undefined1 auStack_58 [16];
  ulong local_48;
  ulong local_30;
  ulong uStack_28;
  
  FUN_03325b88(auStack_58,param_1,"material");
  uVar5 = FUN_032d0164(auStack_58);
  if ((local_48 & 1) != 0) {
    plVar6 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar8 = plVar6 + 1;
    do {
      lVar4 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03325b88(&local_80,param_1,"newMaterial");
  FUN_033234d0(auStack_58,&local_80);
  if ((local_70 & 1) != 0) {
    plVar6 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar8 = plVar6 + 1;
    do {
      lVar4 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03325b88(&local_80,auStack_58,&DAT_03bf8795);
  if (local_78 != (byte *)0x0) {
    pbVar7 = local_78;
    if ((*local_78 & 1) == 0) {
      do {
        pbVar7 = *(byte **)(pbVar7 + 8);
      } while ((*pbVar7 & 1) == 0);
    }
    if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) == 4) {
      uVar9 = local_70;
      if ((local_70 & 1) != 0) {
        piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_03318d88;
    }
    local_78 = (byte *)0x0;
  }
  uVar9 = 0;
  local_80 = 0;
LAB_03318d88:
  local_30 = -uVar5;
  if (-1 < (long)uVar5) {
    local_30 = uVar5;
  }
  uStack_28 = uVar5 >> 0x3f;
  plVar8 = (long *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x30))(plVar8,local_80,local_78,&local_30);
  if ((uVar9 & 1) != 0) {
    plVar6 = plVar8 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  if ((local_70 & 1) != 0) {
    plVar6 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar8 = plVar6 + 1;
    do {
      lVar4 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if ((local_48 & 1) != 0) {
    plVar6 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar8 = plVar6 + 1;
    do {
      lVar4 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}


