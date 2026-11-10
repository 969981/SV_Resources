/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079651c; name: FUN_0079651c
 */


ulong FUN_0079651c(long param_1)

{
  ulong uVar1;
  
  uVar1 = nn::err::ErrorResultVariant::operator_cast_to_ErrorCode
                    ((ErrorResultVariant *)(param_1 + 4));
  return uVar1 >> 0x20;
}


