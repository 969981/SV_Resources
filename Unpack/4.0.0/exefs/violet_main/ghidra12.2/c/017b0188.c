/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b0188; name: FUN_017b0188
 */


long * FUN_017b0188(long *param_1)

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
  __s = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x58,8);
  if (__s == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x58);
  FUN_017b02dc(__s);
  puVar1 = PTR_DAT_047e26a8;
  __s[2] = (long)__s;
  __s[4] = (long)(puVar1 + 0xa0);
  __s[5] = (long)(puVar1 + 0xf0);
  *__s = (long)(puVar1 + 0x10);
  __s[1] = (long)param_1;
  *(undefined4 *)(__s + 3) = 0x80058;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


