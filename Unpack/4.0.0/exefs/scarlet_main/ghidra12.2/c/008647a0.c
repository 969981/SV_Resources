/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008647a0; name: thunk_FUN_031bf030
 */


long thunk_FUN_031bf030(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lStack_28;
  long lStack_8;
  
  uVar3 = nn::time::IsInitialized();
  if ((uVar3 & 1) == 0) {
    nn::time::Initialize();
  }
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&lStack_8);
  iVar2 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&lStack_28);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      if (lStack_8 <= lStack_28) {
        lStack_8 = lStack_28;
      }
    }
  }
  else {
    lStack_8 = lStack_28;
  }
  return lStack_8;
}


