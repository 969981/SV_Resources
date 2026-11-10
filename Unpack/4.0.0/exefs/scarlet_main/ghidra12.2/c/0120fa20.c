/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0120fa20; name: FUN_0120fa20
 */


void FUN_0120fa20(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00d1a240(param_1,0x80008080);
  *param_1 = (long)&PTR_LAB_045a67f0;
  param_1[4] = (long)&PTR_LAB_045a6940;
  param_1[5] = (long)&DAT_045a6a68;
  param_1[6] = (long)&PTR_LAB_045a6ac0;
  plVar4 = param_1 + 7;
  *plVar4 = (long)&PTR_LAB_045a6ae8;
  *(undefined1 *)(param_1 + 0x25) = 1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
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
  }
  param_1[0x29] = lVar3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2a] = 0x492492492492492;
  param_1[0x2b] = 0;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  if (((char)param_1[0xb] == '\0') && (*(char *)((long)param_1 + 0x59) == '\0')) {
    return;
  }
  lVar3 = param_1[0xb];
  *(undefined2 *)(param_1 + 0xb) = 0;
  if (param_1[9] != 0) {
    FUN_00c6a584(param_1[9],plVar4);
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,(short)lVar3);
  return;
}


