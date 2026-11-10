/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4acb0; name: FUN_00e4acb0
 */


long FUN_00e4acb0(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  long *local_18;
  
  lVar7 = *param_1;
  lVar6 = *(long *)(lVar7 + 0x78);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00e4ad5c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e4ad5c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          plVar9 = (long *)(lVar6 + -0x28);
          FUN_0125ccec(&local_18,plVar9,lVar7 + 0x10);
          lVar6 = *(long *)(lVar6 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_00e4acd0;
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  local_18 = (long *)0x0;
LAB_00e4acd0:
  if (local_18 == (long *)0x0) {
    lVar6 = *(long *)(lVar7 + 0x1c8);
  }
  else {
    lVar6 = local_18[0x2c];
    plVar9 = local_18 + 5;
    do {
      lVar7 = *plVar9;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return lVar6;
}


