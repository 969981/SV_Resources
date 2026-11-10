/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01744ff8; name: FUN_01744ff8
 */


long * FUN_01744ff8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *__s;
  
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
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  __s = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x68,8);
  if (__s == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x68);
  FUN_01745164(__s);
  puVar2 = PTR_DAT_047dda70;
  __s[0xc] = 0;
  __s[6] = 0;
  __s[7] = 0;
  __s[8] = 0;
  __s[9] = 0;
  __s[10] = 0;
  __s[0xb] = 0;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  __s[2] = (long)__s;
  __s[4] = (long)(puVar2 + 0x40);
  __s[5] = (long)puVar1;
  *(undefined4 *)(__s + 3) = 0x80068;
  *__s = (long)(puVar2 + 0x10);
  __s[1] = (long)param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return __s;
}


