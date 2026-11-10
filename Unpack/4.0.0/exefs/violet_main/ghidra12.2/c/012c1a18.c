/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c1a18; name: thunk_FUN_012c1a1c
 */


undefined8 thunk_FUN_012c1a1c(void)

{
  int iVar1;
  
  if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  DAT_04859330 = (**(code **)(*DAT_04859430 + 0x10))(DAT_04859430,0x30000,0x20);
  thunk_FUN_0011f550(&LAB_02baa184,&LAB_02baa190);
  FUN_012c1b90(PTR_LAB_047e0b18,0);
  thunk_FUN_0011f550(0,0);
  return 1;
}


