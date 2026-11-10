/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a6968; name: FUN_015a6968
 */


void FUN_015a6968(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  lVar3 = tpidr_el0;
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar3 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = lVar2;
  param_1[9] = 0;
  param_1[4] = 0x7ffffffffffffff;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar3 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[10] = lVar2;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0xb] = 0x7ffffffffffffff;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar3 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2f] = lVar2;
  param_1[0x33] = 0;
  param_1[0x30] = 0x3ffffffffffffff;
  param_1[0x31] = 0;
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar3 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar3;
  param_1[0x33] = *(undefined8 *)(lVar3 + 0x70);
  return;
}


