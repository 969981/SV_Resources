/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6aca0; name: FUN_01c6aca0
 */


void FUN_01c6aca0(int param_1)

{
  int iVar1;
  
  if ((DAT_048398e8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048398e8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048398e8);
    }
  }
  DAT_048398d0 = DAT_048398d8;
  if ((DAT_048398d8 == 0) || (*(int *)(DAT_048398d8 + 0x178) != param_1)) {
    return;
  }
  FUN_01eafdb0(DAT_048398d8 + 0x178,1);
  return;
}


