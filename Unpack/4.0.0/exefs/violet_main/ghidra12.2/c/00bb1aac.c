/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb1aac; name: underflow
 */


/* std::stringbuf::underflow() */

ulong __thiscall std::stringbuf::underflow(stringbuf *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(this + 0x30);
  pbVar1 = *(byte **)(this + 0x58);
  if (*(byte **)(this + 0x58) < pbVar2) {
    *(byte **)(this + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if (((byte)this[0x60] >> 3 & 1) != 0) {
    pbVar2 = *(byte **)(this + 0x20);
    if (*(byte **)(this + 0x20) < pbVar1) {
      *(byte **)(this + 0x20) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(this + 0x18) < pbVar2) {
      return (ulong)**(byte **)(this + 0x18);
    }
  }
  return 0xffffffff;
}


