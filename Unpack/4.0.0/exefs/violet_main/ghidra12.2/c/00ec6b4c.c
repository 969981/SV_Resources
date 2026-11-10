/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ec6b4c; name: FUN_00ec6b4c
 */


void FUN_00ec6b4c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long local_38;
  
  param_1[2] = 0;
  puVar4 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d1180;
  param_1[1] = lVar8;
  param_1[4] = (long)&PTR_LAB_045d11b8;
  lVar6 = *param_2;
  param_1[6] = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x20) + 0x10))();
    lVar8 = param_1[1];
  }
  plVar9 = param_1 + 7;
  *plVar9 = 0;
  param_1[10] = lVar8;
  param_1[0xb] = 0x666666666666666;
  param_1[0x10] = 0x666666666666666;
  param_1[0x11] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x34] = 0;
  param_1[0x19] = lVar8;
  param_1[0x1a] = 0x666666666666666;
  param_1[0xe] = 0;
  param_1[0xf] = lVar8;
  param_1[0x21] = lVar8;
  param_1[0x22] = 0x492492492492492;
  param_1[0x28] = 0;
  param_1[0x29] = lVar8;
  param_1[0x2f] = 0;
  param_1[0x30] = lVar8;
  param_1[0x31] = 0x1fffffffffffffff;
  param_1[0x32] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0x7ffffffffffffff;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x38,0,1);
  lVar6 = param_1[1];
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0x7ffffffffffffff;
  param_1[0x4b] = 0;
  param_1[0x49] = lVar6;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = lVar6;
  param_1[0x4f] = 0x7ffffffffffffff;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x3c] = lVar6;
  param_1[0x3d] = 0x7ffffffffffffff;
  param_1[0x40] = 0;
  param_1[0x41] = lVar6;
  param_1[0x42] = 0x7ffffffffffffff;
  param_1[0x43] = 0;
  (**(code **)(*(long *)(*(long *)(*param_2 + 0x30) + 0x30) + 0x48))(&local_38);
  plVar7 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *plVar9 = local_38;
  return;
}


