/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278b400; name: FUN_0278b400
 */


void FUN_0278b400(undefined1 *param_1)

{
  int iVar1;
  ulong uStack_28;
  
  if (DAT_0485dce8 == 0) {
    *param_1 = 0;
    return;
  }
  iVar1 = nn::account::AsyncContext::GetResult();
  if (iVar1 == 0) {
    memset(&DAT_0485dd38,0,0xc00);
    DAT_0485e938 = 0;
    iVar1 = nn::account::LoadNetworkServiceAccountIdTokenCache
                      (&uStack_28,&DAT_0485dd38,0xc00,(UserHandle *)&DAT_0485dd10);
    if (iVar1 == 0) {
      iVar1 = nn::account::GetNetworkServiceAccountId
                        ((NetworkServiceAccountId *)&DAT_0485e938,(UserHandle *)&DAT_0485dd10);
      *param_1 = 0;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 4) = 0;
        goto LAB_0278b42c;
      }
    }
  }
  *(int *)(param_1 + 4) = iVar1;
LAB_0278b42c:
  *param_1 = 1;
  return;
}


