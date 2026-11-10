/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb59d0; name: FUN_00fb59d0
 */


void FUN_00fb59d0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x35) = 0;
  std::streambuf::streambuf((streambuf *)(param_1 + 0xc));
  param_1[0xc] = &DAT_045469a8;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x18;
  *(undefined1 *)(param_1 + 0x17) = 0;
  if (param_2 == (char *)0x0) {
    return;
  }
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    pvVar5 = (void *)((ulong)&local_58 | 1);
    if (__n == 0) goto LAB_00fb5a80;
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
    local_58 = uVar2 | 1;
    local_50 = __n;
    local_48 = pvVar5;
  }
  memcpy(pvVar5,param_2,__n);
LAB_00fb5a80:
  *(undefined1 *)((long)pvVar5 + __n) = 0;
  FUN_00fb6548(param_1,&local_58);
  pvVar5 = local_48;
  if (((local_58 & 1) != 0) && (local_48 != (void *)0x0)) {
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


