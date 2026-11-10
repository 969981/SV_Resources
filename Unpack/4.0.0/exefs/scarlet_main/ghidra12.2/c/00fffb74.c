/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fffb74; name: FUN_00fffb74
 */


void FUN_00fffb74(long param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long *local_90;
  long *local_88 [4];
  long *local_68;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_28;
  
  lVar7 = FUN_00ecb050(local_88,*(undefined8 *)(param_1 + 8));
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar10 = *plVar9;
      iVar3 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x80) = lVar7;
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar10 = FUN_00da5204();
  }
  else {
    lVar10 = *(long *)(param_1 + 0x38) + 0x40;
  }
  *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)(lVar10 + 8);
  *(undefined8 *)(lVar7 + 0xb8) = *(undefined8 *)(lVar10 + 0x10);
  *(undefined8 *)(lVar7 + 0xc0) = *(undefined8 *)(lVar10 + 0x18);
  plVar8 = *(long **)(lVar10 + 0x20);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar9 = *(long **)(lVar7 + 200);
  *(long **)(lVar7 + 200) = plVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  lVar7 = *(long *)(param_1 + 0x80);
  FUN_00f91b58(lVar7 + 0x38,1);
  FUN_00f9208c(lVar7 + 0x70,1);
  if ((*(long *)(param_1 + 0x198) == 0) || (**(char **)(*(long *)(param_1 + 0x198) + 0x38) == '\0'))
  {
    lVar7 = *(long *)(param_1 + 0x38);
    local_58 = *(undefined8 *)(lVar7 + 0x2c0);
    pcStack_50 = *(char **)(lVar7 + 0x2c8);
    local_48 = *(undefined8 *)(lVar7 + 0x2d0);
    if (*pcStack_50 == '\0') {
      return;
    }
    if (lVar7 == 0) {
      lVar7 = FUN_00da5204();
    }
    else {
      lVar7 = lVar7 + 0x40;
    }
    FUN_00ffd4c8(local_88,lVar7,&local_58,&DAT_03c886bc);
    FUN_00ecb4a0(&local_28,*(undefined8 *)(param_1 + 0x80),local_88,param_2 & 1,param_3);
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[6];
      psVar2 = (short *)(lVar7 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_00fffcf4;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (local_88[0] == (long *)0x0) {
      return;
    }
    pcVar11 = *(code **)(*local_88[0] + 0x20);
  }
  else {
    FUN_00ecb4a0(&local_90,*(undefined8 *)(param_1 + 0x80),param_1 + 0x198,param_2 & 1,param_3);
    if (local_90 == (long *)0x0) {
      return;
    }
    lVar7 = local_90[6];
    psVar2 = (short *)(lVar7 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 != 1) {
      if (sVar4 != 0) {
        return;
      }
LAB_00fffcf4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    *(undefined8 *)(lVar7 + 0x10) = 0;
    pcVar11 = *(code **)(*local_90 + 0x50);
  }
  (*pcVar11)();
  return;
}


