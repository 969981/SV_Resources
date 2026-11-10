/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e77db4; name: FUN_00e77db4
 */


void FUN_00e77db4(undefined8 *param_1)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  FUN_00d1a240(param_1,0x80088080);
  *param_1 = &DAT_045aaf38;
  param_1[4] = &PTR_LAB_045ab0a0;
  param_1[5] = &DAT_045ab1c8;
  param_1[6] = &PTR_LAB_045ab220;
  plVar10 = param_1 + 7;
  *plVar10 = (long)&PTR_LAB_045ab248;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  lVar7 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar7 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x27] = lVar6;
  param_1[0x28] = 0x1fffffffffffffff;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x184) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x2f,0,1);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar7 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x34] = lVar6;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)((long)param_1 + 0x1d4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x39,0,1);
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar7 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x3e] = lVar6;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar7 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x43] = lVar6;
  param_1[0x44] = 0xf32d1edf3a6b5;
  param_1[0x47] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar7 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x48] = lVar6;
  param_1[0x49] = 0xf32d1edf3a6b5;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((long)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)((long)param_1 + 0x29c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x52,0,1);
  param_1[0x54] = 0;
  *(undefined4 *)((long)param_1 + 0x2b4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x55,0,1);
  plVar11 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00e78838:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x218,8);
  puVar4 = PTR_DAT_047d66f8;
  if (plVar8 == (long *)0x0) {
LAB_00e7883c:
    (**(code **)(*plVar11 + 0xe8))(plVar11);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar8[2] = 0;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar9 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  plVar8[1] = lVar9;
  plVar12 = plVar8 + 5;
  *(int *)plVar12 = 0;
  *plVar8 = (long)&PTR_LAB_045ab280;
  plVar8[4] = (long)&PTR_LAB_045ab2b8;
  plVar8[6] = 0;
  *(undefined4 *)((long)plVar8 + 0x44) = 1;
  nn::os::InitializeLightEvent(plVar8 + 7,0,1);
  plVar8[9] = 0;
  *(undefined4 *)((long)plVar8 + 0x5c) = 1;
  nn::os::InitializeLightEvent(plVar8 + 10,0,1);
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0xc] = 0;
  FUN_00e78b7c();
  plVar8[0x13] = 0;
  *(undefined4 *)((long)plVar8 + 0xac) = 1;
  nn::os::InitializeLightEvent(plVar8 + 0x14,0,1);
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x17] = 0;
  plVar8[0x18] = 0;
  plVar8[0x16] = 0;
  FUN_00e78a40();
  plVar8[0x22] = 0;
  plVar8[0x23] = 0;
  plVar8[0x20] = 0;
  plVar8[0x21] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[0x1d] = 0;
  FUN_00e78cb8();
  plVar8[0x29] = 0;
  plVar8[0x2a] = 0;
  plVar8[0x24] = 0;
  plVar8[0x27] = 0;
  plVar8[0x28] = 0;
  plVar8[0x25] = 0;
  plVar8[0x26] = 0;
  FUN_00e78df4(plVar8 + 0x24);
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  plVar8[0x2b] = 0;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  plVar8[0x2c] = 0;
  plVar8[0x2d] = 0;
  FUN_00e78a40(plVar8 + 0x2b);
  memset(plVar8 + 0x32,0,0x88);
  *(undefined4 *)(plVar8 + 3) = 0x80218;
  plVar8[1] = (long)plVar11;
  plVar8[2] = (long)plVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  do {
    lVar7 = *plVar12;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *(int *)plVar12 = (int)lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar7 != -1) {
    plVar11 = (long *)param_1[0x2b];
    param_1[0x2b] = 0;
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 5;
      do {
        lVar7 = *plVar12;
        iVar5 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *(int *)plVar12 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_00e78408;
    }
    param_1[0x2b] = plVar8;
    plVar11 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00e78838;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x218,8);
    if (plVar8 == (long *)0x0) goto LAB_00e7883c;
    *plVar8 = (long)(puVar4 + 0x10);
    plVar8[2] = 0;
    *(undefined4 *)(plVar8 + 3) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      if (*(long *)(lVar6 + 0x80) != 0) {
        lVar9 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
      }
    }
    plVar8[1] = lVar9;
    plVar12 = plVar8 + 5;
    *(int *)plVar12 = 0;
    *plVar8 = (long)&PTR_LAB_045ab2e8;
    plVar8[4] = (long)&PTR_LAB_045ab320;
    plVar8[6] = 0;
    *(undefined4 *)((long)plVar8 + 0x44) = 1;
    nn::os::InitializeLightEvent(plVar8 + 7,0,1);
    plVar8[9] = 0;
    *(undefined4 *)((long)plVar8 + 0x5c) = 1;
    nn::os::InitializeLightEvent(plVar8 + 10,0,1);
    plVar8[0x11] = 0;
    plVar8[0x12] = 0;
    plVar8[0xf] = 0;
    plVar8[0x10] = 0;
    plVar8[0xd] = 0;
    plVar8[0xe] = 0;
    plVar8[0xc] = 0;
    FUN_00e78b7c();
    plVar8[0x13] = 0;
    *(undefined4 *)((long)plVar8 + 0xac) = 1;
    nn::os::InitializeLightEvent(plVar8 + 0x14,0,1);
    plVar8[0x1b] = 0;
    plVar8[0x1c] = 0;
    plVar8[0x19] = 0;
    plVar8[0x1a] = 0;
    plVar8[0x17] = 0;
    plVar8[0x18] = 0;
    plVar8[0x16] = 0;
    FUN_00e78a40();
    plVar8[0x22] = 0;
    plVar8[0x23] = 0;
    plVar8[0x20] = 0;
    plVar8[0x21] = 0;
    plVar8[0x1e] = 0;
    plVar8[0x1f] = 0;
    plVar8[0x1d] = 0;
    FUN_00e78cb8();
    plVar8[0x29] = 0;
    plVar8[0x2a] = 0;
    plVar8[0x24] = 0;
    plVar8[0x27] = 0;
    plVar8[0x28] = 0;
    plVar8[0x25] = 0;
    plVar8[0x26] = 0;
    FUN_00e78df4(plVar8 + 0x24);
    plVar8[0x30] = 0;
    plVar8[0x31] = 0;
    plVar8[0x2b] = 0;
    plVar8[0x2e] = 0;
    plVar8[0x2f] = 0;
    plVar8[0x2c] = 0;
    plVar8[0x2d] = 0;
    FUN_00e78a40(plVar8 + 0x2b);
    memset(plVar8 + 0x32,0,0x88);
    plVar8[1] = (long)plVar11;
    plVar8[2] = (long)plVar8;
    *(undefined4 *)(plVar8 + 3) = 0x80218;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    do {
      lVar7 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar7 != -1) {
      plVar11 = (long *)param_1[0x2c];
      param_1[0x2c] = 0;
      if (plVar11 != (long *)0x0) {
        plVar12 = plVar11 + 5;
        do {
          lVar7 = *plVar12;
          iVar5 = (int)lVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
LAB_00e78408:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      param_1[0x2c] = plVar8;
      if ((*(char *)(param_1 + 0xb) == -0x7e) && (*(char *)((long)param_1 + 0x59) == -0x7e)) {
        return;
      }
      uVar1 = *(undefined2 *)(param_1 + 0xb);
      *(undefined2 *)(param_1 + 0xb) = 0x8282;
      if (param_1[9] != 0) {
        FUN_00c6a584(param_1[9],plVar10);
      }
      (**(code **)(*plVar10 + 0x20))(plVar10,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


