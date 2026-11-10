/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e1000; name: FUN_010e1000
 */


uint FUN_010e1000(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  long *local_40;
  long *local_38;
  undefined1 auStack_18 [8];
  
  if (param_1[0x29] == 0) {
    FUN_00c9e664(&local_40,param_1 + 0x1d);
    lVar14 = 0;
    if (local_38 != (long *)0x0) {
      lVar14 = local_38[9];
    }
    plVar8 = (long *)FUN_0104b474(lVar14 + 0x108,auStack_18);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x58))(plVar8);
    }
    plVar7 = (long *)param_1[0x29];
    param_1[0x29] = (long)plVar8;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x60))();
    }
    if (local_38 != (long *)0x0) {
      plVar8 = local_38 + 5;
      do {
        lVar14 = *plVar8;
        iVar5 = (int)lVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar14 == 0) {
LAB_010e12d8:
        pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar11 = "DecrementReferenceInternal";
        pcVar12 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar13 = "Reference counter underflows.";
LAB_010e12f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar10,pcVar11,pcVar12,0x58,pcVar13);
      }
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x60))();
    }
  }
  else {
    if (param_1[0x28] == 0) {
      FUN_00c9e664(&local_40,param_1 + 0x1d);
      lVar14 = 0;
      if (local_38 != (long *)0x0) {
        lVar14 = local_38[9];
      }
      lVar14 = FUN_010e1344(lVar14 + 0x108,auStack_18);
      if (lVar14 != 0) {
        lVar15 = *(long *)(lVar14 + 0x98);
        if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar9;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
          pcVar10 = "count != 0";
          pcVar11 = "AddReference";
          pcVar12 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar13 = "Reference counter overflows.";
          goto LAB_010e12f8;
        }
      }
      plVar8 = (long *)param_1[0x28];
      param_1[0x28] = lVar14;
      if (plVar8 != (long *)0x0) {
        lVar14 = plVar8[0x13];
        psVar1 = (short *)(lVar14 + 0x1a);
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
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (local_38 != (long *)0x0) {
        plVar8 = local_38 + 5;
        do {
          lVar14 = *plVar8;
          iVar5 = (int)lVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
        else if ((int)lVar14 == 0) goto LAB_010e12d8;
      }
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x60))();
      }
      uVar6 = 0;
      *(long **)(param_1[0x28] + 0x228) = param_1 + 0x24;
      goto LAB_010e1034;
    }
    if ((*(char *)(param_1[0x29] + 0x11a) != '\0') && (*(char *)(param_1[0x28] + 0x11a) != '\0')) {
      FUN_00c9e664(&local_40,param_1 + 0x1d);
      lVar14 = 0;
      if (local_38 != (long *)0x0) {
        lVar14 = local_38[9];
      }
      lVar14 = FUN_00efcb90(lVar14 + 0x108,auStack_18);
      if (local_38 != (long *)0x0) {
        plVar8 = local_38 + 5;
        do {
          lVar15 = *plVar8;
          iVar5 = (int)lVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
        else if ((int)lVar15 == 0) goto LAB_010e12d8;
      }
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x60))();
      }
      if (lVar14 != 0) {
        *(undefined1 *)(param_1 + 0x39) = 1;
      }
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1,param_2);
      goto LAB_010e1034;
    }
  }
  uVar6 = 0;
LAB_010e1034:
  return uVar6 & 1;
}


