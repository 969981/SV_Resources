/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6ae3c; name: FUN_01c6ae3c
 */


void FUN_01c6ae3c(undefined4 param_1,undefined8 param_2)

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
  if (DAT_048398d8 == 0) {
    return;
  }
  FUN_01eafdbc(DAT_048398d8,param_1,param_2);
  return;
}


