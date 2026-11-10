/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017dda64; name: FUN_017dda64
 */


void FUN_017dda64(void)

{
  int iVar1;
  
  if (((DAT_0483adb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483adb8), iVar1 != 0)) {
    FUN_00100190(&LAB_02a27c80,&DAT_0483ada8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483adb8);
    return;
  }
  return;
}


