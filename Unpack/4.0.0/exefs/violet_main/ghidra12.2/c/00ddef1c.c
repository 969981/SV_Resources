/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ddef1c; name: FUN_00ddef1c
 */


undefined8 FUN_00ddef1c(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = nn::util::BinaryFileHeader::IsRelocated();
  if ((uVar1 & 1) == 0) {
    nn::util::BinaryFileHeader::GetRelocationTable();
    nn::util::RelocationTable::Relocate();
  }
  return param_1;
}


