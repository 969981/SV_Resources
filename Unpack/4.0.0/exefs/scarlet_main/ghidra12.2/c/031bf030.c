/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bf030; name: FUN_031bf030
 */


long FUN_031bf030(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long local_28;
  long local_8;
  
  uVar3 = nn::time::IsInitialized();
  if ((uVar3 & 1) == 0) {
    nn::time::Initialize();
  }
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_8);
  iVar2 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_28);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      if (local_8 <= local_28) {
        local_8 = local_28;
      }
    }
  }
  else {
    local_8 = local_28;
  }
  return local_8;
}


