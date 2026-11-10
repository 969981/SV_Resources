/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a2faac; name: FUN_00a2faac
 */


void FUN_00a2faac(void)

{
  ulong uVar1;
  uint local_18 [2];
  
  nn::account::Initialize();
  uVar1 = nn::account::TryOpenPreselectedUser((UserHandle *)&DAT_048351e0);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("nn::account::TryOpenPreselectedUser(&userHandle)","InitializeAndOpenUser",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/main_app/application_account.cpp"
               ,0x1b);
  }
  local_18[0] = nn::account::GetUserId((Uid *)&DAT_048351f8,(UserHandle *)&DAT_048351e0);
  if (local_18[0] != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("nn::Result::IsSuccess()","InitializeAndOpenUser",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/main_app/application_account.cpp"
               ,0x1c,(Result *)local_18,
               "Failed: %s\n  Module: %d\n  Description: %d\n  InnerValue: 0x%08x",
               "nn::account::GetUserId(&uid, userHandle)",(ulong)(local_18[0] & 0x1ff),
               local_18[0] >> 9 & 0x1fff,local_18[0] & 0x3fffff);
  }
  return;
}


