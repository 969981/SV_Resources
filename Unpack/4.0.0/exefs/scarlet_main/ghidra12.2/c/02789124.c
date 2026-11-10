/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02789124; name: FUN_02789124
 */


void FUN_02789124(char *param_1)

{
  uint uVar1;
  
  nn::nifm::SubmitNetworkRequestAndWait();
  uVar1 = nn::nifm::IsNetworkAvailable();
  if ((((uVar1 & 1) == 0) && (*param_1 != '\0')) &&
     (uVar1 = nn::nifm::HandleNetworkRequestErrorResult(), (uVar1 & 1) != 0)) {
    nn::nifm::SubmitNetworkRequestAndWait();
    return;
  }
  return;
}


