/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b3d2c; name: FUN_019b3d2c
 */


void FUN_019b3d2c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  FUN_019b3e6c();
  *param_1 = &DAT_045ce7c8;
  param_1[4] = &PTR_LAB_045ce868;
  param_1[5] = &DAT_045ce8b8;
  param_1[8] = &PTR_LAB_045ce910;
  puVar5 = param_1 + 9;
  *puVar5 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_01060ed0();
  }
  param_1[0xd] = 0x1fffffffffffffff;
  param_1[0xe] = 0;
  lVar4 = param_1[10] - param_1[9];
  uVar3 = lVar4 >> 3;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xc] = lVar2;
  if (uVar3 < 5) {
    FUN_011b3b50(puVar5,5 - uVar3);
    return;
  }
  if (lVar4 == 0x28) {
    return;
  }
  FUN_019d0c70(puVar5,param_1[9] + 0x28);
  return;
}


