/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b8a120; name: FUN_00b8a120
 */


void FUN_00b8a120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 char *param_5)

{
  int iVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong local_78;
  size_t local_70;
  void *local_68;
  
  __n = strlen(param_5);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    pvVar5 = (void *)((ulong)&local_78 | 1);
    if (__n == 0) goto LAB_00b8a194;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    lVar3 = tpidr_el0;
    plVar4 = *(long **)(lVar3 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar2,8);
    local_78 = uVar2 | 1;
    local_70 = __n;
    local_68 = pvVar5;
  }
  memcpy(pvVar5,param_5,__n);
LAB_00b8a194:
  *(undefined1 *)((long)pvVar5 + __n) = 0;
  FUN_00b89f94(param_1,param_2,param_3,param_4,&local_78);
  pvVar5 = local_68;
  if (((local_78 & 1) != 0) && (local_68 != (void *)0x0)) {
    lVar3 = tpidr_el0;
    plVar4 = *(long **)(lVar3 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar2 & 1) != 0) && (lVar3 = FUN_00c4e600(), 0 < *(int *)(lVar3 + 0x12c8))) {
      FUN_00c48fe8(plVar4,pvVar5,0,8);
      return;
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,pvVar5,0,8);
  }
  return;
}


