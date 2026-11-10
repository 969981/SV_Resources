/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c9158; name: FUN_029c9158
 */


void FUN_029c9158(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
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
  puVar4 = PTR_DAT_047e3080;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[1] = lVar7;
  param_1[4] = (long)(puVar4 + 0x88);
  plVar8 = param_1 + 5;
  *plVar8 = (long)(puVar4 + 0x138);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar8);
  puVar4 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar4 + 0xc0);
  *plVar8 = (long)(puVar4 + 0x170);
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 1;
  nn::os::InitializeLightEvent(param_1 + 9,0,1);
  *param_1 = (long)&PTR_FUN_04606b18;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  param_1[4] = (long)&PTR_LAB_04606be8;
  *plVar8 = (long)&PTR_LAB_04606c98;
  lVar6 = *param_2;
  param_1[0xd] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  lVar6 = param_1[1];
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0x3ffffffffffffff;
  param_1[0x14] = 0;
  *(undefined1 *)((long)param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x1a] = 0x2aaaaaaaaaaaaaa;
  param_1[0x1b] = 0;
  param_1[0x1f] = lVar6;
  param_1[0x20] = 0x199999999999999;
  param_1[0x25] = 0x199999999999999;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = lVar6;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = lVar6;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = lVar6;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2a),false,0);
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  return;
}


