/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d2b04; name: FUN_019d2b04
 */


long * FUN_019d2b04(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long local_c0;
  code *local_b8;
  code *local_b0;
  long local_a8;
  undefined1 auStack_a0 [96];
  
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
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0xd0,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_b0 = (code *)0x0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  FUN_019d2d98(&local_c0,param_2);
  puVar1 = PTR_DAT_047d66f8;
  plVar5[2] = 0;
  *(undefined4 *)(plVar5 + 3) = 0;
  *plVar5 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *plVar5 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar5[1] = lVar7;
  plVar5[4] = (long)(puVar1 + 0x88);
  plVar8 = plVar5 + 5;
  *plVar8 = (long)(puVar1 + 0xd8);
  plVar5[7] = 0;
  plVar5[6] = 0;
  FUN_00d1a3f4(plVar5 + 6,plVar8);
  *plVar5 = (long)&PTR_FUN_045a1e18;
  plVar5[4] = (long)&PTR_LAB_045a1e90;
  *plVar8 = (long)&DAT_045a1ee0;
  plVar5[0xd] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  if (local_b0 != (code *)0x0) {
    (*local_b0)(auStack_a0,plVar5 + 0xe);
    plVar5[0xd] = local_a8;
    plVar5[10] = local_c0;
    plVar5[0xb] = (long)local_b8;
    plVar5[0xc] = (long)local_b0;
  }
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar2)(auStack_a0);
  }
  *(undefined4 *)(plVar5 + 3) = 0x1000d0;
  plVar5[1] = (long)param_1;
  plVar5[2] = (long)plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


