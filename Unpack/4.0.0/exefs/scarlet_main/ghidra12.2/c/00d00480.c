/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d00480; name: FUN_00d00480
 */


long * FUN_00d00480(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
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
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x230,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00e86a58(plVar5,param_3,*param_4);
  plVar5[0x41] = 0;
  plVar5[0x3f] = 0;
  plVar5[0x40] = 0;
  plVar5[0x3e] = 0;
  puVar1 = PTR_DAT_047e23c0 + 0x10;
  puVar2 = PTR_DAT_047e23c0 + 0xf8;
  plVar5[4] = (long)(PTR_DAT_047e23c0 + 0xa8);
  plVar5[5] = (long)puVar2;
  plVar5[0x42] = 0;
  plVar5[0x43] = 0;
  plVar5[0x44] = 0;
  plVar5[0x45] = 0;
  plVar5[2] = (long)plVar5;
  *(undefined4 *)(plVar5 + 3) = 0x80230;
  *plVar5 = (long)puVar1;
  plVar5[1] = (long)param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


