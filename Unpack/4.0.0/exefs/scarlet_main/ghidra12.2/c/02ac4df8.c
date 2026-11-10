/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ac4df8; name: FUN_02ac4df8
 */


void FUN_02ac4df8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047db998 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar2 = tpidr_el0;
    lVar4 = *(long *)(lVar2 + 0x30);
    if (lVar4 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar4 = DAT_04859430;
      *(long *)(lVar2 + 0x30) = DAT_04859430;
    }
  }
  param_1[4] = lVar4;
  param_1[5] = 0xfffffffffffffff;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xb) = 6;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  *param_1 = (long)&PTR_LAB_0457e628;
  param_1[8] = 0;
  param_1[9] = -1;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  return;
}


