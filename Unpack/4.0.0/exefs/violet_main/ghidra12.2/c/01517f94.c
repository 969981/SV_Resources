/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01517f94; name: FUN_01517f94
 */


long * FUN_01517f94(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *__s;
  long lVar4;
  long lVar5;
  long *plVar6;
  
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
  __s = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1b0,0x10);
  if (__s == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x1b0);
  puVar1 = PTR_DAT_047d66f8;
  __s[2] = 0;
  *(undefined4 *)(__s + 3) = 0;
  *__s = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *__s = (long)(PTR_DAT_047d8c78 + 0x10);
  __s[1] = lVar5;
  __s[4] = (long)(puVar1 + 0x88);
  plVar6 = __s + 5;
  *plVar6 = (long)(puVar1 + 0xd8);
  __s[7] = 0;
  __s[6] = 0;
  FUN_00d1a3f4(__s + 6,plVar6);
  *__s = (long)&DAT_04598460;
  __s[4] = (long)&PTR_LAB_045984d8;
  *plVar6 = (long)&DAT_04598528;
  __s[8] = 0;
  __s[9] = 0;
  __s[10] = 0;
  __s[0xb] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  lVar4 = tpidr_el0;
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar4 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar4 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(__s + 0xf) = 0;
  __s[0xc] = lVar5;
  __s[0xd] = 0x1fffffffffffffff;
  __s[0xe] = 0;
  __s[0x10] = 0;
  __s[0x11] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar4 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar4 + 0x30) = DAT_04859430;
  }
  __s[0x12] = lVar5;
  *(undefined4 *)(__s + 0x15) = 0;
  __s[0x13] = 0x1fffffffffffffff;
  __s[0x14] = 0;
  *(undefined4 *)(__s + 3) = 0x1001b0;
  __s[0x16] = 0;
  __s[0x17] = 0;
  __s[0x18] = 0;
  __s[0x19] = 0;
  __s[0x26] = 0;
  __s[0x27] = 0;
  __s[0x28] = 0;
  __s[0x29] = 0;
  __s[1] = (long)param_2;
  __s[2] = (long)__s;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


