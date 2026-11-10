/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01210490; name: FUN_01210490
 */


void FUN_01210490(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  
  FUN_00d1a240(param_1,0x8009809b);
  *param_1 = &DAT_0459de20;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[4] = &PTR_LAB_0459dfa0;
  param_1[5] = &DAT_0459e0c8;
  param_1[6] = &PTR_LAB_0459e120;
  param_1[7] = &PTR_LAB_0459e148;
  param_1[0x24] = &PTR_LAB_0459e180;
  param_1[0x2a] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
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
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2b] = lVar6;
  param_1[0x31] = 0;
  param_1[0x2c] = 0x1fffffffffffffff;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
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
  uVar10 = param_1[1];
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x32] = lVar6;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x41] = 0x1fffffffffffffff;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x49] = 0;
  param_1[0x47] = uVar10;
  param_1[0x48] = 0x1fffffffffffffff;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x33] = 0x1fffffffffffffff;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = uVar10;
  param_1[0x3a] = 0x1fffffffffffffff;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = uVar10;
  if (*(code **)(param_2 + 0x40) != (code *)0x0) {
    (**(code **)(param_2 + 0x40))(param_2 + 0x50,param_1 + 0x52);
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    param_1[0x4f] = *(undefined8 *)(param_2 + 0x38);
    param_1[0x51] = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    param_1[0x50] = *(undefined8 *)(param_2 + 0x40);
    param_1[0x4e] = uVar10;
  }
  param_1[0x5e] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  if (*(code **)(param_2 + 0xd0) != (code *)0x0) {
    (**(code **)(param_2 + 0xd0))(param_2 + 0xe0,param_1 + 100);
    uVar10 = *(undefined8 *)(param_2 + 0xd8);
    param_1[0x61] = *(undefined8 *)(param_2 + 200);
    param_1[99] = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0xc0);
    param_1[0x62] = *(undefined8 *)(param_2 + 0xd0);
    param_1[0x60] = uVar10;
  }
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  if (*(code **)(param_2 + 0x150) != (code *)0x0) {
    (**(code **)(param_2 + 0x150))(param_2 + 0x160,param_1 + 0x74);
    uVar10 = *(undefined8 *)(param_2 + 0x158);
    param_1[0x71] = *(undefined8 *)(param_2 + 0x148);
    param_1[0x73] = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x140);
    param_1[0x72] = *(undefined8 *)(param_2 + 0x150);
    param_1[0x70] = uVar10;
  }
  param_1[0x80] = *(undefined8 *)(param_2 + 0x1c0);
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  if (*(code **)(param_2 + 0x1e0) != (code *)0x0) {
    (**(code **)(param_2 + 0x1e0))(param_2 + 0x1f0,param_1 + 0x86);
    uVar10 = *(undefined8 *)(param_2 + 0x1e8);
    param_1[0x83] = *(undefined8 *)(param_2 + 0x1d8);
    param_1[0x85] = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x1d0);
    param_1[0x84] = *(undefined8 *)(param_2 + 0x1e0);
    param_1[0x82] = uVar10;
  }
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  if (*(code **)(param_2 + 0x260) != (code *)0x0) {
    (**(code **)(param_2 + 0x260))(param_2 + 0x270,param_1 + 0x96);
    uVar10 = *(undefined8 *)(param_2 + 0x268);
    param_1[0x93] = *(undefined8 *)(param_2 + 600);
    param_1[0x95] = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x250);
    param_1[0x94] = *(undefined8 *)(param_2 + 0x260);
    param_1[0x92] = uVar10;
  }
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa3) = *(undefined1 *)(param_2 + 0x2d8);
  *(undefined1 *)((long)param_1 + 0x519) = *(undefined1 *)(param_2 + 0x2d9);
  *(undefined1 *)((long)param_1 + 0x51a) = *(undefined1 *)(param_2 + 0x2da);
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
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
  param_1[0xa7] = lVar6;
  param_1[0xa9] = 0;
  plVar11 = (long *)param_1[1];
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa8] = 0x2aaaaaaaaaaaaaa;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xae] = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0xaf) = 0x10100;
  *(undefined2 *)((long)param_1 + 0x57c) = 0x100;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  lVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,0x260,0x10);
  if (lVar6 == 0) {
    (**(code **)(*plVar11 + 0xe8))(plVar11);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar1 = param_1 + 0x26;
  FUN_01210e70();
  *(undefined4 *)(lVar6 + 0x18) = 0x100260;
  *(long **)(lVar6 + 8) = plVar11;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  piVar2 = (int *)(lVar6 + 0x28);
  do {
    iVar5 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar11 = (long *)*plVar1;
  *plVar1 = 0;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 5;
    do {
      lVar7 = *plVar8;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *plVar1 = lVar6;
  plVar11 = *(long **)(param_2 + 0x2e8);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar8 = *(long **)(lVar6 + 0x198);
  *(long **)(lVar6 + 0x198) = plVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined8 *)(lVar6 + 0x1a0) = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined8 *)(lVar6 + 0x1a8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined8 *)(lVar6 + 0x1b0) = *(undefined8 *)(param_2 + 0x300);
  plVar11 = *(long **)(param_2 + 0x308);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar8 = *(long **)(lVar6 + 0x1b8);
  *(long **)(lVar6 + 0x1b8) = plVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined4 *)(lVar6 + 0x1c0) = *(undefined4 *)(param_2 + 0x310);
  lVar7 = *plVar1;
  pcVar9 = *(code **)(lVar7 + 0x1d8);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x1e0) = 0;
    *(undefined8 *)(lVar7 + 0x1e8) = 0;
    *(undefined8 *)(lVar7 + 0x1d0) = 0;
    *(undefined8 *)(lVar7 + 0x1d8) = 0;
    (*pcVar9)(lVar7 + 0x1f0);
  }
  if (*(code **)(param_2 + 0x330) != (code *)0x0) {
    (**(code **)(param_2 + 0x330))(param_2 + 0x340,lVar7 + 0x1f0);
    uVar10 = *(undefined8 *)(param_2 + 0x338);
    *(undefined8 *)(lVar7 + 0x1d8) = *(undefined8 *)(param_2 + 0x328);
    *(undefined8 *)(lVar7 + 0x1e8) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 800);
    *(undefined8 *)(lVar7 + 0x1e0) = *(undefined8 *)(param_2 + 0x330);
    *(undefined8 *)(lVar7 + 0x1d0) = uVar10;
  }
  *(undefined4 *)(param_1[0x26] + 0x250) = *(undefined4 *)(param_2 + 0x3a0);
  param_1[0xa2] = *(undefined8 *)(param_2 + 0x2d0);
  FUN_01210d0c(param_1[0x26],param_2,1);
  *(undefined4 *)(param_1 + 0x25) = 1;
  return;
}


