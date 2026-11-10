/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c8dda0; name: FUN_00c8dda0
 */


long FUN_00c8dda0(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  bool bVar10;
  long *local_40;
  long *local_38;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    if (*(char *)(param_1 + 0x11e) != '\0') {
      return 0;
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x120) + 0x10);
    lVar5 = 0;
    if (lVar7 != 0) {
      lVar5 = lVar7 + -0x28;
    }
    if (*(char *)(param_1 + 0x11e) != '\0') {
      return lVar5;
    }
    if (lVar7 != 0) {
      return lVar5;
    }
  }
  if (*(char *)(param_1 + 0x246) == '\0') {
    FUN_00c9e664(&local_40,param_1 + 0xe8);
    plVar9 = local_40;
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x58))(local_40);
    }
    if (local_38 != (long *)0x0) {
      plVar6 = local_38 + 5;
      do {
        lVar5 = *plVar6;
        iVar4 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar10) {
          *(int *)plVar6 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x60))();
    }
    if (plVar9 != (long *)0x0) {
LAB_00c8defc:
      plVar6 = plVar9 + 0x22;
      lVar7 = *plVar6;
      lVar5 = nn::os::GetCurrentThread();
      if (lVar5 == lVar7) {
        bVar10 = true;
LAB_00c8df2c:
        plVar6 = (long *)FUN_029de530(plVar9[0x25],plVar9[0x26]);
        if (((long *)plVar9[0x26] == plVar6) || (*plVar6 == 0)) {
          plVar6 = (long *)FUN_029de530(plVar9[0x2c],plVar9[0x2d]);
          if ((long *)plVar9[0x2d] == plVar6) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if (*plVar6 != 0) {
              lVar5 = *plVar6 + -0x20;
            }
          }
        }
        else {
          lVar5 = *plVar6 + -0x20;
        }
        if (!bVar10) {
          plVar9[0x22] = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar9 + 0x23));
        }
        (**(code **)(*plVar9 + 0x60))(plVar9);
        return lVar5;
      }
      lVar5 = nn::os::GetCurrentThread();
      while (*plVar6 == 0) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar10) {
          *plVar6 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_00c8df28;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x23));
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x23));
            while (*plVar6 == 0) {
              cVar3 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar10) {
                *plVar6 = lVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00c8df28;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar10) {
          *plVar6 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00c8df28:
      bVar10 = false;
      goto LAB_00c8df2c;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x130);
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar8 = *(short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_00c8deb0;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00c8deb0:
          bVar10 = false;
        }
        if (bVar10) {
          if (*(long *)(lVar5 + 0x10) == 0) {
            return 0;
          }
          plVar9 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
          goto LAB_00c8defc;
        }
        sVar8 = sVar2;
        if (sVar2 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


