/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c69540; name: FUN_01c69540
 */


undefined8 FUN_01c69540(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048398e8), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  DAT_048398d0 = DAT_048398d8;
  if (((DAT_048398d8 == 0) || (*(long *)(DAT_048398d8 + 0x50) == 0)) ||
     (lVar3 = *(long *)(*(long *)(DAT_048398d8 + 0x50) + 0x10), lVar3 == 0)) {
    return 0;
  }
  uVar2 = FUN_01e6b040(lVar3 + -0x28);
  return uVar2;
}


