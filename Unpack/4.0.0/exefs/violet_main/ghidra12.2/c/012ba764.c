/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ba764; name: FUN_012ba764
 */


void FUN_012ba764(long param_1,undefined8 param_2)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  code *pcVar20;
  long lVar21;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar12 = FUN_00f124d8(auStack_50,param_2,&DAT_03d63530);
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x28);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar13 = *(long **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (plVar13 != (long *)0x0) {
    plVar3 = plVar13 + 5;
    do {
      lVar21 = *plVar3;
      iVar11 = (int)lVar21 + -1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *(int *)plVar3 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
    else if ((int)lVar21 == 0) {
      pcVar16 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar17 = "DecrementReferenceInternal";
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar19 = "Reference counter underflows.";
      goto LAB_012bac30;
    }
  }
  *(long *)(param_1 + 0x290) = lVar12;
  uVar14 = FUN_012e29a0();
  if ((uVar14 & 1) == 0) {
    uVar15 = FUN_012bbcec(DAT_04842700,"FontHeapDef::TEXTURE_CACHE",0,0x1100000,param_2);
  }
  else {
    uVar15 = FUN_012bac60();
  }
  *(undefined8 *)(param_1 + 0x78) = uVar15;
  uVar14 = FUN_012e29a0();
  if ((uVar14 & 1) == 0) {
    uVar15 = FUN_012bbcec(DAT_04842700,"FontHeapDef::FONTFILE",1,0x800000,param_2);
  }
  else {
    uVar15 = FUN_012bac60();
  }
  *(undefined8 *)(param_1 + 0x80) = uVar15;
  FUN_012bad4c(param_1);
  while( true ) {
    cVar5 = *(char *)(param_1 + 0x360);
    bVar9 = cVar5 != '\0';
    plVar13 = *(long **)(param_1 + 600);
    if (plVar13 != (long *)0x0) {
      if ((char)plVar13[0xe] == '\0') {
        iVar11 = nn::pl::GetSharedFontLoadState(*(undefined4 *)((long)plVar13 + 0x74));
        bVar9 = iVar11 == 1;
      }
      else {
        bVar9 = false;
        if (plVar13[7] != 0) {
          bVar9 = (bool)(*(byte *)(plVar13[7] + 0x1e8) & 1);
        }
      }
      bVar9 = (bool)(cVar5 != '\0' & bVar9);
      for (plVar13 = (long *)*plVar13; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        if (*(char *)(plVar13 + 0xe) == '\0') {
          iVar11 = nn::pl::GetSharedFontLoadState(*(undefined4 *)((long)plVar13 + 0x74));
          bVar10 = iVar11 == 1;
        }
        else {
          bVar10 = false;
          if (plVar13[7] != 0) {
            bVar10 = (bool)(*(byte *)(plVar13[7] + 0x1e8) & 1);
          }
        }
        bVar9 = (bool)(bVar9 & bVar10);
      }
    }
    if (bVar9 != false) break;
    nn::os::SleepThread(16000000);
  }
  FUN_0130cce0(param_1);
  local_58 = 0;
  lVar12 = FUN_0145b26c(auStack_48,param_2,&local_58);
  if (lVar12 != 0) {
    FUN_00f1b0c8(lVar12);
    lVar21 = *(long *)(lVar12 + 0x30);
    if (*(long *)(lVar21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar21 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
      *(undefined8 *)(lVar21 + 8) = uVar15;
      *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
      pcVar16 = "count != 0";
      pcVar17 = "AddReference";
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar19 = "Reference counter overflows.";
LAB_012bac30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar16,pcVar17,pcVar18,0x58,pcVar19);
    }
  }
  plVar13 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar13 != (long *)0x0) {
    lVar21 = plVar13[6];
    psVar2 = (short *)(lVar21 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar21 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x70) = lVar12;
  pcVar20 = *(code **)(lVar12 + 0x388);
  if (pcVar20 != (code *)0x0) {
    *(undefined8 *)(lVar12 + 0x390) = 0;
    *(undefined8 *)(lVar12 + 0x398) = 0;
    *(undefined8 *)(lVar12 + 0x380) = 0;
    *(undefined8 *)(lVar12 + 0x388) = 0;
    (*pcVar20)(lVar12 + 0x3a0);
  }
  *(undefined1 **)(lVar12 + 0x3a8) = &LAB_00f75068;
  *(undefined1 **)(lVar12 + 0x380) = &LAB_02b7a6e4;
  *(undefined1 **)(lVar12 + 0x388) = &LAB_02b7a700;
  *(undefined1 **)(lVar12 + 0x390) = &LAB_02b7a704;
  *(long *)(lVar12 + 0x3a0) = param_1;
  *(undefined8 *)(lVar12 + 0x3b0) = 0;
  *(undefined1 **)(lVar12 + 0x398) = &LAB_02b7a718;
  lVar21 = *(long *)(param_1 + 0x70);
  plVar13 = (long *)(lVar21 + 0x1d0);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_012ba9d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x1d8));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x1d8));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar9) {
            *plVar13 = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_012ba9d0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_012ba9d0:
  puVar6 = PTR_DAT_047dd280;
  if (((*PTR_DAT_047dd280 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  puVar8 = PTR_DAT_047dd290;
  puVar7 = PTR_DAT_047dd288;
  lVar12 = *(long *)PTR_DAT_047dd288;
  *(long *)PTR_DAT_047dd290 = lVar12;
  FUN_00e220f4(lVar21,*(undefined8 *)(lVar12 + 0x28),0);
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  lVar12 = *(long *)puVar7;
  *(long *)puVar8 = lVar12;
  FUN_00e220f4(lVar21,0,*(undefined8 *)(lVar12 + 0x30));
  *(undefined8 *)(lVar21 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x1d8));
  return;
}


