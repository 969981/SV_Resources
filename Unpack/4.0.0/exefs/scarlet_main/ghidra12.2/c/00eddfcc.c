/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eddfcc; name: FUN_00eddfcc
 */


long * FUN_00eddfcc(long *param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar3 = (undefined4 *)FUN_01053840();
  lVar4 = nn::os::GetTlsValue(*puVar3);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x48,8);
  puVar2 = PTR_DAT_047d66f8;
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  lVar6 = *param_2;
  uVar1 = *param_3;
  plVar5[2] = 0;
  *(undefined4 *)(plVar5 + 3) = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  puVar3 = (undefined4 *)FUN_01053840();
  nn::os::GetTlsValue(*puVar3);
  *(undefined4 *)(plVar5 + 5) = 0;
  plVar5[4] = (long)&PTR_LAB_045d1b00;
  *plVar5 = (long)&PTR_LAB_045d1a60;
  plVar5[1] = (long)param_1;
  *(short *)(plVar5 + 8) = (short)uVar1;
  plVar5[2] = (long)plVar5;
  *(undefined4 *)(plVar5 + 3) = 0x80048;
  plVar5[6] = (long)&PTR_LAB_045d1b30;
  plVar5[7] = lVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


