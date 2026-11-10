/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014be650; name: FUN_014be650
 */


void FUN_014be650(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  byte *__s;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  size_t sVar10;
  bool bVar11;
  code *pcVar12;
  byte *pbVar13;
  byte bVar14;
  long lVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  long *local_80 [4];
  long *local_60;
  undefined8 local_38;
  
  plVar18 = (long *)(param_2 + 0x240);
  lVar15 = *plVar18;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar15) {
    lVar8 = nn::os::GetCurrentThread();
LAB_014be820:
    if (*plVar18 == 0) goto code_r0x014be828;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x248));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x248));
          while (*plVar18 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *plVar18 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_014be830;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_014be830:
    bVar5 = false;
    plVar17 = plVar18;
    goto LAB_014be690;
  }
  bVar5 = true;
  plVar17 = (long *)0x0;
LAB_014be690:
  lVar15 = *plVar18;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar15) {
    lVar8 = nn::os::GetCurrentThread();
LAB_014be844:
    if (*plVar18 == 0) goto code_r0x014be84c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x248));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x248));
          while (*plVar18 == 0) {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar11) {
              *plVar18 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              bVar11 = false;
              goto LAB_014be6a8;
            }
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar11 = false;
    goto LAB_014be6a8;
  }
  plVar18 = (long *)0x0;
  bVar11 = true;
LAB_014be6a8:
  if (*(long *)(param_2 + 0x208) == 0) {
    bVar14 = 0;
  }
  else {
    bVar14 = *(byte *)(*(long *)(param_2 + 0x208) + 0x1e8) & 1;
  }
  if (!bVar11) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  if (bVar14 == 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar6 = PTR_DAT_047d3e30;
    uVar3 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar3;
    plVar18 = *(long **)(puVar6 + 0x18);
    param_1[2] = *(undefined8 *)(puVar6 + 0x10);
    param_1[3] = plVar18;
    if (plVar18 == (long *)0x0) goto joined_r0x014be6f4;
    pcVar12 = *(code **)(*plVar18 + 0x18);
  }
  else {
    plVar18 = (long *)FUN_00f618d8(param_2 + 0x200);
    puVar6 = PTR_DAT_047d3e28;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    plVar2 = (long *)PTR_PTR_047d4508;
    puVar1 = (undefined8 *)PTR_PTR_047d4508;
    if (*plVar18 != 0) {
      puVar1 = (undefined8 *)(*plVar18 + 0x38);
    }
    local_38 = *puVar1;
    FUN_014be9e4(local_80,&local_38,(int)plVar18[5]);
    if (local_80[0] != (long *)0x0) {
      plVar2 = local_80[0] + 7;
    }
    pcVar9 = strrchr((char *)*plVar2,0x2f);
    if (pcVar9 == (char *)0x0) {
      if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar6 = PTR_DAT_047d3e30;
      uVar3 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
      *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
      param_1[1] = uVar3;
      plVar18 = *(long **)(puVar6 + 0x18);
      param_1[2] = *(undefined8 *)(puVar6 + 0x10);
      param_1[3] = plVar18;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))();
      }
    }
    else {
      __s = (byte *)(pcVar9 + 1);
      puVar16 = &DAT_cbf29ce484222645;
      sVar10 = strlen((char *)__s);
      bVar14 = *__s;
      if (bVar14 != 0) {
        pbVar13 = (byte *)(pcVar9 + 2);
        do {
          puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar14) * 0x100000001b3);
          bVar14 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar14 != 0);
      }
      *param_1 = puVar16;
      param_1[1] = __s;
      param_1[2] = sVar10;
      param_1[3] = 0;
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_80[0] == (long *)0x0) goto joined_r0x014be6f4;
    pcVar12 = *(code **)(*local_80[0] + 0x20);
  }
  (*pcVar12)();
joined_r0x014be6f4:
  if (!bVar5) {
    *plVar17 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
  }
  return;
code_r0x014be828:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar5) {
    *plVar18 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_014be830;
  goto LAB_014be820;
code_r0x014be84c:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar11) {
    *plVar18 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto code_r0x014be854;
  goto LAB_014be844;
code_r0x014be854:
  bVar11 = false;
  goto LAB_014be6a8;
}


