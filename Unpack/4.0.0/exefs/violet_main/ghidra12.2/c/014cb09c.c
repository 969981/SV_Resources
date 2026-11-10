/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014cb09c; name: FUN_014cb09c
 */


undefined8 * FUN_014cb09c(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *__s;
  long lVar4;
  
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
  __s = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x420,0x10);
  if (__s == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x420);
  FUN_014cba20(__s);
  *__s = &PTR_LAB_04543ef8;
  __s[4] = &PTR_LAB_04543f28;
  __s[5] = 0x600000001;
  __s[6] = 0x1200000011;
  __s[7] = 0x4000000002;
  __s[8] = 0x4000000020000;
  __s[9] = 0x3f147ae100060042;
  __s[0xb] = 0;
  FUN_014cbb48(__s + 0xc);
  __s[0x12] = 0;
  __s[0x10] = 0;
  __s[10] = __s + 0xb;
  FUN_014cc020(__s + 0x13);
  __s[0x17] = 0;
  __s[0x11] = __s + 0x12;
  FUN_014cb7a8(__s + 0x18);
  __s[0x25] = 0;
  *(undefined4 *)((long)__s + 0x13c) = 1;
  nn::os::InitializeLightEvent(__s + 0x26,0,1);
  memset(__s + 0x28,0,0x70);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  lVar1 = tpidr_el0;
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar1 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(__s + 0x2f) = 0;
  __s[0x2c] = lVar4;
  __s[0x2d] = 0xfffffffffffffff;
  __s[0x2e] = 0;
  __s[0x30] = 0;
  __s[0x31] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar1 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(__s + 0x35) = 0;
  __s[0x32] = lVar4;
  __s[0x39] = 0;
  __s[0x33] = 0xfffffffffffffff;
  __s[0x34] = 0;
  __s[0x37] = 0;
  __s[0x38] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar1 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(__s + 0x3d) = 0;
  __s[0x3a] = lVar4;
  __s[0x40] = 0;
  __s[0x3b] = 0x2aaaaaaaaaaaaaa;
  __s[0x3c] = 0;
  __s[0x3e] = 0;
  __s[0x3f] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar1 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  __s[0x41] = lVar4;
  __s[0x43] = 0;
  *(undefined4 *)(__s + 0x44) = 0;
  __s[0x42] = 0x249249249249249;
  __s[0x45] = 0;
  __s[0x46] = 0;
  __s[0x47] = 0;
  FUN_014cb82c(__s + 0x48);
  __s[0x4e] = 0;
  __s[0x4d] = 0;
  __s[0x4c] = 0;
  FUN_014cb82c(__s + 0x4f);
  __s[0x55] = 0;
  __s[0x54] = 0;
  __s[0x53] = 0;
  FUN_014cbc7c(__s + 0x56);
  __s[0x5b] = 0;
  __s[0x5a] = 0;
  *(undefined4 *)((long)__s + 0x2ec) = 1;
  nn::os::InitializeLightEvent(__s + 0x5c,0,1);
  *(undefined1 *)(__s + 0x62) = 0;
  __s[0x61] = 0;
  __s[0x60] = 0;
  __s[0x5f] = 0;
  __s[0x5e] = 0;
  FUN_014cb7e8(__s + 99);
  *(undefined4 *)((long)__s + 0x3d4) = 0x3f800000;
  *(undefined4 *)(__s + 0x7e) = 0x3f800000;
  *(undefined1 *)(__s + 0x71) = 0;
  __s[0x70] = 0;
  __s[0x6f] = 0;
  __s[0x6e] = 0;
  __s[0x6d] = 0;
  __s[0x72] = 0;
  __s[0x73] = 0;
  __s[0x74] = 0;
  __s[0x79] = 0;
  *(undefined1 *)(__s + 0x7a) = 0;
  __s[0x7b] = 0;
  __s[0x7c] = 0;
  *(undefined1 *)(__s + 0x7d) = 0;
  *(undefined2 *)((long)__s + 0x3f4) = 0;
  __s[0x7f] = 0;
  __s[0x80] = 0;
  __s[0x81] = 0;
  __s[0x82] = 0;
  *(undefined4 *)(__s + 3) = 0x100420;
  __s[1] = param_1;
  __s[2] = __s;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return __s;
}


