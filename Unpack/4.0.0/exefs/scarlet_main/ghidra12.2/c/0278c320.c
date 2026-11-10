/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278c320; name: FUN_0278c320
 */


void FUN_0278c320(int *param_1)

{
  int local_40 [4];
  ErrorResultVariant aEStack_30 [16];
  
  if (*param_1 != 0) {
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30);
    FUN_0278c628(local_40,param_1,aEStack_30);
    if (local_40[0] == 0) {
      nn::err::ShowError(aEStack_30);
    }
  }
  return;
}


