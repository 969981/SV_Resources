/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b8050c; name: FUN_00b8050c
 */


void FUN_00b8050c(long param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  string *this;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  string *psVar6;
  ulong local_68;
  size_t local_60;
  void *local_58;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800;
  psVar6 = *(string **)PTR_DAT_047dabb0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    pvVar5 = (void *)((ulong)&local_68 | 1);
    if (__n == 0) goto LAB_00b8058c;
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
    local_68 = uVar2 | 1;
    local_60 = __n;
    local_58 = pvVar5;
  }
  memcpy(pvVar5,param_2,__n);
LAB_00b8058c:
  *(undefined1 *)((long)pvVar5 + __n) = 0;
  this = *(string **)(param_1 + 0xd0);
  if (this == psVar6) {
    FUN_00b6eb88((undefined8 *)(param_1 + 0xd0));
  }
  else {
    std::string::operator=(this,(string *)&local_68);
  }
  pvVar5 = local_58;
  if (((local_68 & 1) != 0) && (local_58 != (void *)0x0)) {
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


