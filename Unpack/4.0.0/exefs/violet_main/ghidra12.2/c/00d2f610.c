/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2f610; name: FUN_00d2f610
 */


void FUN_00d2f610(float param_1,long param_2)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long *local_80;
  undefined1 auStack_78 [24];
  long *local_60;
  float local_58;
  float local_54;
  
  lVar8 = *(long *)(param_2 + 0x1b8);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  sVar9 = *(short *)(lVar8 + 0x1a);
LAB_00d2f664:
  sVar3 = *psVar1;
  if (sVar3 == sVar9) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00d2f68c;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d2f68c:
    bVar5 = false;
  }
  if (!bVar5) {
    sVar9 = sVar3;
    if (sVar3 == 0) {
      return;
    }
    goto LAB_00d2f664;
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  plVar10 = (long *)(lVar8 + -0x28);
  local_54 = param_1;
  if (param_1 <= -1.0) {
    fVar12 = 1.0;
    if ((*(char *)(param_2 + 0x13f) == '\0') &&
       (fVar13 = *(float *)(param_2 + 0x17c), *(float *)(param_2 + 0x144) <= fVar13)) {
      if (fVar13 <= *(float *)(param_2 + 0x14c)) {
        fVar12 = ABS(*(float *)(param_2 + 0x14c) - fVar13) / *(float *)(param_2 + 0x150);
      }
      else {
        fVar12 = 0.0;
      }
    }
    local_58 = fVar12;
    if (fVar12 == *(float *)(param_2 + 0x1a4)) goto LAB_00d2f7bc;
    iVar2 = *(int *)(lVar8 + 0x188);
    if (0 < iVar2) {
      iVar11 = 0;
      do {
        FUN_00d8fb98(auStack_78,param_2 + 0x120);
        uVar6 = FUN_00d4fa5c(plVar10,iVar11);
        local_98 = &DAT_cbf29ce484222645;
        puStack_90 = &DAT_03c886bc;
        local_88 = 0;
        local_80 = (long *)0x0;
        FUN_01e16f20(plVar10,auStack_78,&local_58,uVar6,&local_98);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x20))();
        }
        iVar11 = iVar11 + 1;
      } while (iVar2 != iVar11);
      fVar12 = local_58;
    }
    goto LAB_00d2f7b8;
  }
  iVar2 = *(int *)(lVar8 + 0x188);
  if (0 < iVar2) {
    lVar8 = param_2 + 0x120;
    FUN_00d8fb98(auStack_78,lVar8);
    uVar6 = FUN_00d4fa5c(plVar10,0);
    local_98 = &DAT_cbf29ce484222645;
    puStack_90 = &DAT_03c886bc;
    local_88 = 0;
    local_80 = (long *)0x0;
    FUN_01e16f20(plVar10,auStack_78,&local_54,uVar6,&local_98);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (iVar2 != 1) {
      FUN_00d8fb98(auStack_78,lVar8);
      uVar6 = FUN_00d4fa5c(plVar10,1);
      local_98 = &DAT_cbf29ce484222645;
      puStack_90 = &DAT_03c886bc;
      local_88 = 0;
      local_80 = (long *)0x0;
      FUN_01e16f20(plVar10,auStack_78,&local_54,uVar6,&local_98);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (iVar2 != 2) {
        iVar11 = 2;
        do {
          FUN_00d8fb98(auStack_78,lVar8);
          uVar6 = FUN_00d4fa5c(plVar10,iVar11);
          local_98 = &DAT_cbf29ce484222645;
          puStack_90 = &DAT_03c886bc;
          local_88 = 0;
          local_80 = (long *)0x0;
          FUN_01e16f20(plVar10,auStack_78,&local_54,uVar6,&local_98);
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          if (local_60 != (long *)0x0) {
            (**(code **)(*local_60 + 0x20))();
          }
          iVar11 = iVar11 + 1;
        } while (iVar2 != iVar11);
      }
    }
  }
  if ((local_54 <= 0.0) || (*(float *)(param_2 + 0x1a4) != 0.0)) {
    if ((local_54 != 0.0) ||
       (((*(float *)(param_2 + 0x1a4) == 0.0 || (lVar8 = *(long *)(param_2 + 0x1b8), lVar8 == 0)) ||
        (*(short *)(lVar8 + 0x1a) == 0)))) goto LAB_00d2f7b4;
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d2f8c8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d2f8c8:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          plVar7 = (long *)(lVar8 + -0x28);
          if (*(long *)(lVar8 + 0xf8) != 0) {
            *(undefined1 *)(*(long *)(lVar8 + 0xf8) + 0x210) = 0;
          }
          goto LAB_00d2fa50;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  else {
    lVar8 = *(long *)(param_2 + 0x1b8);
    if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) goto LAB_00d2f7b4;
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d2f918;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d2f918:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          plVar7 = (long *)(lVar8 + -0x28);
          if (*(long *)(lVar8 + 0xf8) != 0) {
            *(undefined1 *)(*(long *)(lVar8 + 0xf8) + 0x210) = 1;
          }
LAB_00d2fa50:
          (**(code **)(*plVar7 + 0x60))();
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
LAB_00d2f7b4:
  fVar12 = local_54;
LAB_00d2f7b8:
  *(float *)(param_2 + 0x1a4) = fVar12;
LAB_00d2f7bc:
  (**(code **)(*plVar10 + 0x60))(plVar10);
  return;
}


