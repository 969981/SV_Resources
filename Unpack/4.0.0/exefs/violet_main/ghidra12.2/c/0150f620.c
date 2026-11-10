/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0150f620; name: FUN_0150f620
 */


void FUN_0150f620(long param_1,undefined4 *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long local_50;
  long local_48;
  
  *(undefined4 *)(param_1 + 0xd0) = *param_2;
  FUN_0150eb88(param_1 + 0xd8,*(undefined8 *)(param_2 + 2));
  lVar10 = FUN_0150fdb4(*(undefined8 *)(param_1 + 8));
  local_50 = lVar10;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_48 = *(long *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_0150fa70(&local_48);
  local_50 = 0;
  *(long *)(param_1 + 0xe0) = lVar10;
  FUN_0150fa70(&local_50);
  FUN_0150fcf0(&local_48,*(undefined8 *)(param_1 + 8));
  plVar11 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x28) = local_48;
  FUN_012b422c(local_48 + 0x400,param_2 + 4,param_2 + 0xc);
  FUN_0150fa30(*(long *)(param_1 + 0x28) + 0x400,param_2 + 0x18);
  FUN_0150fa3c(param_2[0x1a],param_2[0x1b],param_2[0x1c],param_2[0x1d]);
  FUN_0150fc50(*(undefined8 *)(param_1 + 8));
  puVar6 = PTR_DAT_047dd280;
  if (((*PTR_DAT_047dd280 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  puVar8 = PTR_DAT_047dd290;
  puVar7 = PTR_DAT_047dd288;
  uVar12 = *(undefined8 *)PTR_DAT_047dd288;
  *(undefined8 *)PTR_DAT_047dd290 = uVar12;
  uVar12 = FUN_0150fadc(uVar12,0);
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  uVar13 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar13;
  lVar10 = FUN_0150fadc(uVar13,1);
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  uVar13 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar13;
  lVar14 = FUN_0150fadc(uVar13,2);
  plVar11 = (long *)(lVar10 + 0x1d0);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0150f7ac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x1d8));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x1d8));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0150f7ac;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0150f7ac:
  FUN_00e220f4(lVar10,uVar12,0);
  FUN_00e220f4(lVar10,0,lVar14);
  *(undefined8 *)(lVar10 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x1d8));
  plVar11 = (long *)(lVar14 + 0x1d0);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0150f7f8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1d8));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1d8));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0150f7f8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0150f7f8:
  if (((*PTR_DAT_047d8d80 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar10 = *(long *)PTR_DAT_047d8d88;
  *(long *)PTR_DAT_047d8d90 = lVar10;
  FUN_00e220f4(lVar14,0,*(undefined8 *)(lVar10 + 0x28));
  *(undefined8 *)(lVar14 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1d8));
  return;
}


