/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01861be8; name: FUN_01861be8
 */


void FUN_01861be8(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  char *pcVar13;
  long lVar14;
  long *local_40;
  long *local_38;
  
  iVar7 = (int)param_1[0x27];
  if (iVar7 == 4) {
    pcVar13 = (char *)param_1[0x2f];
    plVar12 = (long *)param_1[0x31];
    if (plVar12 == (long *)0x0) {
      cVar3 = *pcVar13;
    }
    else {
      (**(code **)(*plVar12 + 0x18))(plVar12);
      cVar3 = *pcVar13;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    if ((cVar3 != '\0') && ((code *)param_1[0x32] != (code *)0x0)) {
      (*(code *)param_1[0x32])(param_1 + 0x36);
      FUN_0186200c(param_1);
    }
    plVar12 = *(long **)(param_1[0x28] + 0x128);
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_01861f0c;
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar8;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_01861f54;
    }
    if (plVar12[0x15] == 0) {
      bVar6 = *(char *)plVar12[0x1b] == '\0';
    }
    else {
      bVar6 = false;
    }
    lVar14 = plVar12[6];
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
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar2 == 0) goto LAB_01861f2c;
    if (bVar6) {
      FUN_00c9e664(&local_40,param_1 + 0x1d);
      if (local_38 == (long *)0x0) {
        lVar14 = 0;
      }
      else {
        lVar14 = local_38[9];
      }
      plVar12 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x28))((undefined8 *)(lVar14 + 0x28));
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar7 != 0)) {
        uVar8 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar8;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)PTR_DAT_047d6528) goto LAB_01861e94;
      }
      lVar14 = 0;
LAB_01861e94:
      if (local_38 != (long *)0x0) {
        plVar12 = local_38 + 5;
        do {
          lVar5 = *plVar12;
          iVar7 = (int)lVar5 + -1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *(int *)plVar12 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
          pcVar13 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar9 = "DecrementReferenceInternal";
          pcVar10 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar11 = "Reference counter underflows.";
LAB_01861f74:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar13,pcVar9,pcVar10,0x58,pcVar11);
        }
      }
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x60))();
      }
      if (lVar14 != 0) {
        FUN_00cebc38(&local_40,lVar14);
        FUN_01861fd8(local_40);
        if (local_40 != (long *)0x0) {
          (**(code **)(*local_40 + 0x60))();
        }
      }
    }
  }
  else {
    if (iVar7 != 2) {
      if (iVar7 != 3) {
        return;
      }
      (**(code **)(*param_1 + 0x130))(param_1);
      *(undefined4 *)(param_1 + 0x27) = 2;
    }
    plVar12 = *(long **)(param_1[0x28] + 0x128);
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      if (*(long *)(lVar14 + 0x10) == 0) {
LAB_01861f0c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar8;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_01861f54:
        pcVar13 = "count != 0";
        pcVar9 = "AddReference";
        pcVar10 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar11 = "Reference counter overflows.";
        goto LAB_01861f74;
      }
    }
    if (plVar12[0x15] == 0) {
      bVar6 = *(char *)plVar12[0x1b] == '\0';
    }
    else {
      bVar6 = false;
    }
    lVar14 = plVar12[6];
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
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar2 == 0) {
LAB_01861f2c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    if (!bVar6) {
      *(undefined4 *)(param_1 + 0x27) = 4;
    }
  }
  return;
}


