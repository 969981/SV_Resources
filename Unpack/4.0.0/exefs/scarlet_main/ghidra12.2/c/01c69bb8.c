/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c69bb8; name: FUN_01c69bb8
 */


undefined1  [16] FUN_01c69bb8(uint param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_048398e8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048398e8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048398e8);
    }
  }
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    if (param_1 < 4) {
      lVar3 = DAT_048398d8 + (ulong)param_1 * 0xb;
      uVar2 = *(ulong *)(lVar3 + 0xd8);
      uVar4 = uVar2 & 0xff;
      uVar2 = uVar2 & 0xffffffffffffff00;
      uVar5 = *(uint3 *)(lVar3 + 0xe0) | 0x1000000;
    }
    else {
      uVar2 = 0;
      uVar4 = 0;
      uVar5 = 0;
    }
    uVar6 = uVar5 & 0x1000000;
    uVar5 = uVar5 & 0xffffff;
  }
  auVar7._0_8_ = uVar4 | uVar2;
  auVar7._8_4_ = uVar6 | uVar5;
  auVar7._12_4_ = 0;
  return auVar7;
}


