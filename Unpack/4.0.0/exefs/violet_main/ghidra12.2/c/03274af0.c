/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03274af0; name: FUN_03274af0
 */


void FUN_03274af0(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  undefined *puVar10;
  ulong uVar9;
  byte *pbVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint *local_68;
  byte *local_60;
  ulong local_58;
  int local_48;
  undefined4 local_18 [2];
  
  FUN_03325b88(&local_68,param_1,"flags");
  uVar6 = FUN_0327462c(&local_68);
  if ((local_58 & 1) != 0) {
    plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_90,param_1,"faces");
  local_18[0] = local_70;
  FUN_03323c3c(&local_68,local_90,uStack_88,local_78,local_18,0);
  pbVar11 = local_60;
  if ((*local_60 & 1) == 0) {
    do {
      pbVar11 = *(byte **)(pbVar11 + 8);
    } while ((*pbVar11 & 1) == 0);
  }
  if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) != 8) {
    local_60 = (byte *)0x0;
  }
  do {
    if ((*local_60 & 1) != 0) {
      if ((local_60 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(local_60 + 0x10) >> 8) != 0))
      goto LAB_03274c18;
      break;
    }
    local_60 = *(byte **)(local_60 + 8);
  } while (local_60 != (byte *)0x0);
  if ((int)*local_68 < 0) {
LAB_03274c18:
    puVar10 = PTR_DAT_047e61d0;
  }
  else {
    puVar10 = (undefined *)(*(long *)(local_58 + 0x228) + (ulong)*local_68 * 0x20);
  }
  uVar9 = *(ulong *)(puVar10 + 0x10);
  if ((uVar9 & 1) != 0) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_80 & 1) != 0) {
    plVar7 = (long *)(local_80 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if (local_48 < 0x100) {
    FUN_03325b88(&local_68,param_1,"flags");
    FUN_0331e864(&local_68,uVar6 & 0xfeff | 0x100);
    if ((local_58 & 1) == 0) {
      return;
    }
    plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      iVar8 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    FUN_03325b88(&local_68,param_1,"flags");
    FUN_0331e864(&local_68,uVar6 & 0xfeff);
    if ((local_58 & 1) == 0) {
      return;
    }
    plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      iVar8 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((plVar7 != (long *)0x0) && (iVar8 == 1)) {
    (**(code **)(*plVar7 + 8))();
  }
  return;
}


