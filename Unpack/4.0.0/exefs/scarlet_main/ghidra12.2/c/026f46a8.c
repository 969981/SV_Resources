/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f46a8; name: FUN_026f46a8
 */


void FUN_026f46a8(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long *local_98;
  ulong local_90;
  ulong local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  undefined1 auStack_38 [8];
  
  lVar10 = *(long *)(param_1 + 0x48);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_026f470c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026f470c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        plVar12 = (long *)(lVar10 + -0x28);
        lVar6 = FUN_026f5464(plVar12);
        plVar7 = (long *)FUN_00e31554();
        local_58 = 0x400000003;
        uStack_50 = 5;
        local_70 = 1;
        uStack_68 = 2;
        local_60 = 0x200000037;
        local_90 = (ulong)*(uint *)(lVar6 + 400);
        local_88 = (ulong)*(uint *)(lVar6 + 0x194);
        local_78 = (ulong)(*(uint *)(lVar6 + 400) << 2);
        local_48 = 0x10;
        uStack_80 = 0;
        local_40 = *plVar7;
        plVar8 = (long *)FUN_00cf3764(auStack_38,*(undefined8 *)(local_40 + 8),&local_40);
        plVar7 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 5;
          do {
            lVar6 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *(int *)plVar7 = (int)lVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar6 == -1) {
LAB_026f48e0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          plVar7 = plVar8;
        }
        FUN_0117e220(plVar7,&local_90,1,3,0);
        uVar9 = *param_2;
        local_98 = plVar8;
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 5;
          do {
            lVar6 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *(int *)plVar7 = (int)lVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar6 == -1) goto LAB_026f48e0;
        }
        FUN_026f546c(uVar9,&local_98);
        if (local_98 != (long *)0x0) {
          plVar7 = local_98 + 5;
          do {
            lVar6 = *plVar7;
            iVar5 = (int)lVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *(int *)plVar7 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_98 + 0x10))();
          }
          else if ((int)lVar6 == 0) goto LAB_026f4908;
        }
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 5;
          do {
            lVar6 = *plVar7;
            iVar5 = (int)lVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *(int *)plVar7 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          else if ((int)lVar6 == 0) {
LAB_026f4908:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        lVar10 = *(long *)(lVar10 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
          return;
        }
        if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


