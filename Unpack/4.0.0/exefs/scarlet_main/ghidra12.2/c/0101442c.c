/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0101442c; name: FUN_0101442c
 */


bool FUN_0101442c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *local_58;
  long *local_50;
  long *local_48;
  
  if (*(long *)(param_1 + 0xd88) != 0) {
    return true;
  }
  FUN_00c9e664(&local_50,param_1 + 0xe8);
  if (local_48 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = local_48[9];
  }
  plVar10 = (long *)(lVar9 + 0x110);
  lVar7 = *plVar10;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar7) {
    lVar5 = nn::os::GetCurrentThread();
LAB_01014484:
    if (*plVar10 == 0) goto code_r0x0101448c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar8) {
              *plVar10 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01014494;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01014494:
    bVar8 = false;
    goto LAB_01014498;
  }
  bVar8 = true;
LAB_01014498:
  plVar10 = *(long **)(lVar9 + 0x128);
  plVar11 = *(long **)(lVar9 + 0x130);
  if (plVar10 != plVar11) {
    do {
      lVar5 = *plVar10;
      if ((((lVar5 != 0) && (uVar6 = FUN_0101470c(lVar5 + 8), (uVar6 & 1) != 0)) &&
          (uVar6 = (**(code **)(*(long *)*plVar10 + 0xc0))(), (uVar6 & 1) == 0)) &&
         (*(char *)(lVar5 + 0xfa) != '\0')) goto LAB_010144e8;
      plVar10 = plVar10 + 1;
    } while (plVar11 != plVar10);
    plVar10 = plVar11;
LAB_010144e8:
    if ((plVar10 != *(long **)(lVar9 + 0x130)) && (*plVar10 != 0)) {
      plVar11 = (long *)(*plVar10 + -0x20);
      goto LAB_01014554;
    }
  }
  plVar10 = *(long **)(lVar9 + 0x160);
  plVar11 = *(long **)(lVar9 + 0x168);
  if (plVar10 != plVar11) {
    do {
      lVar5 = *plVar10;
      if (((lVar5 != 0) && (uVar6 = FUN_0101470c(lVar5 + 8), (uVar6 & 1) != 0)) &&
         ((uVar6 = (**(code **)(*(long *)*plVar10 + 0xc0))(), (uVar6 & 1) == 0 &&
          (*(char *)(lVar5 + 0xfa) != '\0')))) goto LAB_01014544;
      plVar10 = plVar10 + 1;
    } while (plVar11 != plVar10);
    plVar10 = plVar11;
LAB_01014544:
    if (plVar10 != *(long **)(lVar9 + 0x168)) {
      plVar11 = (long *)0x0;
      if (*plVar10 != 0) {
        plVar11 = (long *)(*plVar10 + -0x20);
      }
      goto LAB_01014554;
    }
  }
  plVar11 = (long *)0x0;
LAB_01014554:
  if (!bVar8) {
    *(undefined8 *)(lVar9 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x118));
  }
  if (local_48 != (long *)0x0) {
    plVar10 = local_48 + 5;
    do {
      lVar9 = *plVar10;
      iVar4 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *(int *)plVar10 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x60))();
  }
  if (plVar11 != (long *)0x0) {
    local_50 = plVar11;
    FUN_01015c2c(&local_58,*(undefined8 *)(param_1 + 8),&local_50);
    FUN_01015b94((long *)(param_1 + 0xd88),&local_58);
    if (local_58 != (long *)0x0) {
      lVar9 = local_58[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return *(long *)(param_1 + 0xd88) != 0;
code_r0x0101448c:
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar8) {
    *plVar10 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01014494;
  goto LAB_01014484;
}


