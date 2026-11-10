/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f6cc4; name: FUN_020f6cc4
 */


void FUN_020f6cc4(long *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  byte bVar7;
  long *plVar8;
  undefined1 auStack_858 [2072];
  long *local_28;
  
  if (*(long *)(*(long *)PTR_DAT_047d3a88 + 8) == 0) {
    *param_1 = 0;
  }
  else {
    plVar5 = (long *)FUN_0167513c(auStack_858);
    if (plVar5 != (long *)0x0) {
      plVar8 = plVar5 + 5;
      do {
        lVar4 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = (int)lVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar4 == -1) goto LAB_020f6e80;
    }
    memcpy(auStack_858,param_2,0x814);
    FUN_018e922c(plVar5,auStack_858,1);
    if ((char)plVar5[0x12] != '\0') {
      bVar7 = 0;
      do {
        local_28 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,bVar7);
        if (local_28 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = local_28 + 5;
          do {
            lVar4 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *(int *)plVar8 = (int)lVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((int)lVar4 == -1) goto LAB_020f6e80;
          plVar8 = local_28;
        }
        uVar6 = FUN_00cf4cfc(plVar8[0xe]);
        if (((uVar6 & 1) == 0) && ((*(ushort *)(*(long *)(plVar8[0xe] + 0x10) + 4) >> 2 & 1) == 0))
        {
          FUN_01d1d4c4(&local_28);
        }
        if (local_28 != (long *)0x0) {
          plVar8 = local_28 + 5;
          do {
            lVar4 = *plVar8;
            iVar3 = (int)lVar4 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *(int *)plVar8 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*local_28 + 0x10))();
          }
          else if ((int)lVar4 == 0) goto LAB_020f6e20;
        }
        bVar7 = bVar7 + 1;
      } while (bVar7 < *(byte *)(plVar5 + 0x12));
    }
    plVar8 = plVar5 + 5;
    *param_1 = (long)plVar5;
    do {
      lVar4 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) {
LAB_020f6e80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar4 = *plVar8;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    else if ((int)lVar4 == 0) {
LAB_020f6e20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


