/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0331d618; name: FUN_0331d618
 */


undefined8 FUN_0331d618(void)

{
  undefined8 uVar1;
  
  if (DAT_0488d078 == (code *)0x0) {
    DAT_0488d078 = FUN_0331d5b0;
    FUN_03341b00(&DAT_0488d070);
    uVar1 = 0;
    DAT_0488d070 = *(ulong *)PTR_DAT_047e61c0 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047e61c0 = &DAT_0488d070;
  }
  else {
    uVar1 = 0x80040200;
  }
  return uVar1;
}


