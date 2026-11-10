/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01746bfc; name: FUN_01746bfc
 */


long * FUN_01746bfc(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *__s;
  long lVar5;
  
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
  __s = (long *)(**(code **)(*param_1 + 0x10))(param_1,0xe0,8);
  if (__s == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0xe0);
  FUN_01746f98(__s);
  puVar2 = PTR_DAT_047ddac8;
  __s[0xe] = 0;
  __s[6] = 0;
  __s[7] = 0;
  __s[8] = 0;
  __s[9] = 0;
  __s[10] = 0;
  __s[0xb] = 0;
  *__s = (long)(puVar2 + 0x10);
  __s[0xc] = 0;
  __s[0xd] = 0;
  __s[4] = (long)(puVar2 + 0x40);
  __s[5] = (long)&PTR_FUN_045a9578;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  lVar1 = tpidr_el0;
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar1 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(__s + 0x12) = 0;
  __s[0xf] = lVar5;
  __s[0x13] = 0;
  __s[0x10] = 0xfffffffffffffff;
  __s[0x11] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar1 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  __s[0x14] = lVar5;
  *(undefined4 *)(__s + 0x19) = 0x3f800000;
  *(undefined4 *)(__s + 0x17) = 0;
  __s[0x18] = 0;
  __s[0x1a] = 0;
  *(undefined1 *)(__s + 0x1b) = 0;
  *(undefined4 *)(__s + 3) = 0x800e0;
  __s[0x15] = 0xfffffffffffffff;
  __s[0x16] = 0;
  __s[1] = (long)param_1;
  __s[2] = (long)__s;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return __s;
}


