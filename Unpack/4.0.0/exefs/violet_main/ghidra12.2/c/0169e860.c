/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169e860; name: FUN_0169e860
 */


void FUN_0169e860(long *param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long *plVar12;
  long *local_68;
  long *local_48;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar10 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar10;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar12 = param_1 + 5;
  *plVar12 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar12);
  *param_1 = (long)&DAT_04584008;
  plVar9 = param_1 + 8;
  param_1[4] = (long)&PTR_LAB_04584080;
  *plVar12 = (long)&DAT_045840d0;
  memset(plVar9,0,0xcc);
  local_48 = param_1;
  FUN_0169f018(&local_68,param_1[1],&local_48);
  plVar12 = local_68;
  pcVar11 = (code *)local_68[0x71];
  if (pcVar11 != (code *)0x0) {
    local_68[0x72] = 0;
    local_68[0x73] = 0;
    local_68[0x70] = 0;
    local_68[0x71] = 0;
    (*pcVar11)(local_68 + 0x74);
  }
  plVar12[0x70] = (long)&LAB_0136753c;
  plVar12[0x72] = (long)&LAB_02b0f9e4;
  plVar12[0x74] = (long)param_1;
  plVar12[0x71] = (long)&LAB_02b0f9e0;
  plVar8 = plVar12 + 0x3a;
  plVar12[0x73] = (long)&LAB_02b0f9f0;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0169e9b8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x3b));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x3b));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0169e9b8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0169e9b8:
  FUN_00e220f4(plVar12,param_2,0);
  FUN_00e220f4(plVar12,0,param_3);
  plVar8 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0169ebb0;
  }
  plVar9 = local_68;
  local_68 = (long *)0x0;
  param_1[8] = (long)plVar9;
  FUN_0169ec64(param_1 + 0x1f,0);
  lVar7 = param_1[1];
  FUN_0169eee8(&local_48,lVar7);
  plVar9 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar10 = *plVar8;
      iVar6 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0169eb44;
  }
  param_1[0x1c] = (long)local_48;
  FUN_0169ee7c(&local_48,lVar7);
  plVar9 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar7 = *plVar8;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_0169eb44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0x1d] = (long)local_48;
  FUN_0169fe68(param_1[0x1c]);
  lVar7 = param_1[0x1c];
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_48,8);
  *(long **)(lVar7 + 0x718) = local_48;
  FUN_0169ed18(param_1[0x1d]);
  *(undefined4 *)(param_1 + 0x20) = 0;
  plVar12[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x3b));
  if (local_68 != (long *)0x0) {
    lVar7 = local_68[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_0169ebb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


