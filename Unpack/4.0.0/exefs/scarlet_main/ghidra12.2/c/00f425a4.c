/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f425a4; name: FUN_00f425a4
 */


void FUN_00f425a4(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  long *local_48;
  
  plVar9 = (long *)(param_2 + 0x140);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00f425ec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x148));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x148));
        while (*plVar9 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00f425ec;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00f425ec:
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  if ((*(byte *)(param_2 + 0x278) & 1) == 0) {
LAB_00f42894:
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00c43ef0(param_1 + 1,&local_78);
    if (local_78 == (undefined8 *)0x0) goto LAB_00f42764;
    psVar2 = (short *)(local_78 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        puVar10 = local_78;
      } while (cVar5 != '\0');
      goto LAB_00f42914;
    }
  }
  else {
    plVar9 = *(long **)(param_2 + 0x178);
    plVar11 = *(long **)(param_2 + 0x180);
    if (plVar9 != plVar11) {
      do {
        lVar12 = *plVar9;
        plVar1 = (long *)(lVar12 + 0x60);
        lVar8 = nn::os::GetCurrentThread();
LAB_00f42624:
        if (*plVar1 == 0) goto code_r0x00f4262c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x68));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x68));
              while (*plVar1 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00f42634;
              }
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00f42634:
        cVar5 = *(char *)(lVar12 + 0xeb);
        *(undefined8 *)(lVar12 + 0x60) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x68));
        if (cVar5 == '\0') goto LAB_00f42894;
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar11);
      plVar9 = *(long **)(param_2 + 0x178);
      plVar11 = *(long **)(param_2 + 0x180);
      if (plVar9 == plVar11) goto LAB_00f42828;
      do {
        lVar8 = *plVar9;
        if (*(long *)(lVar8 + 0x1d0) == *param_3) {
          if (((plVar11 != plVar9) && (lVar8 != 0)) &&
             (FUN_00f42a08(&local_48,lVar8,auStack_68), plVar9 = local_48, local_48 != (long *)0x0))
          {
            plVar11 = local_48 + 8;
            lVar8 = nn::os::GetCurrentThread();
            goto LAB_00f426f0;
          }
          break;
        }
        plVar9 = plVar9 + 1;
      } while (plVar11 != plVar9);
    }
LAB_00f42828:
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_00c43ef0(param_1 + 1,&local_88);
    if (local_88 == (undefined8 *)0x0) goto LAB_00f42764;
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        puVar10 = local_88;
      } while (cVar5 != '\0');
LAB_00f42914:
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_48 = (long *)*puVar10;
        FUN_00c44438(lVar8 + 0x8040,&local_48);
      }
      goto LAB_00f42764;
    }
  }
  if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_00f42764:
  *(undefined8 *)(param_2 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x148));
  return;
code_r0x00f4262c:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *plVar1 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00f42634;
  goto LAB_00f42624;
LAB_00f426f0:
  if (*plVar11 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar9 + 9));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar9 + 9));
          while (*plVar11 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00f42700;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00f42700:
    if ((undefined8 *)plVar9[0x10] == (undefined8 *)plVar9[0xf]) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    plVar11 = *(long **)plVar9[0xf];
    plVar9[8] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar9 + 9));
    (**(code **)(*plVar11 + 0x70))(param_1,plVar11);
    if (local_48 != (long *)0x0) {
      lVar8 = local_48[6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_48 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    goto LAB_00f42764;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar6) {
    *plVar11 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00f42700;
  goto LAB_00f426f0;
}


