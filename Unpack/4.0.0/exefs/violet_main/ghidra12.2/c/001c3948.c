/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c3948; name: ~stringstream
 */


/* virtual thunk to std::stringstream::~stringstream() */

void __thiscall std::stringstream::~stringstream(stringstream *this)

{
  iostream *this_00;
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_047cb938;
  this_00 = (iostream *)(this + *(long *)(*(long *)this + -0x18));
  *(undefined **)this_00 = PTR_vtable_047cb938 + 0x18;
  *(undefined **)(this_00 + 0x80) = puVar1 + 0x68;
  puVar2 = PTR_vtable_047cb940;
  *(undefined **)(this_00 + 0x10) = puVar1 + 0x40;
  *(undefined **)(this_00 + 0x18) = puVar2 + 0x10;
  if (((byte)this_00[0x58] & 1) != 0) {
    operator_delete(*(void **)(this_00 + 0x68));
  }
  std::streambuf::~streambuf((streambuf *)(this_00 + 0x18));
  std::iostream::~iostream(this_00);
  std::ios::~ios((ios *)(this_00 + 0x80));
  operator_delete(this_00);
  return;
}


