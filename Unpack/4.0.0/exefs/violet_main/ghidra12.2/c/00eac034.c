/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eac034; name: FUN_00eac034
 */


void FUN_00eac034(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  float local_44;
  
  lVar13 = *(long *)(param_1 + 0xf0);
  lVar14 = *param_2;
  plVar1 = (long *)(lVar14 + 0x70);
  uVar11 = (ulong)*(uint *)(lVar13 + (param_3 & 0xffffffff) * 0x38 + 8);
  param_3 = param_3 & 0xffffffff;
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(lVar14 + 0x78);
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(lVar14 + 0x78) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00eac090:
  while ((lVar9 != 0 && (lVar6 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x80));
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(lVar14 + 0x78);
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(lVar14 + 0x78) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar9 || *(long *)(lVar14 + 0x78) != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00eac0c0;
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(lVar14 + 0x74) = lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar8 = true;
LAB_00eac0c0:
  if (!bVar8) {
    lVar9 = lVar3;
    lVar10 = *(long *)(lVar14 + 0x78);
    goto LAB_00eac090;
  }
  if (param_3 < (ulong)(*(long *)(lVar14 + 0x38) - *(long *)(lVar14 + 0x30) >> 3)) {
    plVar12 = (long *)(lVar13 + param_3 * 0x38);
    plVar2 = (long *)(*(long *)(lVar14 + 0x30) + param_3 * 8);
    lVar6 = *plVar12;
    if (lVar6 != *(long *)(param_1 + 0xa8)) {
      FUN_00ed6768(*(long *)(param_1 + 0xa8),plVar12,plVar2,uVar11);
      lVar6 = *plVar12;
    }
    FUN_00eac6b4(lVar6,plVar2,uVar11);
    local_44 = 0.0;
    local_80 = 0x2b5e56bc380cf121;
    pcStack_78 = "EnableCombinedInteriorMap";
    local_70 = 0x19;
    local_68 = (long *)0x0;
    plVar7 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7,&local_44,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (1.0 <= local_44 && ((uVar5 ^ 0xffffffff) & 1) == 0) {
      *(undefined4 *)(*plVar2 + 0x100) = 7;
    }
    plVar7 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    (**(code **)(*plVar7 + 0x18))
              (plVar7,*plVar2 + 200,
               *(undefined4 *)(*(long *)(*plVar12 + 0x88) + uVar11 * 0x108 + 0x40));
    FUN_00eac2f8(param_1,plVar2,uVar11,plVar12);
  }
  do {
    lVar6 = *plVar1;
    lVar13 = *(long *)(lVar14 + 0x78);
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(lVar14 + 0x78) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(lVar14 + 0x78);
    if (lVar9 != lVar6 || lVar10 != lVar13) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00eac1ec;
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(lVar14 + 0x74) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar8 = true;
LAB_00eac1ec:
  if (!bVar8) {
    do {
      lVar6 = *plVar1;
      lVar13 = *(long *)(lVar14 + 0x78);
      if (lVar6 != lVar9 || lVar13 != lVar10) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00eac298;
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(lVar14 + 0x74) = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar8 = true;
joined_r0x00eac298:
    if (!bVar8) {
      do {
        lVar9 = *plVar1;
        lVar10 = *(long *)(lVar14 + 0x78);
        if (lVar9 != lVar6 || lVar10 != lVar13) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar13 = lVar10;
          goto joined_r0x00eac298;
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar6;
          *(long *)(lVar14 + 0x74) = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar8 = true;
      lVar6 = lVar9;
      lVar13 = lVar10;
      goto joined_r0x00eac298;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x80));
  *(undefined1 *)(*param_2 + 0x19b) = 1;
  return;
}


