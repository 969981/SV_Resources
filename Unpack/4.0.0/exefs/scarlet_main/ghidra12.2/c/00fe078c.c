/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe078c; name: FUN_00fe078c
 */


void FUN_00fe078c(long param_1)

{
  int *piVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_70;
  undefined4 local_68;
  undefined8 local_64;
  long local_58;
  undefined1 local_50 [16];
  ulong local_40;
  long local_38;
  
  uVar8 = FUN_00c75660(*(undefined4 *)(param_1 + 0x90));
  local_58 = *(long *)(param_1 + 0x80) * (uVar8 & 0xffffffff) * *(long *)(param_1 + 0x88);
  uVar9 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),local_58,0x20);
  *(undefined8 *)(param_1 + 0xa0) = uVar9;
  local_50._8_8_ = &local_58;
  local_50._0_8_ = param_1;
  FUN_00fe0a78(*(undefined8 *)(param_1 + 0x58),local_50);
  local_64 = 0;
  local_68 = 0x20;
  local_70 = (*(ulong *)(param_1 + 0x80) >> 2) * (*(ulong *)(param_1 + 0x88) >> 2) * 8;
  local_38 = *(long *)(param_1 + 0x48);
  lVar10 = FUN_00cf3764(local_50,*(undefined8 *)(local_38 + 8),&local_38);
  lVar13 = 0;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar13 = lVar10;
  }
  lVar12 = *(long *)(*(long *)(lVar13 + 0x70) + 0x30);
  local_50._0_8_ = *(undefined8 *)(lVar12 + 8);
  local_50._8_8_ = *(undefined8 *)(lVar12 + 0x6098);
  local_40 = lVar12 + 0x10;
  local_50 = FUN_00d56874(*(undefined8 *)(lVar12 + 0x6140),local_50,&local_70,0,0);
  local_40 = local_40 & 0xffffffffffffff00;
  FUN_00d56380(lVar13 + 0x30,local_50);
  uVar6 = FUN_00d56320(lVar13 + 0x30);
  *(undefined4 *)(lVar13 + 0x78) = uVar6;
  plVar11 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 5;
    do {
      lVar13 = *plVar2;
      iVar7 = (int)lVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x60) = lVar10;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    local_50._0_8_ = param_1;
    FUN_0193a4a8(*(undefined8 *)(param_1 + 0x60),local_50);
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  else {
    FUN_00fe1054(local_50,param_1);
    FUN_00fe0b24(local_50);
    uVar9 = local_50._0_8_;
    if ((long *)local_50._0_8_ != (long *)0x0) {
      plVar11 = (long *)(local_50._0_8_ + 0x18);
      do {
        sVar3 = (short)*plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(short *)plVar11 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar1 = (int *)(local_50._0_8_ + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_38 = *(long *)uVar9;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


