/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a9188; name: FUN_021a9188
 */


long * FUN_021a9188(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x2b0,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar6 = (long *)*param_2;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 6;
  }
  local_50 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 7;
  }
  lStack_48 = *plVar1;
  if (plVar6 == (long *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = plVar6[8];
  }
  local_38 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_38 = plVar6;
  FUN_01527838(plVar5,&local_50);
  plVar5[0xf] = 0;
  puVar2 = PTR_DAT_047dd678;
  lVar7 = plVar5[1];
  *plVar5 = (long)(PTR_DAT_047dd678 + 0x10);
  plVar5[4] = (long)(puVar2 + 0xc0);
  plVar5[5] = (long)(puVar2 + 0x110);
  *(undefined4 *)((long)plVar5 + 0x8c) = 1;
  nn::os::InitializeLightEvent(plVar5 + 0x10,0,1);
  plVar5[0x14] = lVar7;
  plVar5[0x15] = 0x3ffffffffffffff;
  plVar5[0x16] = 0;
  *(undefined4 *)(plVar5 + 0x17) = 0;
  *(undefined4 *)(plVar5 + 0x1c) = 0;
  plVar5[0x1d] = 0;
  *(undefined1 *)(plVar5 + 0x1f) = 0;
  plVar5[0x1a] = 0x3ffffffffffffff;
  plVar5[0x1b] = 0;
  *(undefined4 *)(plVar5 + 0x1e) = 0x3f800000;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x18] = 0;
  plVar5[0x19] = lVar7;
  puVar2 = PTR_DAT_047dd688;
  *plVar5 = (long)(PTR_DAT_047dd688 + 0x10);
  plVar5[0x22] = 0;
  plVar5[4] = (long)(puVar2 + 0xc0);
  plVar5[5] = (long)(puVar2 + 0x110);
  plVar5[0x20] = 0;
  plVar5[0x21] = 0;
  FUN_021a9414(plVar5 + 0x23);
  plVar5[0x28] = 0;
  plVar5[0x29] = 0;
  plVar5[0x27] = 0;
  FUN_021a94d0(plVar5 + 0x2a);
  *(undefined1 *)(plVar5 + 0x2e) = 0;
  plVar5[0x35] = 0;
  FUN_021a958c(plVar5 + 0x36);
  plVar5[0x3a] = 0;
  plVar5[0x34] = (long)(plVar5 + 0x35);
  FUN_0157913c(plVar5 + 0x3b);
  FUN_0157913c(plVar5 + 0x48);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(undefined4 *)(plVar5 + 3) = 0x1002b0;
  plVar5[1] = (long)param_1;
  plVar5[2] = (long)plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


