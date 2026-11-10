/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c8490; name: FUN_012c8490
 */


long * FUN_012c8490(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *__s;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  __s = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x6c0,0x10);
  if (__s == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x6c0);
  FUN_012c8a04(__s);
  puVar1 = PTR_DAT_047dedd8 + 0x40;
  *__s = (long)(PTR_DAT_047dedd8 + 0x10);
  __s[4] = (long)puVar1;
  __s[5] = 0;
  __s[6] = 0;
  __s[7] = 0;
  FUN_012c8b30(__s + 8);
  FUN_012c87fc(__s + 0xc);
  FUN_012c877c(__s + 0x22);
  __s[0x30] = 0;
  __s[0x31] = 0;
  __s[0x2f] = 0;
  FUN_012c8c64(__s + 0x32);
  __s[0x3b] = 0;
  __s[0x3c] = 0;
  __s[0x36] = 0;
  __s[0x39] = 0;
  __s[0x3a] = 0;
  __s[0x37] = 0;
  __s[0x38] = 0;
  FUN_012c8864(__s + 0x3d);
  FUN_012c3a78(__s + 0x53);
  __s[0x60] = 0;
  *(undefined4 *)((long)__s + 0x314) = 1;
  nn::os::InitializeLightEvent(__s + 0x61,0,1);
  __s[99] = 0;
  *(undefined4 *)((long)__s + 0x32c) = 1;
  nn::os::InitializeLightEvent(__s + 100,0,1);
  __s[0x66] = 0;
  *(undefined4 *)((long)__s + 0x344) = 1;
  nn::os::InitializeLightEvent(__s + 0x67,0,1);
  __s[0x6b] = 0;
  __s[0x6a] = 0;
  *(undefined4 *)((long)__s + 0x36c) = 1;
  nn::os::InitializeLightEvent(__s + 0x6c,0,1);
  __s[0x7f] = 0;
  __s[0x7e] = 0;
  __s[0x7d] = 0;
  __s[0x7c] = 0;
  memset(__s + 0x6e,0,0x68);
  __s[0x8c] = 0;
  __s[0x8e] = (long)&DAT_cbf29ce484222645;
  __s[0x8d] = 0;
  __s[0x8f] = (long)&DAT_03c886bc;
  __s[0x90] = 0;
  __s[0x91] = 0;
  *(undefined4 *)(__s + 0x92) = 0;
  __s[0x93] = 0;
  __s[0x95] = 0;
  __s[0x96] = 0;
  __s[0x97] = 0;
  __s[0x98] = 0;
  __s[0x99] = 0;
  __s[0x9a] = 0;
  __s[0x94] = (long)(PTR_DAT_047d8e88 + 0x10);
  __s[0x9b] = 0;
  FUN_012c87bc(__s + 0x9c);
  FUN_012ca4ec(__s + 0xa9);
  memset(__s + 0xb6,0,0x70);
  FUN_012c94ec(__s + 0xb6);
  *(undefined2 *)(__s + 0xc5) = 1;
  *(undefined1 *)((long)__s + 0x62a) = 0;
  __s[0xc6] = 0;
  __s[199] = 0;
  __s[200] = 0;
  FUN_012c9134(__s + 0xc9);
  __s[0xcf] = 0;
  __s[0xce] = 0;
  __s[0xcd] = 0;
  FUN_012c88cc(__s + 0xd0);
  *(undefined4 *)(__s + 3) = 0x1006c0;
  __s[1] = (long)param_1;
  __s[2] = (long)__s;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


