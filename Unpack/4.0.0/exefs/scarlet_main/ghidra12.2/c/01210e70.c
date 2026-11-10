/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01210e70; name: FUN_01210e70
 */


void FUN_01210e70(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar10 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_0459cf40;
  param_1[1] = lVar10;
  param_1[4] = (long)&PTR_LAB_0459cf80;
  param_1[0x11] = 0;
  param_1[6] = (long)&PTR_FUN_0459cfb0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar9 = param_1 + 0xe;
  *plVar9 = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x10;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  lVar6 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar6 + 0x30), lVar10 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar10 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x16] = lVar10;
  param_1[0x1c] = 0;
  param_1[0x17] = 0x1fffffffffffffff;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar6 + 0x30), lVar10 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar10 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = lVar10;
  param_1[0x23] = 0;
  param_1[0x1e] = 0x3ffffffffffffff;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar6 + 0x30), lVar10 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar10 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x24] = lVar10;
  param_1[0x2a] = 0;
  param_1[0x25] = 0x1fffffffffffffff;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar6 + 0x30), lVar10 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar10 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x2e] = lVar10;
  param_1[0x2f] = 0x3fffffffffffffff;
  plVar7 = (long *)FUN_00da5204();
  plVar8 = (long *)*plVar7;
  param_1[0x33] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  param_1[0x34] = plVar7[1];
  param_1[0x35] = plVar7[2];
  param_1[0x36] = plVar7[3];
  plVar8 = (long *)plVar7[4];
  param_1[0x37] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  plVar8 = (long *)param_1[1];
  *(int *)(param_1 + 0x38) = (int)plVar7[5];
  param_1[0x3a] = (long)&LAB_02b3e620;
  param_1[0x3b] = (long)&LAB_02b3e628;
  param_1[0x3c] = (long)&LAB_02b3e62c;
  param_1[0x3d] = (long)&LAB_02b3e630;
  *(undefined4 *)(param_1 + 0x4a) = 1;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_01211630:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,0x260,0x10);
  if (lVar10 == 0) {
LAB_01211634:
    (**(code **)(*plVar8 + 0xe8))(plVar8);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_012117bc();
  *(undefined4 *)(lVar10 + 0x18) = 0x100260;
  *(long **)(lVar10 + 8) = plVar8;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  piVar1 = (int *)(lVar10 + 0x28);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 != -1) {
    plVar7 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 5;
      do {
        lVar6 = *plVar9;
        iVar5 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_012112a8;
    }
    param_1[0xe] = lVar10;
    plVar8 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01211630;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xb0,0x10);
    if (plVar9 == (long *)0x0) goto LAB_01211634;
    *plVar9 = (long)(puVar4 + 0x10);
    plVar9[2] = 0;
    *(undefined4 *)(plVar9 + 3) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    nn::os::GetTlsValue(DAT_04865a30);
    plVar7 = plVar9 + 5;
    *(int *)plVar7 = 0;
    plVar9[4] = (long)&PTR_LAB_0459d068;
    *plVar9 = (long)&PTR_LAB_0459d030;
    plVar9[1] = (long)plVar8;
    plVar9[2] = (long)plVar9;
    plVar9[6] = (long)&LAB_02b3e704;
    plVar9[7] = (long)&LAB_02b3e70c;
    *(undefined4 *)(plVar9 + 3) = 0x1000b0;
    plVar9[8] = (long)&LAB_02b3e710;
    plVar9[9] = (long)&LAB_02b3e714;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 != -1) {
      plVar7 = (long *)param_1[0x2a];
      param_1[0x2a] = 0;
      if (plVar7 != (long *)0x0) {
        plVar8 = plVar7 + 5;
        do {
          lVar6 = *plVar8;
          iVar5 = (int)lVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
LAB_012112a8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      param_1[0x2a] = (long)plVar9;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


