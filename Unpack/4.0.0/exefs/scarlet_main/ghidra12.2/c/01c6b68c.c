/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6b68c; name: FUN_01c6b68c
 */


undefined1  [16] FUN_01c6b68c(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if (((DAT_048398e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048398e8), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 == 0) {
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = (ulong)*(uint *)(DAT_048398d8 + 0xac8);
    uVar3 = (ulong)*(byte *)(DAT_048398d8 + 0xacc) << 0x20;
    uVar2 = *(ulong *)(DAT_048398d8 + 0xac0) & 0xffffffffffffff00;
    uVar4 = *(ulong *)(DAT_048398d8 + 0xac0) & 0xff;
  }
  auVar6._0_8_ = uVar4 | uVar2;
  auVar6._8_8_ = uVar3 | uVar5;
  return auVar6;
}


