/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ac994; name: FUN_010ac994
 */


void * FUN_010ac994(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  void *__s;
  
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,200,8);
  if (__s == (void *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,200);
  FUN_010aca6c(__s);
  *(undefined4 *)((long)__s + 0x18) = 0x800c8;
  *(long **)((long)__s + 8) = param_1;
  *(void **)((long)__s + 0x10) = __s;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return __s;
}


