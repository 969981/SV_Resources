/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e1028; name: FUN_013e1028
 */


void FUN_013e1028(long *param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  long *plVar15;
  long *plVar16;
  short sVar17;
  undefined8 *puVar18;
  long *local_68;
  long *local_48;
  
  if ((param_2 & 1) != 0) {
    plVar15 = param_1 + 0x78;
    lVar12 = *plVar15;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar12) {
      lVar7 = nn::os::GetCurrentThread();
LAB_013e11d4:
      if (*plVar15 == 0) goto code_r0x013e11dc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x79));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x79));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar14) {
                *plVar15 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_013e11e4;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar14) {
          *plVar15 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_013e11e4:
      bVar14 = false;
      goto LAB_013e11e8;
    }
    plVar15 = (long *)0x0;
    bVar14 = true;
LAB_013e11e8:
    puVar5 = PTR_DAT_047d6528;
    plVar13 = (long *)param_1[0x7b];
    plVar11 = (long *)param_1[0x7c];
    if (plVar13 != plVar11) {
      pbVar10 = PTR_DAT_047d6520;
LAB_013e1260:
      lVar7 = *plVar13;
      if ((lVar7 != 0) && (sVar17 = *(short *)(lVar7 + 0x1a), sVar17 != 0)) {
        puVar18 = *(undefined8 **)(lVar7 + 8);
        if (((*pbVar10 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar6 != 0)) {
          uVar9 = FUN_0151c130();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(PTR_DAT_047d6520);
        }
        pbVar10 = PTR_DAT_047d6520;
        if (puVar18 != (undefined8 *)0x0) {
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            if (puVar18 == (undefined8 *)puVar5) goto LAB_013e1354;
            puVar18 = (undefined8 *)*puVar18;
          } while (puVar18 != (undefined8 *)0x0);
        }
      }
      goto LAB_013e1268;
    }
LAB_013e11f8:
    if (!bVar14) {
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
  }
  if (*(char *)((long)param_1 + 0x7c7) == '\0') {
    plVar15 = param_1 + 0xf9;
    lVar12 = *plVar15;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar12) {
      lVar7 = nn::os::GetCurrentThread();
LAB_013e1074:
      if (*plVar15 == 0) goto code_r0x013e107c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xfa));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xfa));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar14) {
                *plVar15 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                bVar14 = false;
                goto LAB_013e1084;
              }
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar14) {
          *plVar15 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar14 = false;
      goto LAB_013e1084;
    }
    plVar15 = (long *)0x0;
    bVar14 = true;
LAB_013e1084:
    if (*(char *)((long)param_1 + 0x7c7) == '\0') {
      plVar13 = (long *)param_1[0xfc];
      *(undefined1 *)((long)param_1 + 0x7c7) = 1;
      if (plVar13 != (long *)0x0) {
        param_1[0xfc] = 0;
      }
    }
    else {
      plVar13 = (long *)0x0;
    }
    if (!bVar14) {
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
    if (plVar13 != (long *)0x0) {
      local_48 = param_1;
      FUN_013e14ac(plVar13,&local_48);
      plVar15 = plVar13 + 5;
      do {
        lVar7 = *plVar15;
        iVar6 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar14) {
          *(int *)plVar15 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  FUN_00d2bee4(&local_48,param_1);
  plVar15 = local_48;
  if (local_48 != (long *)0x0) {
    uVar8 = (**(code **)(*local_48 + 0x68))(local_48,param_1);
    if ((uVar8 & 1) == 0) {
      local_68 = plVar15;
      (**(code **)(*plVar15 + 0x10))(plVar15);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    else {
      (**(code **)(*plVar15 + 0x48))(&local_68,plVar15);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      plVar15 = local_68;
      if (local_68 == (long *)0x0) {
        return;
      }
    }
    (**(code **)(*plVar15 + 0x60))(plVar15,param_1);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  return;
code_r0x013e11dc:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_013e11e4;
  goto LAB_013e11d4;
  while (sVar17 = sVar2, sVar2 != 0) {
LAB_013e1354:
    sVar2 = *psVar1;
    if (sVar2 == sVar17) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_013e1378;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_013e1378:
      bVar4 = false;
    }
    pbVar10 = PTR_DAT_047d6520;
    if (bVar4) {
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 != 0) {
        plVar16 = (long *)(lVar7 + -0x28);
        (**(code **)(*(long *)(lVar7 + -0x28) + 0x120))(plVar16,1);
        lVar7 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar17 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar16 + 0x50))(plVar16);
          pbVar10 = PTR_DAT_047d6520;
        }
        else {
          pbVar10 = PTR_DAT_047d6520;
          if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      break;
    }
  }
LAB_013e1268:
  plVar13 = plVar13 + 2;
  if (plVar13 == plVar11) goto LAB_013e11f8;
  goto LAB_013e1260;
code_r0x013e107c:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  bVar14 = false;
  if (cVar3 == '\0') goto LAB_013e1084;
  goto LAB_013e1074;
}


