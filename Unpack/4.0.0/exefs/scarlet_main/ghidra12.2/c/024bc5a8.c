/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024bc5a8; name: FUN_024bc5a8
 */


void FUN_024bc5a8(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long local_60 [3];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_045bcaf0;
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  FUN_024aaf54(param_1 + 2,lVar3);
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  FUN_024aaf54(param_1 + 5,lVar3);
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  FUN_024aaf54(param_1 + 8,lVar3);
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  FUN_024aafd8(param_1 + 0xb,lVar3);
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  FUN_024aafd8(param_1 + 0xe,lVar3);
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
    if (lVar3 == 0) {
      lVar3 = FUN_024a7940();
      local_60[0] = *(long *)(lVar1 + 0x30);
      goto LAB_024bc6bc;
    }
  }
  local_60[0] = lVar3;
LAB_024bc6bc:
  param_1[0x16] = lVar3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (local_60[0] == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    local_60[0] = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  local_48 = 0;
  local_60[1] = 0x1fffffffffffffff;
  local_60[2] = 0;
  FUN_024ab060(&local_40,local_60);
  param_1[0x1a] = local_40;
  param_1[0x1b] = local_38;
  local_40 = 0;
  local_38 = 0;
  FUN_024ab104(&local_40);
  FUN_024bcd44(param_1 + 0x16);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x12] = 0;
  return;
}


