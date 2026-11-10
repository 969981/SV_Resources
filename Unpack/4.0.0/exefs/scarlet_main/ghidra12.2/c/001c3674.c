/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c3674; name: ~stringstream
 */


/* std::stringstream::~stringstream() */

void __thiscall std::stringstream::~stringstream(stringstream *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_047cb938;
  *(undefined **)this = PTR_vtable_047cb938 + 0x18;
  *(undefined **)(this + 0x80) = puVar1 + 0x68;
  puVar2 = PTR_vtable_047cb940;
  *(undefined **)(this + 0x10) = puVar1 + 0x40;
  *(undefined **)(this + 0x18) = puVar2 + 0x10;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  std::streambuf::~streambuf((streambuf *)(this + 0x18));
  std::iostream::~iostream((iostream *)this);
  std::ios::~ios((ios *)(this + 0x80));
  return;
}


