/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5aa9c; name: FUN_00c5aa9c
 */


void FUN_00c5aa9c(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  lVar7 = *(long *)(param_1 + (long)*(int *)(param_2 + 0xc) * 0x10 + 0x150);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00c5ab10;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c5ab10:
        bVar5 = false;
      }
      if (bVar5) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        plVar9 = (long *)(lVar7 + -0x28);
        if (*(long *)(lVar7 + 0x68) != 0) {
          puVar6 = (ulong *)FUN_02174494(plVar9,param_2);
          bVar5 = -1 < (int)*puVar6;
          if (bVar5) {
            *puVar6 = *puVar6 | 0x80000000;
          }
          lVar7 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar3) {
              *psVar1 = sVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar8 == 0) goto LAB_00c5ac60;
          if (!bVar5) {
            return;
          }
          local_40 = FUN_021744bc(param_2,0xfffffffe);
          if (local_40._8_4_ != 0) {
            local_50 = FUN_021745c4(local_40);
            FUN_00c5aa9c(param_1,local_50);
          }
          auVar10 = FUN_021744bc(param_2,0xffffffff);
          local_40 = auVar10;
          if (auVar10._8_4_ != 0) {
            auVar10 = FUN_021745c4(local_40);
            local_50 = auVar10;
            FUN_00c5aa9c(param_1,local_50);
          }
          auVar10 = FUN_021744bc(param_2,0);
          local_40 = auVar10;
          if (auVar10._8_4_ != 0) {
            auVar10 = FUN_021745c4(local_40);
            local_50 = auVar10;
            FUN_00c5aa9c(param_1,local_50);
          }
          auVar10 = FUN_021744bc(param_2,1);
          if (auVar10._8_4_ == 0) {
            return;
          }
          local_40 = auVar10;
          auVar10 = FUN_021745c4(local_40);
          local_50 = auVar10;
          FUN_00c5aa9c(param_1,local_50);
          return;
        }
        lVar7 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c5acc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x50))(plVar9);
          return;
        }
        if (sVar8 != 0) {
          return;
        }
LAB_00c5ac60:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


