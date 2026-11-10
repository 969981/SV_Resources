/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e04d40; name: FUN_01e04d40
 */


void FUN_01e04d40(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_04839b28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839b28);
    if (iVar1 != 0) {
      FUN_00100190(param_1,&LAB_00b1e40c,&DAT_04839b18,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839b28);
    }
  }
  DAT_04839b10 = DAT_04839b18;
  if (DAT_04839b18 == 0) {
    return;
  }
  FUN_01eba324(param_1,DAT_04839b18,param_2,param_3);
  return;
}


