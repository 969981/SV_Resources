/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015b5c84; name: FUN_015b5c84
 */


void FUN_015b5c84(uint param_1)

{
  int iVar1;
  
  if ((DAT_0483b1e0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483b1e0);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02a42184,&DAT_0483b1d0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483b1e0);
    }
  }
  DAT_0483b1e8 = DAT_0483b1d0;
  FUN_015b5d14(DAT_0483b1d0,param_1 & 1);
  return;
}


