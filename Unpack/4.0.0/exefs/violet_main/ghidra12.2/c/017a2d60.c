/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a2d60; name: FUN_017a2d60
 */


long FUN_017a2d60(long param_1,long *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long local_58;
  long local_50;
  long lStack_48;
  long *local_40;
  long *local_38;
  
  local_58 = *param_2;
  plVar8 = (long *)PTR_DAT_047d8b70;
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 0x58) + 0x30);
  }
  if (local_58 == *plVar8) {
    lVar6 = *(long *)(param_1 + 0x240);
  }
  else {
    local_50 = param_2[1];
    lStack_48 = param_2[2];
    plVar8 = (long *)param_2[3];
    local_40 = plVar8;
    if (plVar8 == (long *)0x0) {
      FUN_017a2f38(&local_38,param_1 + 0x250,&local_58);
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      FUN_017a2f38(&local_38,param_1 + 0x250,&local_58);
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (local_38 == (long *)0x0) {
      lVar6 = -1;
    }
    else {
      if (param_3 == 0) {
        FUN_017a221c(local_38);
      }
      plVar5 = local_38;
      plVar8 = local_38 + 8;
      lVar7 = *plVar8;
      lVar6 = nn::os::GetCurrentThread();
      if (lVar6 != lVar7) {
        lVar6 = nn::os::GetCurrentThread();
LAB_017a2e04:
        if (*plVar8 == 0) goto code_r0x017a2e0c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar5 + 9));
        do {
          if (*plVar8 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar5 + 9));
              while (*plVar8 == 0) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = lVar6;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_017a2e14;
              }
            } while( true );
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_017a2e14:
        lVar6 = plVar5[0x48];
        plVar5[8] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar5 + 9));
        goto LAB_017a2e28;
      }
      lVar6 = plVar5[0x48];
LAB_017a2e28:
      if (local_38 != (long *)0x0) {
        lVar7 = local_38[6];
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
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  return lVar6;
code_r0x017a2e0c:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar4) {
    *plVar8 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_017a2e14;
  goto LAB_017a2e04;
}


