/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0137d65c; name: FUN_0137d65c
 */


long * FUN_0137d65c(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x38,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[4] = 0;
  *plVar3 = (long)(PTR_DAT_047d66f8 + 0x10);
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  nn::os::GetTlsValue(DAT_04865a30);
  *(undefined4 *)(plVar3 + 5) = 0;
  *plVar3 = (long)&DAT_045ee4e0;
  plVar3[1] = (long)param_2;
  plVar3[4] = (long)&PTR_LAB_045ee518;
  plVar3[6] = 0;
  plVar3[2] = (long)plVar3;
  *(undefined4 *)(plVar3 + 3) = 0x80038;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


