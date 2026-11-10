/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6b338; name: FUN_01c6b338
 */


void FUN_01c6b338(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048398e8), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  lVar1 = DAT_048398d8;
  DAT_048398d0 = DAT_048398d8;
  if ((((DAT_048398d8 != 0) && (*(long *)(DAT_048398d8 + 0x38) != 0)) &&
      (lVar4 = *(long *)(*(long *)(DAT_048398d8 + 0x38) + 0x10), lVar4 != 0)) &&
     (uVar3 = FUN_00ea2b08(lVar4 + -0x28), (uVar3 & 1) != 0)) {
    *(undefined1 *)(lVar1 + 0xbe8) = 1;
  }
  return;
}


