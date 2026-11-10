/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0244f520; name: FUN_0244f520
 */


void FUN_0244f520(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined1 auStack_70 [24];
  long *local_58;
  long *local_40;
  long *local_38;
  
  if (((*PTR_DAT_047dab40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dab40);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047dab48;
  *(undefined8 *)PTR_DAT_047dab50 = uVar12;
  local_98 = *param_1;
  uStack_90 = param_1[1];
  local_88 = param_1[2];
  local_80 = (long *)param_1[3];
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  FUN_010e2c30(&local_78,uVar12,&local_98);
  plVar11 = (long *)local_78[8];
  if (plVar11 != (long *)0x0) {
    lVar13 = plVar11[6];
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
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
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar12;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar7 = "count != 0";
      pcVar8 = "AddReference";
      pcVar9 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar10 = "Reference counter overflows.";
      goto LAB_0244f808;
    }
  }
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  local_a8 = param_2[2];
  local_a0 = (long *)param_2[3];
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  FUN_024479b4(auStack_70,plVar11,&local_b8);
  FUN_0244f834(local_40,param_3);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    plVar2 = local_40 + 5;
    do {
      lVar13 = *plVar2;
      iVar6 = (int)lVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
      pcVar7 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar8 = "DecrementReferenceInternal";
      pcVar9 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar10 = "Reference counter underflows.";
LAB_0244f808:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar7,pcVar8,pcVar9,0x58,pcVar10);
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (plVar11 != (long *)0x0) {
    lVar13 = plVar11[6];
    psVar1 = (short *)(lVar13 + 0x1a);
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
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar3 == 0) goto LAB_0244f7a0;
  }
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[6];
    psVar1 = (short *)(lVar13 + 0x1a);
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
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_0244f7a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


