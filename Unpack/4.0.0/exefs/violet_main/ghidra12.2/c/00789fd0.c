/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00789fd0; name: FUN_00789fd0
 */


void FUN_00789fd0(void)

{
  if (*PTR_DAT_047d0888 == '\0') {
    return;
  }
  *PTR_DAT_047d0888 = 0;
  FUN_007cab30(*(undefined8 *)PTR_DAT_047d08a0);
  FUN_007ca5b4();
  FUN_007c3c60();
  return;
}


