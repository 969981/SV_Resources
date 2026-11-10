/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


