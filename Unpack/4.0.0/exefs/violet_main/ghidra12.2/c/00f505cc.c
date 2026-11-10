/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f505cc; name: FUN_00f505cc
 */


undefined8 FUN_00f505cc(long *param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  short sVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *local_28;
  
  plVar12 = param_1 + 0xb;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00f50604;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar9) {
            *plVar12 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00f50604;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00f50604:
  if ((char)param_1[10] != '\0') {
    uVar11 = 0;
    goto LAB_00f5061c;
  }
  lVar5 = param_1[8];
  uVar11 = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  if (lVar5 == 0) goto LAB_00f5061c;
  if (*(short *)(lVar5 + 0x1a) != 0) {
    psVar1 = (short *)(lVar5 + 0x1a);
    uVar11 = 1;
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00f506c8;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f506c8:
        bVar9 = false;
      }
      if (bVar9) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) break;
        if (*(char *)((long)param_1 + 0x51) != '\0') goto LAB_00f506ec;
        *(undefined1 *)((long)param_1 + 0x51) = 1;
        if (((param_2 & 1) == 0) ||
           (uVar6 = (**(code **)(*param_1 + 0x88))(param_1), (uVar6 & 1) != 0)) {
          plVar12 = (long *)(lVar5 + 0x400);
          lVar10 = *plVar12;
          lVar7 = nn::os::GetCurrentThread();
          if (lVar7 == lVar10) {
            plVar12 = (long *)0x0;
            bVar9 = true;
            goto LAB_00f507dc;
          }
          lVar7 = nn::os::GetCurrentThread();
          goto LAB_00f507c8;
        }
        if (((*PTR_DAT_047d4df8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0)) {
          FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4df8);
        }
        uVar11 = *(undefined8 *)PTR_DAT_047d4e00;
        *(undefined8 *)PTR_DAT_047d4e08 = uVar11;
        FUN_00f3aa48(&local_28,uVar11,param_1 + 4);
        if (local_28 != (long *)0x0) {
          lVar7 = local_28[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*local_28 + 0x50))();
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        goto LAB_00f506ec;
      }
      sVar8 = sVar2;
      if (sVar2 == 0) goto LAB_00f5061c;
    } while( true );
  }
LAB_00f506fc:
  uVar11 = 1;
LAB_00f5061c:
  param_1[0xb] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  return uVar11;
LAB_00f507c8:
  if (*plVar12 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x408));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x408));
          while (*plVar12 == 0) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar9) {
              *plVar12 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00f507d8;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00f507d8:
    bVar9 = false;
LAB_00f507dc:
    if (*(char *)(lVar5 + 0x418) != '\0') {
      FUN_021d6e18(param_1);
    }
    if (!bVar9) {
      *plVar12 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
    }
LAB_00f506ec:
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x60))();
    goto LAB_00f506fc;
  }
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar9) {
    *plVar12 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00f507d8;
  goto LAB_00f507c8;
}


