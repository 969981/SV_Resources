/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b19ac; name: FUN_011b19ac
 */


long * FUN_011b19ac(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
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
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x70,0x10);
  puVar1 = PTR_DAT_047d66f8;
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar5[2] = 0;
  *(undefined4 *)(plVar5 + 3) = 0;
  *plVar5 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
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
  *(undefined4 *)(plVar5 + 5) = 0;
  *plVar5 = (long)&PTR_LAB_045ead88;
  plVar5[1] = lVar7;
  plVar5[4] = (long)&PTR_LAB_045eadc0;
  *(undefined1 *)((long)plVar5 + 0x2c) = 0;
  plVar5[7] = 0;
  puVar1 = PTR_DAT_047e0ea0;
  plVar5[6] = 0;
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047e0ea0), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047e12e0,PTR_DAT_047e0ea8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0ea0);
  }
  lVar6 = *(long *)PTR_DAT_047e0ea8;
  *(long *)PTR_DAT_047e0eb0 = lVar6;
  plVar5[0xd] = lVar6;
  uVar2 = FUN_011b1c00();
  *(undefined4 *)(plVar5 + 0xc) = uVar2;
  plVar5[1] = (long)param_1;
  plVar5[2] = (long)plVar5;
  *(undefined4 *)(plVar5 + 3) = 0x100070;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


