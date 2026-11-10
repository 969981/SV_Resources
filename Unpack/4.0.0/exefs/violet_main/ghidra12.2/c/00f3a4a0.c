/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3a4a0; name: FUN_00f3a4a0
 */


void FUN_00f3a4a0(long *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined1 *extraout_x1;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  undefined1 *puVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  uint *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  uint *local_38;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    lVar9 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    lVar9 = 0;
    if (uVar7 != 0) {
      puVar13 = (uint *)((long)param_2 + uVar7);
      lVar9 = (long)puVar13 + (ulong)*puVar13;
    }
  }
  bVar2 = *(byte *)(lVar9 + 4);
  puVar12 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    pbVar8 = (byte *)(lVar9 + 5);
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar2 != 0);
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar9 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar9;
  puVar13 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (6 - (long)*param_2)));
  puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
  if (*param_1 != 0) {
    for (plVar10 = *(long **)(lVar9 + 0xb1e0); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if ((undefined1 *)plVar10[2] == puVar12) {
        local_78 = puVar13 + 1;
        local_38 = (uint *)(ulong)*puVar13;
        cVar5 = (*(code *)plVar10[6])(plVar10 + 10,param_1,&local_78,&local_38);
        memcpy(&local_78,param_1,0x28);
        puVar12 = extraout_x1;
        switch(cVar5) {
        case '\x01':
          cVar5 = '\x01';
          local_70 = extraout_x1;
          break;
        case '\x02':
          cVar5 = '\x02';
          local_68 = extraout_x1;
          break;
        case '\x03':
          cVar5 = '\x03';
          local_60 = extraout_x1;
          break;
        case '\x04':
          cVar5 = '\x04';
          local_58 = extraout_x1;
        }
        goto switchD_00f3a604_default;
      }
    }
  }
  memcpy(&local_78,param_1,0x28);
  cVar5 = '\0';
switchD_00f3a604_default:
  if (local_68 != (undefined1 *)0x0) {
    FUN_00d2bee4(&local_38);
    local_78 = local_38;
    if (local_38 != (uint *)0x0) {
      (**(code **)(*(long *)local_38 + 0x18))();
    }
  }
  if (cVar5 == '\x01') {
    plVar10 = (long *)(puVar12 + 0x60);
    lVar15 = *plVar10;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar15) {
      lVar9 = nn::os::GetCurrentThread();
LAB_00f3a808:
      if (*plVar10 == 0) goto code_r0x00f3a810;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar12 + 0x68));
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar12 + 0x68));
            while (*plVar10 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00f3a864;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00f3a864:
      bVar4 = true;
      goto LAB_00f3a64c;
    }
    bVar4 = false;
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = (long *)0x0;
    bVar4 = false;
LAB_00f3a64c:
    if ((cVar5 == '\x02') && (plVar14 = (long *)param_1[1], plVar14 != (long *)0x0)) {
      (**(code **)(*(long *)*param_1 + 0x40))(&local_38);
      uVar7 = (**(code **)(*plVar14 + 0x68))(plVar14,puVar12,local_38,param_1[2],param_2);
      if (local_38 != (uint *)0x0) {
        (**(code **)(*(long *)local_38 + 0x60))();
      }
      if ((uVar7 & 1) == 0) goto LAB_00f3a6d4;
    }
  }
LAB_00f3a6a0:
  if ((8 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar7 != 0)) {
    puVar13 = (uint *)((long)param_2 + uVar7);
    puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
    puVar11 = puVar13 + 1;
    uVar1 = *puVar13;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      FUN_00f3a4a0(&local_78,(long)puVar11 + (ulong)*puVar11);
      if (uVar1 != 1) {
        FUN_00f3a4a0(&local_78,(long)(puVar13 + 2) + (ulong)puVar13[2]);
        if (puVar13 + 3 != puVar11 + uVar7) {
          lVar9 = uVar7 * 4 + -8;
          puVar13 = puVar13 + 3;
          do {
            FUN_00f3a4a0(&local_78,(long)puVar13 + (ulong)*puVar13);
            lVar9 = lVar9 + -4;
            puVar13 = puVar13 + 1;
          } while (lVar9 != 0);
        }
      }
    }
  }
LAB_00f3a6d4:
  if (bVar4) {
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
  }
  return;
code_r0x00f3a810:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar4) {
    *plVar10 = lVar9;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto code_r0x00f3a818;
  goto LAB_00f3a808;
code_r0x00f3a818:
  bVar4 = true;
  goto LAB_00f3a6a0;
}


