/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01097eb4; name: FUN_01097eb4
 */


void FUN_01097eb4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_04545dc8;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_04545e00;
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 1;
  nn::os::InitializeLightEvent(param_1 + 7,0,1);
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 1;
  nn::os::InitializeLightEvent(param_1 + 10,0,1);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  lVar3 = tpidr_el0;
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  param_1[0xf] = lVar4;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0xffffffffffffff;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x14,0,1);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = lVar4;
  param_1[0x1a] = 0x1fffffffffffffff;
  param_1[0x1b] = 0;
  FUN_0109822c(param_1 + 0x1d);
  memset(param_1 + 0x33,0,0x80);
  return;
}


