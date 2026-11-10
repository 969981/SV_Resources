/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e4cd0; name: FUN_012e4cd0
 */


void FUN_012e4cd0(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  long local_38;
  
  FUN_02c7277c();
  nn::aoc::GetAddOnContentListChangedEvent((SystemEvent *)(param_1 + 0x2d));
  plVar11 = (long *)*param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
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
  plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x3e0,0x10);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*plVar11 + 0xe8))(plVar11);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00cd0d38(plVar8,0x4000);
  puVar5 = PTR_DAT_047e23a0;
  plVar8[0x6c] = 0;
  plVar8[0x6d] = 0;
  plVar8[4] = (long)(puVar5 + 0xc0);
  plVar8[5] = (long)(puVar5 + 0x110);
  plVar8[0x6e] = 0;
  plVar8[0x6f] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[1] = (long)plVar11;
  plVar8[2] = (long)plVar8;
  *(undefined4 *)(plVar8 + 3) = 0x1003e0;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = plVar8[6];
  if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar7 + 0x1a);
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
    uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    *(undefined8 *)(lVar7 + 8) = uVar9;
    *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  pcVar10 = (code *)plVar8[0x6d];
  if (pcVar10 != (code *)0x0) {
    plVar8[0x6e] = 0;
    plVar8[0x6f] = 0;
    plVar8[0x6c] = 0;
    plVar8[0x6d] = 0;
    (*pcVar10)(plVar8 + 0x70);
  }
  plVar8[0x6c] = (long)&LAB_02c74cdc;
  plVar8[0x6d] = (long)&LAB_02c74dec;
  plVar8[0x6e] = (long)&LAB_02c74df0;
  plVar8[0x70] = (long)param_1;
  plVar8[0x71] = (long)plVar8;
  plVar8[0x6f] = (long)&LAB_02c74dfc;
  local_38 = param_1[0x24];
  param_1[0x24] = 0;
  FUN_028a1818(&local_38);
  param_1[0x24] = (long)plVar8;
  return;
}


