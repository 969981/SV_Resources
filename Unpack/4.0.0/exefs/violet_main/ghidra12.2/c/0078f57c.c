/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078f57c; name: FUN_0078f57c
 */


void FUN_0078f57c(long param_1)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_018ff39c(param_1 + 0x54,local_28);
  return;
}


