/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f9a284; name: FUN_00f9a284
 */


undefined8 FUN_00f9a284(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  return *(undefined8 *)
          (*(long *)(lVar1 + 0x20) + (long)param_2 * 0x40 + (&DAT_045d2f68)[*(byte *)(lVar1 + 0x14)]
          );
}


