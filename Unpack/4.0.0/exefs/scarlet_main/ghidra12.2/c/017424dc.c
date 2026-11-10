/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017424dc; name: FUN_017424dc
 */


long * FUN_017424dc(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = (undefined4 *)FUN_01053840();
  lVar3 = nn::os::GetTlsValue(*puVar2);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar4[4] = 0;
  plVar4[5] = 0;
  puVar1 = PTR_DAT_047d66f8 + 0x10;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined4 *)(plVar4 + 3) = 0;
  *plVar4 = (long)puVar1;
  plVar4[1] = 0;
  puVar2 = (undefined4 *)FUN_01053840();
  nn::os::GetTlsValue(*puVar2);
  *(undefined4 *)(plVar4 + 5) = 0;
  *plVar4 = (long)&DAT_045a93b8;
  plVar4[1] = (long)param_1;
  plVar4[4] = (long)&PTR_LAB_045a93f0;
  plVar4[2] = (long)plVar4;
  *(undefined4 *)(plVar4 + 3) = 0x80030;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


