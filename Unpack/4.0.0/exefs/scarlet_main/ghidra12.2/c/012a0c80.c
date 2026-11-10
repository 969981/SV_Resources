/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a0c80; name: FUN_012a0c80
 */


void FUN_012a0c80(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  FUN_00d1a240(param_1,0x80028180);
  *(undefined4 *)(param_1 + 0x26) = 0;
  *param_1 = &PTR_FUN_04568790;
  param_1[4] = &PTR_LAB_045688d8;
  param_1[5] = &DAT_04568a00;
  param_1[6] = &PTR_LAB_04568a58;
  param_1[7] = &PTR_LAB_04568a80;
  *(undefined2 *)(param_1 + 0x28) = 0x100;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x38] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)((long)param_1 + 0x142) = 0;
  memset(param_1 + 0x2b,0,0x50);
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
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x39] = lVar3;
  param_1[0x3a] = 0x1fffffffffffffff;
  param_1[0x3b] = 0;
  memset(param_1 + 0x3d,0,0x50);
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x47) = 0x13;
  param_1[0x4a] = 0x101;
  param_1[0x4e] = 0x3f8000003f800000;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  return;
}


