/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a15fc; name: FUN_019a15fc
 */


void FUN_019a15fc(undefined8 param_1)

{
  int iVar1;
  
  if ((DAT_04839790 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839790);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839790);
    }
  }
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 == 0) {
    return;
  }
  FUN_00f4189c(DAT_04839780,param_1);
  return;
}


