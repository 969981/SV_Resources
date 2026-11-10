/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1fcc0; name: FUN_00f1fcc0
 */


void FUN_00f1fcc0(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long local_50;
  long lStack_48;
  
  if (*(char *)(param_1 + 0x7c7) == '\0') {
    plVar10 = (long *)(param_1 + 0x7c8);
    lVar8 = *plVar10;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar8) {
      lVar5 = nn::os::GetCurrentThread();
LAB_00f1fee0:
      if (*plVar10 == 0) goto code_r0x00f1fee8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 2000));
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2000));
            while (*plVar10 == 0) {
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *plVar10 = lVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                bVar7 = false;
                goto LAB_00f1fef0;
              }
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = false;
      goto LAB_00f1fef0;
    }
    plVar10 = (long *)0x0;
    bVar7 = true;
LAB_00f1fef0:
    if (*(char *)(param_1 + 0x7c7) == '\0') {
      plVar9 = *(long **)(param_1 + 0x7e0);
      *(undefined1 *)(param_1 + 0x7c7) = 1;
      if (plVar9 != (long *)0x0) {
        *(undefined8 *)(param_1 + 0x7e0) = 0;
      }
    }
    else {
      plVar9 = (long *)0x0;
    }
    if (!bVar7) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    if (plVar9 != (long *)0x0) {
      local_50 = param_1;
      FUN_013e14ac(plVar9,&local_50);
      plVar10 = plVar9 + 5;
      do {
        lVar5 = *plVar10;
        iVar4 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *(int *)plVar10 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  FUN_00f20170(param_1,2);
  plVar10 = (long *)(param_1 + 0x708);
  lVar8 = *plVar10;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar8) {
    lVar5 = nn::os::GetCurrentThread();
LAB_00f1fd10:
    if (*plVar10 == 0) goto code_r0x00f1fd18;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x710));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x710));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00f1fd20;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00f1fd20:
    bVar7 = false;
    goto LAB_00f1fd24;
  }
  plVar10 = (long *)0x0;
  bVar7 = true;
LAB_00f1fd24:
  *(undefined1 *)(param_1 + 0x7c6) = 1;
  if (*(char *)(param_1 + 0x720) != '\0') {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d4e00;
    *(undefined8 *)PTR_DAT_047d4e08 = uVar6;
    FUN_00f204ec(uVar6,param_1);
    *(undefined1 *)(param_1 + 0x720) = 0;
  }
  if (*(char *)(param_1 + 0x600) != '\0') {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    local_50 = *(long *)PTR_DAT_047d4e00;
    *(long *)PTR_DAT_047d4e08 = local_50;
    lStack_48 = param_1;
    FUN_00f206a8(*(undefined8 *)(local_50 + 0xb0c8),&local_50);
    *(undefined1 *)(param_1 + 0x600) = 0;
  }
  if (!bVar7) {
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
  }
  if (*(long *)(param_1 + 0x788) == *(long *)(param_1 + 0x780)) {
LAB_00f1fd58:
    FUN_00f20290(param_1);
    return;
  }
  plVar10 = (long *)(param_1 + 0x760);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar10 == 0 && *(long *)(param_1 + 0x768) == 0) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar5;
      *(undefined8 *)(param_1 + 0x768) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00f1fe54;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x770));
  do {
    if (*plVar10 != 0 || *(long *)(param_1 + 0x768) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x770));
        while (*plVar10 == 0 && *(long *)(param_1 + 0x768) == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar5;
            *(undefined8 *)(param_1 + 0x768) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00f1fe54;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar5;
      *(undefined8 *)(param_1 + 0x768) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00f1fe54:
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar6;
  FUN_00f207f4(uVar6,param_1);
  *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_1 + 0x780);
  do {
    lVar5 = *plVar10;
    lVar8 = *(long *)(param_1 + 0x768);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar5;
      *(long *)(param_1 + 0x768) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar1 = *plVar10;
    lVar2 = *(long *)(param_1 + 0x768);
    if (lVar1 != lVar5 || lVar2 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00f1ffc0;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = 0;
      *(long *)(param_1 + 0x764) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_00f1ffc0:
  if (!bVar7) {
    do {
      lVar5 = *plVar10;
      lVar8 = *(long *)(param_1 + 0x768);
      if (lVar5 != lVar1 || lVar8 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f20130;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = 0;
        *(long *)(param_1 + 0x764) = lVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
joined_r0x00f20130:
    if (!bVar7) {
      do {
        lVar1 = *plVar10;
        lVar2 = *(long *)(param_1 + 0x768);
        if (lVar1 != lVar5 || lVar2 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar5 = lVar1;
          lVar8 = lVar2;
          goto joined_r0x00f20130;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = 0;
          *(long *)(param_1 + 0x764) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
      lVar5 = lVar1;
      lVar8 = lVar2;
      goto joined_r0x00f20130;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x770));
  goto LAB_00f1fd58;
code_r0x00f1fee8:
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar7) {
    *plVar10 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  bVar7 = false;
  if (cVar3 == '\0') goto LAB_00f1fef0;
  goto LAB_00f1fee0;
code_r0x00f1fd18:
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar7) {
    *plVar10 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00f1fd20;
  goto LAB_00f1fd10;
}


