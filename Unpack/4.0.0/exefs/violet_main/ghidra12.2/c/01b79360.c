/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b79360; name: FUN_01b79360
 */


void FUN_01b79360(uint param_1)

{
  if (0x62 < param_1) {
    param_1 = 99;
  }
  *(char *)(DAT_04840ac0 + 0x78) = (char)param_1;
  return;
}


