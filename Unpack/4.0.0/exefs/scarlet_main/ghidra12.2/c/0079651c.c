/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079651c; name: FUN_0079651c
 */


ulong FUN_0079651c(long param_1)

{
  ulong uVar1;
  
  uVar1 = nn::err::ErrorResultVariant::operator_cast_to_ErrorCode
                    ((ErrorResultVariant *)(param_1 + 4));
  return uVar1 >> 0x20;
}


