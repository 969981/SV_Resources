/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118add8; name: FUN_0118add8
 */


void FUN_0118add8(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  FUN_00d1a240(param_1,0x80048080);
  *param_1 = &DAT_04606ef0;
  *(undefined2 *)((long)param_1 + 0x11e) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[4] = &PTR_LAB_04607040;
  param_1[5] = &DAT_04607168;
  param_1[6] = &PTR_LAB_046071c0;
  param_1[7] = &PTR_LAB_046071e8;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x26,0,1);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  lVar8 = tpidr_el0;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar8 + 0x30), lVar7 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar7 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2c] = lVar7;
  param_1[0x30] = 0;
  param_1[0x2d] = 0xfffffffffffffff;
  param_1[0x2e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar8 + 0x30), lVar7 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar7 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0x32] = 0xfffffffffffffff;
  param_1[0x33] = 0;
  plVar12 = (long *)param_1[1];
  param_1[0x31] = lVar7;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x43] = 0;
  param_1[0x41] = plVar12;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = plVar12;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x3b] = 0x7ffffffffffffff;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  param_1[0x42] = 0x222222222222222;
  param_1[0x47] = 0x222222222222222;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = plVar12;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar12;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar9 + 1,0,0x58);
  puVar5 = PTR_DAT_047d66f8;
  plVar9[2] = 0;
  *(undefined4 *)(plVar9 + 3) = 0;
  *plVar9 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar11 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *plVar9 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar9[1] = lVar11;
  plVar9[4] = (long)(puVar5 + 0x88);
  plVar13 = plVar9 + 5;
  *plVar13 = (long)(puVar5 + 0xd8);
  plVar14 = plVar9 + 6;
  *plVar14 = 0;
  plVar9[7] = 0;
  FUN_00d1a3f4(plVar14,plVar13);
  *plVar9 = (long)&DAT_04607220;
  plVar9[1] = (long)plVar12;
  plVar9[4] = (long)&PTR_LAB_046072a0;
  *plVar13 = (long)&DAT_046072f0;
  plVar9[10] = 0;
  *(undefined1 *)(plVar9 + 0xb) = 0;
  plVar9[2] = (long)plVar9;
  *(undefined4 *)(plVar9 + 3) = 0x80060;
  plVar9[8] = 0;
  plVar9[9] = 0;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = *plVar14;
  if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar10;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar12 = (long *)param_1[0x5d];
  param_1[0x5d] = 0;
  if (plVar12 != (long *)0x0) {
    lVar8 = plVar12[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x5d] = plVar9;
  return;
}


