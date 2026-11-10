/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0330d030; name: FUN_0330d030
 */


undefined8 FUN_0330d030(void)

{
  undefined8 uVar1;
  
  if (DAT_0488c808 == (code *)0x0) {
    DAT_0488c808 = FUN_0330c3e0;
    FUN_03341b00(&DAT_0488c800);
    uVar1 = 0;
    DAT_0488c800 = *(ulong *)PTR_DAT_047e61c0 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047e61c0 = &DAT_0488c800;
  }
  else {
    uVar1 = 0x80040200;
  }
  return uVar1;
}


