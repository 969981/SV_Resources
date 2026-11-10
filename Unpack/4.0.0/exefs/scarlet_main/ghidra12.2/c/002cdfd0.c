/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cdfd0; name: FUN_002cdfd0
 */


void FUN_002cdfd0(long *param_1)

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
  operator_delete(this);
  return;
}


