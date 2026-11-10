/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ea2d4; name: FUN_010ea2d4
 */


void FUN_010ea2d4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 local_48 [8];
  
  plVar9 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x218,8);
  puVar3 = PTR_DAT_047d66f8;
  if (plVar6 == (long *)0x0) {
    (**(code **)(*plVar9 + 0xe8))(plVar9);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar6[2] = 0;
  *(undefined4 *)(plVar6 + 3) = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar8 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  plVar6[1] = lVar8;
  plVar10 = plVar6 + 5;
  *(int *)plVar10 = 0;
  *plVar6 = (long)&PTR_LAB_04609648;
  plVar6[4] = (long)&PTR_LAB_04609680;
  plVar6[6] = 0;
  *(undefined4 *)((long)plVar6 + 0x44) = 1;
  nn::os::InitializeLightEvent(plVar6 + 7,0,1);
  plVar6[9] = 0;
  *(undefined4 *)((long)plVar6 + 0x5c) = 1;
  nn::os::InitializeLightEvent(plVar6 + 10,0,1);
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  FUN_010ea790();
  plVar6[0x13] = 0;
  *(undefined4 *)((long)plVar6 + 0xac) = 1;
  nn::os::InitializeLightEvent(plVar6 + 0x14,0,1);
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  FUN_010ea658();
  plVar6[0x22] = 0;
  plVar6[0x23] = 0;
  plVar6[0x20] = 0;
  plVar6[0x21] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  FUN_010ea8c8();
  plVar6[0x29] = 0;
  plVar6[0x2a] = 0;
  plVar6[0x24] = 0;
  plVar6[0x27] = 0;
  plVar6[0x28] = 0;
  plVar6[0x25] = 0;
  plVar6[0x26] = 0;
  FUN_010eaa00(plVar6 + 0x24);
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  plVar6[0x2b] = 0;
  plVar6[0x2e] = 0;
  plVar6[0x2f] = 0;
  plVar6[0x2c] = 0;
  plVar6[0x2d] = 0;
  FUN_010ea658(plVar6 + 0x2d);
  memset(plVar6 + 0x32,0,0x88);
  *(undefined4 *)(plVar6 + 3) = 0x80218;
  plVar6[1] = (long)plVar9;
  plVar6[2] = (long)plVar6;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  do {
    lVar5 = *plVar10;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *(int *)plVar10 = (int)lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar9 = *(long **)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = 0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
    do {
      lVar5 = *plVar10;
      iVar4 = (int)lVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(long **)(param_1 + 0x298) = plVar6;
  *(undefined1 *)(param_1 + 0x11d) = 1;
  if (*(long *)(param_1 + 200) != 0) {
    local_48[0] = 1;
    FUN_00f5544c(*(long *)(param_1 + 200),local_48);
  }
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  return;
}


