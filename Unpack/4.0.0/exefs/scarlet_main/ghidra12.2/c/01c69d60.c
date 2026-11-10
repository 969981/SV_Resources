/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c69d60; name: FUN_01c69d60
 */


void FUN_01c69d60(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048398e8), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  lVar4 = DAT_048398d8;
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 != 0) {
    uVar3 = FUN_00e5f228(DAT_048398d8 + 0x38);
    lVar4 = lVar4 + (uVar3 & 0xff) * 0xb;
    uVar1 = *(undefined4 *)((long)param_1 + 7);
    *(undefined8 *)(lVar4 + 0xd8) = *param_1;
    *(undefined4 *)(lVar4 + 0xdf) = uVar1;
  }
  return;
}


