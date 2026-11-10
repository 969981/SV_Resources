/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278b610; name: FUN_0278b610
 */


void FUN_0278b610(AsyncNetworkServiceLicenseInfoContext *param_1)

{
  if (DAT_0485eb30 == '\0') {
    nn::account::AsyncNetworkServiceLicenseInfoContext::AsyncNetworkServiceLicenseInfoContext
              ((AsyncNetworkServiceLicenseInfoContext *)&DAT_0485eb38,param_1);
    DAT_0485eb30 = '\x01';
  }
  else {
    nn::account::AsyncNetworkServiceLicenseInfoContext::operator=
              ((AsyncNetworkServiceLicenseInfoContext *)&DAT_0485eb38,param_1);
  }
  return;
}


