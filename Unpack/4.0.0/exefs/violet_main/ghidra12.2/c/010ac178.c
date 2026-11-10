/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ac178; name: FUN_010ac178
 */


long * FUN_010ac178(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long *__s;
  
  puVar2 = (undefined4 *)FUN_01053840();
  lVar3 = nn::os::GetTlsValue(*puVar2);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  __s = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x90,8);
  if (__s == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x90);
  FUN_010ace64(__s);
  puVar1 = PTR_DAT_047e25c0;
  __s[2] = (long)__s;
  __s[4] = (long)(puVar1 + 0x50);
  *(undefined4 *)(__s + 3) = 0x80090;
  *__s = (long)(puVar1 + 0x10);
  __s[1] = (long)param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


