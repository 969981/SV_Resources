/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f91970; name: FUN_00f91970
 */


void FUN_00f91970(long param_1)

{
  int *piVar1;
  long *plVar2;
  short *psVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *local_58 [4];
  long *local_38;
  long *local_28;
  
  lVar9 = FUN_00ecb050(local_58,*(undefined8 *)(param_1 + 8));
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar10 = *(long **)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 5;
    do {
      lVar8 = *plVar2;
      iVar4 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x260) = lVar9;
  FUN_00f91b28(lVar9,1);
  uVar11 = *(undefined8 *)(param_1 + 0x260);
  FUN_00f93108(local_58);
  FUN_00ecb4a0(&local_28,uVar11,local_58,0,*(undefined8 *)(param_1 + 8));
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58[0] != (long *)0x0) {
    (**(code **)(*local_58[0] + 0x20))();
  }
  FUN_00ebbcc0(*(undefined8 *)(param_1 + 0x260),param_1 + 0x10,1);
  return;
}


