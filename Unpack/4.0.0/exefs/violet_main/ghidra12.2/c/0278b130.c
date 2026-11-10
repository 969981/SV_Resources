/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278b130; name: FUN_0278b130
 */


ulong FUN_0278b130(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (((DAT_0485eb30 == '\0') || (uVar2 = FUN_0278b090(), (uVar2 & 1) == 0)) ||
     (iVar1 = nn::account::AsyncContext::GetResult(), iVar1 != 0)) {
LAB_0278b15c:
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    iVar1 = nn::account::AsyncNetworkServiceLicenseInfoContext::GetNetworkServiceLicenseKind();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (iVar1 != 1) goto LAB_0278b15c;
      uVar2 = 0x100000000;
    }
    uVar3 = 1;
  }
  return uVar2 | uVar3;
}


