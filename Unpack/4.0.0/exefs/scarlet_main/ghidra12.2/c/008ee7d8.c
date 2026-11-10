/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ee7d8; name: FUN_008ee7d8
 */


undefined8 FUN_008ee7d8(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = nn::util::BinaryFileHeader::IsRelocated();
  if ((uVar1 & 1) == 0) {
    nn::util::BinaryFileHeader::GetRelocationTable();
    nn::util::RelocationTable::Relocate();
  }
  nn::util::BinaryFileHeader::IsEndianReverse();
  return param_1;
}


