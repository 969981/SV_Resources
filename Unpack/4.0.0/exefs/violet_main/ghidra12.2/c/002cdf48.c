/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cdf48; name: FUN_002cdf48
 */


void FUN_002cdf48(long *param_1)

{
  undefined *puVar1;
  ostream *this;
  
  this = (ostream *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_DAT_047cc898 + 0x40;
  *(undefined **)this = PTR_DAT_047cc898 + 0x18;
  *(undefined **)(this + 0x70) = puVar1;
  *(undefined **)(this + 8) = PTR_DAT_047cc8a0 + 0x10;
  if (((byte)this[0x48] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(this + 0x58));
  }
  std::streambuf::~streambuf((streambuf *)(this + 8));
  std::ostream::~ostream(this);
  std::ios::~ios((ios *)(this + 0x70));
  return;
}


