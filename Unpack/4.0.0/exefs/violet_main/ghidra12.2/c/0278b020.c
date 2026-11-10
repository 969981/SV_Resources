/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278b020; name: FUN_0278b020
 */


int FUN_0278b020(UserHandle *param_1)

{
  int iVar1;
  AsyncNetworkServiceLicenseInfoContext aAStack_40 [32];
  
  nn::account::AsyncNetworkServiceLicenseInfoContext::AsyncNetworkServiceLicenseInfoContext
            (aAStack_40);
  FUN_0278b610(aAStack_40);
  nn::account::AsyncContext::~AsyncContext((AsyncContext *)aAStack_40);
  iVar1 = nn::account::LoadNetworkServiceLicenseInfoAsync
                    ((AsyncNetworkServiceLicenseInfoContext *)&DAT_0485eb38,param_1);
  if ((iVar1 != 0) && (DAT_0485eb30 != '\0')) {
    nn::account::AsyncContext::~AsyncContext((AsyncContext *)&DAT_0485eb38);
    DAT_0485eb30 = '\0';
  }
  return iVar1;
}


