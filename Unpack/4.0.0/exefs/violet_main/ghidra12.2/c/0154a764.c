/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0154a764; name: FUN_0154a764
 */


void FUN_0154a764(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  long local_18;
  
  FUN_0154abe4();
  local_50 = &local_18;
  local_18 = 0;
  uVar8 = FUN_0100d208(param_1 + 0x28);
  if (((uVar8 & 1) != 0) && (local_18 == 0)) {
    local_18 = param_1;
  }
  plVar15 = *(long **)(param_1 + 0x78);
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0154ab78;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 0) {
      if (sVar3 != -1) goto LAB_0154a7dc;
LAB_0154ab98:
      pcVar11 = "count != 0";
      pcVar12 = "AddReference";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar14 = "Reference counter overflows.";
      goto LAB_0154ab70;
    }
    uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
    *(undefined8 *)(lVar16 + 8) = uVar10;
    *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
LAB_0154a7dc:
    lVar16 = plVar15[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar3 == 0) goto LAB_0154abbc;
    plVar15 = *(long **)(param_1 + 0x78);
    if (plVar15 == (long *)0x0) {
      FUN_01286418(0,&local_50);
    }
    else {
      lVar16 = plVar15[6];
      if (*(long *)(lVar16 + 0x10) == 0) {
LAB_0154ab78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar16 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
        *(undefined8 *)(lVar16 + 8) = uVar10;
        *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) goto LAB_0154ab98;
      FUN_01286418(plVar15,&local_50);
      lVar16 = plVar15[6];
      psVar1 = (short *)(lVar16 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar3 == 0) {
LAB_0154abbc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (local_18 == 0) {
    return;
  }
  plVar15 = *(long **)(param_1 + 200);
  if (plVar15 != (long *)0x0) {
    plVar9 = plVar15 + 5;
    do {
      lVar16 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)lVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar16 == -1) goto LAB_0154ab28;
  }
  local_50 = *(long **)(local_18 + 0x88);
  lVar16 = local_18 + 0x40;
  uStack_48 = *(undefined8 *)(local_18 + 0x90);
  local_40 = *(undefined8 *)(local_18 + 0x98);
  local_38 = *(long **)(local_18 + 0xa0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  lVar16 = (**(code **)(*plVar15 + 0x130))(plVar15,param_1,lVar16,&local_50,0);
  plVar9 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x28))((undefined8 *)(lVar16 + 0x28));
  if (((*PTR_DAT_047d9050 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar7 != 0))
  {
    uVar10 = FUN_00ea2d24();
    *(undefined8 *)PTR_DAT_047d9058 = uVar10;
    __cxa_guard_release(PTR_DAT_047d9050);
  }
  for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    if (plVar9 == (long *)PTR_DAT_047d9058) goto LAB_0154a928;
  }
  lVar16 = 0;
LAB_0154a928:
  *(long *)(param_1 + 0x480) = lVar16;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar15 == (long *)0x0) {
LAB_0154a954:
    lVar16 = *(long *)(param_1 + 0x480);
    if (lVar16 == 0) {
      return;
    }
    lVar17 = *(long *)(param_1 + 200);
    if (lVar17 != 0) {
      piVar2 = (int *)(lVar17 + 0x28);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == -1) {
LAB_0154ab28:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar15 = *(long **)(lVar16 + 200);
    *(undefined8 *)(lVar16 + 200) = 0;
    if (plVar15 == (long *)0x0) {
LAB_0154a9a8:
      *(long *)(lVar16 + 200) = lVar17;
      lVar16 = *(long *)(param_1 + 0x480);
      local_50 = *(long **)(lVar16 + 0x88);
      uStack_48 = *(undefined8 *)(lVar16 + 0x90);
      plVar15 = *(long **)(param_1 + 200);
      local_40 = *(undefined8 *)(lVar16 + 0x98);
      local_38 = *(long **)(lVar16 + 0xa0);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x18))();
      }
      (**(code **)(*plVar15 + 0x70))(plVar15,&local_50,0);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      return;
    }
    plVar9 = plVar15 + 5;
    do {
      lVar6 = *plVar9;
      iVar7 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
      goto LAB_0154a9a8;
    }
    if ((int)lVar6 != 0) goto LAB_0154a9a8;
  }
  else {
    plVar9 = plVar15 + 5;
    do {
      lVar16 = *plVar9;
      iVar7 = (int)lVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      goto LAB_0154a954;
    }
    if ((int)lVar16 != 0) goto LAB_0154a954;
  }
  pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar12 = "DecrementReferenceInternal";
  pcVar13 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar14 = "Reference counter underflows.";
LAB_0154ab70:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
}


