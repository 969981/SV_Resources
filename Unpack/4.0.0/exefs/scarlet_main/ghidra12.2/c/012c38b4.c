/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c38b4; name: FUN_012c38b4
 */


undefined8 * FUN_012c38b4(long *param_1)

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
  __s = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1b0,8);
  if (__s == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x1b0);
  FUN_012c3bec(__s);
  *__s = &PTR_LAB_045e7180;
  __s[4] = &PTR_LAB_045e71b0;
  __s[5] = 0;
  __s[6] = 0;
  __s[7] = 0;
  FUN_012c3ab8(__s + 8);
  FUN_012c3a78(__s + 0xc);
  memset(__s + 0x19,0,0x70);
  FUN_012c3d18(__s + 0x19);
  __s[0x29] = 0;
  __s[0x2a] = 0;
  __s[0x28] = 0;
  FUN_012c3ab8(__s + 0x2b);
  __s[0x2f] = 0;
  *(undefined4 *)((long)__s + 0x18c) = 1;
  nn::os::InitializeLightEvent(__s + 0x30,0,1);
  __s[0x32] = 0;
  *(undefined4 *)((long)__s + 0x1a4) = 1;
  nn::os::InitializeLightEvent(__s + 0x33,0,1);
  __s[0x35] = 0;
  __s[1] = param_1;
  __s[2] = __s;
  *(undefined4 *)(__s + 3) = 0x801b0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return __s;
}


