/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


