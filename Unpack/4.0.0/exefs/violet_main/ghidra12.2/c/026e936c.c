/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e936c; name: FUN_026e936c
 */


void FUN_026e936c(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined2 local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  ulong uStack_68;
  
  lVar17 = *param_1;
  plVar14 = *(long **)param_1[2];
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[6];
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
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
      uVar19 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar19;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
      pcVar9 = "count != 0";
      pcVar10 = "AddReference";
      pcVar11 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar12 = "Reference counter overflows.";
      goto LAB_026e96a4;
    }
  }
  plVar15 = (long *)param_2[3];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  uVar19 = param_2[4];
  uVar7 = *(ushort *)(param_2 + 5);
  uVar6 = *(ushort *)(param_2 + 5);
  plVar16 = (long *)param_2[6];
  if (plVar16 != (long *)0x0) {
    plVar18 = plVar16 + 5;
    do {
      lVar13 = *plVar18;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)lVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar13 == -1) goto LAB_026e965c;
  }
  plVar18 = (long *)param_2[7];
  lVar13 = lVar17 + 0x208;
  local_70 = uVar19;
  if (plVar18 == (long *)0x0) {
    uStack_68 = (ulong)uVar6;
    FUN_026e9718(lVar13,&local_70);
  }
  else {
    (**(code **)(*plVar18 + 0x18))(plVar18);
    uStack_68 = (ulong)uVar7;
    FUN_026e9718(lVar13,&local_70);
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (plVar16 == (long *)0x0) {
LAB_026e9470:
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[6];
      psVar1 = (short *)(lVar13 + 0x1a);
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
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))(plVar14);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    local_b0 = *param_2;
    uStack_a8 = param_2[1];
    local_a0 = param_2[2];
    local_98 = (long *)param_2[3];
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
    }
    local_90 = param_2[4];
    local_88 = *(undefined2 *)(param_2 + 5);
    local_80 = (long *)param_2[6];
    if (local_80 != (long *)0x0) {
      plVar14 = local_80 + 5;
      do {
        lVar13 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = (int)lVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar13 == -1) {
LAB_026e965c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_78 = (long *)param_2[7];
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
    uVar19 = *(undefined8 *)param_1[3];
    puVar8 = (undefined8 *)FUN_00c8f0cc(lVar17 + 0x60,&local_b0);
    *puVar8 = uVar19;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_80 == (long *)0x0) {
LAB_026e9558:
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      *(long *)param_1[3] = *(long *)param_1[3] + 1;
      return;
    }
    plVar14 = local_80 + 5;
    do {
      lVar17 = *plVar14;
      iVar5 = (int)lVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_80 + 0x10))();
      goto LAB_026e9558;
    }
    if ((int)lVar17 != 0) goto LAB_026e9558;
  }
  else {
    plVar18 = plVar16 + 5;
    do {
      lVar13 = *plVar18;
      iVar5 = (int)lVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      goto LAB_026e9470;
    }
    if ((int)lVar13 != 0) goto LAB_026e9470;
  }
  pcVar9 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar10 = "DecrementReferenceInternal";
  pcVar11 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar12 = "Reference counter underflows.";
LAB_026e96a4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar9,pcVar10,pcVar11,0x58,pcVar12);
}


