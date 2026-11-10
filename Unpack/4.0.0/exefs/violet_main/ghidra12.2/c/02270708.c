/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02270708; name: FUN_02270708
 */


void FUN_02270708(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  plVar7 = (long *)FUN_00f351bc();
  lVar17 = *plVar7;
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x20) + 0x10))();
  }
  puVar8 = (undefined8 *)FUN_00e514cc(lVar17);
  plVar7 = (long *)*puVar8;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 5;
    do {
      lVar18 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)lVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar18 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)FUN_0145966c();
  pbStack_58 = (byte *)(**(code **)(*plVar9 + 0xe0))(plVar9,1);
  if (pbStack_58 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)pbStack_58);
    bVar3 = *pbStack_58;
    local_60 = &DAT_cbf29ce484222645;
    pbVar16 = pbStack_58;
    while (bVar3 != 0) {
      pbVar16 = pbVar16 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar16;
    }
    local_48 = (long *)0x0;
  }
  FUN_00fff044(&local_68,plVar7,&local_60);
  if (local_68 == (long *)0x0) {
LAB_022707f4:
    uVar10 = FUN_00f2babc(param_1 + 0x70,1,param_2,0,0);
    if (((uVar10 & 1) != 0) && (plVar9 = *(long **)(param_1 + 0x90), plVar9 != (long *)0x0)) {
      lVar18 = plVar9[6];
      if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar11;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
        pcVar12 = "count != 0";
        pcVar13 = "AddReference";
        pcVar14 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar15 = "Reference counter overflows.";
        goto LAB_02270a08;
      }
      lVar18 = plVar9[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (plVar7 == (long *)0x0) {
LAB_02270844:
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x20) + 0x18))((long *)(lVar17 + 0x20));
      }
      return;
    }
    plVar9 = plVar7 + 5;
    do {
      lVar18 = *plVar9;
      iVar6 = (int)lVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      goto LAB_02270844;
    }
    if ((int)lVar18 != 0) goto LAB_02270844;
  }
  else {
    plVar9 = local_68 + 5;
    do {
      lVar18 = *plVar9;
      iVar6 = (int)lVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
      goto LAB_022707f4;
    }
    if ((int)lVar18 != 0) goto LAB_022707f4;
  }
  pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar13 = "DecrementReferenceInternal";
  pcVar14 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar15 = "Reference counter underflows.";
LAB_02270a08:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar12,pcVar13,pcVar14,0x58,pcVar15);
}


