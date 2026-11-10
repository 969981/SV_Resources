/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027397ac; name: FUN_027397ac
 */


undefined8 * FUN_027397ac(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0xd0,8);
  if (puVar3 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00cf38a8(puVar3,*param_2);
  puVar3[2] = puVar3;
  *puVar3 = &DAT_045d8570;
  puVar3[1] = param_1;
  puVar3[4] = &PTR_LAB_045d85b0;
  *(undefined4 *)(puVar3 + 3) = 0x800d0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return puVar3;
}


