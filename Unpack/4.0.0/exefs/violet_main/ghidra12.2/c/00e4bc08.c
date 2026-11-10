/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4bc08; name: FUN_00e4bc08
 */


void FUN_00e4bc08(long *param_1,long *param_2,long *param_3,long *param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  long local_58;
  undefined1 auStack_38 [8];
  
  puVar7 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar7 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar17 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar17;
  param_1[4] = (long)(puVar7 + 0x88);
  plVar11 = param_1 + 5;
  *plVar11 = (long)(puVar7 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar11);
  *param_1 = (long)&DAT_0460c140;
  param_1[4] = (long)&PTR_LAB_0460c1b8;
  *plVar11 = (long)&DAT_0460c208;
  plVar11 = param_1 + 8;
  *plVar11 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = *param_2;
  lVar9 = *param_3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = lVar9;
  *(undefined4 *)((long)param_1 + 0x8c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x10,0,1);
  lVar17 = param_1[1];
  lVar9 = FUN_00e4bfa8(auStack_38,lVar17);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x28);
    do {
      iVar8 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar10 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar10 == (long *)0x0) {
LAB_00e4bd24:
    *plVar11 = lVar9;
    lVar9 = *param_4;
    if (lVar9 != 0) {
      lVar18 = *(long *)(lVar9 + 0x30);
      if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar13;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
        pcVar12 = "count != 0";
        pcVar14 = "AddReference";
        pcVar15 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar16 = "Reference counter overflows.";
        goto LAB_00e4bfa0;
      }
    }
    plVar11 = (long *)param_1[10];
    param_1[10] = lVar9;
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    FUN_00e4c2b4(&local_58,param_1[10],param_1 + 0xb,param_3,lVar17);
    plVar11 = (long *)param_1[9];
    param_1[9] = 0;
    if (plVar11 == (long *)0x0) {
LAB_00e4bdb4:
      param_1[9] = local_58;
      return;
    }
    plVar10 = plVar11 + 5;
    do {
      lVar9 = *plVar10;
      iVar8 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      goto LAB_00e4bdb4;
    }
    if ((int)lVar9 != 0) goto LAB_00e4bdb4;
  }
  else {
    plVar3 = plVar10 + 5;
    do {
      lVar18 = *plVar3;
      iVar8 = (int)lVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
      goto LAB_00e4bd24;
    }
    if ((int)lVar18 != 0) goto LAB_00e4bd24;
  }
  pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar14 = "DecrementReferenceInternal";
  pcVar15 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar16 = "Reference counter underflows.";
LAB_00e4bfa0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar12,pcVar14,pcVar15,0x58,pcVar16);
}


