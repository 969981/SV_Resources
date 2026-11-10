/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03292f40; name: FUN_03292f40
 */


undefined8 FUN_03292f40(void)

{
  undefined8 uVar1;
  
  if (DAT_0488adc0 == (code *)0x0) {
    DAT_0488adc0 = FUN_03292c80;
    FUN_03341b00(&DAT_0488adb8);
    uVar1 = 0;
    DAT_0488adb8 = *(ulong *)PTR_DAT_047e61c0 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047e61c0 = &DAT_0488adb8;
  }
  else {
    uVar1 = 0x80040200;
  }
  return uVar1;
}


