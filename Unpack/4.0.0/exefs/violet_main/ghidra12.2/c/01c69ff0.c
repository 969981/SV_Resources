/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c69ff0; name: FUN_01c69ff0
 */


undefined1  [16] FUN_01c69ff0(uint param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_048398e8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048398e8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048398e8);
    }
  }
  uVar2 = 0;
  DAT_048398d0 = DAT_048398d8;
  if ((param_1 < 4) && (DAT_048398d8 != 0)) {
    uVar2 = *(ulong *)(DAT_048398d8 + (ulong)param_1 * 0xc + 0x108);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


