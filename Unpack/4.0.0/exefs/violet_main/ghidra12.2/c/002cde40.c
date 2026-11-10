/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cde40; name: FUN_002cde40
 */


void FUN_002cde40(ostream *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cc898 + 0x40;
  *(undefined **)param_1 = PTR_DAT_047cc898 + 0x18;
  *(undefined **)(param_1 + 0x70) = puVar1;
  *(undefined **)(param_1 + 8) = PTR_DAT_047cc8a0 + 0x10;
  if (((byte)param_1[0x48] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x58));
  }
  std::streambuf::~streambuf((streambuf *)(param_1 + 8));
  std::ostream::~ostream(param_1);
  std::ios::~ios((ios *)(param_1 + 0x70));
  return;
}


