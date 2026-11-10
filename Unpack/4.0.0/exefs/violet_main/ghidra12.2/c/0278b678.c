/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278b678; name: FUN_0278b678
 */


void FUN_0278b678(UserHandle *param_1)

{
  code *pcVar1;
  int iVar2;
  uint local_4;
  
  iVar2 = nn::account::ShowLicenseRequirementsForNetworkService(param_1);
  if (DAT_0485eab0 != (code *)0x0) {
    local_4 = (uint)(iVar2 != 0);
    (*DAT_0485eab0)(&DAT_0485ead0,&local_4);
    pcVar1 = DAT_0485eab8;
    if (DAT_0485eab8 != (code *)0x0) {
      DAT_0485eac0 = 0;
      DAT_0485eac8 = 0;
      DAT_0485eab0 = (code *)0x0;
      DAT_0485eab8 = (code *)0x0;
      (*pcVar1)(&DAT_0485ead0);
    }
  }
  return;
}


