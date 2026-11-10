/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d71c4; name: FUN_015d71c4
 */


long * FUN_015d71c4(undefined8 param_1,long *param_2)

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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  __s = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x390,0x10);
  if (__s == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x128);
  FUN_0104c068(__s);
  __s[0x23] = 0;
  __s[0x24] = 0;
  puVar1 = PTR_DAT_047d90a0;
  __s[0x21] = (long)&DAT_cbf29ce484222645;
  __s[0x22] = (long)&DAT_03c886bc;
  __s[0x27] = (long)&DAT_cbf29ce484222645;
  __s[0x28] = (long)&DAT_03c886bc;
  *(undefined2 *)(__s + 0x25) = 0x100;
  *__s = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)__s + 0x12a) = 0;
  __s[0x4f] = 0;
  __s[0x4e] = 0;
  __s[0x4d] = 0;
  __s[0x4c] = 0;
  __s[0x5c] = 0;
  __s[0x5d] = 0;
  __s[0x5e] = 0;
  __s[0x5f] = 0;
  __s[4] = (long)(puVar1 + 0x160);
  __s[5] = (long)(puVar1 + 0x1b0);
  __s[0x29] = 0;
  __s[0x2a] = 0;
  __s[0x2c] = 0;
  __s[0x2d] = 0;
  __s[0x2e] = 0;
  __s[0x2f] = 0;
  __s[0x3e] = 0;
  __s[0x3f] = 0;
  __s[0x3c] = 0;
  __s[0x3d] = 0;
  FUN_0104bd38(__s + 0x6c);
  *(undefined8 *)((long)__s + 299) = 0x100;
  *(undefined4 *)(__s + 0x70) = 0;
  __s[1] = (long)param_2;
  __s[2] = (long)__s;
  *(undefined4 *)(__s + 3) = 0x100390;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


