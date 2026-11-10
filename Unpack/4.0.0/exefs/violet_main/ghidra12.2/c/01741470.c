/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01741470; name: FUN_01741470
 */


void FUN_01741470(void)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = FUN_0126a9c0();
  if (((DAT_04839838 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839838), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1bcec,&DAT_04839828,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839838);
  }
  DAT_04839820 = DAT_04839828;
  if (DAT_04839828 == 0) {
    FUN_01741504(local_18,&local_18,&DAT_03d5b8ac);
  }
  return;
}


