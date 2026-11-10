/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089425c; name: FUN_0089425c
 */


undefined8 FUN_0089425c(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  return *(undefined8 *)
          (*(long *)(*(long *)(lVar1 + 0x20) + (long)param_2 * 0x40 +
                    *(long *)(PTR_DAT_047d1f00 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68);
}


