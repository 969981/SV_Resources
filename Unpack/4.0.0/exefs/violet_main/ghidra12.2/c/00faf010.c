/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00faf010; name: FUN_00faf010
 */


void FUN_00faf010(long param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *local_50 [2];
  long *local_40 [2];
  
  plVar1 = (long *)(param_1 + 8);
  FUN_00f2be30(local_40,plVar1);
  if (local_40[0] != (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 == (long *)0x0) {
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      if ((undefined8 *)plVar6[6] == (undefined8 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)plVar6[6];
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      lVar8 = plVar6[6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_00faf1bc;
    }
    FUN_00cf1338(local_40[0],uVar9);
    plVar6 = (long *)(param_1 + 0x38);
    lVar8 = *plVar6;
    if (lVar8 != 0) {
      do {
        if (*plVar6 != lVar8) {
          ClearExclusiveLocal();
          goto LAB_00faf0b4;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar6 = *(long **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar2 = (short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00faf1bc;
      }
    }
LAB_00faf0b4:
    plVar6 = (long *)(param_1 + 0x20);
    FUN_00cf0b78(local_50,plVar6);
    if ((local_50[0] != (long *)0x0) &&
       (FUN_00cf1654(local_40[0],local_50), local_50[0] != (long *)0x0)) {
      lVar8 = local_50[0][6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_50[0] + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_00faf1bc;
    }
    plVar7 = (long *)(param_1 + 0x28);
    lVar8 = *plVar7;
    if (lVar8 != 0) {
      do {
        if (*plVar7 != lVar8) {
          ClearExclusiveLocal();
          goto LAB_00faf124;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar7 = (long *)*plVar6;
      *plVar6 = 0;
      if (plVar7 != (long *)0x0) {
        lVar8 = plVar7[6];
        psVar2 = (short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00faf1bc;
      }
    }
LAB_00faf124:
    if (local_40[0] != (long *)0x0) {
      lVar8 = local_40[0][6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_40[0] + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_00faf1bc;
    }
  }
  plVar6 = (long *)(param_1 + 0x10);
  lVar8 = *plVar6;
  if (lVar8 != 0) {
    do {
      if (*plVar6 != lVar8) {
        ClearExclusiveLocal();
        return;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_00faf1bc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


