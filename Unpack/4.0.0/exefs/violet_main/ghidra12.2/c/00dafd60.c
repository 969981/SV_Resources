/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dafd60; name: FUN_00dafd60
 */


void FUN_00dafd60(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04608b90;
  lVar7 = *param_2;
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[2] = param_3;
  param_1[3] = *param_4;
  param_1[4] = param_4[1];
  param_1[5] = param_4[2];
  plVar5 = (long *)param_4[3];
  param_1[6] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[7] = *param_5;
  param_1[8] = param_5[1];
  param_1[9] = param_5[2];
  plVar5 = (long *)param_5[3];
  param_1[10] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  lVar7 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar7 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xe] = lVar6;
  param_1[0x14] = 0;
  param_1[0xf] = 0x155555555555555;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar7 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x15] = lVar6;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = param_6;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x16] = 0x78787878787878;
  param_1[0x17] = 0;
  return;
}


