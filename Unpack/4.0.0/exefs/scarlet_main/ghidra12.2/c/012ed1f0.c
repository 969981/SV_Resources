/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ed1f0; name: FUN_012ed1f0
 */


long * FUN_012ed1f0(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = (undefined4 *)FUN_01053840();
  lVar3 = nn::os::GetTlsValue(*puVar2);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0xb0,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar4 + 1,0,0xa8);
  puVar1 = PTR_DAT_047d66f8;
  plVar4[2] = 0;
  *(undefined4 *)(plVar4 + 3) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  puVar2 = (undefined4 *)FUN_01053840();
  lVar5 = nn::os::GetTlsValue(*puVar2);
  lVar6 = 0;
  if ((lVar5 != 0) && (lVar6 = 0, *(long *)(lVar5 + 0x80) != 0)) {
    lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(plVar4 + 5) = 0;
  *plVar4 = (long)&PTR_LAB_0459f750;
  plVar4[1] = lVar6;
  plVar4[4] = (long)&PTR_LAB_0459f788;
  FUN_012ed324(plVar4 + 6);
  *(undefined4 *)(plVar4 + 3) = 0x800b0;
  plVar4[1] = (long)param_1;
  plVar4[2] = (long)plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


