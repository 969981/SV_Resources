/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01264110; name: FUN_01264110
 */


void FUN_01264110(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = 0x6639a852284eb956;
  pcStack_58 = "CLODEntity";
  local_50 = 10;
  local_48 = (long *)0x0;
  FUN_00df6fe0(param_1,&local_60,param_2,0,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *param_1 = &DAT_045a2ed8;
  param_1[0xfe] = 0;
  param_1[4] = &PTR_LAB_045a3028;
  param_1[5] = &DAT_045a3078;
  param_1[0x1f] = &PTR_LAB_045a30d0;
  param_1[0xa8] = &PTR_LAB_045a3140;
  param_1[0xa9] = &PTR_LAB_045a3190;
  *(undefined2 *)(param_1 + 0xff) = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  FUN_01264550(param_1 + 0x102);
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  lVar1 = tpidr_el0;
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
      (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) &&
     (lVar3 = *(long *)(lVar1 + 0x30), lVar3 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  param_1[0x10c] = lVar3;
  param_1[0x10e] = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  param_1[0x10d] = 0xfffffffffffffff;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
      (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) &&
     (lVar3 = *(long *)(lVar1 + 0x30), lVar3 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  param_1[0x113] = lVar3;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x116) = 0;
  param_1[0x114] = 0x666666666666666;
  FUN_0126468c(param_1 + 0x117);
  param_1[0x120] = 0;
  param_1[0x11f] = 0;
  param_1[0x11e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
      (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) &&
     (lVar3 = *(long *)(lVar1 + 0x30), lVar3 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  param_1[0x121] = lVar3;
  param_1[0x122] = 0x222222222222222;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0xe5) = 1;
  FUN_00e5ad48(param_1);
  return;
}


