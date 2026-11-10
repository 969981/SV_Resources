/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010870c4; name: FUN_010870c4
 */


void FUN_010870c4(long *param_1,undefined8 *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
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
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_045d0ca8;
  param_1[1] = lVar8;
  param_1[4] = (long)&PTR_LAB_045d0ce0;
  uVar2 = *param_2;
  *(undefined8 *)((long)param_1 + 0x34) = param_2[1];
  *(undefined8 *)((long)param_1 + 0x2c) = uVar2;
  lVar7 = *param_3;
  param_1[8] = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) goto LAB_01087360;
  }
  lVar7 = *param_4;
  param_1[9] = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
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
LAB_01087360:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_010873e0(param_1 + 0xc);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar8 = tpidr_el0;
    lVar7 = *(long *)(lVar8 + 0x30);
    if (lVar7 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar7 = DAT_04859430;
      *(long *)(lVar8 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x14] = lVar7;
  param_1[0x26] = 0;
  param_1[0x27] = 2;
  param_1[0x28] = 2;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x15] = 0xfffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x175) = 0x1010101;
  *(undefined1 *)((long)param_1 + 0x17b) = 0;
  *(undefined2 *)((long)param_1 + 0x179) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)((long)param_1 + 0x19c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x32,0,1);
  *(undefined1 *)((long)param_1 + 0x174) = 1;
  FUN_01086778(param_1,param_5);
  return;
}


