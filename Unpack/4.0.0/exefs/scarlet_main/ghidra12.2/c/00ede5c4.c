/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ede5c4; name: FUN_00ede5c4
 */


void FUN_00ede5c4(long *param_1,undefined8 *param_2,long param_3)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  long *local_40;
  long *local_38;
  
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar7;
  FUN_00cbf5d4(param_1,uVar7,*(undefined8 *)(param_3 + 8));
  local_40 = (long *)*param_2;
  *param_2 = 0;
  local_38 = (long *)*param_1;
  if (local_38 == (long *)0x0) {
    plVar13 = (long *)0x0;
    lVar12 = 0;
  }
  else {
    lVar12 = local_38[6];
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar12 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar7;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar8 = "count != 0";
      pcVar9 = "AddReference";
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar11 = "Reference counter overflows.";
      goto LAB_00ede7d0;
    }
    lVar12 = *param_1;
    plVar13 = local_38;
  }
  lVar2 = 0;
  if (lVar12 != 0) {
    lVar2 = lVar12 + 0x58;
  }
  FUN_00ede800(param_3,&local_40,lVar2);
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_40 != (long *)0x0) {
    plVar13 = local_40 + 5;
    do {
      lVar12 = *plVar13;
      iVar6 = (int)lVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
      pcVar8 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar9 = "DecrementReferenceInternal";
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar11 = "Reference counter underflows.";
LAB_00ede7d0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar8,pcVar9,pcVar10,0x58,pcVar11);
    }
  }
  return;
}


