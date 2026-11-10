/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b3b7c; name: FUN_012b3b7c
 */


undefined8 * FUN_012b3b7c(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *__s;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  __s = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0xb0,0x10);
  if (__s == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0xb0);
  FUN_012b3cd0(__s);
  __s[2] = __s;
  *__s = &PTR_LAB_045a8cb0;
  __s[1] = param_1;
  __s[4] = &PTR_LAB_045a8ce0;
  *(undefined4 *)(__s + 3) = 0x1000b0;
  __s[6] = 0;
  __s[7] = 0;
  __s[8] = 0;
  __s[9] = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return __s;
}


