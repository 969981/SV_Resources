/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccee28; name: FUN_00ccee28
 */


void FUN_00ccee28(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
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
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d0fe0;
  param_1[1] = lVar7;
  param_1[4] = (long)&PTR_LAB_045d1018;
  lVar6 = *param_2;
  param_1[6] = lVar6;
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
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  FUN_00ccf314(param_1 + 10);
  FUN_00ccf0d0(param_1 + 0xe);
  FUN_00ccf0d0(param_1 + 0x1b);
  FUN_00ccf0d0(param_1 + 0x28);
  FUN_00ccf0d0(param_1 + 0x35);
  FUN_00ccf0d0(param_1 + 0x42);
  FUN_00ccf0d0(param_1 + 0x4f);
  FUN_00ccf0d0(param_1 + 0x5c);
  FUN_00ccf0d0(param_1 + 0x69);
  FUN_00ccf0d0(param_1 + 0x76);
  FUN_00ccf0d0(param_1 + 0x83);
  FUN_00ccf0d0(param_1 + 0x90);
  FUN_00ccf0d0(param_1 + 0x9d);
  FUN_00ccf0d0(param_1 + 0xaa);
  FUN_00ccf0d0(param_1 + 0xb7);
  FUN_00ccf0d0(param_1 + 0xc4);
  FUN_00ccf0d0(param_1 + 0xd1);
  FUN_00ccf0d0(param_1 + 0xde);
  FUN_00ccf0d0(param_1 + 0xeb);
  FUN_00ccf0d0(param_1 + 0xf8);
  FUN_00ccf0d0(param_1 + 0x105);
  FUN_00ccf0d0(param_1 + 0x112);
  FUN_00ccf0d0(param_1 + 0x11f);
  FUN_00ccf0d0(param_1 + 300);
  FUN_00ccf0d0(param_1 + 0x139);
  FUN_00ccf0d0(param_1 + 0x146);
  FUN_00ccf0d0(param_1 + 0x153);
  FUN_00ccf0d0(param_1 + 0x160);
  FUN_00ccf0d0(param_1 + 0x16d);
  FUN_00ccf0d0(param_1 + 0x17a);
  FUN_00ccf0d0(param_1 + 0x187);
  FUN_00ccf0d0(param_1 + 0x194);
  FUN_00ccf0d0(param_1 + 0x1a1);
  param_1[0x1af] = 0;
  param_1[0x1ae] = 0;
  *(undefined4 *)((long)param_1 + 0xd8c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x1b0,0,1);
  param_1[0x1b4] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b2] = 0;
  FUN_00ccf1a4(param_1 + 0x1b5);
  param_1[0x1bb] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1b9] = 0;
  FUN_00ccf25c(param_1 + 0x1bc);
  param_1[0x1c1] = 0;
  param_1[0x1c0] = 0;
  *(undefined4 *)((long)param_1 + 0xe1c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x1c2,0,1);
  return;
}


