/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02788aa0; name: FUN_02788aa0
 */


void FUN_02788aa0(undefined1 *param_1,ulong param_2)

{
  AsyncContext *pAVar1;
  AsyncContext *pAVar2;
  int iVar3;
  AsyncContext *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_0485dce8 == (AsyncContext *)0x0) || (FUN_02788bf0(&local_50), (char)local_50 != '\0')) {
    if ((param_2 & 1) == 0) {
      local_50 = (AsyncContext *)((ulong)local_50 & 0xffffffffffffff00);
      nn::account::IsNetworkServiceAccountAvailable((bool *)&local_50,(UserHandle *)&DAT_0485dd10);
      if ((char)local_50 == '\0') goto LAB_02788bdc;
    }
    iVar3 = nn::account::EnsureNetworkServiceAccountAvailable((UserHandle *)&DAT_0485dd10);
    if (iVar3 == 0) {
      FUN_02788c50(&local_50,DAT_0485dd08);
      pAVar2 = local_50;
      pAVar1 = DAT_0485dce8;
      local_50 = (AsyncContext *)0x0;
      DAT_0485dce8 = pAVar2;
      if (pAVar1 == (AsyncContext *)0x0) {
        DAT_0485dcf0 = local_48;
        DAT_0485dcf8 = local_40;
        DAT_0485dd00 = local_38;
        local_50 = (AsyncContext *)0x0;
      }
      else {
        FUN_02788994(&DAT_0485dcf0);
        pAVar1 = local_50;
        local_50 = (AsyncContext *)0x0;
        DAT_0485dd00 = local_38;
        DAT_0485dcf0 = local_48;
        DAT_0485dcf8 = local_40;
        if (pAVar1 != (AsyncContext *)0x0) {
          FUN_02788994(&local_48);
        }
      }
      if (DAT_0485dce8 == (AsyncContext *)0x0) goto LAB_02788bdc;
      iVar3 = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync
                        (DAT_0485dce8,(UserHandle *)&DAT_0485dd10);
      pAVar1 = DAT_0485dce8;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        DAT_0485dce8 = (AsyncContext *)0x0;
        if (pAVar1 != (AsyncContext *)0x0) {
          FUN_02788994(&DAT_0485dcf0);
        }
        *(int *)(param_1 + 4) = iVar3;
      }
    }
    else {
      *(int *)(param_1 + 4) = iVar3;
    }
    *param_1 = 1;
  }
  else {
LAB_02788bdc:
    *param_1 = 0;
  }
  return;
}


