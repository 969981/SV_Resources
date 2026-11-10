/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01355418; name: FUN_01355418
 */


long * FUN_01355418(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_1;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x210,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00e86a58(plVar6,param_2,*param_3);
  plVar6[0x41] = 0;
  plVar6[0x40] = 0;
  puVar1 = PTR_DAT_047e3100 + 0x10;
  puVar2 = PTR_DAT_047e3100 + 0xa8;
  puVar3 = PTR_DAT_047e3100 + 0xf8;
  plVar6[2] = (long)plVar6;
  plVar6[0x3e] = 0;
  plVar6[0x3f] = 0;
  plVar6[4] = (long)puVar2;
  plVar6[5] = (long)puVar3;
  *(undefined4 *)(plVar6 + 3) = 0x80210;
  *plVar6 = (long)puVar1;
  plVar6[1] = (long)param_1;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


