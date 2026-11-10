/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa002c; name: FUN_00fa002c
 */


long * FUN_00fa002c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x208,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_047db018 + 0x10);
  FUN_00e86a58(plVar4,param_3,*param_4);
  puVar1 = PTR_DAT_047e0e60;
  plVar4[0x40] = lVar5;
  plVar4[0x3e] = 0;
  plVar4[0x3f] = 0;
  plVar4[2] = (long)plVar4;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = (long)param_2;
  plVar4[4] = (long)(puVar1 + 0xb0);
  plVar4[5] = (long)(puVar1 + 0x100);
  *(undefined4 *)(plVar4 + 3) = 0x80208;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


