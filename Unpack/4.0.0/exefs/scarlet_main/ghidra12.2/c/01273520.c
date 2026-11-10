/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01273520; name: FUN_01273520
 */


void FUN_01273520(long *param_1)

{
  short *psVar1;
  long *plVar2;
  LightEventType *pLVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  short sVar12;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_38 [8];
  
  lVar11 = *param_1;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01273598;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01273598:
        bVar6 = false;
      }
      if (bVar6) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          return;
        }
        local_60 = 0;
        uStack_58 = 0;
        plVar2 = (long *)(lVar11 + 0x398);
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = &PTR_FUN_04544fd0;
        uStack_88 = 0;
        lVar7 = nn::os::GetCurrentThread();
        goto LAB_012735dc;
      }
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  return;
LAB_012735dc:
  if (*plVar2 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_012735ec;
    goto LAB_012735dc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x3a0));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x3a0));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_012735ec;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_012735ec:
  lVar7 = lVar11 + 0x60;
  param_1 = param_1 + 2;
  lVar8 = FUN_0120bf7c(lVar7,param_1);
  if (*(long *)(lVar8 + 8) == 0) {
LAB_012737f0:
    FUN_0120bf7c(lVar7,param_1);
    FUN_01185f44();
    *(undefined8 *)(lVar11 + 0x398) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x3a0));
LAB_012736e4:
    FUN_01185de0(&local_90);
    lVar7 = *(long *)(lVar11 + 8);
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
      return;
    }
    if (sVar12 != 0) {
      return;
    }
LAB_01273710:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  lVar8 = FUN_0120bf7c(lVar7,param_1);
  if ((*(long *)(lVar8 + 8) == 0) || ((*(byte *)(*(long *)(lVar8 + 8) + 0x1e8) & 1) == 0))
  goto LAB_012737f0;
  uVar9 = FUN_0120bf7c(lVar7,param_1);
  FUN_0118779c(&local_90,uVar9);
  pLVar3 = (LightEventType *)(lVar11 + 0x3a0);
  *(undefined8 *)(lVar11 + 0x398) = 0;
  nn::os::SignalLightEvent(pLVar3);
  plVar10 = (long *)FUN_0118766c(auStack_38,*(undefined8 *)(lVar11 + -0x20),&local_90);
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[6];
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar9;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_00efa2a4(plVar10);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_012736b8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar3);
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar3);
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_012736b8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_012736b8:
  if (*(long *)(lVar11 + 0xb8) != 0) {
    uVar9 = FUN_0120a430(lVar11 + 200,param_1);
    FUN_016a6bd4(uVar9,plVar10);
  }
  *plVar2 = 0;
  nn::os::SignalLightEvent(pLVar3);
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar12 == 0) goto LAB_01273710;
  }
  goto LAB_012736e4;
}


