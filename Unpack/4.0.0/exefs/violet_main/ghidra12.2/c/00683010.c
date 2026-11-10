/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00683010; name: FUN_00683010
 */


void FUN_00683010(undefined8 param_1,undefined8 param_2)

{
  int local_8 [2];
  
  local_8[0] = nn::ssl::Context::Create(param_2,0x2000001);
  if (local_8[0] != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_8,"");
  }
  return;
}


