/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


