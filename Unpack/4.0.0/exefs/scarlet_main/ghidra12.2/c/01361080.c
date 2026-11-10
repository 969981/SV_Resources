/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01361080; name: FUN_01361080
 */


void FUN_01361080(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = *(long **)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045a9150;
  param_1[1] = (long)plVar10;
  param_1[4] = (long)&PTR_LAB_045a91e8;
  memset(param_1 + 6,0,0x62);
  lVar7 = 0;
  while( true ) {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) break;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x90,8);
    if (lVar9 == 0) {
LAB_013613ec:
      (**(code **)(*plVar10 + 0xe8))(plVar10);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_01361458(lVar9,0,1,0);
    *(long **)(lVar9 + 8) = plVar10;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined4 *)(lVar9 + 0x18) = 0x80090;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) {
LAB_0136141c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar11 = param_1 + lVar7 + 6;
    plVar10 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
      do {
        lVar8 = *plVar2;
        iVar6 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_013612a4;
    }
    *plVar11 = lVar9;
    plVar10 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) break;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x40,8);
    if (lVar9 == 0) goto LAB_013613ec;
    FUN_0136150c();
    *(long **)(lVar9 + 8) = plVar10;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined4 *)(lVar9 + 0x18) = 0x80040;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) goto LAB_0136141c;
    plVar11 = param_1 + lVar7 + 0xc;
    plVar10 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
      do {
        lVar8 = *plVar2;
        iVar6 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
LAB_013612a4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    lVar7 = lVar7 + 1;
    *plVar11 = lVar9;
    if (lVar7 == 6) {
      return;
    }
    plVar10 = (long *)param_1[1];
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


