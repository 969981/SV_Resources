/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a4438; name: FUN_018a4438
 */


void FUN_018a4438(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *local_50 [2];
  long local_40 [2];
  
  FUN_00edeeb4(local_40,param_1 + 8);
  if (local_40[0] != 0) {
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 == (long *)0x0) {
      uVar8 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      if ((undefined8 *)plVar5[6] == (undefined8 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)plVar5[6];
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      lVar7 = plVar5[6];
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
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_018a45e0;
    }
    FUN_00cf1338(local_40[0],uVar8);
    plVar5 = (long *)(param_1 + 0x38);
    lVar7 = *plVar5;
    if (lVar7 != 0) {
      do {
        if (*plVar5 != lVar7) {
          ClearExclusiveLocal();
          goto LAB_018a44dc;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar5 = *(long **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[6];
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
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_018a45e0;
      }
    }
LAB_018a44dc:
    plVar5 = (long *)(param_1 + 0x20);
    FUN_00cf0b78(local_50,plVar5);
    if ((local_50[0] != (long *)0x0) &&
       (FUN_00cf1654(local_40[0],local_50), local_50[0] != (long *)0x0)) {
      lVar7 = local_50[0][6];
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
        (**(code **)(*local_50[0] + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_018a45e0;
    }
    plVar6 = (long *)(param_1 + 0x28);
    lVar7 = *plVar6;
    if (lVar7 != 0) {
      do {
        if (*plVar6 != lVar7) {
          ClearExclusiveLocal();
          goto LAB_018a4560;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = (long *)*plVar5;
      *plVar5 = 0;
      if (plVar6 != (long *)0x0) {
        lVar7 = plVar6[6];
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
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_018a45e0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
LAB_018a4560:
  FUN_00edee3c(local_40);
  FUN_018a4660(param_1 + 8);
  return;
}


